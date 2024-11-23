########## Test Bench for given test cases###################################

import os
import random
from pathlib import Path

import tensorflow as tf

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotb.binary import BinaryRepresentation,BinaryValue

from model_mac import *
 
#reading files

input_A_int=os.path.join("MAC_verif","A_binary_int8.txt")
input_B_int=os.path.join("MAC_verif","B_binary_int8.txt")
input_C_int=os.path.join("MAC_verif","C_binary_int8.txt")
output_MAC_int=os.path.join("MAC_verif","MAC_binary_int8.txt")

input_A_bfloat=os.path.join("MAC_verif","A_binary_bfloat.txt")
input_B_bfloat=os.path.join("MAC_verif","B_binary_bfloat.txt")
input_C_bfloat=os.path.join("MAC_verif","C_binary_bfloat.txt")
output_MAC_bfloat=os.path.join("MAC_verif","MAC_binary_bfloat.txt")

A_int=read_file_to_array(input_A_int)
B_int=read_file_to_array(input_B_int)
C_int=read_file_to_array(input_C_int)
MAC_int=read_file_to_array(output_MAC_int)

A_bfloat=read_file_to_array(input_A_bfloat)
B_bfloat=read_file_to_array(input_B_bfloat)
C_bfloat=read_file_to_array(input_C_bfloat)
MAC_bfloat=read_file_to_array(output_MAC_bfloat)


@cocotb.test()
async def test_mac(dut):
	#generate clock
	cocotb.start_soon(Clock(dut.CLK, 1, units="ns").start())
	
	#reset DUT
	dut.RST_N.value=0

	############ MODE SELECT########################### 
	#sel mode of mac mode=1 for int: mode=0 for bfloat
	mode=0b1;
	
	#hold reset for 2 clocks
	for _ in range(2):
		await RisingEdge(dut.CLK)
	dut.RST_N.value=1
	count=0;count1=0;
	dut.EN_put_inp_A.value=1
	dut.EN_put_inp_B.value=1
	dut.EN_put_inp_C.value=1
	dut.EN_put_inp_sel.value=1


	for i in range(0,(999 if mode==0b0 else 1048)):
		dut.put_inp_A_a.value = int(A_int[i],2) if (mode==0b1) else int(A_bfloat[i],2)
		dut.put_inp_B_b.value = int(B_int[i],2) if (mode==0b1) else int(B_bfloat[i],2)
		dut.put_inp_C_c.value = int(C_int[i],2) if (mode==0b1) else int(C_bfloat[i],2)
		dut.put_inp_sel_sel.value = mode


		# #checking functionality of python model
		# MAC_1=MAC_model(int(A_bfloat[i],2),int(B_bfloat[i],2),int(C_bfloat[i],2),mode)
		
		#wait for one clock cycle for input to get correctly loaded.
		await RisingEdge(dut.CLK)

		#checking functionality of python model
		MAC_1=MAC_model(signed_binary_to_int(A_bfloat[i]),signed_binary_to_int(B_bfloat[i]),signed_binary_to_int(C_bfloat[i]),mode) if mode==0b0 else MAC_model(signed_binary_to_int(A_int[i]),signed_binary_to_int(B_int[i]),signed_binary_to_int(C_int[i]),mode)

		predicted=MAC_int[i] if (mode==0b1) else MAC_bfloat[i]
		for _ in range(5 if (mode==0b1) else 13):
			await RisingEdge(dut.CLK)
			
		if((int(predicted,2)>>2)==(dut.get_mac_op.value>>2)):
			count=count+1
			# print("model",MAC_1,"test case",MAC_bfloat[i] if mode==0b0 else MAC_int[i])
		else:
			print("predicted=",predicted," out=",dut.get_mac_op.value.binstr)

		if(MAC_1==MAC_int[i] if (mode==0b1) else int(MAC_1,2)>>2==(dut.get_mac_op.value>>2)):
			count1=count1+1

	print("\nTesting for given test cases")
	print("\n INTEGER MAC MODE") if mode==1 else print("\n BFLOAT16 MAC MODE")
	print("\n Cases passed: DUT",count)
	print(" Python model:",count1)


