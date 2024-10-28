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


    endpackage




    
