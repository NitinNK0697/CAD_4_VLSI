package int8_mac;

    interface Ifc_int8;
        method Action       put(Bit#(8) a, Bit#(8) b, Bit#(32) c);
        method Bit#(32)     get();
    endinterface

    // module mk_Test(Empty);
    //     Reg#(int)           count <- mkReg(1);
    //     Reg#(Int#(8))       rg_a  <- mkReg(-12);        
    //     Reg#(Int#(8))       rg_b  <- mkReg(4);
    //     Reg#(Int#(32))      rg_c  <- mkReg(50);

    //     Ifc_int8 obj_mac <- mk_int8_mac;

    //     rule inp(count==1);
    //         obj_mac.put(pack(rg_a),pack(rg_b),pack(rg_c));
    //         count <= count+1;
    //     endrule

    //     rule stall(count < 4 && count>1);
    //         count <= count+1;
    //     endrule

    //     rule res;
    //         Int#(32) rg_m = unpack(obj_mac.get());
    //       //  $display("Inputs: %d, %d, %d", rg_a, rg_b, rg_c);
    //         $display("%d  INT8 MAC O/P: %d",count, rg_m);
    //     endrule

    //     rule stop(count==4);
    //         $finish(0);
    //     endrule

    // endmodule
    //Test Bench
 //Test Bench
 module mk_Tb(Empty);
    Reg#(Bit#(16))      rg_a            <-  mkReg(?);        
    Reg#(Bit#(16))      rg_b            <-  mkReg(?);
    Reg#(Bit#(32))      rg_c            <-  mkReg(?);
    Reg#(Bit#(1))       rg_r            <-  mkReg(1'b1);
    Reg#(Int#(32))      count           <-  mkReg(0);
    Reg#(Int#(32))      failed_cases    <-  mkReg(0);

    Reg#(Bit#(16)) rg_af    <-  mkReg(?);        
    Reg#(Bit#(16)) rg_bf    <-  mkReg(?); //unpack({1'b1, 8'd0, 23'd0})
    Reg#(Bit#(32)) rg_cf    <-  mkReg(?);
    Reg#(Bit#(32)) rg_macf    <-  mkReg(?);
    Reg#(Bit#(16)) as1      <-  mkReg(?);        
    Reg#(Bit#(16)) bs1      <-  mkReg(?); //unpack({1'b1, 8'd0, 23'd0})
    Reg#(Bit#(32)) cs1      <-  mkReg(?);
    Reg#(Bit#(32)) macs1      <-  mkReg(?);

    Ifc_int8     mac                     <-  mk_int8_mac;  
    Ifc_inp     obj_inp                 <-  mk_inp_read;        

    rule inp;
        obj_inp.put_r(1'b1);
        Bit#(8) a = obj_inp.get_a();
        Bit#(8) b = obj_inp.get_b();
        Bit#(32) c = obj_inp.get_c();
        Bit#(32) mac_1 = obj_inp.get_mac();
        mac.put(a,b,c);
        rg_af <= unpack({8'd0,a});
        rg_bf <= unpack({8'd0,b});
        rg_cf <= unpack(c);
        rg_macf <= unpack(mac_1);
        count <= count+1;
    endrule

    rule pipe;
        //$display("Count: %d --A: %b", count, pack(rg_af));
        as1 <= rg_af;
        bs1 <= rg_bf;
        cs1 <= rg_cf;
        macs1 <= rg_macf;
    endrule

    rule result;
        Bit#(32) mac_result = mac.get();
        if ((mac_result!=macs1))
            begin
                failed_cases <= failed_cases + 1;
                $display("%d --Expected O/P --- %b, Actual O/P-- %b",count,macs1, mac_result);
            end
        //if(count>=11)
        //$display("%d A: %b  B: %b  C:%b \n--Expected O/P --- %b, Actual O/P-- %b",count,pack(as1),pack(rg_bf),pack(rg_cf),pack(as1*rg_bf+rg_cf), mac_result);
        if(count==1052)
            begin
                $display("Failed for %d cases", failed_cases);
                $finish(0);
            end
    endrule
endmodule



(*always_ready*)
interface Ifc_inp;
    method Action put_r( Bit#(1) read);
    method Bit#(8) get_a;   
    method Bit#(8) get_b;
    method Bit#(32) get_c;
    method Bit#(32) get_mac;
endinterface

import "BVI" file_read = 
module mk_inp_read ( Ifc_inp ) ;

    method out_a get_a;
    method out_b get_b;
    method out_c get_c;
    method out_mac get_mac;
    method put_r(read) enable(EN);

    default_clock clk(clk, (*unused*) CLK_GATE);
    //default_reset rst(rst);
    schedule (put_r) CF (get_a);
    schedule (put_r) CF (get_b);
    schedule (put_r) CF (get_c);
    schedule (put_r) CF (get_mac);

endmodule  

    module mk_int8_mac(Ifc_int8);
        Reg#(Bit#(8))       rg_a    <-  mkReg(?);
        Reg#(Bit#(8))       rg_b    <-  mkReg(?);
        Reg#(Bit#(32))      rg_c    <-  mkReg(?);
        Reg#(Bit#(32))      out     <-  mkReg(?);

        //Ifc_signed_mul8 obj_mul <- mk_signed_mul8;

        rule r1;
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

        method Bit#(32)     get();
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