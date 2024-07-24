# MicroProcSim
A physics-based simulation tool for replicating the deformation process of cubic microstructures across different operating systems.

Inputs: 1) Processing sequence (param files - explained below)
	2) Process strain rate (param files - explained below)
	3) Initial Orientation Distribution Function i.e., ODFs (76 independent values to be sampled for cubic microstructures)
		
Outputs: 1) Final ODFs including nine intermediate steps (demonstrating the microstructure after processing)
         2) Cauchy Stress Tensor (3x3) (homogenized property of the microstructure)
		 
1) This code is written for the BCC and FCC crystal structures which have 76 independent crystal orientations with a total of 145 orientations.
Crystal orientation is defined by the Orientation Distribution Function (ODF). Therefore, BCC or FCC has 76 independent ODFs and 145 total ODFs (dependent and independent).

2) In "Simulator" folder, there is an executable file named "app.exe" which performs the process simulation. We need to run this app to get the results.

3) We can control the loading conditions using "param.txt" file and the initial (input) ODF values using "Input_ODF.txt" file.

4) The input file name must be named as "param.txt" to run the "app.exe". Otherwise, the code will give an error. Therefore, the MATLAB code will always produce a "param.txt" file for any loading condition.

For your reference, "param_tension/compression.txt","param_plane_strain_compression.txt", "param_xyshear.txt","param_yzshear.txt", and "param_xzshear.txt" files are provided in the Simulator folder. Please change the name to "param.text" before running the processing condition you would like (tension/compression, plane strain compression, xy_shear, xz_shear, and yz_shear).

For singular loading, the corresponding param file only contains one non-zero value (strain-rate), indicating the load direction.

For a combined loading condition (for example tension and xy shear applied together) we will provide two non-zero values (which are strain rates for the given loading condition) in the param file at the corresponding space (direction). 

5) Please note that the input ODFs (independent microstructure orientations) must satisfy two constraints: (i) the normalization constraint which is: sum of (volume fraction*ODF) = 1; (ii) ODFs cannot be negative (ODF>=0).

The MATLAB code includes the commands to ensure that ODFs are satisfying these two conditions.

6) The code is written for 0.1 sec of loading time. We can monitor the change in the ODFs in each 0.01 sec time step. Therefore, we will have 10 ODF vector outputs in each run. 

If we want to run the process for 0.3 sec, for example, we have to run the code three times. After each run, final ODFs should be input ODF of the next run.

7) We cannot make any change in the input file named "input.txt". 

8) A MATLAB code is provided to make the process simulation automatic for multiple runs and to save the necessary output files for analysis.

The MATLAB file name is "process.m" is located in Simulator folder. Each step is explained within the code. Two '.mat' files named "newmesh.mat" and "cubicstructuredata.mat" are loaded before the main code. 

The code will work for a particular loading condition (single or combined loading) for multiple runs. However, if we need to make different loading in each run
we can not use the 'for' loop. We have to execute the first loading, then we need to wait for obtaining the output which can be used as the input ODFs for the next run which has a different loading condition. This is happening because each time the input file of loading should be named as "param.txt".  

9) After each run a "stress-strain.out" file will be generated that include the Cauchy Stress Tensor (material property output). Matlab code is also saving this output. Each run will generate 10 Cauchy Stress Tensors. Therefore, if we run 3 times it will have 30 Stress Tensors. Cauchy Stress Tensor is a 3x3 matrix. In Matlab, it is converted to a column vector. Each column of the file named "Cauchy.mat" represents the Cauchy Stress Tensor. We need to reshape it to make it a 3x3 matrix.

10) Without the MATLAB code, the process can also be run by "app.exe". In this case, we have to make sure that "param.txt" and "Input_ODF.txt" files along with other necessary files are available in the folder.

In Simulator folder 5 param files are given for tension/compression, plane strain compression, xy, xz and yz shear forces. For example, we want to run the process for tension then we need to name "param_tension/compression.txt." as "param.txt".


Please feel free to contact us if you have any question. Thank you.
