import os
import random
from pathlib import Path
import tensorflow as tf

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotb.binary import BinaryRepresentation,BinaryValue

from model_systolic_array import *

@cocotb.test()
async def test_arr(dut):
	#generate clock
	cocotb.start_soon(Clock(dut.CLK, 1, units="ns").start())
	
	#giving seed for reproducibility of results
	random.seed(1234)

	################################# SELECT MODE HERE ###########################################
	#sel mode of mac mode=1 for int: mode=0 for bfloat
	
	mode=0b1;

	##############################################################################################

	#This section deals with generation of random integer matrix and bfloat16 matrix to be fed to BSV model and python model to compare the results
	
	X_int=[[signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b'))],
	[signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b'))],
	[signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b'))],
	[signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b'))]]

	Y_int=[[signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b'))],
	[signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b'))],
	[signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b'))],
	[signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b')),signed_binary_to_int(format(random.randint(-100,100),'016b'))]]
	
	#This generates bloat numbers in binary string format
	X_bf16 = [[bfloat_generate() for _ in range(4)] for _ in range(4)]

	Y_bf16 = [[bfloat_generate() for _ in range(4)] for _ in range(4)]

	#This converts the binary string bfloat16 to corresponding integer to be fed to model
	for i in range (4):
		for j in range (4):
			X_bf16[i][j]=int((X_bf16[i][j]),2)
			Y_bf16[i][j]=int((Y_bf16[i][j]),2)

	
	# This section select between integer input and bfloat16 inputs
	X = X_int if mode==1 else X_bf16
	Y = Y_int if mode==1 else Y_bf16

	

	output=[[0,0,0,0],
	[0,0,0,0],
	[0,0,0,0],
	[0,0,0,0]]
	
	output_int=[[0,0,0,0],
	[0,0,0,0],
	[0,0,0,0],
	[0,0,0,0]]
	
	
	#reset DUT
	dut.RST_N.value=0
	
	#hold reset for 2 clocks
	for _ in range(2):
		await RisingEdge(dut.CLK)
	dut.RST_N.value=1
	count=0
	dut.EN_put_A.value=1
	dut.EN_put_B.value=1
	dut.EN_put_C.value=1
	dut.EN_put_sel.value=1


	dut.put_A_a1.value = 0b0000000000000000
	dut.put_A_a2.value = 0b0000000000000000
	dut.put_A_a3.value = 0b0000000000000000
	dut.put_A_a4.value = 0b0000000000000000
	
	dut.put_C_c1.value = 0b00000000000000000000000000000000
	dut.put_C_c2.value = 0b00000000000000000000000000000000
	dut.put_C_c3.value = 0b00000000000000000000000000000000
	dut.put_C_c4.value = 0b00000000000000000000000000000000

	###### Loading Mode value ######
	dut.put_sel_sel.value = mode

	###### We start pushing Y matrix Values in the fashion described in the project document ######
	
	dut.put_B_b1.value = int(format(Y[3][0],'016b'),2)
	dut.put_B_b2.value = int(format(Y[3][1],'016b'),2)
	dut.put_B_b3.value = int(format(Y[3][2],'016b'),2)
	dut.put_B_b4.value = int(format(Y[3][3],'016b'),2)
	
		
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
				
	dut.put_B_b1.value = int(format(Y[2][0],'016b'),2)
	dut.put_B_b2.value = int(format(Y[2][1],'016b'),2)
	dut.put_B_b3.value = int(format(Y[2][2],'016b'),2)
	dut.put_B_b4.value = int(format(Y[2][3],'016b'),2)
	
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
				
	dut.put_B_b1.value = int(format(Y[1][0],'016b'),2)
	dut.put_B_b2.value = int(format(Y[1][1],'016b'),2)
	dut.put_B_b3.value = int(format(Y[1][2],'016b'),2)
	dut.put_B_b4.value = int(format(Y[1][3],'016b'),2)
	
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
			
	dut.put_B_b1.value = int(format(Y[0][0],'016b'),2)
	dut.put_B_b2.value = int(format(Y[0][1],'016b'),2)
	dut.put_B_b3.value = int(format(Y[0][2],'016b'),2)
	dut.put_B_b4.value = int(format(Y[0][3],'016b'),2)
	
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)

	### This marks the end of pushing Y values into the array, now X values will be pushed and corresponding outputs
	### will be captured as prescribed in the project document
			
	
	dut.put_A_a1.value = int(format(X[0][0],'016b'),2)
	dut.put_A_a2.value = int(format(0,'016b'),2)
	dut.put_A_a3.value = int(format(0,'016b'),2)
	dut.put_A_a4.value = int(format(0,'016b'),2)
	
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
		# print("m:",m," step1:","mac1: ",dut.mac1_out.value,"mac5: ",dut.mac5_out.value,"mac9: ",dut.mac9_out.value,"mac13: ",dut.mac13_out.value)
		# print("OUTPUT: "," op1:",dut.get_op1.value," op2:",dut.get_op2.value," op3:",dut.get_op3.value," op4:",dut.get_op4.value)
	
	dut.put_A_a1.value = int(format(X[1][0],'016b'),2)
	dut.put_A_a2.value = int(format(X[0][1],'016b'),2)
	dut.put_A_a3.value = int(format(0,'016b'),2)
	dut.put_A_a4.value = int(format(0,'016b'),2)
	
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
		# print("m:",m," step2:","mac1: ",dut.mac1_out.value,"mac5: ",dut.mac5_out.value,"mac9: ",dut.mac9_out.value,"mac13: ",dut.mac13_out.value)
		# print("OUTPUT: "," op1:",dut.get_op1.value," op2:",dut.get_op2.value," op3:",dut.get_op3.value," op4:",dut.get_op4.value)
	
	dut.put_A_a1.value = int(format(X[2][0],'016b'),2)
	dut.put_A_a2.value = int(format(X[1][1],'016b'),2)
	dut.put_A_a3.value = int(format(X[0][2],'016b'),2)
	dut.put_A_a4.value = int(format(0,'016b'),2)
	
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
		# print("m:",m," step3:","mac1: ",dut.mac1_out.value,"mac5: ",dut.mac5_out.value,"mac9: ",dut.mac9_out.value,"mac13: ",dut.mac13_out.value)
		# print("OUTPUT: "," op1:",dut.get_op1.value," op2:",dut.get_op2.value," op3:",dut.get_op3.value," op4:",dut.get_op4.value)
	
	dut.put_A_a1.value = int(format(X[3][0],'016b'),2)
	dut.put_A_a2.value = int(format(X[2][1],'016b'),2)
	dut.put_A_a3.value = int(format(X[1][2],'016b'),2)
	dut.put_A_a4.value = int(format(X[0][3],'016b'),2)
	
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
		# print("m:",m," step4:","mac1: ",dut.mac1_out.value,"mac5: ",dut.mac5_out.value,"mac9: ",dut.mac9_out.value,"mac13: ",dut.mac13_out.value)
		# print("OUTPUT: "," op1:",dut.get_op1.value," op2:",dut.get_op2.value," op3:",dut.get_op3.value," op4:",dut.get_op4.value)
		
	#### We start storing required values at correct indices of the output matrix ####
	output[0][0]=dut.get_op1.value.binstr
		
	dut.put_A_a1.value = int(format(0,'016b'),2)
	dut.put_A_a2.value = int(format(X[3][1],'016b'),2)
	dut.put_A_a3.value = int(format(X[2][2],'016b'),2)
	dut.put_A_a4.value = int(format(X[1][3],'016b'),2)
	
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
		# print("m:",m," step5:","mac1: ",dut.mac1_out.value,"mac5: ",dut.mac5_out.value,"mac9: ",dut.mac9_out.value,"mac13: ",dut.mac13_out.value)
		# print("OUTPUT: "," op1:",dut.get_op1.value," op2:",dut.get_op2.value," op3:",dut.get_op3.value," op4:",dut.get_op4.value)
		
	output[1][0]=dut.get_op1.value.binstr
	output[0][1]=dut.get_op2.value.binstr
		
	dut.put_A_a1.value = int(format(0,'016b'),2)
	dut.put_A_a2.value = int(format(0,'016b'),2)
	dut.put_A_a3.value = int(format(X[3][2],'016b'),2)
	dut.put_A_a4.value = int(format(X[2][3],'016b'),2)
	
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
		# print("m:",m," step6:","mac1: ",dut.mac1_out.value,"mac5: ",dut.mac5_out.value,"mac9: ",dut.mac9_out.value,"mac13: ",dut.mac13_out.value)
		# print("OUTPUT: "," op1:",dut.get_op1.value," op2:",dut.get_op2.value," op3:",dut.get_op3.value," op4:",dut.get_op4.value)
		
	output[2][0]=dut.get_op1.value.binstr
	output[1][1]=dut.get_op2.value.binstr
	output[0][2]=dut.get_op3.value.binstr
		
	dut.put_A_a1.value = int(format(0,'016b'),2)
	dut.put_A_a2.value = int(format(0,'016b'),2)
	dut.put_A_a3.value = int(format(0,'016b'),2)
	dut.put_A_a4.value = int(format(X[3][3],'016b'),2)
	
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
		# print("m:",m," step7:","mac1: ",dut.mac1_out.value,"mac5: ",dut.mac5_out.value,"mac9: ",dut.mac9_out.value,"mac13: ",dut.mac13_out.value)
		# print("OUTPUT: "," op1:",dut.get_op1.value," op2:",dut.get_op2.value," op3:",dut.get_op3.value," op4:",dut.get_op4.value)
		
	output[3][0]=dut.get_op1.value.binstr
	output[2][1]=dut.get_op2.value.binstr
	output[1][2]=dut.get_op3.value.binstr
	output[0][3]=dut.get_op4.value.binstr
	
	dut.put_A_a1.value = int(format(0,'016b'),2)
	dut.put_A_a2.value = int(format(0,'016b'),2)
	dut.put_A_a3.value = int(format(0,'016b'),2)
	dut.put_A_a4.value = int(format(0,'016b'),2)
	
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
		# print("m:",m," step8:","mac1: ",dut.mac1_out.value,"mac5: ",dut.mac5_out.value,"mac9: ",dut.mac9_out.value,"mac13: ",dut.mac13_out.value)
		# print("OUTPUT: "," op1:",dut.get_op1.value," op2:",dut.get_op2.value," op3:",dut.get_op3.value," op4:",dut.get_op4.value)
		
	output[3][1]=dut.get_op2.value.binstr
	output[2][2]=dut.get_op3.value.binstr
	output[1][3]=dut.get_op4.value.binstr
		
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
		# print("m:",m," step9:","mac1: ",dut.mac1_out.value,"mac5: ",dut.mac5_out.value,"mac9: ",dut.mac9_out.value,"mac13: ",dut.mac13_out.value)
		# print("OUTPUT: "," op1:",dut.get_op1.value," op2:",dut.get_op2.value," op3:",dut.get_op3.value," op4:",dut.get_op4.value)
		
	output[3][2]=dut.get_op3.value.binstr
	output[2][3]=dut.get_op4.value.binstr
		
	#wait for one clock cycle for input to get correctly loaded.
	await RisingEdge(dut.CLK)

	#wait for 3 cycles for values to get stored correctly in the registered
	for m in range(3):
		await RisingEdge(dut.CLK)
		# print("m:",m," step10:","mac1: ",dut.mac1_out.value,"mac5: ",dut.mac5_out.value,"mac9: ",dut.mac9_out.value,"mac13: ",dut.mac13_out.value)
		# print("OUTPUT: "," op1:",dut.get_op1.value," op2:",dut.get_op2.value," op3:",dut.get_op3.value," op4:",dut.get_op4.value)
		
	output[3][3]=dut.get_op4.value.binstr
	
	for i in range(4):
		for j in range(4):
			output_int[i][j]=signed_binary_to_int(output[i][j])
	
	print("\n Integer Matrix Multiplication \n\n") if mode==1 else print("\n Bfloat16 Matrix Multiplication\n\n")
	
	print(" X:",X)
	print("\n \n Y:",Y)
	print("\n \n OUTPUT MATRIX from Systolic Array")
	print(output_int)

	predicted_product=Systolic_Array_model(X,Y,mode)

	print("\n\n Integer Matrix Product") if (mode==1) else print("\n\n Bfloat16 matrix product")

	print(predicted_product)

	print("\n \n  OUTPUT MATRIX from Systolic Array in binary")
	print(output)
