
package sys_arr;

    import mac::*;

    interface Ifc_sys_arr;
        method Action put_A(Bit#(16) a1, Bit#(16) a2, Bit#(16) a3, Bit#(16) a4);
        method Action put_B(Bit#(16) b1, Bit#(16) b2, Bit#(16) b3, Bit#(16) b4);
        method Action put_C(Bit#(32) c1, Bit#(32) c2, Bit#(32) c3, Bit#(32) c4);
        method Action put_sel(Bit#(1) sel);
        method Bit#(32) get_op1();
        method Bit#(32) get_op2();
        method Bit#(32) get_op3();
        method Bit#(32) get_op4();
        
        method Bit#(16) mac1_a();
        method Bit#(16) mac1_b();
        method Bit#(32) mac1_out();
        method Bit#(10) mac1_cnt();
        
        method Bit#(16) mac5_b();
        method Bit#(32) mac5_out();
        
        
        method Bit#(16) mac9_b();
        method Bit#(32) mac9_out();
        
        method Bit#(16) mac13_b();
        method Bit#(32) mac13_out();
        
        method Bit#(16) mac2_a();
        
        method Bit#(16) mac3_a();
        
        method Bit#(16) mac4_a();
        
    endinterface
    
    (*synthesize*)
    module mk_sys_arr(Ifc_sys_arr);

        Wire#(Bit#(16))      rg_A1        <-    mkWire();
        Wire#(Bit#(16))      rg_A2        <-    mkWire();
        Wire#(Bit#(16))      rg_A3        <-    mkWire();
        Wire#(Bit#(16))      rg_A4        <-    mkWire();

        Wire#(Bit#(16))      rg_B1        <-    mkWire();
        Wire#(Bit#(16))      rg_B2        <-    mkWire();
        Wire#(Bit#(16))      rg_B3        <-    mkWire();
        Wire#(Bit#(16))      rg_B4        <-    mkWire();

        Wire#(Bit#(32))      rg_C1        <-    mkWire();
        Wire#(Bit#(32))      rg_C2        <-    mkWire();
        Wire#(Bit#(32))      rg_C3        <-    mkWire();
        Wire#(Bit#(32))      rg_C4        <-    mkWire();

        Reg#(Bit#(1))       rg_sel      <-     mkWire();

        Ifc_MAC mac1 <- mk_mac;
        Ifc_MAC mac2 <- mk_mac;
        Ifc_MAC mac3 <- mk_mac;
        Ifc_MAC mac4 <- mk_mac;
        Ifc_MAC mac5 <- mk_mac;
        Ifc_MAC mac6 <- mk_mac;
        Ifc_MAC mac7 <- mk_mac;
        Ifc_MAC mac8 <- mk_mac;
        Ifc_MAC mac9 <- mk_mac;
        Ifc_MAC mac10 <- mk_mac;
        Ifc_MAC mac11 <- mk_mac;
        Ifc_MAC mac12 <- mk_mac;
        Ifc_MAC mac13 <- mk_mac;
        Ifc_MAC mac14 <- mk_mac;
        Ifc_MAC mac15 <- mk_mac;
        Ifc_MAC mac16 <- mk_mac;
        
        Wire#(Bit#(16)) a1_1 <- mkWire();
        Wire#(Bit#(16)) b1_1 <- mkWire();
        Wire#(Bit#(1)) s1_1 <-mkWire();
        Wire#(Bit#(32)) mac1_1 <- mkWire();

        Wire#(Bit#(16)) a2_1 <- mkWire();
        Wire#(Bit#(16)) b2_1 <- mkWire();
        Wire#(Bit#(1)) s2_1 <- mkWire();
        Wire#(Bit#(32)) mac2_1 <- mkWire();

        Wire#(Bit#(16)) a3_1 <- mkWire();
        Wire#(Bit#(16)) b3_1 <- mkWire();
        Wire#(Bit#(1)) s3_1 <- mkWire();
        Wire#(Bit#(32)) mac3_1 <- mkWire();

        Wire#(Bit#(16)) b4_1 <- mkWire();
        Wire#(Bit#(1)) s4_1 <- mkWire();
        Wire#(Bit#(32)) mac4_1 <- mkWire();

        Wire#(Bit#(16)) a5_1 <- mkWire();
        Wire#(Bit#(16)) b5_1 <- mkWire();
        Wire#(Bit#(1)) s5_1 <-mkWire();
        Wire#(Bit#(32)) mac5_1 <- mkWire();

        Wire#(Bit#(16)) a6_1 <- mkWire();
        Wire#(Bit#(16)) b6_1 <- mkWire();
        Wire#(Bit#(1)) s6_1 <- mkWire();
        Wire#(Bit#(32)) mac6_1 <- mkWire();

        Wire#(Bit#(16)) a7_1 <- mkWire();
        Wire#(Bit#(16)) b7_1 <- mkWire();
        Wire#(Bit#(1)) s7_1 <- mkWire();
        Wire#(Bit#(32)) mac7_1 <- mkWire();

        Wire#(Bit#(16)) b8_1 <- mkWire();
        Wire#(Bit#(1)) s8_1 <- mkWire();
        Wire#(Bit#(32)) mac8_1 <- mkWire();

        Wire#(Bit#(16)) a9_1 <- mkWire();
        Wire#(Bit#(16)) b9_1 <- mkWire();
        Wire#(Bit#(1)) s9_1 <-mkWire();
        Wire#(Bit#(32)) mac9_1 <- mkWire();

        Wire#(Bit#(16)) a10_1 <- mkWire();
        Wire#(Bit#(16)) b10_1 <- mkWire();
        Wire#(Bit#(1)) s10_1 <- mkWire();
        Wire#(Bit#(32)) mac10_1 <- mkWire();

        Wire#(Bit#(16)) a11_1 <- mkWire();
        Wire#(Bit#(16)) b11_1 <- mkWire();
        Wire#(Bit#(1)) s11_1 <- mkWire();
        Wire#(Bit#(32)) mac11_1 <- mkWire();

        Wire#(Bit#(16)) b12_1 <- mkWire();
        Wire#(Bit#(1)) s12_1 <- mkWire();
        Wire#(Bit#(32)) mac12_1 <- mkWire();

        Wire#(Bit#(16)) a13_1 <- mkWire();

        Wire#(Bit#(16)) a14_1 <- mkWire();

        Wire#(Bit#(16)) a15_1 <- mkWire();

        
        rule get_val;
            // row-wise wires of systolic array
            a1_1 <= mac1.get_a();
            a2_1 <= mac2.get_a();
            a3_1 <= mac3.get_a();
            
            a5_1 <= mac5.get_a();
            a6_1 <= mac6.get_a();
            a7_1 <= mac7.get_a();

            a9_1 <= mac9.get_a();
            a10_1 <= mac10.get_a();
            a11_1 <= mac11.get_a();

            a13_1 <= mac13.get_a();
            a14_1 <= mac14.get_a();
            a15_1 <= mac15.get_a();

            // columnwise wires of systolic array
            s1_1 <= mac1.get_sel();
            b1_1 <= mac1.get_b();
            mac1_1 <= mac1.get_mac_op();

            s2_1 <= mac2.get_sel();
            b2_1 <= mac2.get_b();
            mac2_1 <= mac2.get_mac_op();

            s3_1 <= mac3.get_sel();
            b3_1 <= mac3.get_b();
            mac3_1 <= mac3.get_mac_op();

            s4_1 <= mac4.get_sel();
            b4_1 <= mac4.get_b();
            mac4_1 <= mac4.get_mac_op();

            s5_1 <= mac5.get_sel();
            b5_1 <= mac5.get_b();
            mac5_1 <= mac5.get_mac_op();

            s6_1 <= mac6.get_sel();
            b6_1 <= mac6.get_b();
            mac6_1 <= mac6.get_mac_op();

            s7_1 <= mac7.get_sel();
            b7_1 <= mac7.get_b();
            mac7_1 <= mac7.get_mac_op();

            s8_1 <= mac8.get_sel();
            b8_1 <= mac8.get_b();
            mac8_1 <= mac8.get_mac_op();

            s9_1 <= mac9.get_sel();
            b9_1 <= mac9.get_b();
            mac9_1 <= mac9.get_mac_op();

            s10_1 <= mac10.get_sel();
            b10_1 <= mac10.get_b();
            mac10_1 <= mac10.get_mac_op();

            s11_1 <= mac11.get_sel();
            b11_1 <= mac11.get_b();
            mac11_1 <= mac11.get_mac_op();

            s12_1 <= mac12.get_sel();
            b12_1 <= mac12.get_b();
            mac12_1 <= mac12.get_mac_op();
            
        endrule

        rule put_val;
            mac1.put_inp_A(rg_A1);
            mac1.put_inp_B(rg_B1);
            mac1.put_inp_C(rg_C1);
            mac1.put_inp_sel(rg_sel);

            mac2.put_inp_A(a1_1);
            mac2.put_inp_B(rg_B2);
            mac2.put_inp_C(rg_C2);
            mac2.put_inp_sel(rg_sel);
            
            mac3.put_inp_A(a2_1);
            mac3.put_inp_B(rg_B3);
            mac3.put_inp_C(rg_C3);
            mac3.put_inp_sel(rg_sel);

            mac4.put_inp_A(a3_1);
            mac4.put_inp_B(rg_B4);
            mac4.put_inp_C(rg_C4);
            mac4.put_inp_sel(rg_sel);

            mac5.put_inp_A(rg_A2);
            mac5.put_inp_B(b1_1);
            mac5.put_inp_C(mac1_1);
            mac5.put_inp_sel(s1_1);

            mac6.put_inp_A(a5_1);
            mac6.put_inp_B(b2_1);
            mac6.put_inp_C(mac2_1);
            mac6.put_inp_sel(s2_1);

            mac7.put_inp_A(a6_1);
            mac7.put_inp_B(b3_1);
            mac7.put_inp_C(mac3_1);
            mac7.put_inp_sel(s3_1);

            mac8.put_inp_A(a7_1);
            mac8.put_inp_B(b4_1);
            mac8.put_inp_C(mac4_1);
            mac8.put_inp_sel(s4_1);

            mac9.put_inp_A(rg_A3);
            mac9.put_inp_B(b5_1);
            mac9.put_inp_C(mac5_1);
            mac9.put_inp_sel(s5_1);

            mac10.put_inp_A(a9_1);
            mac10.put_inp_B(b6_1);
            mac10.put_inp_C(mac6_1);
            mac10.put_inp_sel(s6_1);
            
            mac11.put_inp_A(a10_1);
            mac11.put_inp_B(b7_1);
            mac11.put_inp_C(mac7_1);
            mac11.put_inp_sel(s7_1);
            
            mac12.put_inp_A(a11_1);
            mac12.put_inp_B(b8_1);
            mac12.put_inp_C(mac8_1);
            mac12.put_inp_sel(s8_1);
            
            mac13.put_inp_A(rg_A4);
            mac13.put_inp_B(b9_1);
            mac13.put_inp_C(mac9_1);
            mac13.put_inp_sel(s9_1);
            
            mac14.put_inp_A(a13_1);
            mac14.put_inp_B(b10_1);
            mac14.put_inp_C(mac10_1);
            mac14.put_inp_sel(s10_1);
            
            mac15.put_inp_A(a14_1);
            mac15.put_inp_B(b11_1);
            mac15.put_inp_C(mac11_1);
            mac15.put_inp_sel(s11_1);
            
            mac16.put_inp_A(a15_1);
            mac16.put_inp_B(b12_1);
            mac16.put_inp_C(mac12_1);
            mac16.put_inp_sel(s12_1);
            
        endrule

        method Action put_A(Bit#(16) a1, Bit#(16) a2, Bit#(16) a3, Bit#(16) a4);
            rg_A1 <= a1;
            rg_A2 <= a2;
            rg_A3 <= a3;
            rg_A4 <= a4;
        endmethod

        method Action put_B(Bit#(16) b1, Bit#(16) b2, Bit#(16) b3, Bit#(16) b4);
            rg_B1 <= b1;
            rg_B2 <= b2;
            rg_B3 <= b3;
            rg_B4 <= b4;
        endmethod

        method Action put_C(Bit#(32) c1, Bit#(32) c2, Bit#(32) c3, Bit#(32) c4);
            rg_C1 <= c1;
            rg_C2 <= c2;
            rg_C3 <= c3;
            rg_C4 <= c4;            
        endmethod

        method Action put_sel(Bit#(1) sel);
            rg_sel <= sel;
        endmethod

        method Bit#(32) get_op1();
            return mac13.get_mac_op();
        endmethod

        method Bit#(32) get_op2();
            return mac14.get_mac_op();
        endmethod

        method Bit#(32) get_op3();
            return mac15.get_mac_op();
        endmethod

        method Bit#(32) get_op4();
            return mac16.get_mac_op();
        endmethod
        
        method Bit#(16) mac1_a();
        	return mac1.a_flop();
        endmethod
        
        method Bit#(16) mac1_b();
        	return mac1.b_flop();
        endmethod
        
        method Bit#(32) mac1_out();
        	return mac1.get_mac_op();
        endmethod
        	
        method Bit#(10) mac1_cnt();
        	return mac1.count_out();
        endmethod
        
        method Bit#(16) mac5_b();
        	return mac5.b_flop();
        endmethod
        
       	method Bit#(32) mac5_out();
       		return mac5.get_mac_op();
        endmethod
        
        method Bit#(16) mac9_b();
        	return mac9.b_flop();
        endmethod
        
        method Bit#(32) mac9_out();
        	return mac9.get_mac_op();
        endmethod
        
        method Bit#(16) mac13_b();
        	return mac13.b_flop();
        endmethod
        
        method Bit#(32) mac13_out();
        	return mac13.get_mac_op();
        endmethod
        
        method Bit#(16) mac2_a();
        	return mac2.a_flop();
        endmethod
        
        method Bit#(16) mac3_a();
        	return mac3.a_flop();
        endmethod
        
        method Bit#(16) mac4_a();
        	return mac4.a_flop();
        endmethod

    endmodule

endpackage




/*
package sys_arr;

    import mac::*;

    interface Ifc_sys_arr;
        method Action put_A(Bit#(16) a1, Bit#(16) a2, Bit#(16) a3, Bit#(16) a4);
        method Action put_B(Bit#(16) b1);
        method Action put_C(Bit#(32) c1);
        method Action put_sel(Bit#(1) sel);
        method Bit#(32) get_op1();

        
        method Bit#(16) mac1_a();
        method Bit#(16) mac1_b();
        method Bit#(10) mac1_cnt();
        method Bit#(32) mac1_out();
        
        method Bit#(16) mac2_a();
        method Bit#(16) mac2_b();
        method Bit#(10) mac2_cnt();
        method Bit#(32) mac2_out();
        
        method Bit#(16) mac3_a();
        method Bit#(16) mac3_b();
        method Bit#(10) mac3_cnt();
        method Bit#(32) mac3_out();
        
        method Bit#(16) mac4_a();
        method Bit#(16) mac4_b();
        method Bit#(10) mac4_cnt();
        
    endinterface
    
    (*synthesize*)
    module mk_sys_arr(Ifc_sys_arr);

        Wire#(Bit#(16))      rg_A1        <-    mkWire();
        Wire#(Bit#(16))      rg_A2        <-    mkWire();
        Wire#(Bit#(16))      rg_A3        <-    mkWire();
        Wire#(Bit#(16))      rg_A4        <-    mkWire();

        Wire#(Bit#(16))      rg_B1        <-    mkWire();

        // Reg#(Bit#(16))      rg_B3        <-    mkReg(?);
        // Reg#(Bit#(16))      rg_B4        <-    mkReg(?);

        Wire#(Bit#(32))      rg_C1        <-    mkWire();
        // Reg#(Bit#(32))      rg_C3        <-    mkReg(?);
        // Reg#(Bit#(32))      rg_C4        <-    mkReg(?);

        Wire#(Bit#(1))       rg_sel      <-     mkWire();

        Ifc_MAC mac1 <- mk_mac;
        Ifc_MAC mac2 <- mk_mac;
        Ifc_MAC mac3 <- mk_mac;
        Ifc_MAC mac4 <- mk_mac;
        // Ifc_MAC mac5 <- mk_mac;
        // Ifc_MAC mac6 <- mk_mac;
        // Ifc_MAC mac7 <- mk_mac;
        // Ifc_MAC mac8 <- mk_mac;
        // Ifc_MAC mac9 <- mk_mac;
        // Ifc_MAC mac10 <- mk_mac;
        // Ifc_MAC mac11 <- mk_mac;
        // Ifc_MAC mac12 <- mk_mac;
        // Ifc_MAC mac13 <- mk_mac;
        // Ifc_MAC mac14 <- mk_mac;
        // Ifc_MAC mac15 <- mk_mac;
        // Ifc_MAC mac16 <- mk_mac;
        
        Wire#(Bit#(16)) b11 <- mkWire();
        Wire#(Bit#(1)) s11 <- mkWire();
        
        Wire#(Bit#(32)) mac11 <- mkWire();
        Wire#(Bit#(32)) mac21 <- mkWire();
        Wire#(Bit#(32)) mac31 <- mkWire();

        Wire#(Bit#(16)) b21 <- mkWire();
        Wire#(Bit#(1)) s21 <- mkWire();
        
        Wire#(Bit#(16)) b31 <- mkWire();
        Wire#(Bit#(1)) s31 <- mkWire();

        
        rule get_val;
            // row-wise connections of systolic array
            
            
            b11 <= mac1.get_b();
            s11 <= mac1.get_sel();
            mac11 <= mac1.get_mac_op();

            b21 <= mac2.get_b();
            s21 <= mac2.get_sel();
            mac21 <= mac2.get_mac_op();

            b31 <= mac3.get_b();
            s31 <= mac3.get_sel();
            mac31 <= mac3.get_mac_op();
            
            
            // mac6.put_inp_A(mac5.get_a());
            // mac7.put_inp_A(mac6.get_a());
            // mac8.put_inp_A(mac7.get_a());

            // mac10.put_inp_A(mac9.get_a());
            // mac11.put_inp_A(mac10.get_a());
            // mac12.put_inp_A(mac11.get_a());

            // mac14.put_inp_A(mac13.get_a());
            // mac15.put_inp_A(mac14.get_a());
            // mac16.put_inp_A(mac15.get_a());

            // //column-wise internal connections
            // mac5.put_inp_sel(mac1.get_sel());
            // mac5.put_inp_B(mac1.get_b());
            // mac5.put_inp_C(mac1.get_mac_op());

            // mac6.put_inp_sel(mac2.get_sel());
            // mac6.put_inp_B(mac2.get_b());
            // mac6.put_inp_C(mac2.get_mac_op());

            // mac7.put_inp_sel(mac3.get_sel());
            // mac7.put_inp_B(mac3.get_b());
            // mac7.put_inp_C(mac3.get_mac_op());

            // mac8.put_inp_sel(mac4.get_sel());
            // mac8.put_inp_B(mac4.get_b());
            // mac8.put_inp_C(mac4.get_mac_op());

            // mac9.put_inp_sel(mac5.get_sel());
            // mac9.put_inp_B(mac5.get_b());
            // mac9.put_inp_C(mac5.get_mac_op());

            // mac10.put_inp_sel(mac6.get_sel());
            // mac10.put_inp_B(mac6.get_b());
            // mac10.put_inp_C(mac6.get_mac_op());

            // mac11.put_inp_sel(mac7.get_sel());
            // mac11.put_inp_B(mac7.get_b());
            // mac11.put_inp_C(mac7.get_mac_op());

            // mac12.put_inp_sel(mac8.get_sel());
            // mac12.put_inp_B(mac8.get_b());
            // mac12.put_inp_C(mac8.get_mac_op());

            // mac13.put_inp_sel(mac9.get_sel());
            // mac13.put_inp_B(mac9.get_b());
            // mac13.put_inp_C(mac9.get_mac_op());

            // mac14.put_inp_sel(mac10.get_sel());
            // mac14.put_inp_B(mac10.get_b());
            // mac14.put_inp_C(mac10.get_mac_op());

            // mac15.put_inp_sel(mac11.get_sel());
            // mac15.put_inp_B(mac11.get_b());
            // mac15.put_inp_C(mac11.get_mac_op());

            // mac16.put_inp_sel(mac12.get_sel());
            // mac16.put_inp_B(mac12.get_b());
            // mac16.put_inp_C(mac12.get_mac_op());
        endrule

        rule put_val;
            mac1.put_inp_A(rg_A1);
            mac1.put_inp_B(rg_B1);
            mac1.put_inp_C(rg_C1);
            mac1.put_inp_sel(rg_sel);

            mac2.put_inp_A(rg_A2);
            mac2.put_inp_B(b11);
            mac2.put_inp_C(mac11);
            mac2.put_inp_sel(s11);
            
            mac3.put_inp_A(rg_A3);
            mac3.put_inp_sel(s21);
            mac3.put_inp_B(b21);
            mac3.put_inp_C(mac21);

            mac4.put_inp_A(rg_A4);
            mac4.put_inp_sel(s31);
            mac4.put_inp_B(b31);
            mac4.put_inp_C(mac31);
            
        endrule

        method Action put_A(Bit#(16) a1, Bit#(16) a2, Bit#(16) a3, Bit#(16) a4);
            rg_A1 <= a1;
            rg_A2 <= a2;
            rg_A3 <= a3;
            rg_A4 <= a4;
        endmethod

        method Action put_B(Bit#(16) b1);
            rg_B1 <= b1;
        endmethod

        method Action put_C(Bit#(32) c1);
            rg_C1 <= c1;            
        endmethod

        method Action put_sel(Bit#(1) sel);
            rg_sel <=sel;
        endmethod

        method Bit#(32) get_op1();
            return mac4.get_mac_op();
        endmethod
        
        method Bit#(16) mac1_a();
        	return mac1.a_flop();
        endmethod
        
        method Bit#(16) mac1_b();
        	return mac1.b_flop();
        endmethod
        
        method Bit#(10) mac1_cnt();
        	return mac1.count_out();
        endmethod
        
        method Bit#(16) mac2_a();
        	return mac2.a_flop();
        endmethod
        
        method Bit#(16) mac2_b();
        	return mac2.b_flop();
        endmethod
        
        method Bit#(10) mac2_cnt();
        	return mac2.count_out();
        endmethod
        
        method Bit#(16) mac3_a();
        	return mac3.a_flop();
        endmethod
        
        method Bit#(16) mac3_b();
        	return mac3.b_flop();
        endmethod
        
        method Bit#(10) mac3_cnt();
        	return mac3.count_out();
        endmethod
        
        method Bit#(16) mac4_a();
        	return mac4.a_flop();
        endmethod
        
        method Bit#(16) mac4_b();
        	return mac4.b_flop();
        endmethod
        
        method Bit#(10) mac4_cnt();
        	return mac4.count_out();
        endmethod
        
        method Bit#(32) mac1_out();
        	return mac1.get_mac_op();
        endmethod
        
        method Bit#(32) mac2_out();
        	return mac2.get_mac_op();
        endmethod
        
        method Bit#(32) mac3_out();
        	return mac3.get_mac_op();
        endmethod


    endmodule

endpackage
*/

