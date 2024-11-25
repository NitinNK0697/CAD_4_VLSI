This is a ReadMe file for both Project-1 and Project-2

############################## Project-1 ###################################

Project-1 is in the folder "MAC"
Inside MAC there are both Pipelined and Unpipelined design.

Unpipelined Design
1. Go to MAC/Unpipelined
2. Inside this folder open terminal, execute following command
3. pyenv activate py38
4. Verilog is already generated for the project, if you want to generate it again, execute below commands else skip to step 5:
  -> make clean_build
  -> make generate_verilog
5. For running testbench, execute:
  make simulate
6. by default this will launch the testbench and check for the testcases given to us to test our design. We can check both int8 and bfloat16 MAC functionality, by changing mode in the test.py file.
   test_mac.py file is in the directory MAC/Unpipelined/MAC_verif.
7. Open test_mac.py file and set mode of operation at line 50. 
   Mode=0 for bfloat mode
   Mode=1 for int8 mode

Pipelined Design
1. Go to MAC/Pipelined
2. Inside this folder open terminal, execute following command
3. pyenv activate py38
4. Verilog is already generated for the project, if you want to generate it again, execute below commands else skip to step 5:
  make clean_build
  make generate_verilog
5. For running testbench, execute:
  make simulate
6. by default this will launch the testbench and check for the testcases given to us to test our design. We can check both int8 and bfloat16 MAC functionality, by changing mode in the test.py file.
   test_mac.py file is in the directory MAC/Pipelined/MAC_verif.
7. Open test_mac.py file and set mode of operation at line 49 and go to step 5. 
   Mode=0 for bfloat mode
   Mode=1 for int8 mode

In addition to this we can also check the functionality for randomly generated inputs, by uncommenting the bottom part in the testbench and commenting currently active part of the testbench in both designs.


################################ Project 2 ######################################

For project to "Project_2" folder.
Inside this folder sys_arr.bsv contains the bsv design for the systolic array
1. Open Terminal
2. To run the testbench to test the functionality of systolic array, execute:
   make simulate
3. This will generate two 4X4 matrices with random numbers and perform their multiplication and display the expected outputs and obtained outputs.
4. Similar to project 1 we can change the mode of systolic array by making change in testbench
5. Go to "Project_2/arr_verif/" and open test_systolic_array.py and at line 24 change the mode and again go to step 2.
   Mode=0 for bfloat16
   Mode=1 for int8


Assignment 1:
1) int8
a) Pipelined design: Code:Completed , Verification:Not completed (Coverage part not done)
b) unpipelined design: Code:Completed , Verification:Not completed (Coverage part not done)

2) bfloat16
a) Pipelined design: Code:Completed , Verification:Not completed (Coverage part not done)
b) unpipelined design: Code:Completed , Verification:Not completed (Coverage part not done)

Assignment 2:
int8: code:Completed, Verification:Not complete (Coverage part not done)
bfloat16: code:Completed, Verification:Not complete (Coverage part not done)