# #############################################################################

# ################## TESTBENCH FOR RANDOM INPUTS ##############################

# import os
# import random
# from pathlib import Path
# import tensorflow as tf

# import cocotb
# from cocotb.clock import Clock
# from cocotb.triggers import RisingEdge
# from cocotb.binary import BinaryRepresentation,BinaryValue

# from model_mac import *
 
# @cocotb.test()
# async def test_mac(dut):
# 	#generate clock
# 	cocotb.start_soon(Clock(dut.CLK, 1, units="ns").start())
	
# 	#reset DUT
# 	dut.RST_N.value=0

# 	########################### SELECT MODE HERE ###############################
# 	#sel mode of mac mode=1 for int: mode=0 for bfloat
# 	mode=0b1;
	
# 	#hold reset for 2 clocks
# 	for _ in range(2):
# 		await RisingEdge(dut.CLK)
# 	dut.RST_N.value=1
# 	count=0
# 	dut.EN_put_inp_A.value=1
# 	dut.EN_put_inp_B.value=1
# 	dut.EN_put_inp_C.value=1
# 	dut.EN_put_inp_sel.value=1

	

# 	#giving seed for reproducibility of results
# 	random.seed(1234)


# 	for i in range(0,9999):

# 		a_int=random.randint(0,(1<<16)-1)
# 		b_int=random.randint(0,(1<<16)-1)
# 		c_int=random.randint(0,(1<<32)-1)

# 		# a_int=random.randint(0,(1<<16)-1) if mode==0b1 else generate_bfloat16_int()
# 		# b_int=random.randint(0,(1<<16)-1) if mode==0b1 else generate_bfloat16_int()
# 		# c_int=random.randint(0,(1<<32)-1) if mode==0b1 else generate_float32_int()


# 		dut.put_inp_A_a.value = int(format(a_int,'016b'),2)
# 		dut.put_inp_B_b.value = int(format(b_int,'016b'),2)
# 		dut.put_inp_C_c.value = int(format(c_int,'032b'),2)

# 		dut.put_inp_sel_sel.value = mode
		
# 		#wait for one clock cycle for input to get correctly loaded.
# 		await RisingEdge(dut.CLK)

# 		# predicted=MAC_int(a_int,b_int,c_int) if mode==0b1 else mac_fp32_bin
# 		predicted = MAC_model(a_int,b_int,c_int,mode)

# 		for _ in range(5 if (mode==0b1) else 13):
# 			await RisingEdge(dut.CLK)
			

# 		if(int(predicted,2)==dut.get_mac_op.value if mode==0b1 else (int(predicted,2)>>2)==(dut.get_mac_op.value>>2)):
# 			count=count+1;
# 			# print("mode:",mode, "A_input:",dut.put_inp_A_a.value.binstr," B_input:",dut.put_inp_B_b.value.binstr," C_input",dut.put_inp_C_c.value.binstr,"predicted=",predicted," out=",dut.get_mac_op.value.binstr)
# 		else:
# 			print("mode:",mode, "A_input:",dut.put_inp_A_a.value.binstr," B_input:",dut.put_inp_B_b.value.binstr," C_input",dut.put_inp_C_c.value.binstr,"predicted=",predicted," out=",dut.get_mac_op.value.binstr)

# 			# assert int(predicted,2)==dut.get_mac_op.value if mode==0b1 else (int(predicted,2)>>2)==(dut.get_mac_op.value>>2), f'MAC Output Mismatch, Expected={predicted} DUT={dut.get_mac_op.value.binstr}'

# 	print("\n\n\nINTEGER MAC MODE\n") if mode==1 else print("BFLOAT16 MAC MODE\n")
# 	print("PASSED:",count)


