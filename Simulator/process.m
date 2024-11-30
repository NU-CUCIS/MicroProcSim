% Load the newmesh.mat file for plotting the ODF in Rodrigues orientation space
load newmesh.mat

% Load the newmesh.mat file, which contains the 'volumefraction (q)' matrix
load FCC_volumefraction.mat 

% Specify the loading parameter load_p:
% For tension/compression in the x-direction, set load_p = 1
% For plain strain compression in the x-direction, set load_p = 2
% For shear in the xy-plane, set load_p = 3
% For shear in the xz-plane, set load_p = 4
% For shear in the yz-plane, set load_p = 5

load_p = 1;
param = zeros(1, 8);
strain_rate = 1;      % This may be changed depending upon the strain rate (/s)
param(1, load_p) = strain_rate; 

% Write the param file as mentioned on loading
T2 = table(param);
writetable(T2, 'param.txt', 'WriteVariableNames', 0, 'Delimiter', '\t'); % saving param file in the folder

% n_total is the total number of times the simulation is run. The initial ODF of each run is the final ODF of the previous run.
n_total = 2; 

% % Input randomly oriented microstructure ODFs for the first run
odf = (1/sum(volumefraction))*ones(145,1);
A = odf;

for runIdx = 1:n_total
    % Display the current run number
    fprintf('Run number: %d\n', runIdx);

    % Input ODFs for the current run
    odf = A(:, end);

    % Write the Input ODF file
    T1 = table(odf);
    writetable(T1, 'Input_ODF.txt', 'WriteVariableNames', 0); % saving as initial Input_ODF in the folder

    % Run the app.exe file
    system('app.exe');

    % Initialize matrix A to store the last column from each file
    A = zeros(145, 10); % Since we are taking 145 lines from 10 files

    % Loop over all 10 files
    for fileIdx = 1:10
        % Generate the file name, e.g., ODFField0001.out, ODFField0002.out, etc.
        fileName = sprintf('ODFField%04d.out', fileIdx);
        
        % Open the file for reading
        fileID = fopen(fileName, 'r');
        
        % Read the entire file into a cell array, one line per cell
        fileContent = textscan(fileID, '%s', 'Delimiter', '\n');
        fileContent = fileContent{1}; % Extract the content from the cell array
        
        % Close the file
        fclose(fileID);
        
        % Extract lines from 5 to 149 (these lines are stored in cell array 5:149)
        selectedLines = fileContent(5:149);
        
        % Loop through each of these lines to extract the last column
        for lineIdx = 1:length(selectedLines)
            % Split the line into individual columns based on whitespace
            columns = strsplit(selectedLines{lineIdx});
            
            % Convert the last column to a number and store in matrix A
            A(lineIdx, fileIdx) = str2double(columns{end});
        end
    end

% Initialize B with 76 rows and 10 columns
B = zeros(76, 10);

% The ODF position in Rodrigues orientation space for the software output and the newmesh.mat file is different, which is why a mapping is required to match them.
% Load the mapping from the 'mapping.txt' file
fileID = fopen('mapping.txt', 'r');
mappingData = textscan(fileID, 'B(%d) = A(%d)', 'Delimiter', '\n');
fclose(fileID);

% Extract the row indices for B and A from the mapping data
B_indices = mappingData{1};
A_indices = mappingData{2};

% Map the corresponding rows from A to B using the mapping
for i = 1:length(B_indices)
    B(B_indices(i), :) = A(A_indices(i), :);
end

%%%% Checking normalization constraint %%%%
% Initialize a cell array to store the results
T = cell(1, 10);

% Loop through each column of B and multiply by S
for i = 1:10
    Bi = B(:, i);     % Extract the i-th column of B (76x1 matrix)
    Ti = volumefraction * Bi;      % Multiply S (1x76) by Bi (76x1) resulting in Ti (1x1)
    T{i} = Ti;        % Store the result in cell array T
    B(:, i) = Ti^(-1)*B(:, i);  % Updating independent ODFs to ensure normalization constraint
    A(:, i) = Ti^(-1)*A(:, i);  % Updating all ODFs
    Bi = B(:, i);     % Extract the i-th column of B (76x1 matrix)
    Ti_updated = volumefraction * Bi;      % Multiply S (1x76) by Bi (76x1) resulting in Ti (1x1)
    T_updated{i} = Ti_updated;        % Store the result in cell array T
end

% Display old T results
for i = 1:10
    fprintf('T%d = %f\n', i, T{i});
end

% Display updated T results
for i = 1:10
    fprintf('T%d_updated = %f\n', i, T_updated{i});
end

%%%% Ploting the ODFs %%%% 
% Loop through each column of A
for i = 1:10
    Bi = B(:, i);  % Extract the ith column of A
fropts = {'Symmetries', 'cubic', 'ShowMesh', 'on'};
PlotFR(newmesh,Bi,fropts{:})
end

end

fprintf('\n A total of %d simulation(s) have been done.\n', n_total);
