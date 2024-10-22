package multiplier;
interface Ifc_signedMul8;
        method Action put_inp(Bit#(8) a, Bit#(8) b);
        method Bit#(16)     get();
    endinterface

    module mk_Test(Empty);
        Reg#(int)           count <- mkReg(1);
        Reg#(Int#(8))       rg_a  <- mkReg(100);        
        Reg#(Int#(8))       rg_b  <- mkReg(-100);
        Reg#(Int#(32))      rg_c  <- mkReg(500);

        Ifc_signedMul8 obj_mac <- mk_signed_mul8;

        rule inp(count==1);
            obj_mac.put_inp(pack(rg_a),pack(rg_b));
            count <= count+1;
        endrule

        rule stall(count < 11 && count>1);
            count <= count+1;
        endrule

        rule res;
            Int#(16) rg_m = unpack(obj_mac.get());
          //  $display("Inputs: %d, %d, %d", rg_a, rg_b, rg_c);
            $display("%d  INT8 MAC O/P: %d",count, rg_m);
        endrule

        rule stop(count==11);
            $finish(0);
        endrule

    endmodule

    module mk_signed_mul8(Ifc_signedMul8) provisos(Bitwise#(Bit#(8)));

        Reg#(Bit#(8)) x <- mkReg(?);
        Reg#(Bit#(8)) y <- mkReg(?);
        Reg#(Bit#(16)) z <- mkReg(?);
       
        //REGISTERS FOR STORING STAGE 1 RESULTS
        Reg#(Bit#(1)) pp00 <- mkReg(0); 
        Reg#(Bit#(1)) pp01 <- mkReg(0);
        Reg#(Bit#(1)) pp10 <- mkReg(0);
        Reg#(Bit#(1)) pp07 <- mkReg(0);
        Reg#(Bit#(1)) pp16 <- mkReg(0);
        Reg#(Bit#(1)) pp21 <- mkReg(0);
        Reg#(Bit#(1)) pp30 <- mkReg(0);
        Reg#(Bit#(1)) pp35 <- mkReg(0);
        Reg#(Bit#(1)) pp41 <- mkReg(0);
        Reg#(Bit#(1)) pp50 <- mkReg(0);
        Reg#(Bit#(1)) pp57 <- mkReg(0);
        Reg#(Bit#(1)) pp77 <- mkReg(0);


        Reg#(Bit#(5)) s11 <- mkReg(0); 
        Reg#(Bit#(5)) s12 <- mkReg(0);
        Reg#(Bit#(5)) s13 <- mkReg(0);
        Reg#(Bit#(5)) s14 <- mkReg(0);
        Reg#(Bit#(5)) s15 <- mkReg(0);
        Reg#(Bit#(5)) s16 <- mkReg(0);
           
        //REGISTERS FOR STORING STAGE 2 RESULTS 
        Reg#(Bit#(1)) pp00_s2 <- mkReg(0); 
        Reg#(Bit#(1)) pp10_s2 <- mkReg(0);
        Reg#(Bit#(1)) pp01_s2 <- mkReg(0);
        Reg#(Bit#(1)) pp35_s2 <- mkReg(0);
        Reg#(Bit#(1)) pp57_s2 <- mkReg(0);
        Reg#(Bit#(1)) pp77_s2 <- mkReg(0);

        Reg#(Bit#(5)) s21 <- mkReg(0); 
        Reg#(Bit#(5)) s22 <- mkReg(0); 
        Reg#(Bit#(5)) s23 <- mkReg(0);   

        Reg#(Bit#(5)) s15_s2 <- mkReg(0); 
        Reg#(Bit#(5)) s11_s2 <- mkReg(0); 
        Reg#(Bit#(5)) s16_s2 <- mkReg(0);   

        //REGISTER FOR STORING STAGE 3 RESULTS
        Reg#(Bit#(2)) s31 <- mkReg(0);
        Reg#(Bit#(2)) s32 <- mkReg(0); 
        Reg#(Bit#(2)) s33 <- mkReg(0); 
        Reg#(Bit#(2)) s34 <- mkReg(0); 
        Reg#(Bit#(2)) s35 <- mkReg(0); 
        Reg#(Bit#(2)) s36 <- mkReg(0); 

        Reg#(Bit#(1)) pp00_s3         <-       mkReg(0);
        Reg#(Bit#(1)) pp01_s3         <-       mkReg(0);
        Reg#(Bit#(1)) pp10_s3         <-       mkReg(0);
        Reg#(Bit#(1)) pp77_s3         <-       mkReg(0);
        Reg#(Bit#(5)) s11_s3          <-       mkReg(0);
        Reg#(Bit#(5)) s16_s3          <-       mkReg(0);
        Reg#(Bit#(5)) s21_s3          <-       mkReg(0);
        Reg#(Bit#(5)) s22_s3          <-       mkReg(0);
        Reg#(Bit#(5)) s23_s3          <-       mkReg(0);

        //REGISTERS FOR STORING STAGE 4 RESULTS   
        Reg#(Bit#(5)) s41           <- mkReg(0); 
        Reg#(Bit#(5)) s42           <- mkReg(0);
        Reg#(Bit#(5)) s43           <- mkReg(0);
        Reg#(Bit#(5)) s44           <- mkReg(0);      
        Reg#(Bit#(1)) pp00_s4         <-       mkReg(0);

        rule stage1;
            Bit#(8) pp0,pp1,pp2,pp3,pp4,pp5,pp6,pp7;
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
            s11             <=       func_CLA(pp0[5:2],pp1[4:1],pp2[0]);
            s12             <=       func_CLA(pp2[5:2],pp3[4:1],pp4[0]);
            s13             <=       func_CLA(pp4[5:2],pp5[4:1],pp6[0]);
            s14             <=       func_CLA({pp6[3:1],pp0[6]},{pp7[2:0],pp1[5]},1'b0);
            s15             <=       func_CLA({pp4[7],pp3[7],pp2[7],pp1[7]},{pp5[6],pp4[6],pp3[6],pp2[6]},1'b1);
            s16             <=       func_CLA(pp6[7:4],pp7[6:3],pp5[5]);

            pp00            <=       pp0[0];
            pp01            <=       pp0[1];
            pp10            <=       pp1[0];
            pp07            <=       pp0[7];
            pp16            <=       pp1[6];
            pp21            <=       pp2[1];
            pp30            <=       pp3[0];
            pp35            <=       pp3[5];
            pp41            <=       pp4[1];
            pp50            <=       pp5[0];
            pp57            <=       pp5[7];
            pp77            <=       pp7[7];
        endrule

        rule stage2;
            //STAGE 2 REDUCTION:
            s21             <=       func_CLA(s11[4:1],{s12[2:0],pp21},pp30);
            s22             <=       func_CLA({s13[2:0],pp41},{s14[2:0],pp50},1'b0);
            s23             <=       func_CLA({s13[4:3],s15[0],pp07},{s14[4:3],s12[4:3]},pp16);

            pp00_s2         <=       pp00;
            pp01_s2         <=       pp01;
            pp10_s2         <=       pp10;
            pp35_s2         <=       pp35;
            pp57_s2         <=       pp57;
            pp77_s2         <=       pp77;
            s15_s2          <=       s15;
            s11_s2          <=       s11;
            s16_s2          <=       s16;

        endrule

        rule stage3;

            Bit#(2) temp1,temp2,temp3,temp4,temp5,temp6;
            //STAGE 3 REDUCTION:
            temp1           =       func_HA(s21[4],s22[2]);
            temp2           =       func_FA(pp35_s2,s22[3],s23[1]);
            temp3           =       func_FA(s15_s2[1],s22[4],s23[2]);
            temp4           =       func_FA(s15_s2[2],s16_s2[0],s23[3]);
            temp5           =       func_FA(s15_s2[3],s16_s2[1],s23[4]);
            temp6           =       func_FA(s15_s2[4],s16_s2[2],pp57_s2);

            s31             <=      {temp1[0],temp1[1]};
            s32             <=      {temp2[0],temp2[1]};
            s33             <=      {temp3[0],temp3[1]};
            s34             <=      {temp4[0],temp4[1]};
            s35             <=      {temp5[0],temp5[1]};
            s36             <=      {temp6[0],temp6[1]};

            pp00_s3         <=       pp00_s2;
            pp01_s3         <=       pp01_s2;
            pp10_s3         <=       pp10_s2;
            pp77_s3         <=       pp77_s2;
            s11_s3          <=       s11_s2;
            s16_s3          <=       s16_s2;
            s21_s3          <=       s21;
            s22_s3          <=       s22;
            s23_s3          <=       s23;
        endrule

        rule stage4;
            //VECTOR MERGE STAGE:
            s41             <=       func_CLA({s21_s3[1:0],s11_s3[0],pp01_s3},{3'b0,pp10_s3},1'b0);
            s42             <=       func_CLA({s32[0],s31[0],s21_s3[3:2]},{s31[1],s23_s3[0],s22_s3[1:0]},s41[4]);
            s43             <=       func_CLA({s36[0],s35[0],s34[0],s33[0]},{s35[1],s34[1],s33[1],s32[1]},s42[4]);
            s44             <=       func_CLA({1'b0,1'b1,pp77_s3,s16[3]},{2'b0,s16_s3[4],s36[1]},s43[4]);

            pp00_s4         <=       pp00_s3;

        endrule

        rule res1;
             Bit#(16) z_out = {s44[2],s44[1],s44[0],s43[3],s43[2],s43[1],s43[0],s42[3],s42[2],s42[1],s42[0],s41[3],s41[2],s41[1],s41[0],pp00_s4};
             z <= z_out;
        endrule


        method Action put_inp(Bit#(8) a, Bit#(8) b);
            x <= a;
            y <= b;
        endmethod

        method Bit#(16)     get();
            return z;
        endmethod

    endmodule



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