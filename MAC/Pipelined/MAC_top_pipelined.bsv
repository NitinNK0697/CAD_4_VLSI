package MAC_top_pipelined;

import MAC_FP32_round::*;
import int8_pipe_new::*;

interface Ifc_MAC_bfloat;
   
    method Action       put_inp_A(Bit#(16) a);
    method Action       put_inp_B(Bit#(16) b);
    method Action       put_inp_C(Bit#(32) c);
    method Action       put_inp_sel(Bit#(1) sel);
    method Bit#(32)     get_mac_op();
endinterface
(*synthesize*)
module mk_mac(Ifc_MAC_bfloat);
    Reg#(Bit#(16))      rg_A        <-    mkReg(?);      
    Reg#(Bit#(16))      rg_B        <-    mkReg(?);     
    Reg#(Bit#(32))      rg_C        <-    mkReg(?);     
    Reg#(Bit#(1))       rg_sel      <-    mkReg(?);
    Reg#(Bit#(32))      rg_out      <-    mkReg(?);     

    Ifc_bfloat16_mult bfloat        <-  mkBfloat16_mult;
    Ifc_int8          int_8         <-  mk_int8_mac;
    
    // Bit#(16) a_bf = rg_A;
    // Bit#(16) b_bf = rg_B;
    // Bit#(32) c_bf = rg_C;

    // Bit#(8) a_int = rg_A[7:0];
    // Bit#(8) b_int = rg_B[7:0];
    // Bit#(32) c_int= rg_C;

    rule inp;
        if(rg_sel==1)
            int_8.put(rg_A[7:0],rg_B[7:0],rg_C);
        else
            bfloat.put(rg_A,rg_B,rg_C);
    endrule

    rule out;
        if(rg_sel==1)
            rg_out <= int_8.get();
        else
            rg_out <= bfloat.get();
    endrule

    method Action       put_inp_A(Bit#(16) a);
        rg_A <= a;
    endmethod

    method Action       put_inp_B(Bit#(16) b);
        rg_B <= b;
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
    
    endmodule

//     module mkTb(Empty);
//         Reg#(Bit#(16))      rg_A        <-    mkReg(0);      
//         Reg#(Bit#(16))      rg_B        <-    mkReg(0);     
//         Reg#(Bit#(32))      rg_C        <-    mkReg(0);
//         Reg#(Bit#(32))      rg_mac      <-    mkReg(0);
        
//         Reg#(Bit#(16))      rg_A1       <-    mkReg(0);      
//         Reg#(Bit#(16))      rg_B1       <-    mkReg(0);     
//         Reg#(Bit#(32))      rg_C1       <-    mkReg(0);
//         Reg#(Bit#(32))      rg_mac1      <-    mkReg(0);


//         Reg#(Bit#(16))      rg_A2       <-    mkReg(0);      
//         Reg#(Bit#(16))      rg_B2       <-    mkReg(0);     
//         Reg#(Bit#(32))      rg_C2       <-    mkReg(0);
//         Reg#(Bit#(32))      rg_mac2      <-    mkReg(0);
        
//         Reg#(Bit#(1))       rg_sel      <-    mkReg(1);
//         Reg#(Int#(32))      count       <-    mkReg(0);

//         Ifc_MAC_bfloat mac_top <- mk_mac;
//         Ifc_inp     obj_inp                 <-  mk_inp_read;

//         rule r1;
//             obj_inp.put_r(1'b1);
//             Bit#(16) a = obj_inp.get_a();
//             Bit#(16) b = obj_inp.get_b();
//             Bit#(32) c = obj_inp.get_c();
//             Bit#(32) mac = obj_inp.get_mac();


//             mac_top.put_inp_A(a);
//             mac_top.put_inp_B(b);
//             mac_top.put_inp_C(c);
//             mac_top.put_inp_sel(rg_sel);
//             count <= count+1;
//             rg_A<=a;
//             rg_B<=b;
//             rg_C<=c;
//             rg_mac<=mac1;

//         endrule
//         rule p1;
//             rg_A1<=rg_A;
//             rg_B1<=rg_B;
//             rg_C1<=rg_C;
//             rg_mac1<=rg_mac;
//         endrule

//         rule p2;
//             rg_A2<=rg_A1;
//             rg_B2<=rg_B1;
//             rg_C2<=rg_C1;
//             rg_mac2<=rg_mac1;
//         endrule

//         rule r2;
//             Bit#(32) out = mac_top.get_mac_op();
//             if(out!=mac)
//             $display("%d Inputs-- %b * %b + %b = %b",count, rg_A, rg_B, rg_C, out);
//         endrule

//         rule r3;
//             if(count==4)
//             $finish();
//         endrule

//     endmodule

    
// (*always_ready*)
// interface Ifc_inp;
//     method Action put_r( Bit#(1) read);
//     method Bit#(8) get_a;   
//     method Bit#(8) get_b;
//     method Bit#(32) get_c;
//     method Bit#(32) get_mac;
// endinterface

// import "BVI" file_read = 
// module mk_inp_read ( Ifc_inp ) ;

//     method out_a get_a;
//     method out_b get_b;
//     method out_c get_c;
//     method out_mac get_mac;
//     method put_r(read) enable(EN);

//     default_clock clk(clk, (*unused*) CLK_GATE);
//     //default_reset rst(rst);
//     schedule (put_r) CF (get_a);
//     schedule (put_r) CF (get_b);
//     schedule (put_r) CF (get_c);
//     schedule (put_r) CF (get_mac);

// endmodule  


    endpackage




    
