// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/shakti/Desktop/Pipelined/verilog/mk_mac.v", 43, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/shakti/Desktop/Pipelined/verilog/mk_mac.v", 43, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mk_mac__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mk_mac__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mk_mac__DOT__put_inp_A_a = vlTOPp->put_inp_A_a;
    vlTOPp->mk_mac__DOT__EN_put_inp_A = vlTOPp->EN_put_inp_A;
    vlTOPp->mk_mac__DOT__put_inp_B_b = vlTOPp->put_inp_B_b;
    vlTOPp->mk_mac__DOT__EN_put_inp_B = vlTOPp->EN_put_inp_B;
    vlTOPp->mk_mac__DOT__put_inp_C_c = vlTOPp->put_inp_C_c;
    vlTOPp->mk_mac__DOT__EN_put_inp_C = vlTOPp->EN_put_inp_C;
    vlTOPp->mk_mac__DOT__put_inp_sel_sel = vlTOPp->put_inp_sel_sel;
    vlTOPp->mk_mac__DOT__EN_put_inp_sel = vlTOPp->EN_put_inp_sel;
    vlTOPp->mk_mac__DOT__WILL_FIRE_put_inp_A = vlTOPp->EN_put_inp_A;
    vlTOPp->mk_mac__DOT__WILL_FIRE_put_inp_B = vlTOPp->EN_put_inp_B;
    vlTOPp->mk_mac__DOT__WILL_FIRE_put_inp_C = vlTOPp->EN_put_inp_C;
    vlTOPp->mk_mac__DOT__WILL_FIRE_put_inp_sel = vlTOPp->EN_put_inp_sel;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_val_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_val 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_val_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_val = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s7_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s7 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s7_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exception_s4_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exception_s4 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s4_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exception_s4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__int_8_rg_c_EN) {
            vlTOPp->mk_mac__DOT__int_8_rg_c = vlTOPp->mk_mac__DOT__int_8_rg_c_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__int_8_rg_c = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_sign_s3_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_sign_s3 
                = vlTOPp->mk_mac__DOT__bfloat_rg_sign_s3_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_sign_s3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_sign_s2_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_sign_s2 
                = vlTOPp->mk_mac__DOT__bfloat_rg_sign_s2_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_sign_s2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_C_s3_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_C_s3 = vlTOPp->mk_mac__DOT__bfloat_rg_C_s3_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_C_s3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_C_s2_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_C_s2 = vlTOPp->mk_mac__DOT__bfloat_rg_C_s2_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_C_s2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_C_s1_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_C_s1 = vlTOPp->mk_mac__DOT__bfloat_rg_C_s1_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_C_s1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_C_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_C = vlTOPp->mk_mac__DOT__bfloat_rg_C_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_C = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exception_s2_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exception_s2 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s2_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exception_s2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exception_s3_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exception_s3 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s3_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exception_s3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exception_s7_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exception_s7 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s7_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exception_s7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s2_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s2 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s2_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s3_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s3 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s3_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_sign_s1_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_sign_s1 
                = vlTOPp->mk_mac__DOT__bfloat_rg_sign_s1_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_sign_s1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_sign_s8_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_sign_s8 
                = vlTOPp->mk_mac__DOT__bfloat_rg_sign_s8_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_sign_s8 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exception_s6_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exception_s6 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s6_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exception_s6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s1_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s1 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s1_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_sign_s9_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_sign_s9 
                = vlTOPp->mk_mac__DOT__bfloat_rg_sign_s9_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_sign_s9 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s9_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s9 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s9_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s9 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__int_8_out_EN) {
            vlTOPp->mk_mac__DOT__int_8_out = vlTOPp->mk_mac__DOT__int_8_out_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__int_8_out = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__rg_C_EN) {
            vlTOPp->mk_mac__DOT__rg_C = vlTOPp->mk_mac__DOT__rg_C_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__rg_C = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_mult_s6_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_mult_s6 
                = vlTOPp->mk_mac__DOT__bfloat_rg_mult_s6_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_mult_s6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s6_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s6 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s6_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__rg_out_EN) {
            vlTOPp->mk_mac__DOT__rg_out = vlTOPp->mk_mac__DOT__rg_out_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__rg_out = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__rg_B_EN) {
            vlTOPp->mk_mac__DOT__rg_B = vlTOPp->mk_mac__DOT__rg_B_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__rg_B = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__rg_A_EN) {
            vlTOPp->mk_mac__DOT__rg_A = vlTOPp->mk_mac__DOT__rg_A_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__rg_A = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_val_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_val 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_val_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_val = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_s10_valid_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_s10_valid 
                = vlTOPp->mk_mac__DOT__bfloat_rg_s10_valid_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_s10_valid = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_out_valid_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_out_valid 
                = vlTOPp->mk_mac__DOT__bfloat_rg_out_valid_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_out_valid = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_out_EN) {
            vlTOPp->mk_mac__DOT__bfloat_out = vlTOPp->mk_mac__DOT__bfloat_out_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_out = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_val_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_val 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_val_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_val = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_C_s6_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_C_s6 = vlTOPp->mk_mac__DOT__bfloat_rg_C_s6_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_C_s6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_s5_valid_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_s5_valid 
                = vlTOPp->mk_mac__DOT__bfloat_rg_s5_valid_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_s5_valid = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_C_s7_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_C_s7 = vlTOPp->mk_mac__DOT__bfloat_rg_C_s7_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_C_s7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_mult_s7_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_mult_s7 
                = vlTOPp->mk_mac__DOT__bfloat_rg_mult_s7_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_mult_s7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid 
                = vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid 
                = vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid 
                = vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid 
                = vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid 
                = vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid 
                = vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_sign_s4_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_sign_s4 
                = vlTOPp->mk_mac__DOT__bfloat_rg_sign_s4_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_sign_s4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid 
                = vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid 
                = vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_C_s4_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_C_s4 = vlTOPp->mk_mac__DOT__bfloat_rg_C_s4_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_C_s4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_sticky_bit_s9_EN) {
            vlTOPp->mk_mac__DOT__bfloat_sticky_bit_s9 
                = vlTOPp->mk_mac__DOT__bfloat_sticky_bit_s9_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_sticky_bit_s9 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_round_bit_s9_EN) {
            vlTOPp->mk_mac__DOT__bfloat_round_bit_s9 
                = vlTOPp->mk_mac__DOT__bfloat_round_bit_s9_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_round_bit_s9 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_guard_bit_s9_EN) {
            vlTOPp->mk_mac__DOT__bfloat_guard_bit_s9 
                = vlTOPp->mk_mac__DOT__bfloat_guard_bit_s9_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_guard_bit_s9 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__rg_sel_EN) {
            vlTOPp->mk_mac__DOT__rg_sel = vlTOPp->mk_mac__DOT__rg_sel_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__rg_sel = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s9_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_mant_s9 
                = vlTOPp->mk_mac__DOT__bfloat_rg_mant_s9_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_mant_s9 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s8_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s8 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s8_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s8 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_C_s5_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_C_s5 = vlTOPp->mk_mac__DOT__bfloat_rg_C_s5_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_C_s5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5 
                = vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_mult_mant_s7_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_mult_mant_s7 
                = vlTOPp->mk_mac__DOT__bfloat_rg_mult_mant_s7_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_mult_mant_s7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_mant_shift_s7_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_mant_shift_s7 
                = vlTOPp->mk_mac__DOT__bfloat_rg_mant_shift_s7_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_mant_shift_s7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_B_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_B = vlTOPp->mk_mac__DOT__bfloat_rg_B_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_B = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_A_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_A = vlTOPp->mk_mac__DOT__bfloat_rg_A_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_A = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exception_s1_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exception_s1 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s1_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exception_s1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_3_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_3 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_3_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s4_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s4 
                = vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s4_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s5_val_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s5_val 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s5_val_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s5_val = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_op_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_op 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_op_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_op = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8_EN) {
            vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                = vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_EN) {
            vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0 
                = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__int_8_rg_c1_EN) {
            vlTOPp->mk_mac__DOT__int_8_rg_c1 = vlTOPp->mk_mac__DOT__int_8_rg_c1_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__int_8_rg_c1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__int_8_rg_prod1_EN) {
            vlTOPp->mk_mac__DOT__int_8_rg_prod1 = vlTOPp->mk_mac__DOT__int_8_rg_prod1_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__int_8_rg_prod1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__int_8_rg_a_EN) {
            vlTOPp->mk_mac__DOT__int_8_rg_a = vlTOPp->mk_mac__DOT__int_8_rg_a_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__int_8_rg_a = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mk_mac__DOT__int_8_rg_b_EN) {
            vlTOPp->mk_mac__DOT__int_8_rg_b = vlTOPp->mk_mac__DOT__int_8_rg_b_D_IN;
        }
    } else {
        vlTOPp->mk_mac__DOT__int_8_rg_b = 0U;
    }
    vlTOPp->mk_mac__DOT__int_8_rg_c1_D_IN = vlTOPp->mk_mac__DOT__int_8_rg_c;
    vlTOPp->mk_mac__DOT__bfloat_rg_sign_s4_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_sign_s3;
    vlTOPp->mk_mac__DOT__bfloat_rg_sign_s3_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_sign_s2;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s4_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_C_s3;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s3_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_C_s2;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s2_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_C_s1;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s1_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_C;
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s3_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s2;
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s4_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s3;
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s7;
    vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s3_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s2;
    vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s4_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s3;
    vlTOPp->mk_mac__DOT__bfloat_rg_sign_s2_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_sign_s1;
    vlTOPp->mk_mac__DOT__bfloat_rg_sign_s9_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_sign_s8;
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s7_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s6;
    vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s2_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s1;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_D_IN = vlTOPp->mk_mac__DOT__rg_C;
    vlTOPp->mk_mac__DOT__int_8_rg_c_D_IN = vlTOPp->mk_mac__DOT__rg_C;
    vlTOPp->mk_mac__DOT__bfloat_rg_mult_mant_s7_D_IN 
        = (0x4000000U | (0x3fffff8U & (vlTOPp->mk_mac__DOT__bfloat_rg_mult_s6 
                                       << 3U)));
    vlTOPp->mk_mac__DOT__bfloat_rg_mult_s7_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_mult_s6;
    vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s7_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s6;
    vlTOPp->mk_mac__DOT__get_mac_op = vlTOPp->mk_mac__DOT__rg_out;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b_D_IN 
        = (0x80U | (0x7fU & (IData)(vlTOPp->mk_mac__DOT__rg_B)));
    vlTOPp->mk_mac__DOT__bfloat_rg_B_D_IN = vlTOPp->mk_mac__DOT__rg_B;
    vlTOPp->mk_mac__DOT__int_8_rg_b_D_IN = (0xffU & (IData)(vlTOPp->mk_mac__DOT__rg_B));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_D_IN 
        = (0x80U | (0x7fU & (IData)(vlTOPp->mk_mac__DOT__rg_A)));
    vlTOPp->mk_mac__DOT__bfloat_rg_A_D_IN = vlTOPp->mk_mac__DOT__rg_A;
    vlTOPp->mk_mac__DOT__int_8_rg_a_D_IN = (0xffU & (IData)(vlTOPp->mk_mac__DOT__rg_A));
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_obj_unsignedmult_s4 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_val;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_obj_unsignedmult_s4 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_val;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_op_EN 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_val;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s5_val_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_val;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_stage10 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s10_valid;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_stage10 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s10_valid;
    vlTOPp->mk_mac__DOT__bfloat_out_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s10_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_out_valid_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_s10_valid;
    vlTOPp->mk_mac__DOT__x___05Fh56194 = ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_out_valid)
                                           ? vlTOPp->mk_mac__DOT__bfloat_out
                                           : 0U);
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_obj_unsignedmult_s3 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_val;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_obj_unsignedmult_s3 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_val;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_EN 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_val;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1_EN 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_val;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_val_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_val;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s7_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_C_s6;
    vlTOPp->mk_mac__DOT__c_mant_s7___05Fh26489 = (0x3fffff8U 
                                                  & (vlTOPp->mk_mac__DOT__bfloat_rg_C_s6 
                                                     << 3U));
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_stage5 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s5_valid;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_stage5 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s5_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s5_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s5_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s5_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_s5_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s8_D_IN 
        = (0xffU & (vlTOPp->mk_mac__DOT__bfloat_rg_mult_s7 
                    >> 0x17U));
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_stage8 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_stage8 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8_EN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s8_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_sign_s8_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_stage6 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_stage6 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s6_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s6_EN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s6_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_mult_s6_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_s6_valid;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_stage4 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_stage4 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s4_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s4_EN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s4_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_s5_valid_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_sign_s4_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_stage3 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_stage3 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s3_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s3_EN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s3_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_s4_valid_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_sign_s3_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_stage2 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_stage2 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s2_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s2_EN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s2_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_s3_valid_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_sign_s2_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_stage1 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_stage1 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s1_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s1_EN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s1_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_s2_valid_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_sign_s1_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_obj_unsignedmult_s1 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_obj_unsignedmult_s1 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_EN 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1_EN 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_EN 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_3_EN 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4_EN 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val;
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_val_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_stage7 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_stage7 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_C_s7_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s7_EN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s7_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_mant_shift_s7_EN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_mult_mant_s7_EN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_mult_s7_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_s8_valid_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_s7_valid;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_stage9 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_stage9 
        = vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid;
    vlTOPp->mk_mac__DOT__bfloat_guard_bit_s9_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s9_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_mant_s9_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_s10_valid_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid;
    vlTOPp->mk_mac__DOT__bfloat_rg_sign_s9_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid;
    vlTOPp->mk_mac__DOT__bfloat_round_bit_s9_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid;
    vlTOPp->mk_mac__DOT__bfloat_sticky_bit_s9_EN = vlTOPp->mk_mac__DOT__bfloat_rg_s9_valid;
    vlTOPp->mk_mac__DOT__grs___05Fh34745 = (((IData)(vlTOPp->mk_mac__DOT__bfloat_guard_bit_s9) 
                                             << 2U) 
                                            | (((IData)(vlTOPp->mk_mac__DOT__bfloat_round_bit_s9) 
                                                << 1U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__bfloat_sticky_bit_s9)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_EN 
        = (1U & (~ (IData)(vlTOPp->mk_mac__DOT__rg_sel)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b_EN 
        = (1U & (~ (IData)(vlTOPp->mk_mac__DOT__rg_sel)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_val_D_IN 
        = (1U & (~ (IData)(vlTOPp->mk_mac__DOT__rg_sel)));
    vlTOPp->mk_mac__DOT__bfloat_rg_A_EN = (1U & (~ (IData)(vlTOPp->mk_mac__DOT__rg_sel)));
    vlTOPp->mk_mac__DOT__bfloat_rg_B_EN = (1U & (~ (IData)(vlTOPp->mk_mac__DOT__rg_sel)));
    vlTOPp->mk_mac__DOT__bfloat_rg_C_EN = (1U & (~ (IData)(vlTOPp->mk_mac__DOT__rg_sel)));
    vlTOPp->mk_mac__DOT__bfloat_rg_s1_valid_D_IN = 
        (1U & (~ (IData)(vlTOPp->mk_mac__DOT__rg_sel)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_EN = vlTOPp->mk_mac__DOT__rg_sel;
    vlTOPp->mk_mac__DOT__int_8_rg_b_EN = vlTOPp->mk_mac__DOT__rg_sel;
    vlTOPp->mk_mac__DOT__int_8_rg_c_EN = vlTOPp->mk_mac__DOT__rg_sel;
    vlTOPp->mk_mac__DOT__bfloat_rg_mant_s9_102_BITS_26_TO_4_103_PLUS_1___05F_d1104 
        = (0x7fffffU & ((IData)(1U) + (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s9 
                                       >> 4U)));
    vlTOPp->mk_mac__DOT__exponent___05Fh27191 = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s8)));
    vlTOPp->mk_mac__DOT__x___05Fh25935 = (0x80000000U 
                                          & vlTOPp->mk_mac__DOT__bfloat_rg_C_s5);
    vlTOPp->mk_mac__DOT__x___05Fh26236 = ((0x80000000U 
                                           & vlTOPp->mk_mac__DOT__bfloat_rg_C_s5) 
                                          | ((0U == 
                                              (0x7fffffU 
                                               & vlTOPp->mk_mac__DOT__bfloat_rg_C_s5))
                                              ? 0x7f800000U
                                              : (0x7f800000U 
                                                 | (0x7fffffU 
                                                    & vlTOPp->mk_mac__DOT__bfloat_rg_C_s5))));
    vlTOPp->mk_mac__DOT__exp_diff_s6___05Fh25712 = 
        (0xffU & ((vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5 
                   >> 0x17U) - (vlTOPp->mk_mac__DOT__bfloat_rg_C_s5 
                                >> 0x17U)));
    vlTOPp->mk_mac__DOT__x___05Fh26395 = (((0U != (0x7fffffU 
                                                   & vlTOPp->mk_mac__DOT__bfloat_rg_C_s5)) 
                                           | (0U != 
                                              (0x7fffffU 
                                               & vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5)))
                                           ? 1U : 2U);
    vlTOPp->mk_mac__DOT__x___05Fh25881 = (0x80000000U 
                                          & vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5);
    vlTOPp->mk_mac__DOT__x___05Fh25994 = ((0x80000000U 
                                           & vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5) 
                                          | ((0U == 
                                              (0x7fffffU 
                                               & vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5))
                                              ? 0x7f800000U
                                              : (0x7f800000U 
                                                 | (0x7fffffU 
                                                    & vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5))));
    vlTOPp->mk_mac__DOT__bfloat_rg_mult_mant_s7_59_ULE_bfloat_rg_mant_s_ETC___05F_d861 
        = (vlTOPp->mk_mac__DOT__bfloat_rg_mult_mant_s7 
           <= vlTOPp->mk_mac__DOT__bfloat_rg_mant_shift_s7);
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s1_D_IN 
        = ((((0xffU == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                 >> 7U))) & (0U == 
                                             (0xffU 
                                              & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                 >> 7U)))) 
            | ((0U == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                >> 7U))) & (0xffU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                >> 7U)))))
            ? 0U : (((0U == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                      >> 7U))) | (0U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                      >> 7U))))
                     ? 1U : (((0xffU == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                                  >> 7U))) 
                              | (0xffU == (0xffU & 
                                           ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                            >> 7U))))
                              ? 2U : 3U)));
    vlTOPp->mk_mac__DOT__bfloat_rg_sign_s1_D_IN = (1U 
                                                   & (((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                                       ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B)) 
                                                      >> 0xfU));
    vlTOPp->mk_mac__DOT__x___05Fh24554 = (0xffU & (
                                                   ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                    >> 7U)));
    vlTOPp->mk_mac__DOT__bfloat_rg_exception_s2_D_IN 
        = vlTOPp->mk_mac__DOT__bfloat_rg_exception_s1;
    vlTOPp->mk_mac__DOT__CASE_bfloat_rg_exception_s1_1_0_2_255_255___05Fq3 
        = ((1U == (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exception_s1))
            ? 0U : 0xffU);
    vlTOPp->mk_mac__DOT__CASE_bfloat_rg_exception_s1_1_0_2_0_4194304___05Fq4 
        = (((1U == (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exception_s1)) 
            | (2U == (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exception_s1)))
            ? 0U : 0x400000U);
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh19266 = 
        ((0x80U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2)) 
         | (0x62U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)));
    vlTOPp->mk_mac__DOT__x___05Fh18877 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                                                 & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                                                >> 0xbU));
    vlTOPp->mk_mac__DOT__x___05Fh19070 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                                                 & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                                                >> 0xcU));
    vlTOPp->mk_mac__DOT__x___05Fh18298 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                                                 & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                                                >> 8U));
    vlTOPp->mk_mac__DOT__x___05Fh18491 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                                                 & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                                                >> 9U));
    vlTOPp->mk_mac__DOT__x___05Fh18684 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                                                 & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                                                >> 0xaU));
    vlTOPp->mk_mac__DOT__x___05Fh18780 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                                                 ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                                                >> 0xbU));
    vlTOPp->mk_mac__DOT__x___05Fh18973 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                                                 ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                                                >> 0xcU));
    vlTOPp->mk_mac__DOT__x___05Fh18200 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                                                 ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                                                >> 8U));
    vlTOPp->mk_mac__DOT__x___05Fh18394 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                                                 ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                                                >> 9U));
    vlTOPp->mk_mac__DOT__x___05Fh18587 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                                                 ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                                                >> 0xaU));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d427 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2) 
                  ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_3)) 
                 >> 5U));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d423 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2) 
                  & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_3)) 
                 >> 5U));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d451 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2) 
                    & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_3)) 
                   >> 7U));
    vlTOPp->mk_mac__DOT__p___05Fh16538 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2) 
                                                   ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_3)) 
                                                  >> 7U));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_8_T_ETC___05F_d411 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0) 
                  & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1)) 
                 >> 7U));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_8_T_ETC___05F_d413 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0) 
                  ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1)) 
                 >> 7U));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d362 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0) 
                    & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1)) 
                   >> 3U));
    vlTOPp->mk_mac__DOT__p___05Fh13938 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0) 
                                                   ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1)) 
                                                  >> 3U));
    vlTOPp->mk_mac__DOT__exp___05F_1___05Fh25263 = 
        (0xffU & ((IData)(1U) + (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s4)));
    vlTOPp->mk_mac__DOT__IF_bfloat_obj_unsignedmult_rg_s5_val_53_THEN_b_ETC___05F_d755 
        = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s5_val)
            ? (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_op)
            : 0U);
    vlTOPp->mk_mac__DOT__x___05Fh33483 = (0x7fffffeU 
                                          & (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                                             << 1U));
    vlTOPp->mk_mac__DOT__x___05Fh34331 = (1U & ((vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                                                 >> 1U) 
                                                | vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8));
    vlTOPp->mk_mac__DOT__x___05Fh34084 = (1U & ((vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                                                 >> 2U) 
                                                | (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28868 = 
        ((2U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((1U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28040 = 
        ((0x2000000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((0x1000000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28109 = 
        ((0x800000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((0x400000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28178 = 
        ((0x200000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((0x100000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28247 = 
        ((0x80000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((0x40000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28316 = 
        ((0x20000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((0x10000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28385 = 
        ((0x8000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((0x4000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28454 = 
        ((0x2000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((0x1000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28523 = 
        ((0x800U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((0x400U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28592 = 
        ((0x200U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((0x100U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28661 = 
        ((0x80U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((0x40U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28730 = 
        ((0x20U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((0x10U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh28799 = 
        ((8U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
          ? 0U : ((4U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d123 
        = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a) 
           & (- (IData)((1U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b)))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63 
        = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b) 
                               >> 5U)))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d172 
        = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b) 
                               >> 6U)))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d54 
        = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b) 
                               >> 7U)))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59 
        = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b) 
                               >> 4U)))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d79 
        = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b) 
                               >> 2U)))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d96 
        = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b) 
                               >> 1U)))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d69 
        = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_b) 
                               >> 3U)))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d564 
        = (7U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0) 
                  & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1)) 
                 >> 0xcU));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d566 
        = (7U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0) 
                  ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1)) 
                 >> 0xcU));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d580 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0) 
                    & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1)) 
                   >> 8U));
    vlTOPp->mk_mac__DOT__p___05Fh21937 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0) 
                                                   ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1)) 
                                                  >> 8U));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d601 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0) 
                    & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1)) 
                   >> 4U));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_3_T_ETC___05F_d622 
        = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0) 
                   & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1)));
    vlTOPp->mk_mac__DOT__p___05Fh20990 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0) 
                                                   ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1)) 
                                                  >> 4U));
    vlTOPp->mk_mac__DOT__p___05Fh20117 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0) 
                                                  ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1)));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1752 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1) 
                    >> 0xcU) & (vlTOPp->mk_mac__DOT__int_8_rg_c1 
                                >> 0xcU)));
    vlTOPp->mk_mac__DOT__rg_a___05Fh50135 = (0xfU & 
                                             (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1) 
                                                            >> 0xfU)))));
    vlTOPp->mk_mac__DOT__p___05Fh50603 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1) 
                                                   >> 0xcU) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c1 
                                                   >> 0xcU)));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1773 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1) 
                    >> 8U) & (vlTOPp->mk_mac__DOT__int_8_rg_c1 
                              >> 8U)));
    vlTOPp->mk_mac__DOT__p___05Fh50996 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1) 
                                                   >> 8U) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c1 
                                                   >> 8U)));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1794 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1) 
                    >> 4U) & (vlTOPp->mk_mac__DOT__int_8_rg_c1 
                              >> 4U)));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1815 
        = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1) 
                   & vlTOPp->mk_mac__DOT__int_8_rg_c1));
    vlTOPp->mk_mac__DOT__p___05Fh51389 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1) 
                                                   >> 4U) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c1 
                                                   >> 4U)));
    vlTOPp->mk_mac__DOT__p___05Fh51781 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1) 
                                                  ^ vlTOPp->mk_mac__DOT__int_8_rg_c1));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_109_BI_ETC___05F_d1111 
        = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                  & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_b)) 
                 >> 7U));
    vlTOPp->mk_mac__DOT__x___05Fh36168 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 5U)));
    vlTOPp->mk_mac__DOT__x___05Fh36932 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 4U)));
    vlTOPp->mk_mac__DOT__x___05Fh37174 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh37053 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__x___05Fh39717 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_b)));
    vlTOPp->mk_mac__DOT__x___05Fh37295 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh35747 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1117 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 6U))))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 5U))))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 4U))))));
    vlTOPp->mk_mac__DOT__y___05Fh35599 = (0x7fU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                                 >> 7U)))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 3U))))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1201 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 2U))))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1277 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_b))))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 1U))))));
    vlTOPp->get_mac_op = vlTOPp->mk_mac__DOT__get_mac_op;
    vlTOPp->mk_mac__DOT__rg_out_D_IN = ((IData)(vlTOPp->mk_mac__DOT__rg_sel)
                                         ? vlTOPp->mk_mac__DOT__int_8_out
                                         : vlTOPp->mk_mac__DOT__x___05Fh56194);
    vlTOPp->mk_mac__DOT__bfloat_rg_mant_shift_s7_D_IN 
        = ((0x1aU >= (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s6))
            ? (0x7ffffffU & ((0x4000000U | vlTOPp->mk_mac__DOT__c_mant_s7___05Fh26489) 
                             >> (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s6)))
            : 0U);
    vlTOPp->mk_mac__DOT__CASE_grs4745_0b11_bfloat_rg_mant_s9_102_BITS_2_ETC___05Fq6 
        = (0x7fffffU & ((((3U == (IData)(vlTOPp->mk_mac__DOT__grs___05Fh34745)) 
                          | (6U == (IData)(vlTOPp->mk_mac__DOT__grs___05Fh34745))) 
                         | (7U == (IData)(vlTOPp->mk_mac__DOT__grs___05Fh34745)))
                         ? vlTOPp->mk_mac__DOT__bfloat_rg_mant_s9_102_BITS_26_TO_4_103_PLUS_1___05F_d1104
                         : (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s9 
                            >> 4U)));
    if (((0xffU != (0xffU & (vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5 
                             >> 0x17U))) & (0xffU != 
                                            (0xffU 
                                             & (vlTOPp->mk_mac__DOT__bfloat_rg_C_s5 
                                                >> 0x17U))))) {
        vlTOPp->mk_mac__DOT__bfloat_rg_C_s6_D_IN = 
            (((0U != (0xffU & (vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5 
                               >> 0x17U))) | (0U != 
                                              (0xffU 
                                               & (vlTOPp->mk_mac__DOT__bfloat_rg_C_s5 
                                                  >> 0x17U))))
              ? vlTOPp->mk_mac__DOT__bfloat_rg_C_s5
              : vlTOPp->mk_mac__DOT__x___05Fh25935);
        vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s6_D_IN 
            = vlTOPp->mk_mac__DOT__exp_diff_s6___05Fh25712;
        vlTOPp->mk_mac__DOT__bfloat_rg_exception_s6_D_IN = 0U;
        vlTOPp->mk_mac__DOT__bfloat_rg_mult_s6_D_IN 
            = (((0U != (0xffU & (vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5 
                                 >> 0x17U))) | (0U 
                                                != 
                                                (0xffU 
                                                 & (vlTOPp->mk_mac__DOT__bfloat_rg_C_s5 
                                                    >> 0x17U))))
                ? vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5
                : vlTOPp->mk_mac__DOT__x___05Fh25881);
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_C_s6_D_IN = vlTOPp->mk_mac__DOT__x___05Fh26236;
        vlTOPp->mk_mac__DOT__bfloat_rg_exp_diff_s6_D_IN = 0xffU;
        vlTOPp->mk_mac__DOT__bfloat_rg_exception_s6_D_IN 
            = vlTOPp->mk_mac__DOT__x___05Fh26395;
        vlTOPp->mk_mac__DOT__bfloat_rg_mult_s6_D_IN 
            = vlTOPp->mk_mac__DOT__x___05Fh25994;
    }
    if (vlTOPp->mk_mac__DOT__bfloat_rg_mult_mant_s7_59_ULE_bfloat_rg_mant_s_ETC___05F_d861) {
        vlTOPp->mk_mac__DOT__bfloat_rg_sign_s8_D_IN 
            = (1U & (vlTOPp->mk_mac__DOT__bfloat_rg_C_s7 
                     >> 0x1fU));
        vlTOPp->mk_mac__DOT__a_temp___05Fh26821 = vlTOPp->mk_mac__DOT__bfloat_rg_mant_shift_s7;
        vlTOPp->mk_mac__DOT__b_temp___05Fh26822 = vlTOPp->mk_mac__DOT__bfloat_rg_mult_mant_s7;
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_sign_s8_D_IN 
            = (1U & (vlTOPp->mk_mac__DOT__bfloat_rg_mult_s7 
                     >> 0x1fU));
        vlTOPp->mk_mac__DOT__a_temp___05Fh26821 = vlTOPp->mk_mac__DOT__bfloat_rg_mult_mant_s7;
        vlTOPp->mk_mac__DOT__b_temp___05Fh26822 = vlTOPp->mk_mac__DOT__bfloat_rg_mant_shift_s7;
    }
    vlTOPp->mk_mac__DOT__e___05Fh24529 = (0xffU & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh24554) 
                                                   - (IData)(0x7fU)));
    vlTOPp->mk_mac__DOT__y___05Fh18878 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh18780) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2) 
                                             >> 0xbU));
    vlTOPp->mk_mac__DOT__y___05Fh19071 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh18973) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2) 
                                             >> 0xcU));
    vlTOPp->mk_mac__DOT__y___05Fh18299 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh18200) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2) 
                                             >> 8U));
    vlTOPp->mk_mac__DOT__y___05Fh18492 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh18394) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2) 
                                             >> 9U));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0_94_BIT_10_0_ETC___05F_d528 
        = ((8U & (((IData)(vlTOPp->mk_mac__DOT__x___05Fh18587) 
                   << 3U) ^ (0x1fffff8U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2) 
                                           >> 7U)))) 
           | ((4U & (((IData)(vlTOPp->mk_mac__DOT__x___05Fh18394) 
                      << 2U) ^ (0x1fffffcU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2) 
                                              >> 7U)))) 
              | ((2U & (((IData)(vlTOPp->mk_mac__DOT__x___05Fh18200) 
                         << 1U) ^ (0x1fffffeU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2) 
                                                 >> 7U)))) 
                 | (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                           ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                          >> 7U)))));
    vlTOPp->mk_mac__DOT__y___05Fh18685 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh18587) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2) 
                                             >> 0xaU));
    vlTOPp->mk_mac__DOT__y___05Fh15654 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d427) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d423)));
    vlTOPp->mk_mac__DOT__y___05Fh17020 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh16538) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4) 
                                                   >> 7U)));
    vlTOPp->mk_mac__DOT__y___05Fh17085 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh16538) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d451) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh16966 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh16538) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh16538)));
    vlTOPp->mk_mac__DOT__y___05Fh16902 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh16538) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d451)));
    vlTOPp->mk_mac__DOT__y___05Fh16668 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh16538) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d451) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh17149 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh16538) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh16538) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh16732 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh16538) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh16538) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh15266 = (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_8_T_ETC___05F_d413) 
                                           << 2U) | (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d427));
    vlTOPp->mk_mac__DOT__y___05Fh15830 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_8_T_ETC___05F_d413) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_8_T_ETC___05F_d411)));
    vlTOPp->mk_mac__DOT__x___05Fh15518 = (1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_8_T_ETC___05F_d413) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d427) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh15455 = (1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_8_T_ETC___05F_d413) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d423) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh15891 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_8_T_ETC___05F_d413) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_8_T_ETC___05F_d413)));
    vlTOPp->mk_mac__DOT__y___05Fh14423 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh13938) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__y___05Fh14488 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh13938) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d362) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh14369 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh13938) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh13938)));
    vlTOPp->mk_mac__DOT__y___05Fh14305 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh13938) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d362)));
    vlTOPp->mk_mac__DOT__y___05Fh14070 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh13938) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d362) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh14552 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh13938) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh13938) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh14134 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh13938) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh13938) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__exp___05Fh25186 = ((0x8000U 
                                             & (IData)(vlTOPp->mk_mac__DOT__IF_bfloat_obj_unsignedmult_rg_s5_val_53_THEN_b_ETC___05F_d755))
                                             ? (IData)(vlTOPp->mk_mac__DOT__exp___05F_1___05Fh25263)
                                             : (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s4));
    vlTOPp->mk_mac__DOT__mul_sticky_bit___05Fh25267 
        = (0U != (0x7fU & (IData)(vlTOPp->mk_mac__DOT__IF_bfloat_obj_unsignedmult_rg_s5_val_53_THEN_b_ETC___05F_d755)));
    vlTOPp->mk_mac__DOT__mul_sticky_bit___05Fh25294 
        = (0U != (0x3fU & (IData)(vlTOPp->mk_mac__DOT__IF_bfloat_obj_unsignedmult_rg_s5_val_53_THEN_b_ETC___05F_d755)));
    vlTOPp->mk_mac__DOT__mant_1___05Fh25188 = (0xffU 
                                               & ((0x8000U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__IF_bfloat_obj_unsignedmult_rg_s5_val_53_THEN_b_ETC___05F_d755))
                                                   ? 
                                                  ((IData)(vlTOPp->mk_mac__DOT__IF_bfloat_obj_unsignedmult_rg_s5_val_53_THEN_b_ETC___05F_d755) 
                                                   >> 8U)
                                                   : 
                                                  ((IData)(vlTOPp->mk_mac__DOT__IF_bfloat_obj_unsignedmult_rg_s5_val_53_THEN_b_ETC___05F_d755) 
                                                   >> 7U)));
    vlTOPp->mk_mac__DOT__x___05Fh34065 = (1U & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34084) 
                                                | vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27658 = 
        ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28868))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28868))
                   ? 2U : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28868)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27825 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28040) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28109)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28040))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28109)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28040)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27798 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28178) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28247)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28178))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28247)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28178)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27770 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28316) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28385)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28316))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28385)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28316)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27742 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28454) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28523)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28454))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28523)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28454)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27714 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28592) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28661)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28592))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28661)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28592)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27686 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28730) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28799)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28730))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28799)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh28730)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh12223 = 
        (0x20U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63) 
                  << 5U));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d175 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d172) 
                    >> 4U) & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d54) 
                              >> 3U)));
    vlTOPp->mk_mac__DOT__p___05Fh9807 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d172) 
                                                  >> 4U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d54) 
                                                  >> 3U)));
    vlTOPp->mk_mac__DOT__x___05Fh8032 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63) 
                                                  >> 6U)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d66 
        = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59) 
                  >> 7U) ^ ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63) 
                            >> 6U)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d268 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh11124 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59) 
                                                   >> 2U) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4_D_IN 
        = (0x80U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d96) 
                    << 1U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh8676 = 
        ((8U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d79) 
                << 2U)) | (2U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d96) 
                                 << 1U)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d127 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d123) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d96) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__rg_b___05Fh12381 = ((0xeU 
                                              & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d54) 
                                                 << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d96) 
                                                   >> 5U)));
    vlTOPp->mk_mac__DOT__p___05Fh6024 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d123) 
                                                  >> 2U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d96) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh10957 = 
        ((0x20U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59) 
                   << 4U)) | (8U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d69) 
                                    << 3U)));
    vlTOPp->mk_mac__DOT__x___05Fh7628 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d69) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59) 
                                                  >> 6U)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d82 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d79) 
                  >> 6U) & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d69) 
                            >> 5U)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d86 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d79) 
                  >> 6U) ^ ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d69) 
                            >> 5U)));
    vlTOPp->mk_mac__DOT__x___05Fh7652 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d69) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59) 
                                                  >> 6U)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d218 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d79) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d69) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh8859 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d79) 
                                                  >> 2U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d69) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh23019 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d566) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d564) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh23355 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d566) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d566)));
    vlTOPp->mk_mac__DOT__y___05Fh23294 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d566) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d564)));
    vlTOPp->mk_mac__DOT__x___05Fh23081 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d566) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d566) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh22413 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh21937) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh21937)));
    vlTOPp->mk_mac__DOT__y___05Fh22349 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh21937) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d580)));
    vlTOPp->mk_mac__DOT__y___05Fh22067 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh21937) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d580) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh22131 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh21937) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh21937) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh22532 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh21937) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d580) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh22596 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh21937) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh21937) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh21463 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh20990) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh20990)));
    vlTOPp->mk_mac__DOT__y___05Fh21399 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh20990) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d601)));
    vlTOPp->mk_mac__DOT__y___05Fh21120 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh20990) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d601) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh21184 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh20990) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh20990) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh21582 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh20990) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d601) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh21646 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh20990) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh20990) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh20455 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh20117) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_3_T_ETC___05F_d622)));
    vlTOPp->mk_mac__DOT__x___05Fh20313 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh20117) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh20117) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh20249 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh20117) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_3_T_ETC___05F_d622) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh20638 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh20117) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_3_T_ETC___05F_d622) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh20702 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh20117) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh20117) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1677 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh50135) 
           & (vlTOPp->mk_mac__DOT__int_8_rg_c1 >> 0x1cU));
    vlTOPp->mk_mac__DOT__p___05Fh48762 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh50135) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c1 
                                                   >> 0x1cU)));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1691 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh50135) 
           & (vlTOPp->mk_mac__DOT__int_8_rg_c1 >> 0x18U));
    vlTOPp->mk_mac__DOT__p___05Fh49224 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh50135) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c1 
                                                   >> 0x18U)));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1711 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh50135) 
           & (vlTOPp->mk_mac__DOT__int_8_rg_c1 >> 0x14U));
    vlTOPp->mk_mac__DOT__p___05Fh49684 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh50135) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c1 
                                                   >> 0x14U)));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1731 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh50135) 
           & (vlTOPp->mk_mac__DOT__int_8_rg_c1 >> 0x10U));
    vlTOPp->mk_mac__DOT__p___05Fh50144 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh50135) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c1 
                                                   >> 0x10U)));
    vlTOPp->mk_mac__DOT__x___05Fh53806 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50603) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh50603)));
    vlTOPp->mk_mac__DOT__y___05Fh53742 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50603) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1752)));
    vlTOPp->mk_mac__DOT__y___05Fh53536 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50603) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1752) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh53600 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50603) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50603) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh50625 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50603) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1752) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh50731 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50603) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50603) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh53366 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50996) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh50996)));
    vlTOPp->mk_mac__DOT__y___05Fh53302 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50996) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1773)));
    vlTOPp->mk_mac__DOT__y___05Fh53096 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50996) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1773) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh53160 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50996) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50996) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh51018 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50996) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1773) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh51124 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50996) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50996) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh52926 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh51389) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh51389)));
    vlTOPp->mk_mac__DOT__y___05Fh52862 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh51389) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1794)));
    vlTOPp->mk_mac__DOT__y___05Fh52656 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh51389) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1794) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh52720 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh51389) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh51389) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh51411 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh51389) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1794) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh51517 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh51389) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh51389) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh52422 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh51781) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1815)));
    vlTOPp->mk_mac__DOT__x___05Fh52280 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh51781) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh51781) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh52216 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh51781) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1815) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh51803 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh51781) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1815) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh51909 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh51781) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh51781) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__cin___05Fh36787 = (1U & (~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh36168)));
    vlTOPp->mk_mac__DOT__rg_a___05Fh35664 = ((8U & 
                                              ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh35747)) 
                                               << 3U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1117) 
                                                   >> 4U)));
    vlTOPp->mk_mac__DOT__x___05Fh36878 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh36932)) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__x___05Fh37471 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh36932)) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh37472 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh37053)) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh42833 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145)));
    vlTOPp->mk_mac__DOT__y___05Fh37516 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh37053)) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1237 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh38844 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179) 
                                                   >> 2U) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh35597 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35599));
    vlTOPp->mk_mac__DOT__y___05Fh37514 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh37174)) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh37577 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh37174)) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh37575 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh37295)) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1201) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh37658 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh37295)) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1201) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1327 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1201) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh40683 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1201) 
                                                   >> 2U) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh46537 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1277) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280)));
    vlTOPp->mk_mac__DOT__y___05Fh40066 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1277) 
                                                 >> 6U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280) 
                                                   >> 5U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1485 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1277) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh44289 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1277) 
                                                   >> 2U) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__bfloat_out_D_IN = (((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_sign_s9) 
                                             << 0x1fU) 
                                            | (((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s9) 
                                                << 0x17U) 
                                               | vlTOPp->mk_mac__DOT__CASE_grs4745_0b11_bfloat_rg_mant_s9_102_BITS_2_ETC___05Fq6));
    vlTOPp->mk_mac__DOT__IF_bfloat_rg_mult_s7_64_BIT_31_65_XOR_bfloat_r_ETC___05F_d875 
        = (0x1fffffffU & ((0x80000000U & (vlTOPp->mk_mac__DOT__bfloat_rg_mult_s7 
                                          ^ vlTOPp->mk_mac__DOT__bfloat_rg_C_s7))
                           ? (vlTOPp->mk_mac__DOT__a_temp___05Fh26821 
                              - vlTOPp->mk_mac__DOT__b_temp___05Fh26822)
                           : (vlTOPp->mk_mac__DOT__a_temp___05Fh26821 
                              + vlTOPp->mk_mac__DOT__b_temp___05Fh26822)));
    vlTOPp->mk_mac__DOT__y_avValue_snd___05Fh24219 
        = (((1U < (IData)(vlTOPp->mk_mac__DOT__e___05Fh24529)) 
            & (0xfeU > (IData)(vlTOPp->mk_mac__DOT__e___05Fh24529)))
            ? (IData)(vlTOPp->mk_mac__DOT__e___05Fh24529)
            : 0U);
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_D_IN 
        = ((0x6000U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0)) 
           | ((0x1000U & (((IData)(vlTOPp->mk_mac__DOT__x___05Fh18973) 
                           << 0xcU) ^ (0xfffff000U 
                                       & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2)))) 
              | ((0x800U & (((IData)(vlTOPp->mk_mac__DOT__x___05Fh18780) 
                             << 0xbU) ^ (0xfffff800U 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2)))) 
                 | (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0_94_BIT_10_0_ETC___05F_d528) 
                     << 7U) | (0x7fU & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0))))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0_94_BIT_10_0_ETC___05F_d551 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh18684) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh18685)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh18491) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh18492)) 
                       << 2U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh18298) 
                                   | (IData)(vlTOPp->mk_mac__DOT__y___05Fh18299)) 
                                  << 1U) | (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0) 
                                                   & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
                                                  >> 7U)))));
    vlTOPp->mk_mac__DOT__x___05Fh17082 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d451) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17085)));
    vlTOPp->mk_mac__DOT__y___05Fh16900 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16966) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4) 
                                             >> 7U));
    vlTOPp->mk_mac__DOT__x___05Fh16899 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d451) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16902)));
    vlTOPp->mk_mac__DOT__x___05Fh16665 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d451) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16668)));
    vlTOPp->mk_mac__DOT__y___05Fh17083 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17149) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d451) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh17213 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17149) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh16538) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh16796 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16732) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh16538));
    vlTOPp->mk_mac__DOT__y___05Fh16666 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16732) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d451));
    vlTOPp->mk_mac__DOT__x___05Fh15827 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_8_T_ETC___05F_d411) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh15830)));
    vlTOPp->mk_mac__DOT__y___05Fh15453 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh15518) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d423));
    vlTOPp->mk_mac__DOT__x___05Fh15452 = (1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_8_T_ETC___05F_d411) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh15455)));
    vlTOPp->mk_mac__DOT__x___05Fh15952 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh15891) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d427) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh15828 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh15891) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d423) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh14485 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d362) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14488)));
    vlTOPp->mk_mac__DOT__y___05Fh14303 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14369) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2) 
                                             >> 3U));
    vlTOPp->mk_mac__DOT__x___05Fh14302 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d362) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14305)));
    vlTOPp->mk_mac__DOT__x___05Fh14067 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d362) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14070)));
    vlTOPp->mk_mac__DOT__y___05Fh14486 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14552) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d362) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh14616 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14552) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh13938) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh14198 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14134) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh13938));
    vlTOPp->mk_mac__DOT__y___05Fh14068 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14134) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d362));
    vlTOPp->mk_mac__DOT__exp___05F_1___05Fh25471 = 
        (0xffU & ((IData)(1U) + (IData)(vlTOPp->mk_mac__DOT__exp___05Fh25186)));
    vlTOPp->mk_mac__DOT__grs_mul_round___05Fh25194 
        = ((0x8000U & (IData)(vlTOPp->mk_mac__DOT__IF_bfloat_obj_unsignedmult_rg_s5_val_53_THEN_b_ETC___05F_d755))
            ? ((6U & ((IData)(vlTOPp->mk_mac__DOT__IF_bfloat_obj_unsignedmult_rg_s5_val_53_THEN_b_ETC___05F_d755) 
                      >> 6U)) | (IData)(vlTOPp->mk_mac__DOT__mul_sticky_bit___05Fh25267))
            : ((6U & ((IData)(vlTOPp->mk_mac__DOT__IF_bfloat_obj_unsignedmult_rg_s5_val_53_THEN_b_ETC___05F_d755) 
                      >> 5U)) | (IData)(vlTOPp->mk_mac__DOT__mul_sticky_bit___05Fh25294)));
    vlTOPp->mk_mac__DOT__mantissa_round___05Fh25426 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->mk_mac__DOT__mant_1___05Fh25188)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27456 = 
        ((4U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27658))
          ? 8U : ((4U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27658))
                   ? 4U : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27658)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27539 = 
        ((4U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27825) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27798)))
          ? 8U : ((4U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27825))
                   ? (4U | (3U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27798)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27825)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27512 = 
        ((4U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27770) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27742)))
          ? 8U : ((4U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27770))
                   ? (4U | (3U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27742)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27770)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27484 = 
        ((4U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27714) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27686)))
          ? 8U : ((4U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27714))
                   ? (4U | (3U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27686)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27714)));
    vlTOPp->mk_mac__DOT__y___05Fh10334 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh9807) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63) 
                                                   >> 5U)));
    vlTOPp->mk_mac__DOT__y___05Fh10399 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh9807) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d175) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh10280 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh9807) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh9807)));
    vlTOPp->mk_mac__DOT__y___05Fh10216 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh9807) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d175)));
    vlTOPp->mk_mac__DOT__y___05Fh9983 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh9807) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d175) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh10463 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh9807) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh9807) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh10047 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh9807) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh9807) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh11603 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh11124) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d123) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh11668 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh11124) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d268) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh11549 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh11124) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh11124)));
    vlTOPp->mk_mac__DOT__y___05Fh11485 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh11124) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d268)));
    vlTOPp->mk_mac__DOT__y___05Fh11252 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh11124) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d268) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh11732 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh11124) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh11124) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh11316 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh11124) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh11124) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d318 
        = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d172) 
           & (IData)(vlTOPp->mk_mac__DOT__rg_b___05Fh12381));
    vlTOPp->mk_mac__DOT__p___05Fh12388 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d172) 
                                                  ^ (IData)(vlTOPp->mk_mac__DOT__rg_b___05Fh12381)));
    vlTOPp->mk_mac__DOT__y___05Fh6767 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh6024) 
                                               & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d79)));
    vlTOPp->mk_mac__DOT__y___05Fh6832 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6024) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d127) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh6713 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6024) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT__p___05Fh6024)));
    vlTOPp->mk_mac__DOT__y___05Fh6649 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6024) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d127)));
    vlTOPp->mk_mac__DOT__y___05Fh6368 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6024) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d127) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh6896 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6024) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh6024) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh6432 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6024) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh6024) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh8033 = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d66) 
                                         & (IData)(vlTOPp->mk_mac__DOT__x___05Fh7628));
    vlTOPp->mk_mac__DOT__x___05Fh7916 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d86) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d86)));
    vlTOPp->mk_mac__DOT__y___05Fh7855 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d86) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d82)));
    vlTOPp->mk_mac__DOT__y___05Fh7968 = (1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d86) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d96) 
                                                  >> 7U)));
    vlTOPp->mk_mac__DOT__y___05Fh7629 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7652) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d82) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh7692 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7652) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d86) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh8094 = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d66) 
                                         & (IData)(vlTOPp->mk_mac__DOT__x___05Fh7652));
    vlTOPp->mk_mac__DOT__y___05Fh9338 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh8859) 
                                               & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59)));
    vlTOPp->mk_mac__DOT__y___05Fh9403 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh8859) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d218) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh9284 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh8859) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT__p___05Fh8859)));
    vlTOPp->mk_mac__DOT__y___05Fh9220 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh8859) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d218)));
    vlTOPp->mk_mac__DOT__y___05Fh8987 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh8859) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d218) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh9467 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh8859) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh8859) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh9051 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh8859) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh8859) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh23016 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d564) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh23019)));
    vlTOPp->mk_mac__DOT__x___05Fh23291 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d564) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh23294)));
    vlTOPp->mk_mac__DOT__x___05Fh23142 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh23081) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d566));
    vlTOPp->mk_mac__DOT__y___05Fh23017 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh23081) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d564));
    vlTOPp->mk_mac__DOT__x___05Fh22346 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d580) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh22349)));
    vlTOPp->mk_mac__DOT__x___05Fh22064 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d580) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh22067)));
    vlTOPp->mk_mac__DOT__x___05Fh22195 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22131) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh21937));
    vlTOPp->mk_mac__DOT__y___05Fh22065 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22131) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d580));
    vlTOPp->mk_mac__DOT__x___05Fh22529 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d580) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh22532)));
    vlTOPp->mk_mac__DOT__y___05Fh22530 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22596) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d580) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh22660 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22596) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh21937) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh21396 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d601) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh21399)));
    vlTOPp->mk_mac__DOT__x___05Fh21117 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d601) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh21120)));
    vlTOPp->mk_mac__DOT__x___05Fh21248 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21184) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh20990));
    vlTOPp->mk_mac__DOT__y___05Fh21118 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21184) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d601));
    vlTOPp->mk_mac__DOT__x___05Fh21579 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d601) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh21582)));
    vlTOPp->mk_mac__DOT__y___05Fh21580 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21646) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d601) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh21710 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21646) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh20990) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh20247 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh20313) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_3_T_ETC___05F_d622));
    vlTOPp->mk_mac__DOT__x___05Fh20246 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_3_T_ETC___05F_d622) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh20249)));
    vlTOPp->mk_mac__DOT__x___05Fh20635 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_3_T_ETC___05F_d622) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh20638)));
    vlTOPp->mk_mac__DOT__x___05Fh20766 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh20702) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh20117) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh20636 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh20702) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_3_T_ETC___05F_d622) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh55566 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh48762) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh48762)));
    vlTOPp->mk_mac__DOT__y___05Fh55502 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh48762) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1677)));
    vlTOPp->mk_mac__DOT__y___05Fh55296 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh48762) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1677) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh55360 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh48762) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh48762) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh55126 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49224) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh49224)));
    vlTOPp->mk_mac__DOT__y___05Fh55062 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49224) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1691)));
    vlTOPp->mk_mac__DOT__y___05Fh54856 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49224) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1691) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh54920 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49224) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh49224) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh49246 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49224) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1691) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh49418 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49224) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh49224) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh54686 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49684) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh49684)));
    vlTOPp->mk_mac__DOT__y___05Fh54622 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49684) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1711)));
    vlTOPp->mk_mac__DOT__y___05Fh54416 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49684) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1711) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh54480 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49684) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh49684) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh49706 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49684) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1711) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh49878 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh49684) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh49684) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh54246 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50144) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh50144)));
    vlTOPp->mk_mac__DOT__y___05Fh54182 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50144) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1731)));
    vlTOPp->mk_mac__DOT__y___05Fh53976 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50144) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1731) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh54040 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50144) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50144) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh50166 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50144) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1731) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh50338 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh50144) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50144) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh53739 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1752) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53742)));
    vlTOPp->mk_mac__DOT__x___05Fh53533 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1752) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53536)));
    vlTOPp->mk_mac__DOT__x___05Fh53664 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh53600) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh50603));
    vlTOPp->mk_mac__DOT__y___05Fh53534 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh53600) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1752));
    vlTOPp->mk_mac__DOT__x___05Fh50622 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1752) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh50625)));
    vlTOPp->mk_mac__DOT__y___05Fh50623 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50731) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1752) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh50795 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50731) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50603) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh53299 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1773) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53302)));
    vlTOPp->mk_mac__DOT__x___05Fh53093 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1773) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53096)));
    vlTOPp->mk_mac__DOT__x___05Fh53224 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh53160) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh50996));
    vlTOPp->mk_mac__DOT__y___05Fh53094 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh53160) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1773));
    vlTOPp->mk_mac__DOT__x___05Fh51015 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1773) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh51018)));
    vlTOPp->mk_mac__DOT__y___05Fh51016 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51124) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1773) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh51188 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51124) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50996) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh52859 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1794) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh52862)));
    vlTOPp->mk_mac__DOT__x___05Fh52653 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1794) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh52656)));
    vlTOPp->mk_mac__DOT__x___05Fh52784 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh52720) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh51389));
    vlTOPp->mk_mac__DOT__y___05Fh52654 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh52720) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1794));
    vlTOPp->mk_mac__DOT__x___05Fh51408 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1794) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh51411)));
    vlTOPp->mk_mac__DOT__y___05Fh51409 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51517) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1794) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh51581 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51517) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh51389) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh52214 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh52280) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1815));
    vlTOPp->mk_mac__DOT__x___05Fh52213 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1815) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh52216)));
    vlTOPp->mk_mac__DOT__x___05Fh51800 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1815) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh51803)));
    vlTOPp->mk_mac__DOT__x___05Fh51973 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51909) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh51781) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh51801 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51909) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1815) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh36879 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37471) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37472));
    vlTOPp->mk_mac__DOT__x___05Fh37513 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37471) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37516));
    vlTOPp->mk_mac__DOT__y___05Fh38866 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh38844) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1237) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh39618 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh38844) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1117)));
    vlTOPp->mk_mac__DOT__x___05Fh38968 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh38844) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh38844) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh39564 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh38844) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh38844)));
    vlTOPp->mk_mac__DOT__y___05Fh39500 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh38844) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1237)));
    vlTOPp->mk_mac__DOT__y___05Fh39294 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh38844) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1237) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh39358 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh38844) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh38844) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__INV_x5597___05Fq5 = (0x7fU 
                                              & (~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh35597)));
    vlTOPp->mk_mac__DOT__y___05Fh37809 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37516) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37514));
    vlTOPp->mk_mac__DOT__x___05Fh37870 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37516) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37577));
    vlTOPp->mk_mac__DOT__y___05Fh38006 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37577) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37575));
    vlTOPp->mk_mac__DOT__a___05Fh42512 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37577) 
                                          ^ ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37575) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh37658)));
    vlTOPp->mk_mac__DOT__y___05Fh38004 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37577) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37658));
    vlTOPp->mk_mac__DOT__sum_BIT_0___05F_h39684 = (1U 
                                                   & (~ (IData)(vlTOPp->mk_mac__DOT__y___05Fh37658)));
    vlTOPp->mk_mac__DOT__y___05Fh41457 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh40683) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179)));
    vlTOPp->mk_mac__DOT__y___05Fh40705 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40683) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1327) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh41403 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40683) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh40683)));
    vlTOPp->mk_mac__DOT__y___05Fh41339 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40683) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1327)));
    vlTOPp->mk_mac__DOT__x___05Fh40807 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40683) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh40683) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh41133 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40683) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1327) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh41197 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40683) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh40683) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh45063 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh44289) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1201)));
    vlTOPp->mk_mac__DOT__x___05Fh45009 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44289) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh44289)));
    vlTOPp->mk_mac__DOT__y___05Fh44945 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44289) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1485)));
    vlTOPp->mk_mac__DOT__y___05Fh44311 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44289) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1485) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh44739 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44289) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1485) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh44803 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44289) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh44289) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh44413 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44289) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh44289) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8_D_IN = (0xfffffffU 
                                                   & vlTOPp->mk_mac__DOT__IF_bfloat_rg_mult_s7_64_BIT_31_65_XOR_bfloat_r_ETC___05F_d875);
    vlTOPp->mk_mac__DOT__y_avValue_snd___05Fh24235 
        = (((0xffU == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                >> 7U))) | (0xffU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                >> 7U))))
            ? 0xffU : (IData)(vlTOPp->mk_mac__DOT__y_avValue_snd___05Fh24219));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0_94_BIT_12_9_ETC___05F_d552 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh19070) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh19071)) 
            << 5U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh18877) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh18878)) 
                       << 4U) | (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0_94_BIT_10_0_ETC___05F_d551)));
    vlTOPp->mk_mac__DOT__x___05Fh17080 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17082) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17083));
    vlTOPp->mk_mac__DOT__x___05Fh17299 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17213) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh16538));
    vlTOPp->mk_mac__DOT__y___05Fh17081 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17213) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d451));
    vlTOPp->mk_mac__DOT__y___05Fh16664 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16796) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4) 
                                             >> 7U));
    vlTOPp->mk_mac__DOT__x___05Fh16663 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16665) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16666));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh15186 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh15266) 
         ^ ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh15452) 
              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh15453)) 
             << 3U) | ((4U & ((0xfffffffcU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d423) 
                                              << 1U)) 
                              | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh15654) 
                                 << 2U))) | (2U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d423) 
                                                   << 1U)))));
    vlTOPp->mk_mac__DOT__y___05Fh15826 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh15952) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_6_T_ETC___05F_d423));
    vlTOPp->mk_mac__DOT__x___05Fh15825 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh15827) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh15828));
    vlTOPp->mk_mac__DOT__x___05Fh14483 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14485) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14486));
    vlTOPp->mk_mac__DOT__x___05Fh14702 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14616) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh13938));
    vlTOPp->mk_mac__DOT__y___05Fh14484 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14616) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d362));
    vlTOPp->mk_mac__DOT__y___05Fh14066 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14198) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2) 
                                             >> 3U));
    vlTOPp->mk_mac__DOT__x___05Fh14065 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14067) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14068));
    vlTOPp->mk_mac__DOT__IF_IF_IF_bfloat_obj_unsignedmult_rg_s5_val_53___05FETC___05F_d778 
        = ((((3U == (IData)(vlTOPp->mk_mac__DOT__grs_mul_round___05Fh25194)) 
             | (6U == (IData)(vlTOPp->mk_mac__DOT__grs_mul_round___05Fh25194))) 
            | (7U == (IData)(vlTOPp->mk_mac__DOT__grs_mul_round___05Fh25194)))
            ? (IData)(vlTOPp->mk_mac__DOT__mantissa_round___05Fh25426)
            : (IData)(vlTOPp->mk_mac__DOT__mant_1___05Fh25188));
    vlTOPp->mk_mac__DOT__IF_IF_IF_IF_bfloat_rg_mant_s8_81_BIT_25_85_THE_ETC___05F_d979 
        = ((8U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27539) 
                  & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27512)))
            ? 0x10U : ((8U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27539))
                        ? (8U | (7U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27512)))
                        : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27539)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh27338 = 
        ((8U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27484) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27456)))
          ? 0x10U : ((8U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27484))
                      ? (8U | (7U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27456)))
                      : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27484)));
    vlTOPp->mk_mac__DOT__x___05Fh10396 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d175) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10399)));
    vlTOPp->mk_mac__DOT__y___05Fh10214 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10280) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63) 
                                             >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh10213 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d175) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10216)));
    vlTOPp->mk_mac__DOT__x___05Fh9980 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d175) 
                                                >> 2U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9983)));
    vlTOPp->mk_mac__DOT__y___05Fh10397 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10463) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d175) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh10527 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10463) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh9807) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh10111 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10047) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh9807));
    vlTOPp->mk_mac__DOT__y___05Fh9981 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10047) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d175));
    vlTOPp->mk_mac__DOT__x___05Fh11665 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d268) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11668)));
    vlTOPp->mk_mac__DOT__y___05Fh11483 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11549) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d123) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh11482 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d268) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11485)));
    vlTOPp->mk_mac__DOT__x___05Fh11249 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d268) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11252)));
    vlTOPp->mk_mac__DOT__y___05Fh11666 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11732) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d268) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh11796 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11732) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh11124) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh11380 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11316) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh11124));
    vlTOPp->mk_mac__DOT__y___05Fh11250 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11316) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d268));
    vlTOPp->mk_mac__DOT__y___05Fh12751 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh12388) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d318)));
    vlTOPp->mk_mac__DOT__y___05Fh12934 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh12388) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d318) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh12609 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh12388) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh12388) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh12545 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh12388) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d318) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh12998 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh12388) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh12388) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh6829 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d127) 
                                                >> 3U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6832)));
    vlTOPp->mk_mac__DOT__y___05Fh6647 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6713) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d79));
    vlTOPp->mk_mac__DOT__x___05Fh6646 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d127) 
                                                >> 1U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6649)));
    vlTOPp->mk_mac__DOT__x___05Fh6365 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d127) 
                                                >> 2U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6368)));
    vlTOPp->mk_mac__DOT__y___05Fh6830 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6896) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d127) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh6960 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6896) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh6024) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh6496 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6432) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh6024));
    vlTOPp->mk_mac__DOT__y___05Fh6366 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6432) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d127));
    vlTOPp->mk_mac__DOT__x___05Fh8030 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8032) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8033));
    vlTOPp->mk_mac__DOT__y___05Fh7853 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7916) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d96) 
                                            >> 7U));
    vlTOPp->mk_mac__DOT__x___05Fh7852 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d82) 
                                                >> 1U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7855)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d118 
        = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d86) 
           ^ ((2U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d82) 
                      | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7968)) 
                     << 1U)) | (1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d96) 
                                      >> 7U))));
    vlTOPp->mk_mac__DOT__x___05Fh7626 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7628) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7629));
    vlTOPp->mk_mac__DOT__x___05Fh7753 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7692) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d86));
    vlTOPp->mk_mac__DOT__y___05Fh7627 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7692) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d82));
    vlTOPp->mk_mac__DOT__y___05Fh8031 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8094) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d82) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh8155 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8094) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d86) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh9400 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d218) 
                                                >> 3U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9403)));
    vlTOPp->mk_mac__DOT__y___05Fh9218 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9284) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59));
    vlTOPp->mk_mac__DOT__x___05Fh9217 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d218) 
                                                >> 1U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9220)));
    vlTOPp->mk_mac__DOT__x___05Fh8984 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d218) 
                                                >> 2U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8987)));
    vlTOPp->mk_mac__DOT__y___05Fh9401 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9467) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d218) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh9531 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9467) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh8859) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh9115 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9051) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh8859));
    vlTOPp->mk_mac__DOT__y___05Fh8985 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9051) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d218));
    vlTOPp->mk_mac__DOT__x___05Fh23014 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh23016) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh23017));
    vlTOPp->mk_mac__DOT__x___05Fh22062 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22064) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh22065));
    vlTOPp->mk_mac__DOT__x___05Fh22527 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22529) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh22530));
    vlTOPp->mk_mac__DOT__x___05Fh22746 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22660) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh21937));
    vlTOPp->mk_mac__DOT__y___05Fh22528 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22660) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d580));
    vlTOPp->mk_mac__DOT__x___05Fh21115 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21117) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh21118));
    vlTOPp->mk_mac__DOT__x___05Fh21577 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21579) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh21580));
    vlTOPp->mk_mac__DOT__x___05Fh21796 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21710) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh20990));
    vlTOPp->mk_mac__DOT__y___05Fh21578 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21710) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d601));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20039 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh20117) 
         ^ ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh20246) 
              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh20247)) 
             << 3U) | ((4U & ((0xfffffffcU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_3_T_ETC___05F_d622) 
                                              << 1U)) 
                              | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh20455) 
                                 << 2U))) | (2U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_3_T_ETC___05F_d622) 
                                                   << 1U)))));
    vlTOPp->mk_mac__DOT__y___05Fh20634 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh20766) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_3_T_ETC___05F_d622));
    vlTOPp->mk_mac__DOT__x___05Fh20633 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh20635) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh20636));
    vlTOPp->mk_mac__DOT__x___05Fh55499 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1677) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh55502)));
    vlTOPp->mk_mac__DOT__x___05Fh55293 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1677) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh55296)));
    vlTOPp->mk_mac__DOT__x___05Fh55424 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh55360) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh48762));
    vlTOPp->mk_mac__DOT__y___05Fh55294 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh55360) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1677));
    vlTOPp->mk_mac__DOT__x___05Fh55059 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1691) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh55062)));
    vlTOPp->mk_mac__DOT__x___05Fh54853 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1691) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54856)));
    vlTOPp->mk_mac__DOT__x___05Fh54984 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54920) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh49224));
    vlTOPp->mk_mac__DOT__y___05Fh54854 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54920) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1691));
    vlTOPp->mk_mac__DOT__x___05Fh49243 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1691) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh49246)));
    vlTOPp->mk_mac__DOT__y___05Fh49244 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49418) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1691) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh49482 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49418) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh49224) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh54619 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1711) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54622)));
    vlTOPp->mk_mac__DOT__x___05Fh54413 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1711) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54416)));
    vlTOPp->mk_mac__DOT__x___05Fh54544 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54480) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh49684));
    vlTOPp->mk_mac__DOT__y___05Fh54414 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54480) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1711));
    vlTOPp->mk_mac__DOT__x___05Fh49703 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1711) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh49706)));
    vlTOPp->mk_mac__DOT__y___05Fh49704 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49878) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1711) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh49942 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49878) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh49684) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh54179 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1731) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54182)));
    vlTOPp->mk_mac__DOT__x___05Fh53973 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1731) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53976)));
    vlTOPp->mk_mac__DOT__x___05Fh54104 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54040) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh50144));
    vlTOPp->mk_mac__DOT__y___05Fh53974 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54040) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1731));
    vlTOPp->mk_mac__DOT__x___05Fh50163 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1731) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh50166)));
    vlTOPp->mk_mac__DOT__y___05Fh50164 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50338) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1731) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh50402 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50338) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50144) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh53531 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh53533) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53534));
    vlTOPp->mk_mac__DOT__x___05Fh50620 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50622) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh50623));
    vlTOPp->mk_mac__DOT__x___05Fh50881 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50795) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh50603));
    vlTOPp->mk_mac__DOT__y___05Fh50621 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50795) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1752));
    vlTOPp->mk_mac__DOT__x___05Fh53091 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh53093) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53094));
    vlTOPp->mk_mac__DOT__x___05Fh51013 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51015) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh51016));
    vlTOPp->mk_mac__DOT__x___05Fh51274 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51188) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh50996));
    vlTOPp->mk_mac__DOT__y___05Fh51014 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51188) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1773));
    vlTOPp->mk_mac__DOT__x___05Fh52651 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh52653) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh52654));
    vlTOPp->mk_mac__DOT__x___05Fh51406 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51408) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh51409));
    vlTOPp->mk_mac__DOT__x___05Fh51667 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51581) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh51389));
    vlTOPp->mk_mac__DOT__y___05Fh51407 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51581) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1794));
    vlTOPp->mk_mac__DOT__sum___05Fh51783 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh51781) 
                                            ^ ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh52213) 
                                                 | (IData)(vlTOPp->mk_mac__DOT__y___05Fh52214)) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((0xfffffffcU 
                                                       & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1815) 
                                                          << 1U)) 
                                                      | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh52422) 
                                                         << 2U))) 
                                                  | (2U 
                                                     & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1815) 
                                                        << 1U)))));
    vlTOPp->mk_mac__DOT__y___05Fh51799 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51973) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1815));
    vlTOPp->mk_mac__DOT__x___05Fh51798 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51800) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh51801));
    vlTOPp->mk_mac__DOT__x___05Fh36876 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36878) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36879));
    vlTOPp->mk_mac__DOT__y___05Fh36877 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37513) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37514));
    vlTOPp->mk_mac__DOT__x___05Fh37574 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37513) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37577));
    vlTOPp->mk_mac__DOT__x___05Fh38863 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1237) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38866)));
    vlTOPp->mk_mac__DOT__y___05Fh38864 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38968) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1237) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh39032 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38968) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh38844) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh39498 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39564) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1117));
    vlTOPp->mk_mac__DOT__x___05Fh39497 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1237) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39500)));
    vlTOPp->mk_mac__DOT__x___05Fh39291 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1237) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39294)));
    vlTOPp->mk_mac__DOT__x___05Fh39422 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39358) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh38844));
    vlTOPp->mk_mac__DOT__y___05Fh39292 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39358) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1237));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1124 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh35664) 
           & ((IData)(vlTOPp->mk_mac__DOT__INV_x5597___05Fq5) 
              >> 3U));
    vlTOPp->mk_mac__DOT__p___05Fh35673 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh35664) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mk_mac__DOT__INV_x5597___05Fq5) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1261 
        = (7U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1117) 
                  >> 1U) & (IData)(vlTOPp->mk_mac__DOT__INV_x5597___05Fq5)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1263 
        = (7U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1117) 
                  >> 1U) ^ (IData)(vlTOPp->mk_mac__DOT__INV_x5597___05Fq5)));
    vlTOPp->mk_mac__DOT__x___05Fh37806 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37472) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh37809));
    vlTOPp->mk_mac__DOT__y___05Fh37805 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37870) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37658));
    vlTOPp->mk_mac__DOT__y___05Fh37807 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37870) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37575));
    vlTOPp->mk_mac__DOT__x___05Fh38003 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37514) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38006));
    vlTOPp->mk_mac__DOT__x___05Fh40702 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1327) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40705)));
    vlTOPp->mk_mac__DOT__y___05Fh41337 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41403) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179));
    vlTOPp->mk_mac__DOT__x___05Fh41336 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1327) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41339)));
    vlTOPp->mk_mac__DOT__y___05Fh40703 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40807) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1327) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh40871 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40807) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh40683) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh41130 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1327) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41133)));
    vlTOPp->mk_mac__DOT__x___05Fh41261 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41197) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh40683));
    vlTOPp->mk_mac__DOT__y___05Fh41131 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41197) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1327));
    vlTOPp->mk_mac__DOT__y___05Fh44943 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45009) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1201));
    vlTOPp->mk_mac__DOT__x___05Fh44942 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1485) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44945)));
    vlTOPp->mk_mac__DOT__x___05Fh44308 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1485) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44311)));
    vlTOPp->mk_mac__DOT__x___05Fh44736 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1485) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44739)));
    vlTOPp->mk_mac__DOT__x___05Fh44867 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44803) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh44289));
    vlTOPp->mk_mac__DOT__y___05Fh44737 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44803) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1485));
    vlTOPp->mk_mac__DOT__y___05Fh44309 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44413) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1485) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh44477 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44413) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh44289) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y_avValue_snd___05Fh24251 
        = (((0U == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                             >> 7U))) | (0U == (0xffU 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                   >> 7U))))
            ? 0U : (IData)(vlTOPp->mk_mac__DOT__y_avValue_snd___05Fh24235));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_1_D_IN 
        = ((0x4000U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1)) 
           | (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0_94_BIT_12_9_ETC___05F_d552) 
               << 8U) | (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh19266)));
    vlTOPp->mk_mac__DOT__y___05Fh17079 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17299) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4) 
                                             >> 7U));
    vlTOPp->mk_mac__DOT__x___05Fh17078 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17080) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17081));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d489 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh16663) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16664)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh16899) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16900)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d451) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17020)) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4) 
                                                      >> 7U)))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_1_D_IN 
        = ((0x4000U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1)) 
           | ((0x1c00U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1)) 
              | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh15825) 
                   | (IData)(vlTOPp->mk_mac__DOT__y___05Fh15826)) 
                  << 9U) | (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh15186) 
                             << 5U) | (2U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1))))));
    vlTOPp->mk_mac__DOT__y___05Fh14482 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14702) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2) 
                                             >> 3U));
    vlTOPp->mk_mac__DOT__x___05Fh14481 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14483) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14484));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d401 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh14065) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14066)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh14302) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14303)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d362) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14423)) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2) 
                                                      >> 3U)))));
    vlTOPp->mk_mac__DOT___theResult___05F___05F_1___05Fh25196 
        = ((0x100U & (IData)(vlTOPp->mk_mac__DOT__IF_IF_IF_bfloat_obj_unsignedmult_rg_s5_val_53___05FETC___05F_d778))
            ? (IData)(vlTOPp->mk_mac__DOT__exp___05F_1___05Fh25471)
            : (IData)(vlTOPp->mk_mac__DOT__exp___05Fh25186));
    vlTOPp->mk_mac__DOT__out___05Fh27295 = ((0x10U 
                                             & ((IData)(vlTOPp->mk_mac__DOT__IF_IF_IF_IF_bfloat_rg_mant_s8_81_BIT_25_85_THE_ETC___05F_d979) 
                                                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27338)))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlTOPp->mk_mac__DOT__IF_IF_IF_IF_bfloat_rg_mant_s8_81_BIT_25_85_THE_ETC___05F_d979))
                                              ? (0x10U 
                                                 | (0xfU 
                                                    & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh27338)))
                                              : (IData)(vlTOPp->mk_mac__DOT__IF_IF_IF_IF_bfloat_rg_mant_s8_81_BIT_25_85_THE_ETC___05F_d979)));
    vlTOPp->mk_mac__DOT__x___05Fh10394 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10396) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10397));
    vlTOPp->mk_mac__DOT__x___05Fh10613 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10527) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh9807));
    vlTOPp->mk_mac__DOT__y___05Fh10395 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10527) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d175));
    vlTOPp->mk_mac__DOT__y___05Fh9979 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10111) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63) 
                                            >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh9978 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9980) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9981));
    vlTOPp->mk_mac__DOT__x___05Fh11663 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11665) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11666));
    vlTOPp->mk_mac__DOT__x___05Fh11882 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11796) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh11124));
    vlTOPp->mk_mac__DOT__y___05Fh11664 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11796) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d268));
    vlTOPp->mk_mac__DOT__y___05Fh11248 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11380) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d123) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh11247 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11249) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11250));
    vlTOPp->mk_mac__DOT__x___05Fh12931 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d318) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh12934)));
    vlTOPp->mk_mac__DOT__y___05Fh12543 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh12609) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d318));
    vlTOPp->mk_mac__DOT__x___05Fh12542 = (1U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d318) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh12545)));
    vlTOPp->mk_mac__DOT__x___05Fh13062 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh12998) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh12388) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh12932 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh12998) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d318) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh6827 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6829) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6830));
    vlTOPp->mk_mac__DOT__x___05Fh7046 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6960) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh6024));
    vlTOPp->mk_mac__DOT__y___05Fh6828 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6960) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d127));
    vlTOPp->mk_mac__DOT__y___05Fh6364 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6496) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d79));
    vlTOPp->mk_mac__DOT__x___05Fh6363 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6365) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6366));
    vlTOPp->mk_mac__DOT__y___05Fh7625 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7753) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d96) 
                                            >> 7U));
    vlTOPp->mk_mac__DOT__x___05Fh7624 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7626) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7627));
    vlTOPp->mk_mac__DOT__x___05Fh8028 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8030) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8031));
    vlTOPp->mk_mac__DOT__x___05Fh8237 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8155) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d86));
    vlTOPp->mk_mac__DOT__y___05Fh8029 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8155) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d82));
    vlTOPp->mk_mac__DOT__x___05Fh9398 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9400) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9401));
    vlTOPp->mk_mac__DOT__x___05Fh9617 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9531) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh8859));
    vlTOPp->mk_mac__DOT__y___05Fh9399 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9531) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d218));
    vlTOPp->mk_mac__DOT__y___05Fh8983 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9115) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59));
    vlTOPp->mk_mac__DOT__x___05Fh8982 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8984) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8985));
    vlTOPp->mk_mac__DOT__x___05Fh22525 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22527) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh22528));
    vlTOPp->mk_mac__DOT__x___05Fh21575 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21577) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh21578));
    vlTOPp->mk_mac__DOT__IF_x0633_OR_y0634_THEN_1_ELSE_0___05Fq1 
        = (((IData)(vlTOPp->mk_mac__DOT__x___05Fh20633) 
            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh20634))
            ? 1U : 0U);
    vlTOPp->mk_mac__DOT__x___05Fh55291 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh55293) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh55294));
    vlTOPp->mk_mac__DOT__x___05Fh54851 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54853) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54854));
    vlTOPp->mk_mac__DOT__x___05Fh49241 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49243) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh49244));
    vlTOPp->mk_mac__DOT__x___05Fh49568 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49482) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh49224));
    vlTOPp->mk_mac__DOT__y___05Fh49242 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49482) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1691));
    vlTOPp->mk_mac__DOT__x___05Fh54411 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54413) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54414));
    vlTOPp->mk_mac__DOT__x___05Fh49701 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49703) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh49704));
    vlTOPp->mk_mac__DOT__x___05Fh50028 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49942) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh49684));
    vlTOPp->mk_mac__DOT__y___05Fh49702 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49942) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1711));
    vlTOPp->mk_mac__DOT__x___05Fh53971 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh53973) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53974));
    vlTOPp->mk_mac__DOT__x___05Fh50161 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50163) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh50164));
    vlTOPp->mk_mac__DOT__x___05Fh50488 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50402) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh50144));
    vlTOPp->mk_mac__DOT__y___05Fh50162 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50402) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1731));
    vlTOPp->mk_mac__DOT__x___05Fh50618 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50620) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh50621));
    vlTOPp->mk_mac__DOT__x___05Fh51011 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51013) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh51014));
    vlTOPp->mk_mac__DOT__x___05Fh51404 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51406) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh51407));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1831 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51798) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh51799));
    vlTOPp->mk_mac__DOT__x___05Fh36874 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36876) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36877));
    vlTOPp->mk_mac__DOT__y___05Fh36873 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37574) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37658));
    vlTOPp->mk_mac__DOT__y___05Fh36875 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37574) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37575));
    vlTOPp->mk_mac__DOT__x___05Fh38861 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38863) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38864));
    vlTOPp->mk_mac__DOT__x___05Fh39118 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39032) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh38844));
    vlTOPp->mk_mac__DOT__y___05Fh38862 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39032) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1237));
    vlTOPp->mk_mac__DOT__y___05Fh39290 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39422) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1117));
    vlTOPp->mk_mac__DOT__x___05Fh39289 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39291) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39292));
    vlTOPp->mk_mac__DOT__y___05Fh35695 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh35673) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1124) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh35900 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh35673) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh35673) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh36652 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh35673) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145) 
                                                   >> 5U)));
    vlTOPp->mk_mac__DOT__x___05Fh36598 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh35673) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh35673)));
    vlTOPp->mk_mac__DOT__y___05Fh36534 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh35673) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1124)));
    vlTOPp->mk_mac__DOT__y___05Fh36328 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh35673) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1124) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh36392 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh35673) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh35673) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh39858 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1263) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1261) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh39836 = (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1263) 
                                           << 1U) | 
                                          (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1277) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280) 
                                                  >> 5U))));
    vlTOPp->mk_mac__DOT__x___05Fh40004 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1263) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1263) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh40497 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1263) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh40066));
    vlTOPp->mk_mac__DOT__x___05Fh40361 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1263) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1263)));
    vlTOPp->mk_mac__DOT__y___05Fh40300 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1263) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1261)));
    vlTOPp->mk_mac__DOT__x___05Fh37804 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37806) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh37807));
    vlTOPp->mk_mac__DOT__a___05Fh42314 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37516) 
                                          ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38003) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38004)));
    vlTOPp->mk_mac__DOT__x___05Fh40700 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40702) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40703));
    vlTOPp->mk_mac__DOT__x___05Fh40957 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40871) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh40683));
    vlTOPp->mk_mac__DOT__y___05Fh40701 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40871) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1327));
    vlTOPp->mk_mac__DOT__y___05Fh41129 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41261) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179));
    vlTOPp->mk_mac__DOT__x___05Fh41128 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41130) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41131));
    vlTOPp->mk_mac__DOT__y___05Fh44735 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44867) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1201));
    vlTOPp->mk_mac__DOT__x___05Fh44734 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44736) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44737));
    vlTOPp->mk_mac__DOT__x___05Fh44306 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44308) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44309));
    vlTOPp->mk_mac__DOT__x___05Fh44563 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44477) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh44289));
    vlTOPp->mk_mac__DOT__y___05Fh44307 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44477) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1485));
    vlTOPp->mk_mac__DOT__bfloat_rg_exp_add_s1_D_IN 
        = ((((0xffU == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                 >> 7U))) & (0U == 
                                             (0xffU 
                                              & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                 >> 7U)))) 
            | ((0U == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                >> 7U))) & (0xffU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                >> 7U)))))
            ? 0xffU : (IData)(vlTOPp->mk_mac__DOT__y_avValue_snd___05Fh24251));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh16457 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh16538) 
         ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_81_BITS_10___05FETC___05F_d489));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh13852 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh13938) 
         ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_51_BITS_6_T_ETC___05F_d401));
    vlTOPp->mk_mac__DOT__IF_theResult___05F___05F_15196_EQ_255_THEN_0_ELSE_IF_I_ETC___05Fq2 
        = ((0xffU == (IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_1___05Fh25196))
            ? 0U : (0xff0000U & ((IData)(vlTOPp->mk_mac__DOT__IF_IF_IF_bfloat_obj_unsignedmult_rg_s5_val_53___05FETC___05F_d778) 
                                 << 0x10U)));
    vlTOPp->mk_mac__DOT__leftshift_count___05Fh27161 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->mk_mac__DOT__out___05Fh27295)));
    vlTOPp->mk_mac__DOT__y___05Fh10393 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10613) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63) 
                                             >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh10392 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10394) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10395));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d213 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh9978) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9979)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh10213) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10214)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d175) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10334)) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63) 
                                                      >> 5U)))));
    vlTOPp->mk_mac__DOT__y___05Fh11662 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11882) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d123) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh11661 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11663) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11664));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d306 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh11247) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11248)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh11482) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11483)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d268) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11603)) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d123) 
                                                      >> 6U)))));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh12308 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh12388) 
         ^ ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh12542) 
              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh12543)) 
             << 3U) | ((4U & ((0xfffffffcU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d318) 
                                              << 1U)) 
                              | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh12751) 
                                 << 2U))) | (2U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d318) 
                                                   << 1U)))));
    vlTOPp->mk_mac__DOT__y___05Fh12930 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13062) 
                                          & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d318));
    vlTOPp->mk_mac__DOT__x___05Fh12929 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh12931) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh12932));
    vlTOPp->mk_mac__DOT__y___05Fh6826 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7046) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d79));
    vlTOPp->mk_mac__DOT__x___05Fh6825 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6827) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6828));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d165 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh6363) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6364)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh6646) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6647)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d127) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6767)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d79)))));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh5886 = 
        ((((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d66) 
           ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7624) 
              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7625))) 
          << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh7652) 
                      ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7852) 
                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7853))) 
                     << 2U) | (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d118)));
    vlTOPp->mk_mac__DOT__y___05Fh8027 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8237) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d96) 
                                            >> 7U));
    vlTOPp->mk_mac__DOT__x___05Fh8026 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8028) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8029));
    vlTOPp->mk_mac__DOT__y___05Fh9397 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9617) 
                                         & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59));
    vlTOPp->mk_mac__DOT__x___05Fh9396 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9398) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9399));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d256 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh8982) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8983)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh9217) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9218)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d218) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9338)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d59)))));
    vlTOPp->mk_mac__DOT__y___05Fh21116 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21248) 
                                          & (IData)(vlTOPp->mk_mac__DOT__IF_x0633_OR_y0634_THEN_1_ELSE_0___05Fq1));
    vlTOPp->mk_mac__DOT__y___05Fh21397 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21463) 
                                          & (IData)(vlTOPp->mk_mac__DOT__IF_x0633_OR_y0634_THEN_1_ELSE_0___05Fq1));
    vlTOPp->mk_mac__DOT__y___05Fh21517 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh20990) 
                                                & (IData)(vlTOPp->mk_mac__DOT__IF_x0633_OR_y0634_THEN_1_ELSE_0___05Fq1)));
    vlTOPp->mk_mac__DOT__y___05Fh21576 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21796) 
                                          & (IData)(vlTOPp->mk_mac__DOT__IF_x0633_OR_y0634_THEN_1_ELSE_0___05Fq1));
    vlTOPp->mk_mac__DOT__x___05Fh49239 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49241) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh49242));
    vlTOPp->mk_mac__DOT__x___05Fh49699 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49701) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh49702));
    vlTOPp->mk_mac__DOT__x___05Fh50159 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50161) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh50162));
    vlTOPp->mk_mac__DOT__y___05Fh52652 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh52784) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1831));
    vlTOPp->mk_mac__DOT__y___05Fh52860 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh52926) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1831));
    vlTOPp->mk_mac__DOT__y___05Fh52980 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh51389) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1831));
    vlTOPp->mk_mac__DOT__y___05Fh51405 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51667) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1831));
    vlTOPp->mk_mac__DOT__x___05Fh36872 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36874) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36875));
    vlTOPp->mk_mac__DOT__y___05Fh38860 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39118) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1117));
    vlTOPp->mk_mac__DOT__x___05Fh38859 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38861) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38862));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1303 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh39289) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39290)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh39497) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39498)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1237) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39618)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1117)))));
    vlTOPp->mk_mac__DOT__x___05Fh35692 = (1U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1124) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh35695)));
    vlTOPp->mk_mac__DOT__y___05Fh35693 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35900) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1124) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh35964 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35900) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh35673) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh36532 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36598) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145) 
                                             >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh36531 = (1U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1124) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36534)));
    vlTOPp->mk_mac__DOT__x___05Fh36325 = (1U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1124) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36328)));
    vlTOPp->mk_mac__DOT__x___05Fh36456 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36392) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh35673));
    vlTOPp->mk_mac__DOT__y___05Fh36326 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36392) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1124));
    vlTOPp->mk_mac__DOT__x___05Fh39855 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1261) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39858)));
    vlTOPp->mk_mac__DOT__x___05Fh40065 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40004) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1263));
    vlTOPp->mk_mac__DOT__y___05Fh39856 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40004) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1261));
    vlTOPp->mk_mac__DOT__y___05Fh40298 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40361) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh40066));
    vlTOPp->mk_mac__DOT__x___05Fh40297 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1261) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40300)));
    vlTOPp->mk_mac__DOT__a___05Fh38662 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37471) 
                                          ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37804) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh37805)));
    vlTOPp->mk_mac__DOT__y___05Fh40699 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40957) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179));
    vlTOPp->mk_mac__DOT__x___05Fh40698 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40700) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40701));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1372 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh41128) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41129)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh41336) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41337)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1327) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41457)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179)))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1523 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh44734) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44735)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh44942) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44943)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1485) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45063)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1201)))));
    vlTOPp->mk_mac__DOT__y___05Fh44305 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44563) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1201));
    vlTOPp->mk_mac__DOT__x___05Fh44304 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44306) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44307));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_2_D_IN 
        = ((0x1000U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2)) 
           | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh17078) 
                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17079)) 
               << 0xbU) | ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh16457) 
                           << 7U)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s2_op_0_D_IN 
        = ((0x4000U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0)) 
           | ((0x2000U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1)) 
              | ((0x1e00U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0)) 
                 | ((0x100U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_4)) 
                    | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh14481) 
                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14482)) 
                        << 7U) | (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh13852) 
                                   << 3U) | (7U & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0))))))));
    vlTOPp->mk_mac__DOT__IF_bfloat_rg_exception_s1_39_EQ_3_52_THEN_IF_I_ETC___05F_d798 
        = ((3U == (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exception_s1))
            ? (((IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_1___05Fh25196) 
                << 0x17U) | (0x7fffffU & vlTOPp->mk_mac__DOT__IF_theResult___05F___05F_15196_EQ_255_THEN_0_ELSE_IF_I_ETC___05Fq2))
            : (((IData)(vlTOPp->mk_mac__DOT__CASE_bfloat_rg_exception_s1_1_0_2_255_255___05Fq3) 
                << 0x17U) | vlTOPp->mk_mac__DOT__CASE_bfloat_rg_exception_s1_1_0_2_0_4194304___05Fq4));
    vlTOPp->mk_mac__DOT__op2___05Fh33608 = vlTOPp->mk_mac__DOT__leftshift_count___05Fh27161;
    vlTOPp->mk_mac__DOT__mantissa___05Fh27163 = (0x3ffffffU 
                                                 & (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                                                    << (IData)(vlTOPp->mk_mac__DOT__leftshift_count___05Fh27161)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh8727 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh9807) 
         ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d213));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh11043 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh11124) 
         ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d306));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_3_D_IN 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh12929) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh12930)) 
            << 0xaU) | (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh12308) 
                         << 6U) | (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh12223)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh5937 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh6024) 
         ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d165));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh8778 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh8859) 
         ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d256));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d691 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh21115) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh21116)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh21396) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh21397)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d601) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh21517)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__IF_x0633_OR_y0634_THEN_1_ELSE_0___05Fq1)))));
    vlTOPp->mk_mac__DOT__cin___05Fh21930 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh21575) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh21576));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1962 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh52651) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh52652)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh52859) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh52860)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1794) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh52980)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_3_TO_0_813_AND_int_8_r_ETC___05F_d1831))));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1833 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51404) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh51405));
    vlTOPp->mk_mac__DOT__a___05Fh36785 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36872) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36873));
    vlTOPp->mk_mac__DOT__cout___05Fh38845 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38859) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38860));
    vlTOPp->mk_mac__DOT__sum___05Fh38846 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh38844) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1303));
    vlTOPp->mk_mac__DOT__x___05Fh35690 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35692) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh35693));
    vlTOPp->mk_mac__DOT__x___05Fh36050 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35964) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh35673));
    vlTOPp->mk_mac__DOT__y___05Fh35691 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35964) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1124));
    vlTOPp->mk_mac__DOT__y___05Fh36324 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36456) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145) 
                                             >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh36323 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36325) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36326));
    vlTOPp->mk_mac__DOT__y___05Fh39854 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40065) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh40066));
    vlTOPp->mk_mac__DOT__x___05Fh39853 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39855) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39856));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1316 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh40297) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40298)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1261) 
                              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40497)) 
                             << 2U)) | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh40066) 
                                        << 1U)));
    vlTOPp->mk_mac__DOT__cout___05Fh40684 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40698) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40699));
    vlTOPp->mk_mac__DOT__sum___05Fh40685 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh40683) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1372));
    vlTOPp->mk_mac__DOT__sum___05Fh44291 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh44289) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1523));
    vlTOPp->mk_mac__DOT__cout___05Fh44290 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44304) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44305));
    vlTOPp->mk_mac__DOT__IF_bfloat_rg_exception_s1_39_EQ_3_52_THEN_IF_I_ETC___05F_d802 
        = ((0xffU & (vlTOPp->mk_mac__DOT__IF_bfloat_rg_exception_s1_39_EQ_3_52_THEN_IF_I_ETC___05F_d798 
                     >> 0x17U)) < (0xffU & (vlTOPp->mk_mac__DOT__bfloat_rg_C_s4 
                                            >> 0x17U)));
    vlTOPp->mk_mac__DOT__mul_result___05Fh25086 = (
                                                   ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_sign_s4) 
                                                    << 0x1fU) 
                                                   | vlTOPp->mk_mac__DOT__IF_bfloat_rg_exception_s1_39_EQ_3_52_THEN_IF_I_ETC___05F_d798);
    vlTOPp->mk_mac__DOT__exponent___05Fh27162 = (0xffU 
                                                 & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s8) 
                                                    - (IData)(vlTOPp->mk_mac__DOT__op2___05Fh33608)));
    vlTOPp->mk_mac__DOT__bfloat_guard_bit_s9_D_IN = 
        ((0U == (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8)) 
         & ((0U == (3U & (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                          >> 0x1aU))) ? (vlTOPp->mk_mac__DOT__mantissa___05Fh27163 
                                         >> 3U) : (
                                                   (0x8000000U 
                                                    & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                                                    ? 
                                                   (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                                                    >> 4U)
                                                    : 
                                                   (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                                                    >> 3U))));
    vlTOPp->mk_mac__DOT__bfloat_round_bit_s9_D_IN = 
        ((0U == (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8)) 
         & ((0U == (3U & (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                          >> 0x1aU))) ? (vlTOPp->mk_mac__DOT__mantissa___05Fh27163 
                                         >> 2U) : (
                                                   (0x8000000U 
                                                    & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                                                    ? 
                                                   (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                                                    >> 3U)
                                                    : 
                                                   (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                                                    >> 2U))));
    vlTOPp->mk_mac__DOT__x___05Fh27234 = (vlTOPp->mk_mac__DOT__mantissa___05Fh27163 
                                          << 1U);
    vlTOPp->mk_mac__DOT__x___05Fh33782 = (1U & ((vlTOPp->mk_mac__DOT__mantissa___05Fh27163 
                                                 >> 1U) 
                                                | vlTOPp->mk_mac__DOT__mantissa___05Fh27163));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_2_D_IN 
        = ((0x1000U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d63) 
                       << 5U)) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh11661) 
                                    | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11662)) 
                                   << 0xaU) | (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh11043) 
                                                << 6U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh10957))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_0_D_IN 
        = ((0x4000U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d54) 
                       << 7U)) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh8026) 
                                    | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8027)) 
                                   << 0xcU) | (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5886) 
                                                << 8U) 
                                               | ((0x80U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d123)) 
                                                  | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh6825) 
                                                       | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6826)) 
                                                      << 6U) 
                                                     | (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5937) 
                                                         << 2U) 
                                                        | (3U 
                                                           & (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_a_0_AND_SEXT_bfloat_ETC___05F_d123))))))));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s1_op_1_D_IN 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh10392) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10393)) 
            << 0xeU) | (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh8727) 
                         << 0xaU) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh9396) 
                                       | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9397)) 
                                      << 8U) | (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh8778) 
                                                 << 4U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh8676)))));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20011 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh20990) 
         ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_7_T_ETC___05F_d691));
    vlTOPp->mk_mac__DOT__y___05Fh22063 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22195) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh21930));
    vlTOPp->mk_mac__DOT__y___05Fh22347 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22413) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh21930));
    vlTOPp->mk_mac__DOT__y___05Fh22467 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh21937) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh21930));
    vlTOPp->mk_mac__DOT__y___05Fh22526 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22746) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh21930));
    vlTOPp->mk_mac__DOT__sum___05Fh51391 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh51389) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1962));
    vlTOPp->mk_mac__DOT__y___05Fh53092 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh53224) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1833));
    vlTOPp->mk_mac__DOT__y___05Fh53300 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh53366) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1833));
    vlTOPp->mk_mac__DOT__y___05Fh53420 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50996) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1833));
    vlTOPp->mk_mac__DOT__y___05Fh51012 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51274) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1833));
    vlTOPp->mk_mac__DOT__y___05Fh35689 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36050) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145) 
                                             >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh35688 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35690) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh35691));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1166 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh36323) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36324)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh36531) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36532)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1124) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36652)) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145) 
                                                      >> 5U)))));
    vlTOPp->mk_mac__DOT__cout___05Fh39837 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39853) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39854));
    vlTOPp->mk_mac__DOT__sum___05Fh39838 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh39836) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1316));
    vlTOPp->mk_mac__DOT__y___05Fh41549 = ((IData)(vlTOPp->mk_mac__DOT__sum_BIT_0___05F_h39684) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cout___05Fh40684));
    vlTOPp->mk_mac__DOT__y___05Fh41612 = ((IData)(vlTOPp->mk_mac__DOT__sum_BIT_0___05F_h39684) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__cout___05Fh40684));
    vlTOPp->mk_mac__DOT__y___05Fh41610 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh39717)) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh40685) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__y___05Fh41693 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh39717)) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh40685) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__rg_b___05Fh44210 = ((0xeU 
                                              & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh40685) 
                                                 << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1201) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh46968 = ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh44291) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh46537));
    vlTOPp->mk_mac__DOT__rg_a___05Fh44209 = (((IData)(vlTOPp->mk_mac__DOT__cout___05Fh44290) 
                                              << 3U) 
                                             | (7U 
                                                & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh44291) 
                                                   >> 1U)));
    if (vlTOPp->mk_mac__DOT__IF_bfloat_rg_exception_s1_39_EQ_3_52_THEN_IF_I_ETC___05F_d802) {
        vlTOPp->mk_mac__DOT__bfloat_rg_C_s5_D_IN = vlTOPp->mk_mac__DOT__mul_result___05Fh25086;
        vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5_D_IN 
            = vlTOPp->mk_mac__DOT__bfloat_rg_C_s4;
    } else {
        vlTOPp->mk_mac__DOT__bfloat_rg_C_s5_D_IN = vlTOPp->mk_mac__DOT__bfloat_rg_C_s4;
        vlTOPp->mk_mac__DOT__bfloat_rg_mult_s5_D_IN 
            = vlTOPp->mk_mac__DOT__mul_result___05Fh25086;
    }
    if ((0U == (3U & (vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8 
                      >> 0x1aU)))) {
        vlTOPp->mk_mac__DOT__IF_bfloat_rg_mant_s8_81_BITS_27_TO_26_82_EQ_0b_ETC___05F_d1070 
            = vlTOPp->mk_mac__DOT__exponent___05Fh27162;
        vlTOPp->mk_mac__DOT__IF_bfloat_rg_mant_s8_81_BITS_27_TO_26_82_EQ_0b_ETC___05F_d1061 
            = (0x7ffffffU & vlTOPp->mk_mac__DOT__x___05Fh27234);
        vlTOPp->mk_mac__DOT__IF_bfloat_rg_mant_s8_81_BITS_27_TO_26_82_EQ_0b_ETC___05F_d1088 
            = vlTOPp->mk_mac__DOT__x___05Fh33782;
    } else {
        vlTOPp->mk_mac__DOT__IF_bfloat_rg_mant_s8_81_BITS_27_TO_26_82_EQ_0b_ETC___05F_d1070 
            = ((0x8000000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                ? (IData)(vlTOPp->mk_mac__DOT__exponent___05Fh27191)
                : (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s8));
        vlTOPp->mk_mac__DOT__IF_bfloat_rg_mant_s8_81_BITS_27_TO_26_82_EQ_0b_ETC___05F_d1061 
            = (0x7ffffffU & ((0x8000000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                              ? vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8
                              : vlTOPp->mk_mac__DOT__x___05Fh33483));
        vlTOPp->mk_mac__DOT__IF_bfloat_rg_mant_s8_81_BITS_27_TO_26_82_EQ_0b_ETC___05F_d1088 
            = ((0x8000000U & vlTOPp->mk_mac__DOT__bfloat_rg_mant_s8)
                ? (IData)(vlTOPp->mk_mac__DOT__x___05Fh34065)
                : (IData)(vlTOPp->mk_mac__DOT__x___05Fh34331));
    }
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d673 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh22062) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh22063)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh22346) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh22347)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d580) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh22467)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__cin___05Fh21930))));
    vlTOPp->mk_mac__DOT__cin___05Fh22880 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh22525) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh22526));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1944 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh53091) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53092)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh53299) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53300)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1773) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53420)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_7_TO_4_792_AND_int_8_r_ETC___05F_d1833))));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1835 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh51011) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh51012));
    vlTOPp->mk_mac__DOT__cout___05Fh35674 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35688) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh35689));
    vlTOPp->mk_mac__DOT__sum___05Fh35675 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh35673) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1166));
    vlTOPp->mk_mac__DOT__x___05Fh38794 = ((IData)(vlTOPp->mk_mac__DOT__cout___05Fh38845) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cout___05Fh39837));
    vlTOPp->mk_mac__DOT__x___05Fh41506 = ((IData)(vlTOPp->mk_mac__DOT__cout___05Fh38845) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__cout___05Fh39837));
    vlTOPp->mk_mac__DOT__y___05Fh41507 = (1U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38846) 
                                                 & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh39838)) 
                                                >> 3U));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1428 
        = (7U & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38846) 
                 & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh39838)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1430 
        = (7U & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38846) 
                 ^ (IData)(vlTOPp->mk_mac__DOT__sum___05Fh39838)));
    vlTOPp->mk_mac__DOT__y___05Fh41551 = (1U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38846) 
                                                 ^ (IData)(vlTOPp->mk_mac__DOT__sum___05Fh39838)) 
                                                >> 3U));
    vlTOPp->mk_mac__DOT__y___05Fh42060 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh41612) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41610));
    vlTOPp->mk_mac__DOT__y___05Fh42173 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh41693) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh42121 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh41612) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41693));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1530 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh44209) 
           & (IData)(vlTOPp->mk_mac__DOT__rg_b___05Fh44210));
    vlTOPp->mk_mac__DOT__p___05Fh44218 = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh44209) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__rg_b___05Fh44210));
    vlTOPp->mk_mac__DOT__bfloat_rg_exponent_s9_D_IN 
        = ((0U == (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8))
            ? (IData)(vlTOPp->mk_mac__DOT__IF_bfloat_rg_mant_s8_81_BITS_27_TO_26_82_EQ_0b_ETC___05F_d1070)
            : 0xffU);
    vlTOPp->mk_mac__DOT__bfloat_rg_mant_s9_D_IN = (
                                                   (0U 
                                                    == (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8))
                                                    ? vlTOPp->mk_mac__DOT__IF_bfloat_rg_mant_s8_81_BITS_27_TO_26_82_EQ_0b_ETC___05F_d1061
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8))
                                                     ? 0x4000000U
                                                     : 0U));
    vlTOPp->mk_mac__DOT__bfloat_sticky_bit_s9_D_IN 
        = ((0U == (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_exception_s8)) 
           & (IData)(vlTOPp->mk_mac__DOT__IF_bfloat_rg_mant_s8_81_BITS_27_TO_26_82_EQ_0b_ETC___05F_d1088));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh19983 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh21937) 
         ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_11___05FETC___05F_d673));
    vlTOPp->mk_mac__DOT__y___05Fh23015 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh23142) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh22880));
    vlTOPp->mk_mac__DOT__y___05Fh23292 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh23355) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh22880));
    vlTOPp->mk_mac__DOT__y___05Fh23407 = ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d566) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh22880));
    vlTOPp->mk_mac__DOT__sum___05Fh50998 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50996) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1944));
    vlTOPp->mk_mac__DOT__y___05Fh53532 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh53664) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1835));
    vlTOPp->mk_mac__DOT__y___05Fh53740 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh53806) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1835));
    vlTOPp->mk_mac__DOT__y___05Fh53860 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50603) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1835));
    vlTOPp->mk_mac__DOT__y___05Fh50619 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50881) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1835));
    vlTOPp->mk_mac__DOT__y___05Fh48069 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_109_BI_ETC___05F_d1111) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cout___05Fh35674));
    vlTOPp->mk_mac__DOT__y___05Fh48111 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_109_BI_ETC___05F_d1111) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__cout___05Fh35674));
    vlTOPp->mk_mac__DOT__x___05Fh38213 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh36785) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh35675) 
                                             >> 2U));
    vlTOPp->mk_mac__DOT__x___05Fh42425 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh42314) 
                                          & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh35675));
    vlTOPp->mk_mac__DOT__x___05Fh42227 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh38662) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh35675) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh36827 = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh36785) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh35675) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh42356 = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh42314) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT__sum___05Fh35675)));
    vlTOPp->mk_mac__DOT__x___05Fh38704 = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh38662) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh35675) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh38795 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41506) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41507));
    vlTOPp->mk_mac__DOT__y___05Fh42625 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1430) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1428) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh42771 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1430) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1430) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh42603 = (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1430) 
                                           << 1U) | 
                                          (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1179) 
                                                  >> 1U) 
                                                 ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1145))));
    vlTOPp->mk_mac__DOT__y___05Fh43264 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1430) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh42833));
    vlTOPp->mk_mac__DOT__x___05Fh43128 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1430) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1430)));
    vlTOPp->mk_mac__DOT__y___05Fh43067 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1430) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1428)));
    vlTOPp->mk_mac__DOT__p___05Fh38773 = (((IData)(vlTOPp->mk_mac__DOT__x___05Fh41506) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->mk_mac__DOT__y___05Fh41551) 
                                            << 2U) 
                                           | (((IData)(vlTOPp->mk_mac__DOT__y___05Fh41612) 
                                               << 1U) 
                                              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41693))));
    vlTOPp->mk_mac__DOT__x___05Fh41548 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41506) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41551));
    vlTOPp->mk_mac__DOT__y___05Fh41863 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh41551) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41549));
    vlTOPp->mk_mac__DOT__x___05Fh41924 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh41551) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41612));
    vlTOPp->mk_mac__DOT__x___05Fh42057 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh41549) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42060));
    vlTOPp->mk_mac__DOT__y___05Fh42058 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42121) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__y___05Fh45844 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh44218) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190)));
    vlTOPp->mk_mac__DOT__x___05Fh45790 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44218) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh44218)));
    vlTOPp->mk_mac__DOT__y___05Fh45726 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44218) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1530)));
    vlTOPp->mk_mac__DOT__y___05Fh45520 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44218) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1530) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh45584 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44218) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh44218) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh44240 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44218) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1530) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh45194 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh44218) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh44218) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d654 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh23291) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh23292)) 
            << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d564) 
                              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh23407)) 
                             << 1U)) | (IData)(vlTOPp->mk_mac__DOT__cin___05Fh22880)));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1926 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh53531) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53532)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh53739) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53740)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1752) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53860)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_11_TO_8_771_AND_int_8___05FETC___05F_d1835))));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1837 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50618) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh50619));
    vlTOPp->mk_mac__DOT__y___05Fh38214 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36827) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh36787));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1223 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36827) 
           ^ (IData)(vlTOPp->mk_mac__DOT__cin___05Fh36787));
    vlTOPp->mk_mac__DOT__x___05Fh38792 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38794) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38795));
    vlTOPp->mk_mac__DOT__x___05Fh42622 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1428) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42625)));
    vlTOPp->mk_mac__DOT__x___05Fh42832 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42771) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1430));
    vlTOPp->mk_mac__DOT__y___05Fh42623 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42771) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1428));
    vlTOPp->mk_mac__DOT__y___05Fh43065 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43128) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh42833));
    vlTOPp->mk_mac__DOT__x___05Fh43064 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1428) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43067)));
    vlTOPp->mk_mac__DOT__y___05Fh38793 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41548) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41549));
    vlTOPp->mk_mac__DOT__x___05Fh41609 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41548) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41612));
    vlTOPp->mk_mac__DOT__x___05Fh41860 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh41507) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41863));
    vlTOPp->mk_mac__DOT__x___05Fh41985 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41924) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41693));
    vlTOPp->mk_mac__DOT__y___05Fh41861 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41924) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41610));
    vlTOPp->mk_mac__DOT__y___05Fh45724 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45790) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190));
    vlTOPp->mk_mac__DOT__x___05Fh45723 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1530) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45726)));
    vlTOPp->mk_mac__DOT__x___05Fh45517 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1530) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45520)));
    vlTOPp->mk_mac__DOT__x___05Fh45648 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45584) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh44218));
    vlTOPp->mk_mac__DOT__y___05Fh45518 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45584) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1530));
    vlTOPp->mk_mac__DOT__x___05Fh44237 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1530) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44240)));
    vlTOPp->mk_mac__DOT__y___05Fh44238 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45194) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1530) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh45258 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45194) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh44218) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh19955 = 
        ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh23014) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh23015)) 
          << 3U) | ((IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d566) 
                    ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s3_op_0_60_BITS_14___05FETC___05F_d654)));
    vlTOPp->mk_mac__DOT__sum___05Fh50605 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50603) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1926));
    vlTOPp->mk_mac__DOT__y___05Fh53972 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54104) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1837));
    vlTOPp->mk_mac__DOT__y___05Fh54180 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54246) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1837));
    vlTOPp->mk_mac__DOT__y___05Fh54300 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50144) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1837));
    vlTOPp->mk_mac__DOT__y___05Fh50160 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50488) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1837));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1215 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38213) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38214));
    vlTOPp->mk_mac__DOT__y___05Fh42621 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42832) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh42833));
    vlTOPp->mk_mac__DOT__x___05Fh42620 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42622) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42623));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1469 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh43064) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43065)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1428) 
                              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43264)) 
                             << 2U)) | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh42833) 
                                        << 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh38790 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38792) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38793));
    vlTOPp->mk_mac__DOT__x___05Fh41691 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41609) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41693));
    vlTOPp->mk_mac__DOT__y___05Fh38791 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41609) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh41610));
    vlTOPp->mk_mac__DOT__y___05Fh41859 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41985) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh41858 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41860) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41861));
    vlTOPp->mk_mac__DOT__y___05Fh45516 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45648) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190));
    vlTOPp->mk_mac__DOT__x___05Fh45515 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45517) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45518));
    vlTOPp->mk_mac__DOT__x___05Fh44235 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44237) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44238));
    vlTOPp->mk_mac__DOT__x___05Fh45344 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45258) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh44218));
    vlTOPp->mk_mac__DOT__y___05Fh44236 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45258) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1530));
    vlTOPp->mk_mac__DOT__bfloat_obj_unsignedmult_rg_s4_op_D_IN 
        = (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh19955) 
            << 0xcU) | (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh19983) 
                         << 8U) | (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20011) 
                                    << 4U) | (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20039))));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1908 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh53971) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh53972)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh54179) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54180)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1731) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54300)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BITS_15_TO_12_750_AND_int_8_ETC___05F_d1837))));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1839 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50159) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh50160));
    vlTOPp->mk_mac__DOT__y___05Fh48109 = (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh35675) 
                                           >> 3U) & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1215));
    vlTOPp->mk_mac__DOT__y___05Fh48171 = (1U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh35675) 
                                                 >> 3U) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1215)));
    vlTOPp->mk_mac__DOT__b___05Fh42513 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42620) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42621));
    vlTOPp->mk_mac__DOT__sum___05Fh42605 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh42603) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1469));
    vlTOPp->mk_mac__DOT__y___05Fh38789 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41691) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh38788 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38790) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38791));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1413 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh41858) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41859)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh42057) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42058)) 
                       << 2U) | ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh41610) 
                                   | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42173)) 
                                  << 1U) | (1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280) 
                                                  >> 6U)))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1579 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh45515) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45516)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh45723) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45724)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1530) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45844)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190)))));
    vlTOPp->mk_mac__DOT__y___05Fh44234 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45344) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190));
    vlTOPp->mk_mac__DOT__x___05Fh44233 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44235) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44236));
    vlTOPp->mk_mac__DOT__sum___05Fh50146 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh50144) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1908));
    vlTOPp->mk_mac__DOT__y___05Fh54412 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54544) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1839));
    vlTOPp->mk_mac__DOT__y___05Fh54620 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54686) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1839));
    vlTOPp->mk_mac__DOT__y___05Fh54740 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh49684) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1839));
    vlTOPp->mk_mac__DOT__y___05Fh49700 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh50028) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1839));
    vlTOPp->mk_mac__DOT__y___05Fh48244 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh48111) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh48109));
    vlTOPp->mk_mac__DOT__p___05Fh35478 = (4U | (((IData)(vlTOPp->mk_mac__DOT__y___05Fh48111) 
                                                 << 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh48171)));
    vlTOPp->mk_mac__DOT__x___05Fh48305 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh48111) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh48171));
    vlTOPp->mk_mac__DOT__x___05Fh43450 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh42512) 
                                          & (IData)(vlTOPp->mk_mac__DOT__b___05Fh42513));
    vlTOPp->mk_mac__DOT__x___05Fh42554 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh42512) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__b___05Fh42513));
    vlTOPp->mk_mac__DOT__x___05Fh43707 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190) 
                                                 >> 5U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh42605) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__x___05Fh43638 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1190) 
                                                 >> 5U) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh42605) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__cin___05Fh38664 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38788) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38789));
    vlTOPp->mk_mac__DOT__sum___05Fh38775 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh38773) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1413));
    vlTOPp->mk_mac__DOT__sum___05Fh44220 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh44218) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1579));
    vlTOPp->mk_mac__DOT__a___05Fh44159 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44233) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44234));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1890 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh54411) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54412)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh54619) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54620)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1711) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54740)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1839))));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1841 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49699) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh49700));
    vlTOPp->mk_mac__DOT__x___05Fh48241 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh48069) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh48244));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1387 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38704) 
           ^ (IData)(vlTOPp->mk_mac__DOT__cin___05Fh38664));
    vlTOPp->mk_mac__DOT__y___05Fh42228 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38704) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh38664));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1457 
        = (1U & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42554) 
                 ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38775) 
                    >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh43708 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43638) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38775) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1423 
        = (1U & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42356) 
                 ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38775) 
                    >> 3U)));
    vlTOPp->mk_mac__DOT__y___05Fh43451 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42554) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38775) 
                                             >> 2U));
    vlTOPp->mk_mac__DOT__y___05Fh42426 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42356) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38775) 
                                             >> 3U));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1482 
        = (1U & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43638) 
                 ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38775) 
                    >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh46308 = ((0xcU & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh44220) 
                                                   << 2U)) 
                                          | ((2U & 
                                              ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh44291) 
                                               << 1U)) 
                                             | (1U 
                                                & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1277) 
                                                    >> 1U) 
                                                   ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1280)))));
    vlTOPp->mk_mac__DOT__x___05Fh46832 = (1U & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh44220) 
                                                & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh44291)));
    vlTOPp->mk_mac__DOT__x___05Fh46475 = (1U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh44220) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh44220)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1583 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh44220) 
                  >> 2U) & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh42605)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1587 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh44220) 
                  >> 2U) ^ (IData)(vlTOPp->mk_mac__DOT__sum___05Fh42605)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1556 
        = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh44159) 
                 ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh42605) 
                    >> 2U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1553 
        = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh44159) 
           & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh42605) 
              >> 2U));
    vlTOPp->mk_mac__DOT__sum___05Fh49686 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh49684) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1890));
    vlTOPp->mk_mac__DOT__y___05Fh54852 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh54984) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1841));
    vlTOPp->mk_mac__DOT__y___05Fh55060 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh55126) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1841));
    vlTOPp->mk_mac__DOT__y___05Fh55180 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh49224) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1841));
    vlTOPp->mk_mac__DOT__y___05Fh49240 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49568) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1841));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1384 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42227) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42228));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1476 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43707) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43708));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1451 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43450) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43451));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1417 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42425) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42426));
    vlTOPp->mk_mac__DOT__y___05Fh46769 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46832) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh46537));
    vlTOPp->mk_mac__DOT__x___05Fh46536 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46475) 
                                          & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh44291));
    vlTOPp->mk_mac__DOT__x___05Fh47453 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1587) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1587)));
    vlTOPp->mk_mac__DOT__y___05Fh47392 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1587) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1583)));
    vlTOPp->mk_mac__DOT__y___05Fh46013 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1556) 
                                          & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh38775));
    vlTOPp->mk_mac__DOT__y___05Fh46057 = (1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1556) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT__sum___05Fh38775)));
    vlTOPp->mk_mac__DOT__x___05Fh44052 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1482) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1553));
    vlTOPp->mk_mac__DOT__x___05Fh46012 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1482) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1553));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1872 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh54851) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh54852)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh55059) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh55060)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1691) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh55180)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1841))));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1843 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh49239) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh49240));
    vlTOPp->mk_mac__DOT__x___05Fh38555 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1223) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1384));
    vlTOPp->mk_mac__DOT__x___05Fh43733 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1223) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1384));
    vlTOPp->mk_mac__DOT__y___05Fh43837 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1457) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1476));
    vlTOPp->mk_mac__DOT__y___05Fh43920 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1457) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1476));
    vlTOPp->mk_mac__DOT__y___05Fh43776 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1423) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1451));
    vlTOPp->mk_mac__DOT__y___05Fh43839 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1423) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1451));
    vlTOPp->mk_mac__DOT__y___05Fh43734 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1387) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1417));
    vlTOPp->mk_mac__DOT__y___05Fh43778 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1387) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1417));
    vlTOPp->mk_mac__DOT__sum___05Fh46310 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh46308) 
                                            ^ (((IData)(vlTOPp->mk_mac__DOT__y___05Fh46769) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->mk_mac__DOT__y___05Fh46968) 
                                                   << 2U) 
                                                  | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh46537) 
                                                     << 1U))));
    vlTOPp->mk_mac__DOT__cin___05Fh44024 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46536) 
                                            & (IData)(vlTOPp->mk_mac__DOT__y___05Fh46537));
    vlTOPp->mk_mac__DOT__x___05Fh47389 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1583) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47392)));
    vlTOPp->mk_mac__DOT__y___05Fh47195 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh46057) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1583) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh47256 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh46057) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1587) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh44053 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46012) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh46013));
    vlTOPp->mk_mac__DOT__x___05Fh46054 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46012) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh46057));
    vlTOPp->mk_mac__DOT__sum___05Fh49226 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh49224) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1872));
    vlTOPp->mk_mac__DOT__y___05Fh55292 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh55424) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1843));
    vlTOPp->mk_mac__DOT__y___05Fh55500 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh55566) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1843));
    vlTOPp->mk_mac__DOT__y___05Fh55620 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh48762) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1843));
    vlTOPp->mk_mac__DOT__x___05Fh47879 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh43839) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43920));
    vlTOPp->mk_mac__DOT__y___05Fh47818 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh43839) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43837));
    vlTOPp->mk_mac__DOT__y___05Fh38556 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43733) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43734));
    vlTOPp->mk_mac__DOT__y___05Fh47621 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh43778) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43776));
    vlTOPp->mk_mac__DOT__x___05Fh47682 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh43778) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43839));
    vlTOPp->mk_mac__DOT__x___05Fh43775 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43733) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43778));
    vlTOPp->mk_mac__DOT__y___05Fh47390 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47453) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh44024));
    vlTOPp->mk_mac__DOT__y___05Fh47505 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1587) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh44024));
    vlTOPp->mk_mac__DOT__x___05Fh47192 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh46013) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47195));
    vlTOPp->mk_mac__DOT__x___05Fh47317 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47256) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1587));
    vlTOPp->mk_mac__DOT__y___05Fh47193 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47256) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1583));
    vlTOPp->mk_mac__DOT__x___05Fh44050 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44052) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44053));
    vlTOPp->mk_mac__DOT__y___05Fh44051 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46054) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1583) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh46115 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46054) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1587) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1854 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh55291) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh55292)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh55499) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh55500)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1677) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh55620)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1843))));
    vlTOPp->mk_mac__DOT__x___05Fh47815 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh43776) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47818));
    vlTOPp->mk_mac__DOT__x___05Fh38553 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38555) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38556));
    vlTOPp->mk_mac__DOT__x___05Fh47618 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh43734) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47621));
    vlTOPp->mk_mac__DOT__x___05Fh47743 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47682) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43920));
    vlTOPp->mk_mac__DOT__y___05Fh47619 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47682) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43837));
    vlTOPp->mk_mac__DOT__y___05Fh38554 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43775) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43776));
    vlTOPp->mk_mac__DOT__x___05Fh43836 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43775) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43839));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1653 
        = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1587) 
           ^ ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1583) 
                      | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47505)) 
                     << 1U)) | (IData)(vlTOPp->mk_mac__DOT__cin___05Fh44024)));
    vlTOPp->mk_mac__DOT__y___05Fh47191 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47317) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh44024));
    vlTOPp->mk_mac__DOT__x___05Fh47190 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47192) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47193));
    vlTOPp->mk_mac__DOT__x___05Fh44048 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44050) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44051));
    vlTOPp->mk_mac__DOT__x___05Fh46197 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46115) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1587));
    vlTOPp->mk_mac__DOT__y___05Fh44049 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46115) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1583));
    vlTOPp->mk_mac__DOT__sum___05Fh48764 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh48762) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_prod1_670_BIT_15_671_CONCAT_int_8_rg___05FETC___05F_d1854));
    vlTOPp->mk_mac__DOT__x___05Fh47616 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47618) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47619));
    vlTOPp->mk_mac__DOT__x___05Fh38551 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38553) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38554));
    vlTOPp->mk_mac__DOT__x___05Fh43918 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43836) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43920));
    vlTOPp->mk_mac__DOT__y___05Fh38552 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43836) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh43837));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1665 
        = ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh46057) 
             ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47389) 
                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47390))) 
            << 7U) | (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1653) 
                       << 5U) | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh46310) 
                                  << 1U) | (1U & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1277)))));
    vlTOPp->mk_mac__DOT__y___05Fh44047 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46197) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh44024));
    vlTOPp->mk_mac__DOT__x___05Fh44046 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44048) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44049));
    vlTOPp->mk_mac__DOT__int_8_out_D_IN = (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh48764) 
                                            << 0x1cU) 
                                           | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh49226) 
                                               << 0x18U) 
                                              | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh49686) 
                                                  << 0x14U) 
                                                 | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh50146) 
                                                     << 0x10U) 
                                                    | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh50605) 
                                                        << 0xcU) 
                                                       | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh50998) 
                                                           << 8U) 
                                                          | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh51391) 
                                                              << 4U) 
                                                             | (IData)(vlTOPp->mk_mac__DOT__sum___05Fh51783))))))));
    vlTOPp->mk_mac__DOT__x___05Fh38549 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38551) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38552));
    vlTOPp->mk_mac__DOT__cin___05Fh38527 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44046) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44047));
    vlTOPp->mk_mac__DOT__y___05Fh47617 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47743) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh38527));
    vlTOPp->mk_mac__DOT__y___05Fh47816 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47879) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh38527));
    vlTOPp->mk_mac__DOT__y___05Fh47931 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh43920) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh38527));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1666 
        = ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh43920) 
             ^ (IData)(vlTOPp->mk_mac__DOT__cin___05Fh38527)) 
            << 9U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh46012) 
                        ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47190) 
                           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47191))) 
                       << 8U) | (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BITS_6_TO_0_115_AND_SEXT_int_8___05FETC___05F_d1665)));
    vlTOPp->mk_mac__DOT__y___05Fh38550 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43918) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh38527));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1667 
        = ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh43778) 
             ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47815) 
                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47816))) 
            << 0xbU) | ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh43839) 
                          ^ ((IData)(vlTOPp->mk_mac__DOT__y___05Fh43837) 
                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47931))) 
                         << 0xaU) | (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1666)));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1607 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38549) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38550));
    vlTOPp->mk_mac__DOT__y___05Fh48357 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh48171) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1607));
    vlTOPp->mk_mac__DOT__y___05Fh48242 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh48305) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1607));
    vlTOPp->mk_mac__DOT__int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_109_BI_ETC___05F_d1609 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh48241) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh48242));
    vlTOPp->mk_mac__DOT__sum___05Fh35480 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh35478) 
                                            ^ ((0xcU 
                                                & ((- (IData)((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_109_BI_ETC___05F_d1609))) 
                                                   << 2U)) 
                                               | ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh48109) 
                                                    | (IData)(vlTOPp->mk_mac__DOT__y___05Fh48357)) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1607))));
    vlTOPp->mk_mac__DOT__int_8_rg_prod1_D_IN = ((0xe000U 
                                                 & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh35480) 
                                                    << 0xdU)) 
                                                | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh43733) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47616) 
                                                      | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47617))) 
                                                    << 0xcU) 
                                                   | (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_107_BIT_7_108_AND_int_8_rg_b_10_ETC___05F_d1667)));
}

