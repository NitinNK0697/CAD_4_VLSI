/****Modified Mac Module for Systolic Array Implementation******
Contributers: Nitin Kumar Prajapati, Sornali Sarkar
*/

package mac;

import FloatingPoint::*;
import DReg::*;

//Top Module Interface
interface Ifc_MAC;
   
    method Action       put_inp_A(Bit#(16) a);
    method Action       put_inp_B(Bit#(16) b);
    method Action       put_inp_C(Bit#(32) c);
    method Action       put_inp_sel(Bit#(1) sel);
    method Bit#(32)     get_mac_op();
    method Bit#(16)	get_a();
    method Bit#(16)	get_b();
    method Bit#(1)	get_sel();
    
    method Bit#(16)	a_flop();
    method Bit#(16)	b_flop();
    method Bit#(10)	count_out();
    
endinterface

//Int8 MAC Interface
interface Ifc_int8;
        method Action       put(Bit#(8) a, Bit#(8) b, Bit#(32) c);
        method Bit#(32)     get_out();       
endinterface

//BFloat MAC Interface
interface Ifc_bfloat16_mac;
    method Bit#(32)     get_out();
    method Action       put(Bit#(16) a, Bit#(16) b, Bit#(32) c);
endinterface

//Submodule Interface
interface Ifc_lzcounter;
    method    Bit#(5) get(Bit#(26) mantissa);
endinterface

module mk_mac(Ifc_MAC);
    Reg#(Bit#(16))      rg_A        <-    mkReg(?);      
    Reg#(Bit#(16))      rg_B        <-    mkReg(?);     
    Reg#(Bit#(32))      rg_C        <-    mkReg(?);     
    Reg#(Bit#(1))       rg_sel      <-    mkReg(?);
    Reg#(Bit#(1))       rg_sel1     <-    mkReg(?);
    Reg#(Bit#(1))       rg_sel2     <-    mkReg(?);
    Reg#(Bit#(1))       rg_sel3     <-    mkReg(?);
    Reg#(Bit#(1))       rg_sel4     <-    mkReg(?);
    Reg#(Bit#(32))      rg_out      <-    mkReg(?);   
    
    Reg#(Bit#(16))      rg_A1        <-    mkReg(?);      
    Reg#(Bit#(16))      rg_B1       <-    mkReg(?); 
    Reg#(Bit#(16))      rg_A2        <-    mkReg(?);      
    Reg#(Bit#(16))      rg_B2        <-    mkReg(?);   
    Reg#(Bit#(16))      rg_A3       <-    mkReg(?);      
    Reg#(Bit#(16))      rg_B3        <-    mkReg(?); 
    Reg#(Bit#(16))      rg_A4       <-    mkReg(?);      
    Reg#(Bit#(16))      rg_B4        <-    mkReg(?);    
    Reg#(Bit#(16))      rg_A_out        <-    mkReg(?); 
    Reg#(Bit#(16))      rg_B_out        <-    mkReg(?);     
    Reg#(Bit#(1))       rg_sel_out      <-   mkReg(?);
	
    Reg#(Bit#(10)) count <- mkReg(0);
    
    
    Ifc_bfloat16_mac  bfloat        <-  mkBfloat16_mac;
    Ifc_int8          int_8         <-  mk_int8_mac;
  
  (*descending_urgency="mac_inp,mac_out"*)
    rule mac_inp;
        if(rg_sel==1)
        begin
            int_8.put(rg_A[7:0],rg_B[7:0],rg_C);
            rg_sel1 <= rg_sel;
            rg_A1  <= rg_A;
            rg_B1  <= rg_B;
        end
        else
        begin
            bfloat.put(rg_A,rg_B,rg_C);
            rg_sel1 <= rg_sel;
            rg_A1  <= rg_A;
            rg_B1  <= rg_B;
        end
    endrule

    rule stall1;
        rg_sel2 <= rg_sel1;
        rg_A2  <= rg_A1;
        rg_B2  <= rg_B1;
    endrule

    rule mac_out;
        if(rg_sel1==1)
        begin
        rg_out <= int_8.get_out();
        rg_sel_out <= rg_sel1;
        rg_A_out <= rg_A2;
        rg_B_out <= rg_B1;
        end
            
        else
        begin
        rg_out <= bfloat.get_out();
        rg_sel_out <= rg_sel1;
        rg_A_out <= rg_A2;
        rg_B_out <= rg_B1;
        end
    endrule 
    
    rule count_update;
    	count <= count+1;
    endrule
    
    /*
    rule display;
        $display("%d:  Inputs: %b, %b  -- Output: %b",count,rg_A_out, rg_B_out, rg_out);
        if(count==50) $finish;
    endrule
    */
    
    method Action       put_inp_A(Bit#(16) a);
        rg_A <= a;
    endmethod

    method Action       put_inp_B(Bit#(16) b);
    	if(count<13)
    	begin
        rg_B <= b;
        end
 
    endmethod

    method Action       put_inp_C(Bit#(32) c);
        rg_C <= c;
    endmethod

    method Action       put_inp_sel(Bit#(1) sel);
        rg_sel <= sel;
    endmethod
    
    
    method Bit#(32)     get_mac_op();
        return rg_out;
    endmethod
    
    method Bit#(16) get_a();
    	return rg_A_out;
    endmethod
    
    method Bit#(16) get_b();
    	return rg_B_out;
    endmethod
    
    
    method Bit#(1) get_sel();
    	return rg_sel_out;
    endmethod
    
    method Bit#(16) a_flop();
    	return rg_A;
    endmethod
    
    method Bit#(16) b_flop();
    	return rg_B;
    endmethod
    
    method Bit#(10) count_out();
    	return count;
    endmethod
endmodule



//BFloat16 MAC Module:
module mkBfloat16_mac(Ifc_bfloat16_mac);

    Reg#(Bit#(16))      rg_A        <-    mkReg(?);     //rg_A, rg_B --> BFloat16 
    Reg#(Bit#(16))      rg_B        <-    mkReg(?);     
    Reg#(Bit#(32))      rg_C        <-    mkReg(?);     //rg_C --> Fp32
    
    Wire#(Bit#(32))      out_r           <-   mkWire();
    
    //Instantiating other modules
      Ifc_lzcounter        obj_lzcount        <-    mk_lzcounter;           //Leading Zero Count Module
      
	
    rule mac;
        Bit#(32) out;
        Bit#(1) sign_s1;
        Bit#(8) exp_add_s1;
        Bit#(2) rg_exception_s1;
        //Corner cases:
        //For (0 x inf) or (inf x 0) or ( NaN x 0 ) or ( 0 x NaN ) -> Result will be NaN where exp={'1} and mantissa={1'b1,'0}  and  exception = 0
        if(((rg_A[14:7] == {'1}) && (rg_B[14:7] == {'0})) || ((rg_A[14:7] == {'0}) && (rg_B[14:7] == {'1})))
        begin    
            sign_s1             =   rg_A[15]^rg_B[15];
            exp_add_s1          =   {'1};
            rg_exception_s1     =   2'd0;
        end

        //For (0 x any valid number) --> Result will be true zero and exception = 1
        else if( rg_A[14:7]=={'0} || rg_B[14:7]=={'0} )
        begin
            sign_s1             =   rg_A[15]^rg_B[15];
            exp_add_s1          =   {'0};
            rg_exception_s1     =   2'd1;
        end

        //For (inf x any valid number) --> Result will be infinity and excetion = 2
        else if(rg_A[14:7]=={'1} || rg_B[14:7]=={'1})
        begin
            sign_s1             =   rg_A[15]^rg_B[15];
            exp_add_s1          =   {'1};
            rg_exception_s1     =   2'd2;
        end

        //For all other inputs --> no change and exception = 3
        else
        begin
            sign_s1             =   rg_A[15]^rg_B[15];
            exp_add_s1          =   exponent_add(rg_A[14:7],rg_B[14:7]);
            rg_exception_s1     =   2'd3;
        end

        Bit#(8) exp;
        Bit#(24) mant_r;
        Bit#(8) mant_1;
        Bit#(23) mantissa;

        Bit#(1) mul_guard_bit;
        Bit#(1) mul_round_bit;
        Bit#(1) mul_sticky_bit;
        Bit#(9) mantissa_round;

        case(rg_exception_s1)        
        2'd3:   begin
                  Bit#(16) mul    = unsignedMul8({1'b1,rg_A[6:0]},{1'b1,rg_B[6:0]});
                           exp    = exp_add_s1;
                  if(mul[15]==1)
                  begin 
                           exp    = exp+1;
                           mant_1 = mul[15:8];
                           mul_guard_bit=mul[8];
                           mul_round_bit=mul[7];
                           mul_sticky_bit=|mul[6:0];

                  end
                  else
                  begin  
                           mant_1 = mul[14:7];
                           mul_guard_bit=mul[7];
                           mul_round_bit=mul[6];
                           mul_sticky_bit=|mul[5:0];
                  end

                  Bit#(3) grs_mul_round={mul_guard_bit,mul_round_bit,mul_sticky_bit};
                  if((grs_mul_round==3'b111)||(grs_mul_round==3'b011)||(grs_mul_round==3'b110))
                    begin
                        mantissa_round = {0,mant_1}+1;
                    end
                  else
                    begin
                        mantissa_round = {0,mant_1};
                    end

                  if(mantissa_round[8]==1)  exp = exp +1;   

                    //If the multiplication result has exponent={'1}, then we saturate the number to infinity

                  mant_r       =  exp != {'1} ? {mantissa_round[7:0],'0} : {'0};
                  mantissa     =  mant_r[22:0];
                   
                 end
        2'd2:   begin
                  exp             =   {'1};
                  mantissa        =   {'0};
                  mant_1          =   {'0};
                end
        2'd1:   begin
                    exp             =   {'0};
                    mantissa        =   {'0};
                    mant_1          =   {'0};
                end
        default: begin
                    //Result is NaN 
                    exp           =   {'1};
                    mantissa      =   {1'b1,'0}; 
                    mant_1        =   {'0};
                 end
        endcase

        Bit#(32) mul_result = {sign_s1, exp, mantissa}; 
        Bit#(32) rg_mult_s5           =    mul_result[30:23] >= rg_C[30:23] ? mul_result : rg_C;
        Bit#(32) rg_C_s5              =    mul_result[30:23] >= rg_C[30:23] ? rg_C : mul_result;      //After this rearrangement: rg_mult_s5 has greater exponent than rg_C_s5

        Bit#(32) rg_mult_s6;
        Bit#(32) rg_C_s6;
        Bit#(8) rg_exp_diff_s6;
        Bit#(2) rg_exception_s6;
    
        if ( (rg_mult_s5[30:23] != 8'd255) && (rg_C_s5[30:23] != 8'd255) ) 
        begin
            Bit#(8)     exp_mul_s6          =   rg_mult_s5[30:23];
            Bit#(8)     exp_c_s6            =   rg_C_s5[30:23];
            Bit#(8)     exp_diff_s6         =   exp_sub(exp_mul_s6,exp_c_s6);      //Exponent difference between (A*B) and C

            if( (rg_mult_s5[30:23] != 8'd0) || (rg_C_s5[30:23] != 8'd0) ) 
            begin
                rg_mult_s6              =   rg_mult_s5;
                rg_C_s6                 =   rg_C_s5;
            end
            else                   //mult_exponent = 0   and   C_exponent = 0
            begin 
                rg_mult_s6              =    {rg_mult_s5[31], '0};
                rg_C_s6                 =    {rg_C_s5[31], '0}; 
            end
            
            rg_exp_diff_s6              = exp_diff_s6;
            rg_exception_s6             = 2'd0;
        end
        else 
        begin
            rg_mult_s6                  = (rg_mult_s5[22:0] != 23'd0) ? {rg_mult_s5[31], 8'd255, rg_mult_s5[22:0]} : {rg_mult_s5[31], 8'd255, 23'd0} ;    
            rg_C_s6                     = (rg_C_s5[22:0] != 23'd0) ? {rg_C_s5[31], 8'd255, rg_C_s5[22:0]} : {rg_C_s5[31], 8'd255, 23'd0} ;
            rg_exp_diff_s6              = 8'd255;

            rg_exception_s6    = (rg_C_s5[22:0] != 23'd0) || (rg_mult_s5[22:0] != 23'd0) ? 2'd1 : 2'd2;    //exception=1 if number is NaN
                                                                                                          //exception=2 if number is inf
        end
        
        Bit#(8) shift_count           =   rg_exp_diff_s6;
        Bit#(27) mult_mant_s7         =   {1'b1,rg_mult_s6[22:0],3'b0};  
        Bit#(26) c_mant_s7            =   {rg_C_s6[22:0],3'b0};

        Bit#(27) shiftedmantissa      =     shift_right(c_mant_s7, shift_count);  //Shifting mantissa of operand with smaller exponent
                                                                        
       
        Bit#(28) rg_mant_s8;
    
        Bit#(32)    mul_AB            =   rg_mult_s6;
        Bit#(32)    c_temp1           =   rg_C_s6;
        Bit#(1)     mode_add_sub      =   mul_AB[31]^c_temp1[31];                //1 for SUBTRACT; 0 for ADD
        Bit#(27)    shifted_mant      =   shiftedmantissa; 
        Bit#(29)    mant_8            =   mantiAddSub(mode_add_sub,mul_AB[31],mult_mant_s7,c_temp1[31],shifted_mant);
        Bit#(28)    added_mant        =   mant_8[27:0];
        Bit#(1)     w_sign            =   mant_8[28];
      
        rg_mant_s8                     =   added_mant;
       
       Bit#(27) rg_mant_s9;
       Bit#(8) rg_exponent_s9;
       Bit#(1) rg_sign_s9;
       Bit#(1) guard_bit_s9;
       Bit#(1) round_bit_s9;
       Bit#(1) sticky_bit_s9;
       Bit#(1) rg_s10_valid;
       case (rg_exception_s6)
        2'b00 :  
        begin
            if(rg_mant_s8[27:26]==2'b00)
            begin 
                Bit#(5) leftshift_count   =   obj_lzcount.get(rg_mant_s8[25:0]);
                Bit#(8) exponent          =   exp_adjust(1'b1, mul_AB[30:23],leftshift_count);
                Bit#(26) mantissa_a         =   leftshift(rg_mant_s8[25:0], leftshift_count);
                rg_mant_s9                =   {mantissa_a,1'b0};
                rg_exponent_s9            =   exponent;
                rg_sign_s9                =   w_sign;
                guard_bit_s9              =   mantissa_a[3];
                round_bit_s9              =   mantissa_a[2];
                sticky_bit_s9             =   (mantissa_a[1]|mantissa_a[0]);
                rg_s10_valid              =    1'b1;
            end
            else if(rg_mant_s8[27]==1'b1)
            begin
                Bit#(8) exponent        =   exp_adjust(1'b0, mul_AB[30:23], 5'd1);
                Bit#(27) mantissa_b       =   rg_mant_s8[26:0];
                rg_mant_s9              =  mantissa_b;
                rg_exponent_s9          =   exponent;
                rg_sign_s9              =   w_sign;
                guard_bit_s9            =   mantissa_b[4];
                round_bit_s9            =   mantissa_b[3];
                sticky_bit_s9           =   (mantissa_b[2]|mantissa_b[1]|mantissa_b[0]);
                rg_s10_valid            =     1'b1;
            end
            else 
            begin 
                Bit#(8) exponent        =   mul_AB[30:23];
                Bit#(26) mantissa_c       =   rg_mant_s8[25:0];
                rg_mant_s9                =   {mantissa_c,1'b0};
                rg_exponent_s9            =   exponent;
                rg_sign_s9                =   w_sign;
                guard_bit_s9              =   mantissa_c[3];
                round_bit_s9              =   mantissa_c[2];
                sticky_bit_s9             =   (mantissa_c[1]|mantissa_c[0]);
                rg_s10_valid              =     1'b1;
            end
        end
        2'b01:    //Result is NaN
        begin
            rg_mant_s9                =   {1'b1,'0};
            rg_exponent_s9            =   8'd255;
            rg_sign_s9                =   w_sign;
            guard_bit_s9              =   1'b0;
            round_bit_s9              =   1'b0;
            sticky_bit_s9             =   1'b0;     
            rg_s10_valid              =     1'b1;
        end
        default: 
        begin    //Result is inf
            rg_mant_s9                =   {'0};
            rg_exponent_s9            =   8'd255;
            rg_sign_s9                =   w_sign;
            guard_bit_s9              =   1'b0;
            round_bit_s9              =   1'b0;
            sticky_bit_s9             =   1'b0; 
            rg_s10_valid              =     1'b1;
        end 
        endcase
    

     //----------------------------------------------------------------------STAGE 10: ROUNDING----------------------------------------------------------------------------------------------------------------
    
      Bit#(3) grs = {guard_bit_s9,round_bit_s9,sticky_bit_s9};
      if(grs==3'b111||grs==3'b011||grs==3'b110)
        begin
            out = {rg_sign_s9,rg_exponent_s9,(rg_mant_s9[26:4]+1)};
        end
      else
        begin
            out = {rg_sign_s9,rg_exponent_s9,rg_mant_s9[26:4]};
        end  
      out_r <= out;
    endrule:mac
    
    method Bit#(32) get_out();
        return out_r;
    endmethod
       
    method Action put(Bit#(16) a, Bit#(16) b, Bit#(32) c);
        rg_A              <=    a;
        rg_B              <=    b;
        rg_C              <=    c;
    endmethod
    

endmodule


//Combinational Sub Blocks for MAC:

//1. Multiplier Exponent Addition and Bias Subtraction
//      Description: Exponents in BFloat16 have a bias of (2^(8-1))-1. Multiplication leads to addition of exponents. 
//                   Resulting exponent also needs to be biased and has to be in the range of 0 to (2^k -1), where k is number of exponent bits
function Bit#(8) exponent_add(Bit#(8) a, Bit#(8) b);
   Bit#(8) e = a + b - 8'd127;      //Bias Subtraction
    
    if(e>1 && e<254)
        return e[7:0];
    else 
        return 8'd0;                           
endfunction


//2. Mantissa Right Shift
//       Description: For addition/subtraction, we need to align the decimal point of both mantissa's
//                    So, we right shift the mantissa which has greater exponent by the exponent difference
function Bit#(27) shift_right(Bit#(26) in, Bit#(8) shift);
    return    {1'b1, in} >> shift;
endfunction


//3. Exponent Subtract
//       Description: To align decimal point for mantissa addition/subtraction, we need the exponent difference
function Bit#(8) exp_sub(Bit#(8) exp_a, Bit#(8) exp_b);
        return    exp_a - exp_b;
endfunction


//4. Unsigned 8-bit multiplier - 4 stage pipelined
//      Description: Multiplies two 8 bit unsigned binary operands (here the mantissa's).
//                   Reduction Stage 1,2,3 uses CLA (Carry Look Ahead Adder) and the fourth stage uses Full Adder and Half Adders.

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
function Bit#(16) unsignedMul8(Bit#(8) a ,Bit#(8) b);

    //STAGE 1: Partial Product Generation
 
         Bit#(16)        pp[8];
         Bit#(16)        stage1_op[5];
         Bit#(5)         r1,r2,r3,r4,r5,r6;
 
         pp[0]   =   {8'd0, a[7:0]& signExtend(b[0])};                        
         pp[1]   =   {7'd0,a[7:0]& signExtend(b[1]),1'b0};             
         pp[2]   =   {6'd0,a[7:0]& signExtend(b[2]),2'd0};             
         pp[3]   =   {5'd0,a[7:0]& signExtend(b[3]),3'd0};            
         pp[4]   =   {4'd0,a[7:0]& signExtend(b[4]),4'd0};          
         pp[5]   =   {3'd0,a[7:0]& signExtend(b[5]),5'd0};
         pp[5]   =   {3'd0,a[7:0]& signExtend(b[5]),5'd0};
         pp[6]   =   {2'd0,a[7:0]& signExtend(b[6]),6'd0};          
         pp[7]   =   {1'd0,a[7:0]& signExtend(b[7]),7'd0}; 
 
          //Reduction using CLA:
         r1                  =   mk_CLA(pp[0][5:2], pp[1][5:2], pp[2][2]);
         stage1_op[0][5:2]   =   r1[4:1];
         stage1_op[0][6]     =   r1[0];
 
         r2                  =   mk_CLA(pp[2][7:4], pp[3][7:4], pp[4][4]);
         stage1_op[1][7:4]   =   r2[4:1];
         stage1_op[1][8]     =   r2[0];
 
         r3                  =   mk_CLA(pp[4][9:6], pp[5][9:6], pp[0][6]);
         stage1_op[2][9:6]   =   r3[4:1];
         stage1_op[2][10]    =   r3[0];
 
         r4                  =   mk_CLA(pp[6][13:10], pp[7][13:10], pp[5][10]);
         stage1_op[1][13:10]   =   r4[4:1];
         stage1_op[1][14]      =   r4[0];
 
         r5                  =   mk_CLA({pp[4][11],pp[3][10],pp[2][9:8]}, {pp[5][11],pp[4][10],pp[3][9:8]}, pp[1][8]);
         stage1_op[0][11:8]  =   r5[4:1];
         stage1_op[0][12]    =   r5[0];
 
         r6                  =   mk_CLA(pp[6][9:6], {pp[7][9:7],pp[1][6]}, 1'b0);
         stage1_op[3][9:6]   =   r6[4:1];
         stage1_op[3][10]    =   r6[0];
 
         stage1_op[0][15:13] =   {1'b0, pp[7][14],1'b0};
         stage1_op[0][1:0]   =   pp[0][1:0];
         stage1_op[0][7]     =   pp[0][7];
         stage1_op[1][3:0]   =   {pp[2][3],1'b0, pp[1][1], {1'b0}};
         stage1_op[1][9]     =   1'b0;
         stage1_op[1][15]    =   1'b0;                                                                 
         stage1_op[2][15:11] =   {3'b0,pp[5][12],1'b0};
         stage1_op[2][5:0]   =   {pp[4][5],1'b0,pp[3][3], 3'b0};
         stage1_op[3][15:11] =   5'b0;
         stage1_op[3][5:0]   =   {pp[5][5],5'b0};
         stage1_op[4][15:0]  =   {7'b0,1'b0,pp[1][7],7'b0}; 
 
 
    //STAGE 2: Reduction using CLA
         Bit#(16)        stage2_op[3];
         Bit#(5)         o1,o2,o3;
 
         o1                  =   mk_CLA(stage1_op[0][6:3],stage1_op[1][6:3],stage1_op[2][3]);
         stage2_op[0][6:3]   =   o1[4:1];
         stage2_op[0][7]     =   o1[0];
 
         o2                  =   mk_CLA({stage1_op[0][8:7],stage1_op[2][6:5]}, {stage1_op[1][8:7], stage1_op[3][6:5]}, 1'b0);
         stage2_op[1][8:5]   =   o2[4:1];
         stage2_op[1][9]     =   o2[0];
 
         o3                  =   mk_CLA(stage1_op[2][10:7], stage1_op[3][10:7], stage1_op[4][7]);
         stage2_op[2][10:7]  =   o3[4:1];
         stage2_op[2][11]    =   o3[0];
 
         stage2_op[0][15:8]  =   {1'b0,stage1_op[0][14],stage1_op[1][13],stage1_op[0][12:9],stage1_op[4][8]};
         stage2_op[0][2:0]   =   stage1_op[0][2:0];
         stage2_op[1][4:0]   =   {3'b0, stage1_op[1][1], 1'b0};
         stage2_op[1][15:10] =   {1'b0,stage1_op[1][14],1'b0,stage1_op[1][12:10]};
         stage2_op[2][6:0]   =   7'd0;
         stage2_op[2][15:12] =   {1'b0,2'b0,stage1_op[2][12]};
     
    //Stage 3: Reduction using HA and FA
         Bit#(16)        stage3_op[2];
         Bit#(2)         s1,s2,s3,s4,s5,s6;
 
         s1                  =   mk_HA(stage2_op[0][7], stage2_op[1][7]);
         stage3_op[0][7]     =   s1[1];
         stage3_op[1][8]     =   s1[0];
 
         s2                  =   mk_FA(stage2_op[0][8],stage2_op[1][8],stage2_op[2][8]);
         stage3_op[0][8]     =   s2[1];
         stage3_op[1][9]     =   s2[0];
 
         s3                  =   mk_FA(stage2_op[0][9],stage2_op[1][9],stage2_op[2][9]);
         stage3_op[0][9]     =   s3[1];
         stage3_op[1][10]    =   s3[0];
 
         s4                  =   mk_FA(stage2_op[0][10],stage2_op[1][10],stage2_op[2][10]);
         stage3_op[0][10]    =   s4[1];
         stage3_op[1][11]    =   s4[0];
 
         s5                  =   mk_FA(stage2_op[0][11],stage2_op[1][11],stage2_op[2][11]);
         stage3_op[0][11]    =   s5[1];
         stage3_op[1][12]    =   s5[0];
 
         s6                  =   mk_FA(stage2_op[0][12],stage2_op[1][12],stage2_op[2][12]);
         stage3_op[0][12]    =   s6[1];
         stage3_op[1][13]    =   s6[0];
 
         stage3_op[0][15:13] = {1'b0,stage2_op[0][14:13]};
         stage3_op[0][6:0]   = stage2_op[0][6:0];
         stage3_op[1][15:14] = {1'b0,stage2_op[1][14]};
         stage3_op[1][7:0]   = {stage2_op[2][7], stage2_op[1][6:5], 3'b0, stage2_op[1][1], 1'b0};
 
 
     //STAGE 4: Vector Merge Stage
     
 
         Bit#(16)        stage4_op;
         Bit#(4)         t = 4'd0;
         Bit#(5)         c1,c2,c3,c4;
 
         c1                  =   mk_CLA(stage3_op[0][3:0],stage3_op[1][3:0], 1'b0);
         stage4_op[3:0]      =   c1[4:1];
         t[0]                =   c1[0];
 
         c2                  =   mk_CLA(stage3_op[0][7:4],stage3_op[1][7:4], t[0]);
         stage4_op[7:4]      =   c2[4:1];
         t[1]                =   c2[0];
 
         c3                  =   mk_CLA(stage3_op[0][11:8],stage3_op[1][11:8], t[1]);
         stage4_op[11:8]     =   c3[4:1];
         t[2]                =   c3[0];
 
         c4                  =   mk_CLA({1'b0,stage3_op[0][14:12]},{1'b0,stage3_op[1][14:12]}, t[2]);
         stage4_op[15:12]    =   c4[4:1];
 
         return stage4_op;
 
 endfunction:unsignedMul8
 
 //SubModules for Unsigned Multiplier:
 
 //1. 4-bit Carry Lookahead Adder
 function Bit#(5) mk_CLA(Bit#(4) a, Bit#(4) b, bit cin);
     Bit#(4)             g,p,sum,carrrg_b;
     bit                 cout;
     g               =   a&b;
     p               =   a^b;
     carrrg_b[0]     =   cin;
     carrrg_b[1]     =   g[0] | p[0]&cin;
     carrrg_b[2]     =   g[1] | p[1]&g[0] | p[1]&p[0]&cin;
     carrrg_b[3]     =   g[2] | p[2]&g[1] | p[2]&p[1]&g[0] | p[2]&p[1]&p[0]&cin;
     cout            =   g[3] | p[3]&g[2] | p[3]&p[2]&g[1] | p[3]&p[2]&p[1]&g[0] | p[3]&p[2]&p[1]&p[0]&cin; 
     sum             =   p ^ carrrg_b;
     return    {sum, cout};
 endfunction
 
 //2. Half Adder
 function Bit#(2) mk_HA(bit a, bit b);
     Bit#(2) sum;
     sum[1] = a^b;
     sum[0] = a&b;
     return sum;
 endfunction
 
 //3. Full Adder
 function Bit#(2) mk_FA(bit a, bit b, bit cin);
    Bit#(2) sum;
    sum[1] = a^b^cin;
    sum[0] = (a&b) | (a^b)&cin;
    return sum;
 endfunction
 //-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 

//5. Exponent Increment/Decrement Block
function Bit#(8) exp_adjust(Bit#(1) mode, Bit#(8) a, Bit#(5) b);
    Bit#(8)   out;
    Bit#(8)   op1   =   extend(a);
    Bit#(8)   op2   =   extend(b);
    
    out   =   ( mode == 0 ) ? op1 + op2 : op1 - op2;                   //If mant is left-shifted; then subtract the shift count from exponent
    return    out;                                                     //Else if mant is not normalized (eg: 11.110...) then we need to add the normalized count to exponent
endfunction


//6. Mantissa Adder/Subtractor
//       Description: Mode==1 --> Substraction
//                    Mode==0 --> Addition
function Bit#(29) mantiAddSub(Bit#(1) mode, Bit#(1) sgn_a, Bit#(27) a, Bit#(1) sgn_b, Bit#(27) b);
    Bit#(29)    out;
    Bit#(29)    a_temp    =   (a > b) ? zeroExtend(a) : zeroExtend(b);     //a_temp will have the greater mantissa
    Bit#(29)    b_temp    =   (a > b) ? zeroExtend(b) : zeroExtend(a);
    Bit#(1)     sign      =   (a > b) ? sgn_a : sgn_b;
    
    out   =   ( mode == 0 ) ? (a_temp + b_temp) : (a_temp - b_temp); 
    return    {sign,out[27:0]};

endfunction


//7. Mantissa Left Shift
//       Description: To normalize the added mantissa (eg: 0.0001101.. --> 1.101..), we need to shift it by (leading zero count + 1)
function Bit#(26) leftshift(Bit#(26) in, Bit#(5) shift);
    return    in << shift;
endfunction


//8. Leading Zero Counter
//Description: After addition/subtraction we need to normalize the mantissa as 1.xxx according to IEEE 754 FP format
//             So, we use a combinational circuit to determine the leading zero count in the resultant mantissa
function Bit#(2) encode(Bit#(2) in);
    return    (in[1]==1) ? 2'b00 : ((in[0]==1) ? 2'b01 : 2'b10 );
endfunction



module mk_lzcounter(Ifc_lzcounter);
    method Bit#(5) get(Bit#(26) mantissa);
    Bit#(32)       x              =   {mantissa[25:0], '0};
    Bit#(32)       twobytwo       =   ?;
    Bit#(24)       assemble_s1    =   ?;
    Bit#(16)       assemble_s2    =   ?;
    Bit#(10)       assemble_s3    =   ?;
    Bit#(5)        out;
    
    for(int i=0; i<=30; i=i+2) begin
        twobytwo[i+1:i]= encode(x[i+1:i]);
    end
     assemble_s1[23:21]   =     (twobytwo[31]&twobytwo[29])== 1 ? 3'b100 : ( (~twobytwo[31]==1) ? {1'b0,twobytwo[31:30]} : {2'b01,twobytwo[28]});
     assemble_s1[20:18]   =     (twobytwo[27] & twobytwo[25])== 1 ? 3'b100 : ( (~twobytwo[27] == 1) ? {1'b0,twobytwo[27:26]} : {2'b01,twobytwo[24]});
     assemble_s1[17:15]   =     (twobytwo[23] & twobytwo[21]) == 1 ? 3'b100 : ( (~twobytwo[23] == 1) ? {1'b0,twobytwo[23:22]} : {2'b01,twobytwo[20]});
     assemble_s1[14:12]   =     (twobytwo[19] & twobytwo[17]) == 1 ? 3'b100 : ( (~twobytwo[19] == 1) ? {1'b0,twobytwo[19:18]} : {2'b01,twobytwo[16]});
     assemble_s1[11:9]    =     (twobytwo[15] & twobytwo[13]) == 1 ? 3'b100 : ( (~twobytwo[15] == 1) ? {1'b0,twobytwo[15:14]} : {2'b01,twobytwo[12]});
     assemble_s1[8:6]     =     (twobytwo[11] & twobytwo[9])== 1 ? 3'b100 : ( (~twobytwo[11] == 1) ? {1'b0,twobytwo[11:10]} : {2'b01,twobytwo[8]});
     assemble_s1[5:3]     =     (twobytwo[7] & twobytwo[5])== 1 ? 3'b100 : ( (~twobytwo[7] == 1) ? {1'b0,twobytwo[7:6]} : {2'b01,twobytwo[4]});
     assemble_s1[2:0]     =     (twobytwo[3] & twobytwo[1])== 1 ? 3'b100 : ( (~twobytwo[3] == 1) ? {1'b0,twobytwo[3:2]} : {2'b01,twobytwo[0]});
    
     assemble_s2[15:12]   =     (assemble_s1[23] & assemble_s1[20]) == 1 ? 4'b1000 : ((~assemble_s1[23] == 1) ? {1'b0,assemble_s1[23:21]} : {2'b01,assemble_s1[19:18]});
     assemble_s2[11:8]    =     (assemble_s1[17] & assemble_s1[14]) == 1 ? 4'b1000 : ((~assemble_s1[17] == 1) ? {1'b0,assemble_s1[17:15]} : {2'b01,assemble_s1[13:12]});
     assemble_s2[7:4]     =     (assemble_s1[11] & assemble_s1[8]) == 1 ? 4'b1000 : ((~assemble_s1[11] == 1) ? {1'b0,assemble_s1[11:9]} : {2'b01,assemble_s1[7:6]});
     assemble_s2[3:0]     =     (assemble_s1[5] & assemble_s1[2]) == 1 ? 4'b1000 : ((~assemble_s1[5] == 1) ? {1'b0,assemble_s1[5:3]} : {2'b01,assemble_s1[1:0]});

     assemble_s3[9:5]     =     (assemble_s2[15] & assemble_s2[11]) == 1 ? 5'b10000 : ((~assemble_s2[15] == 1) ? {1'b0,assemble_s2[15:12]} : {2'b01,assemble_s2[10:8]});
     assemble_s3[4:0]     =     (assemble_s2[7] & assemble_s2[3]) == 1 ? 5'b10000 : ((~assemble_s2[7] == 1) ? {1'b0,assemble_s2[7:4]} : {2'b01,assemble_s2[2:0]});

     out    =   (assemble_s3[9] & assemble_s3[4]) == 1 ? 5'b00000 : ((~assemble_s3[9] == 1) ? assemble_s3[9:5] : {1'b1,assemble_s3[3:0]});
    //We add 1 to account for total left shift of mantissa
    
    return out+1;               
    
    endmethod 
endmodule

module mk_int8_mac(Ifc_int8);
    Reg#(Bit#(8))       rg_a    <-  mkReg(?);
    Reg#(Bit#(8))       rg_b    <-  mkReg(?);
    Reg#(Bit#(32))      rg_c    <-  mkReg(?);
    Wire#(Bit#(32))      out     <-  mkWire();
    
   

    //Ifc_signed_mul8 obj_mul <- mk_signed_mul8;

    rule r1;
       // $display("Inn:  %b", rg_a );
        Bit#(16) p1;
        Bit#(5) s1,s2,s3,s4,s5,s6,s7,s8;

        p1 = func_signed_mul8(rg_a,rg_b);
       // $display("Multiply Result: %d", p1);

        s1 = func_CLA(p1[3:0],rg_c[3:0],1'b0);
        s2 = func_CLA(p1[7:4],rg_c[7:4],s1[4]);
        s3 = func_CLA(p1[11:8],rg_c[11:8],s2[4]);
        s4 = func_CLA(p1[15:12],rg_c[15:12],s3[4]);
        s5 = func_CLA({p1[15],p1[15],p1[15],p1[15]},rg_c[19:16],s4[4]);
        s6 = func_CLA({p1[15],p1[15],p1[15],p1[15]},rg_c[23:20],s5[4]);
        s7 = func_CLA({p1[15],p1[15],p1[15],p1[15]},rg_c[27:24],s6[4]);
        s8 = func_CLA({p1[15],p1[15],p1[15],p1[15]},rg_c[31:28],s7[4]);
        out <= {s8[3:0],s7[3:0],s6[3:0],s5[3:0],s4[3:0],s3[3:0],s2[3:0],s1[3:0]};
    endrule
    
    
    method Action       put(Bit#(8) a, Bit#(8) b, Bit#(32) c);
        rg_a <= a;
        rg_b <= b;
        rg_c <= c;
    endmethod

    method Bit#(32)     get_out();
        return out;
    endmethod
   
endmodule



function Bit#(16) func_signed_mul8(Bit#(8) x, Bit#(8) y) provisos(Bitwise#(Bit#(8)));
   
        Bit#(8) pp0,pp1,pp2,pp3,pp4,pp5,pp6,pp7;        //FOR STORING PARTIAL PRODUCTS
        Bit#(5) s11, s12, s13, s14, s15, s16;           //FOR STORING STAGE 1 RESULTS
        Bit#(5) s21,s22,s23;                           //FOR STORING STAGE 2 RESULTS 
        Bit#(2) s31,s32,s33,s34,s35,s36;                //FOR STORING STAGE 3 RESULTS
        Bit#(5) s41,s42,s43,s44;                       //FOR STORING STAGE 4 RESULTS
        Bit#(2) temp1,temp2,temp3,temp4,temp5,temp6;
        Bit#(16) z;

        //PARTIAL PRODUCTS CALCULATION:
        pp0             =       {(~((x[7])&(y[0]))),((x[6:0])&(signExtend(y[0])))};
        pp1             =       {(~((x[7])&(y[1]))),((x[6:0])&(signExtend(y[1])))};
        pp2             =       {(~((x[7])&(y[2]))),((x[6:0])&(signExtend(y[2])))};
        pp3             =       {(~((x[7])&(y[3]))),((x[6:0])&(signExtend(y[3])))};
        pp4             =       {(~((x[7])&(y[4]))),((x[6:0])&(signExtend(y[4])))};
        pp5             =       {(~((x[7])&(y[5]))),((x[6:0])&(signExtend(y[5])))};
        pp6             =       {(~((x[7])&(y[6]))),((x[6:0])&(signExtend(y[6])))};
        pp7             =       {((x[7])&(y[7])),(~((x[6:0])&(signExtend(y[7]))))};

        //STAGE 1 REDUCTION:
        s11             =       func_CLA(pp0[5:2],pp1[4:1],pp2[0]);
        s12             =       func_CLA(pp2[5:2],pp3[4:1],pp4[0]);
        s13             =       func_CLA(pp4[5:2],pp5[4:1],pp6[0]);
        s14             =       func_CLA({pp6[3:1],pp0[6]},{pp7[2:0],pp1[5]},1'b0);
        s15             =       func_CLA({pp4[7],pp3[7],pp2[7],pp1[7]},{pp5[6],pp4[6],pp3[6],pp2[6]},1'b1);
        s16             =       func_CLA(pp6[7:4],pp7[6:3],pp5[5]);

        //STAGE 2 REDUCTION:
        s21             =       func_CLA(s11[4:1],{s12[2:0],pp2[1]},pp3[0]);
        s22             =       func_CLA({s13[2:0],pp4[1]},{s14[2:0],pp5[0]},1'b0);
        s23             =       func_CLA({s13[4:3],s15[0],pp0[7]},{s14[4:3],s12[4:3]},pp1[6]);

        //STAGE 3 REDUCTION:
        temp1           =       func_HA(s21[4],s22[2]);
        s31[0]          =       temp1[1];  //S
        s31[1]          =       temp1[0];  //Cout

        temp2           =       func_FA(pp3[5],s22[3],s23[1]);
        s32[0]          =       temp2[1];
        s32[1]          =       temp2[0];

        temp3           =       func_FA(s15[1],s22[4],s23[2]);
        s33[0]          =       temp3[1];
        s33[1]          =       temp3[0];

        temp4           =       func_FA(s15[2],s16[0],s23[3]);
        s34[0]          =       temp4[1];
        s34[1]          =       temp4[0];

        temp5           =       func_FA(s15[3],s16[1],s23[4]);
        s35[0]          =       temp5[1];
        s35[1]          =       temp5[0];

        temp6           =       func_FA(s15[4],s16[2],pp5[7]);
        s36[0]          =       temp6[1];
        s36[1]          =       temp6[0];

        //VECTOR MERGE STAGE:
        s41             =       func_CLA({s21[1:0],s11[0],pp0[1]},{3'b0,pp1[0]},1'b0);
        s42             =       func_CLA({s32[0],s31[0],s21[3:2]},{s31[1],s23[0],s22[1:0]},s41[4]);
        s43             =       func_CLA({s36[0],s35[0],s34[0],s33[0]},{s35[1],s34[1],s33[1],s32[1]},s42[4]);
        s44             =       func_CLA({1'b0,1'b1,pp7[7],s16[3]},{2'b0,s16[4],s36[1]},s43[4]);

        //ASSIGNING OUTPUTS:
        z[0]            =       pp0[0];
        z[1]            =       s41[0];
        z[2]            =       s41[1];
        z[3]            =       s41[2];
        z[4]            =       s41[3];
        z[5]            =       s42[0];
        z[6]            =       s42[1];
        z[7]            =       s42[2];
        z[8]            =       s42[3];
        z[9]            =       s43[0];
        z[10]           =       s43[1];
        z[11]           =       s43[2];
        z[12]           =       s43[3];
        z[13]           =       s44[0];
        z[14]           =       s44[1];
        z[15]           =       s44[2];   

        return z;

endfunction



//1. 4-bit Carry Lookahead Adder
function Bit#(5) func_CLA(Bit#(4) rg_a, Bit#(4) rg_b, bit cin);
    Bit#(4)             g,p,sum,carrrg_b;
    bit                 cout;
    g               =   rg_a&rg_b;
    p               =   rg_a^rg_b;
    carrrg_b[0]     =   cin;
    carrrg_b[1]     =   g[0] | p[0]&cin;
    carrrg_b[2]     =   g[1] | p[1]&g[0] | p[1]&p[0]&cin;
    carrrg_b[3]     =   g[2] | p[2]&g[1] | p[2]&p[1]&g[0] | p[2]&p[1]&p[0]&cin;
    cout            =   g[3] | p[3]&g[2] | p[3]&p[2]&g[1] | p[3]&p[2]&p[1]&g[0] | p[3]&p[2]&p[1]&p[0]&cin; 
    sum             =   p ^ carrrg_b;
    return    {cout, sum};
endfunction

//2. Half Adder
function Bit#(2) func_HA(bit a, bit b);
    Bit#(2) sum;
    sum[1]          =   a^b;
    sum[0]          =   a&b;
    return sum;
endfunction

//3. Full Adder
function Bit#(2) func_FA(bit a, bit b, bit cin);
    Bit#(2) sum;
    sum[1]          =   a^b^cin;
    sum[0]          =   (a&b) | (a^b)&cin;
    return sum;
endfunction


endpackage


