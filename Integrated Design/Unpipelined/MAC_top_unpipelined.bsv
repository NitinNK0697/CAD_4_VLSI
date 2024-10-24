package MAC_top_unpipelined;

import BFloat16_MAC_unpipe::*;
import int8_mac::*;

interface Ifc_MAC_bfloat;
   
    method Action       put_inp_A(Bit#(16) a);
    method Action       put_inp_B(Bit#(16) b);
    method Action       put_inp_C(Bit#(32) c);
    method Action       put_inp_sel(Bit#(1) sel);
    method Bit#(32)     get_mac_op();
endinterface

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

    module mkTb(Empty);
        Reg#(Bit#(16))      rg_A        <-    mkReg('b00100100);      
        Reg#(Bit#(16))      rg_B        <-    mkReg('b10000001);     
        Reg#(Bit#(32))      rg_C        <-    mkReg(32'b11111111111111111111111000001001);     
        Reg#(Bit#(1))       rg_sel      <-    mkReg(1);
        Reg#(Int#(32))      count       <-    mkReg(0);

        Ifc_MAC_bfloat mac_top <- mk_mac;

        rule r1;
            mac_top.put_inp_A(rg_A);
            mac_top.put_inp_B(rg_B);
            mac_top.put_inp_C(rg_C);
            mac_top.put_inp_sel(rg_sel);
            count <= count+1;
        endrule

        rule r2;
            Bit#(32) out = mac_top.get_mac_op();
            $display("%d Inputs-- %b * %b + %b = %b",count, rg_A, rg_B, rg_C, out);
        endrule

        rule r3;
            if(count==4)
            $finish();
        endrule

    endmodule

    endpackage




    
