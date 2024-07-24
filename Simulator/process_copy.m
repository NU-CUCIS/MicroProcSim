%This code works for multiple runs of a particular process sequence: this can be
%single or combined applied force. 'param' file is used in every run
% see the instruction in the help file if loading conditions vary in each
% run

clear all; clc;

load newmesh
load newgalfenoldata  % Loading cubic structure data

% Input ODFs for the first run

odf_samples = textread('Sample_ODF.txt'); % Replace this with your own samples - 76x1 vectors

volfrac = volumefraction*odf_samples;
odf_samples = odf_samples./volfrac; % Normalized to satisfy the voluma fraction constraint

% Input ODF: ODF (generating 145 odfs from 76 independent ODFs)
% This is an auto process : 145 ODFs are due to crystal symmetry

odf = zeros(145,1);
odf(1:76) = odf_samples;
odf(newmesh.eqv(1,:)) = odf(newmesh.eqv(2,:));

T1=table(odf);
writetable(T1,'Input_ODF.txt','WriteVariableNames',0); % saving as initial Input_ODF in the folder

% Defining Process Parameters

% param_tension=     1	0	0	0	0	0	0	0
% param_compression= 0	1	0	0	0	0	0	0
% param_xyshear=     0	0	1	0	0	0	0	0
% param_xzshear=     0	0	0	1	0	0	0	0
% param_yzshear=     0	0	0	0	1	0	0	0

% Non-zero value can be changed with any strain rate value

% For a combined load (e.g., tension and xy shear the param file will look
% like
%param_tension_xyshear= 1	0	1	0	0	0	0	0

% Similarly other load combinations can be created

% Let's do it for tension with strain rate 1

param=zeros(1,8);

for pa1=0:0.25:1
    for pa2=0:0.25:1
        for pa3=0:0.25:1
            for pa4=0:0.25:1
                for pa5=0:0.25:1
%                     strain_rate=1;      % This can be changed
%                     param(1,1)=strain_rate; % replace corresponding element for different loading
%                     
%                     T2=table(param);
%                     writetable(T2,'param.txt','WriteVariableNames',0,'Delimiter','\t') % saving param file in the folder

                    
                    param(1, 1)=pa1;
                    param(1, 2)=pa2;
                    param(1, 3)=pa3;
                    param(1, 4)=pa4;
                    param(1, 5)=pa5;
                    
                    n=1; % number of steps i.e., how many times we want to run the process
                    
                    odf_eachstep_total=zeros(145,10,n);      % Raw ODFs after all runs
                    odf_normalized_total_76=zeros(76,10,n);   % Normalized independent (76) ODFs after all runs
                    odf_normalized_total_145=zeros(145,10,n); % Normalized independent and dependent (145) ODFs after all runs
                    
                    
                    
                    for kk=1:1:n;
                        
                         system("/home/ymt1957/wine-dirs/wine64-build/wine /data/ymt1957/Simulator/app.exe"); % Command for process running
                        
                        odf_eachstep=zeros(145,10);
                        
                        % saving ODF outputs of first 9 steps of each run (extracting from .out)
                        
                        
                        for i=1:1:9;
                            
                            
                            fname=sprintf('ODFField000%d.out',i);
                            f = fopen(fname);
                            C = textscan(f, '%s','delimiter','\n');
                            odf_output=zeros(145,1);
                            
                            for j=1:1:145;
                                a=str2num(C{1, 1}{(4+j),1});
                                b=a(4);
                                if b<0
                                    b=0;
                                else
                                    b=b;
                                end
                                odf_output(j)=b;
                            end
                            odf_eachstep(:,i)=odf_output;
                        end
                        
                        % saving ODF output of the 10th steps of each run
                        
                   
                        f1 = fopen('ODFField0010.out');
                        C1 = textscan(f1, '%s','delimiter','\n');
                        
                        odf_output_10=zeros(145,1);
                        
                        for k=1:1:145;
                            a=str2num(C1{1, 1}{(4+k),1});
                            b=a(4);
                            if b<0
                                b=0;
                            else
                                b=b;
                            end
                            odf_output_10(k)=b;
                        end
                        
                        odf_eachstep(:,10)=odf_output_10;
                        
                        %Normalized Independent and Dependent ODFs
                        
                        odf_normalized_76=zeros(76,10);
                        odf_normalized_145=zeros(145,10);
                        
                        for m=1:1:10;
                            odf_76=odf_eachstep(1:76,m);
                            check=volumefraction*odf_76;
                            odf_76=odf_76./check;
                            odf_normalized_76(:,m)=odf_76;
                            odf_145=zeros(145,1);
                            odf_145(1:76)=odf_76;
                            odf_145(newmesh.eqv(1,:)) = odf_145(newmesh.eqv(2,:));
                            odf_normalized_145(:,m)=odf_145;
                        end
                        
%                         % Saving output (10th ODFs) of the this run as the Input of the next run
%                         
%                         T3=table(odf_normalized_145(:,10));
%                         writetable(T3,'Input_ODF.txt','WriteVariableNames',0); %It will overwrite the previous input ODFs
                        
                        % saving the output of each run
                        
                        odf_eachstep_total(:,:,kk)=odf_eachstep;
                        odf_normalized_total_76(:,:,kk)=odf_normalized_76;
                        odf_normalized_total_145(:,:,kk)=odf_normalized_145;
                    end
                    
                    %Saving Cauchy Stress after all runs. See help file for more instruction
                    
                    f2=fopen('stress-strain.out');
                    C2=textscan(f2, '%s','delimiter','\n');
                    len=((size(C2{1,1},1)-9)/8)+1;
                    
                    Cauchy=zeros(9,len);
                    
                    for n=1:1:len
                        a1=str2num(C2{1,1}{(8*n-4),1}(9:end));
                        a2=str2num(C2{1,1}{(8*n-3),1});
                        a3=str2num(C2{1,1}{(8*n-2),1});
                        
                        a_all=[a1;a2;a3];
                        a_all_converted=a_all(:);
                        
                        Cauchy(:,n)=a_all_converted;
                        
                    end
                    
                    path = [num2str(pa1),num2str(pa2),num2str(pa3),num2str(pa4),num2str(pa5), '.mat'];
                    save(path, 'odf_normalized_total_76', 'Cauchy')
                    
                end
            end
        end
    end
end