VL_INLINE_OPT void Vtop::_combo__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mk_mac__DOT__rg_C_EN = vlTOPp->EN_put_inp_C;
    vlTOPp->mk_mac__DOT__rg_C_D_IN = vlTOPp->put_inp_C_c;
    vlTOPp->mk_mac__DOT__rg_B_EN = vlTOPp->EN_put_inp_B;
    vlTOPp->mk_mac__DOT__rg_B_D_IN = vlTOPp->put_inp_B_b;
    vlTOPp->mk_mac__DOT__rg_A_EN = vlTOPp->EN_put_inp_A;
    vlTOPp->mk_mac__DOT__rg_A_D_IN = vlTOPp->put_inp_A_a;
    vlTOPp->mk_mac__DOT__rg_sel_EN = vlTOPp->EN_put_inp_sel;
    vlTOPp->mk_mac__DOT__rg_sel_D_IN = vlTOPp->put_inp_sel_sel;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((EN_put_inp_A & 0xfeU))) {
        Verilated::overWidthError("EN_put_inp_A");}
    if (VL_UNLIKELY((EN_put_inp_B & 0xfeU))) {
        Verilated::overWidthError("EN_put_inp_B");}
    if (VL_UNLIKELY((EN_put_inp_C & 0xfeU))) {
        Verilated::overWidthError("EN_put_inp_C");}
    if (VL_UNLIKELY((put_inp_sel_sel & 0xfeU))) {
        Verilated::overWidthError("put_inp_sel_sel");}
    if (VL_UNLIKELY((EN_put_inp_sel & 0xfeU))) {
        Verilated::overWidthError("EN_put_inp_sel");}
}
#endif  // VL_DEBUG
