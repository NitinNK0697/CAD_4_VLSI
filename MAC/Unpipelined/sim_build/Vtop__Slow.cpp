// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mk_mac__DOT__CAN_FIRE_put_inp_A = 1U;
    vlTOPp->mk_mac__DOT__CAN_FIRE_put_inp_B = 1U;
    vlTOPp->mk_mac__DOT__CAN_FIRE_put_inp_C = 1U;
    vlTOPp->mk_mac__DOT__CAN_FIRE_put_inp_sel = 1U;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_out = 1U;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_out = 1U;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_bfloat_mac = 1U;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_bfloat_mac = 1U;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_int_8_r1 = 1U;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_int_8_r1 = 1U;
    vlTOPp->mk_mac__DOT__CAN_FIRE_RL_inp = 1U;
    vlTOPp->mk_mac__DOT__WILL_FIRE_RL_inp = 1U;
    vlTOPp->mk_mac__DOT__RDY_put_inp_A = 1U;
    vlTOPp->mk_mac__DOT__RDY_put_inp_B = 1U;
    vlTOPp->mk_mac__DOT__RDY_put_inp_C = 1U;
    vlTOPp->mk_mac__DOT__RDY_put_inp_sel = 1U;
    vlTOPp->mk_mac__DOT__RDY_get_mac_op = 1U;
    vlTOPp->mk_mac__DOT__bfloat_out_r = 0xaaaaaaaaU;
    vlTOPp->mk_mac__DOT__bfloat_rg_A = 0xaaaaU;
    vlTOPp->mk_mac__DOT__bfloat_rg_B = 0xaaaaU;
    vlTOPp->mk_mac__DOT__bfloat_rg_C = 0xaaaaaaaaU;
    vlTOPp->mk_mac__DOT__int_8_out = 0xaaaaaaaaU;
    vlTOPp->mk_mac__DOT__int_8_rg_a = 0xaaU;
    vlTOPp->mk_mac__DOT__int_8_rg_b = 0xaaU;
    vlTOPp->mk_mac__DOT__int_8_rg_c = 0xaaaaaaaaU;
    vlTOPp->mk_mac__DOT__rg_A = 0xaaaaU;
    vlTOPp->mk_mac__DOT__rg_B = 0xaaaaU;
    vlTOPp->mk_mac__DOT__rg_C = 0xaaaaaaaaU;
    vlTOPp->mk_mac__DOT__rg_out = 0xaaaaaaaaU;
    vlTOPp->mk_mac__DOT__rg_sel = 0U;
    vlTOPp->mk_mac__DOT__bfloat_out_r_EN = 1U;
    vlTOPp->mk_mac__DOT__int_8_out_EN = 1U;
    vlTOPp->mk_mac__DOT__rg_out_EN = 1U;
    vlTOPp->RDY_put_inp_A = vlTOPp->mk_mac__DOT__RDY_put_inp_A;
    vlTOPp->RDY_put_inp_B = vlTOPp->mk_mac__DOT__RDY_put_inp_B;
    vlTOPp->RDY_put_inp_C = vlTOPp->mk_mac__DOT__RDY_put_inp_C;
    vlTOPp->RDY_put_inp_sel = vlTOPp->mk_mac__DOT__RDY_put_inp_sel;
    vlTOPp->RDY_get_mac_op = vlTOPp->mk_mac__DOT__RDY_get_mac_op;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
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
    vlTOPp->mk_mac__DOT__rg_A_D_IN = vlTOPp->put_inp_A_a;
    vlTOPp->mk_mac__DOT__rg_A_EN = vlTOPp->EN_put_inp_A;
    vlTOPp->mk_mac__DOT__rg_B_D_IN = vlTOPp->put_inp_B_b;
    vlTOPp->mk_mac__DOT__rg_B_EN = vlTOPp->EN_put_inp_B;
    vlTOPp->mk_mac__DOT__rg_C_D_IN = vlTOPp->put_inp_C_c;
    vlTOPp->mk_mac__DOT__rg_C_EN = vlTOPp->EN_put_inp_C;
    vlTOPp->mk_mac__DOT__rg_sel_D_IN = vlTOPp->put_inp_sel_sel;
    vlTOPp->mk_mac__DOT__rg_sel_EN = vlTOPp->EN_put_inp_sel;
    vlTOPp->RDY_put_inp_A = vlTOPp->mk_mac__DOT__RDY_put_inp_A;
    vlTOPp->RDY_put_inp_B = vlTOPp->mk_mac__DOT__RDY_put_inp_B;
    vlTOPp->RDY_put_inp_C = vlTOPp->mk_mac__DOT__RDY_put_inp_C;
    vlTOPp->RDY_put_inp_sel = vlTOPp->mk_mac__DOT__RDY_put_inp_sel;
    vlTOPp->RDY_get_mac_op = vlTOPp->mk_mac__DOT__RDY_get_mac_op;
    vlTOPp->mk_mac__DOT__bfloat_rg_A_D_IN = vlTOPp->mk_mac__DOT__rg_A;
    vlTOPp->mk_mac__DOT__int_8_rg_a_D_IN = (0xffU & (IData)(vlTOPp->mk_mac__DOT__rg_A));
    vlTOPp->mk_mac__DOT__bfloat_rg_B_D_IN = vlTOPp->mk_mac__DOT__rg_B;
    vlTOPp->mk_mac__DOT__int_8_rg_b_D_IN = (0xffU & (IData)(vlTOPp->mk_mac__DOT__rg_B));
    vlTOPp->mk_mac__DOT__bfloat_rg_C_D_IN = vlTOPp->mk_mac__DOT__rg_C;
    vlTOPp->mk_mac__DOT__int_8_rg_c_D_IN = vlTOPp->mk_mac__DOT__rg_C;
    vlTOPp->mk_mac__DOT__get_mac_op = vlTOPp->mk_mac__DOT__rg_out;
    vlTOPp->mk_mac__DOT__bfloat_rg_A_EN = (1U & (~ (IData)(vlTOPp->mk_mac__DOT__rg_sel)));
    vlTOPp->mk_mac__DOT__bfloat_rg_B_EN = (1U & (~ (IData)(vlTOPp->mk_mac__DOT__rg_sel)));
    vlTOPp->mk_mac__DOT__bfloat_rg_C_EN = (1U & (~ (IData)(vlTOPp->mk_mac__DOT__rg_sel)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_EN = vlTOPp->mk_mac__DOT__rg_sel;
    vlTOPp->mk_mac__DOT__int_8_rg_b_EN = vlTOPp->mk_mac__DOT__rg_sel;
    vlTOPp->mk_mac__DOT__int_8_rg_c_EN = vlTOPp->mk_mac__DOT__rg_sel;
    vlTOPp->mk_mac__DOT__rg_out_D_IN = ((IData)(vlTOPp->mk_mac__DOT__rg_sel)
                                         ? vlTOPp->mk_mac__DOT__int_8_out
                                         : vlTOPp->mk_mac__DOT__bfloat_out_r);
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_BIT_7_21___05F_d922 
        = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                  & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_b)) 
                 >> 7U));
    vlTOPp->mk_mac__DOT__x___05Fh27958 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 5U)));
    vlTOPp->mk_mac__DOT__x___05Fh28722 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 4U)));
    vlTOPp->mk_mac__DOT__x___05Fh28964 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh28843 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__x___05Fh31507 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_b)));
    vlTOPp->mk_mac__DOT__x___05Fh29085 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh27537 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d928 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 6U))))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 5U))))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 4U))))));
    vlTOPp->mk_mac__DOT__y___05Fh27389 = (0x7fU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                                                 >> 7U)))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 3U))))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 2U))))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1088 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_b))))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091 
        = (0x7fU & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                    & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_b) 
                                        >> 1U))))));
    vlTOPp->mk_mac__DOT__sign_s1___05Fh896 = (1U & 
                                              (((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B)) 
                                               >> 0xfU));
    vlTOPp->mk_mac__DOT__x___05Fh18907 = (0xffU & (
                                                   ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                    >> 7U)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d20 
        = ((0x80U | (0x7fU & (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A))) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                               >> 6U)))));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39 
        = ((0x80U | (0x7fU & (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A))) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                               >> 5U)))));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56 
        = ((0x80U | (0x7fU & (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A))) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                               >> 4U)))));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63 
        = ((0x80U | (0x7fU & (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A))) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                               >> 3U)))));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73 
        = ((0x80U | (0x7fU & (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A))) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                               >> 2U)))));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150 
        = ((0x80U | (0x7fU & (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A))) 
           & (- (IData)((1U & (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B)))));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90 
        = ((0x80U | (0x7fU & (IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A))) 
           & (- (IData)((1U & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                               >> 1U)))));
    vlTOPp->get_mac_op = vlTOPp->mk_mac__DOT__get_mac_op;
    vlTOPp->mk_mac__DOT__cin___05Fh28577 = (1U & (~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh27958)));
    vlTOPp->mk_mac__DOT__rg_a___05Fh27454 = ((8U & 
                                              ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh27537)) 
                                               << 3U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d928) 
                                                   >> 4U)));
    vlTOPp->mk_mac__DOT__x___05Fh28668 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh28722)) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__x___05Fh29261 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh28722)) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh29262 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh28843)) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh34623 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956)));
    vlTOPp->mk_mac__DOT__y___05Fh29306 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh28843)) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh30634 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990) 
                                                   >> 2U) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh27387 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh27389));
    vlTOPp->mk_mac__DOT__y___05Fh29304 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh28964)) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh29367 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh28964)) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh29365 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh29085)) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh29448 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh29085)) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh32473 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012) 
                                                   >> 2U) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh38327 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1088) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091)));
    vlTOPp->mk_mac__DOT__y___05Fh31856 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1088) 
                                                 >> 6U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091) 
                                                   >> 5U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1088) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh36079 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1088) 
                                                   >> 2U) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__e___05Fh18882 = (0xffU & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh18907) 
                                                   - (IData)(0x7fU)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d20) 
                    >> 4U) & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                              >> 3U)));
    vlTOPp->mk_mac__DOT__p___05Fh6428 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d20) 
                                                  >> 4U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                                  >> 3U)));
    vlTOPp->mk_mac__DOT__x___05Fh4692 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39) 
                                                  >> 6U)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d60 
        = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56) 
                  >> 7U) ^ ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39) 
                            >> 6U)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d334 
        = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56) 
                  >> 1U) & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh7970 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56) 
                                                  >> 2U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh4288 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56) 
                                                  >> 6U)));
    vlTOPp->mk_mac__DOT__x___05Fh4312 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56) 
                                                  >> 6U)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d76 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73) 
                  >> 6U) & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63) 
                            >> 5U)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d80 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73) 
                  >> 6U) ^ ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63) 
                            >> 5U)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh5480 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73) 
                                                  >> 2U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d502 
        = (2U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150) 
                 & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                    << 1U)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d505 
        = (3U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150) 
                 ^ (2U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                          << 1U))));
    vlTOPp->mk_mac__DOT__b___05Fh10304 = ((0xeU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                                   << 1U)) 
                                          | (1U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                                   >> 5U)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380 
        = (0xfU & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150) 
                    >> 2U) & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                              >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh2661 = (0xfU & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150) 
                                                  >> 2U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh28669 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29261) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29262));
    vlTOPp->mk_mac__DOT__x___05Fh29303 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29261) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29306));
    vlTOPp->mk_mac__DOT__y___05Fh30656 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh30634) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh31408 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh30634) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d928)));
    vlTOPp->mk_mac__DOT__x___05Fh30758 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh30634) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh30634) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh31354 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh30634) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh30634)));
    vlTOPp->mk_mac__DOT__y___05Fh31290 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh30634) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048)));
    vlTOPp->mk_mac__DOT__y___05Fh31084 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh30634) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh31148 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh30634) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh30634) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__INV_x7387___05Fq3 = (0x7fU 
                                              & (~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh27387)));
    vlTOPp->mk_mac__DOT__y___05Fh29599 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh29306) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29304));
    vlTOPp->mk_mac__DOT__x___05Fh29660 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh29306) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29367));
    vlTOPp->mk_mac__DOT__y___05Fh29796 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh29367) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29365));
    vlTOPp->mk_mac__DOT__a___05Fh34302 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh29367) 
                                          ^ ((IData)(vlTOPp->mk_mac__DOT__y___05Fh29365) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh29448)));
    vlTOPp->mk_mac__DOT__y___05Fh29794 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh29367) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29448));
    vlTOPp->mk_mac__DOT__sum_BIT_0___05F_h31474 = (1U 
                                                   & (~ (IData)(vlTOPp->mk_mac__DOT__y___05Fh29448)));
    vlTOPp->mk_mac__DOT__y___05Fh33247 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh32473) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990)));
    vlTOPp->mk_mac__DOT__y___05Fh32495 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh32473) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh33193 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh32473) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh32473)));
    vlTOPp->mk_mac__DOT__y___05Fh33129 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh32473) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138)));
    vlTOPp->mk_mac__DOT__x___05Fh32597 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh32473) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh32473) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh32923 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh32473) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh32987 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh32473) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh32473) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh36853 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh36079) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012)));
    vlTOPp->mk_mac__DOT__x___05Fh36799 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36079) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh36079)));
    vlTOPp->mk_mac__DOT__y___05Fh36735 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36079) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296)));
    vlTOPp->mk_mac__DOT__y___05Fh36101 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36079) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh36529 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36079) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh36593 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36079) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh36079) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh36203 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36079) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh36079) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__exp_add_s1___05Fh897 = (((1U 
                                                   < (IData)(vlTOPp->mk_mac__DOT__e___05Fh18882)) 
                                                  & (0xfeU 
                                                     > (IData)(vlTOPp->mk_mac__DOT__e___05Fh18882)))
                                                  ? (IData)(vlTOPp->mk_mac__DOT__e___05Fh18882)
                                                  : 0U);
    vlTOPp->mk_mac__DOT__y___05Fh7017 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6428) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh7081 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6428) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh6428) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh6952 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh6428) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39) 
                                                  >> 5U)));
    vlTOPp->mk_mac__DOT__x___05Fh6898 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6428) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT__p___05Fh6428)));
    vlTOPp->mk_mac__DOT__y___05Fh6834 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6428) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24)));
    vlTOPp->mk_mac__DOT__y___05Fh6601 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6428) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh6665 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh6428) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh6428) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh8514 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh7970) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh8449 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh7970) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150) 
                                                  >> 6U)));
    vlTOPp->mk_mac__DOT__x___05Fh8578 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh7970) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh7970) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh8395 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh7970) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT__p___05Fh7970)));
    vlTOPp->mk_mac__DOT__y___05Fh8331 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh7970) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129)));
    vlTOPp->mk_mac__DOT__y___05Fh8098 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh7970) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh8162 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh7970) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh7970) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh4693 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d60) 
                                         & (IData)(vlTOPp->mk_mac__DOT__x___05Fh4288));
    vlTOPp->mk_mac__DOT__x___05Fh4754 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d60) 
                                         & (IData)(vlTOPp->mk_mac__DOT__x___05Fh4312));
    vlTOPp->mk_mac__DOT__y___05Fh4289 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4312) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d76) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh4576 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d80) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d80)));
    vlTOPp->mk_mac__DOT__y___05Fh4515 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d80) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d76)));
    vlTOPp->mk_mac__DOT__x___05Fh4352 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4312) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d80) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh4628 = (1U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d80) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                                  >> 7U)));
    vlTOPp->mk_mac__DOT__y___05Fh6024 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh5480) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh6088 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh5480) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh5480) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh5959 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh5480) 
                                               & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56)));
    vlTOPp->mk_mac__DOT__x___05Fh5905 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh5480) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT__p___05Fh5480)));
    vlTOPp->mk_mac__DOT__y___05Fh5841 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh5480) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276)));
    vlTOPp->mk_mac__DOT__y___05Fh5608 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh5480) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh5672 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh5480) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh5480) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh15353 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d505) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d502)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158 
        = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d20) 
           & (IData)(vlTOPp->mk_mac__DOT__b___05Fh10304));
    vlTOPp->mk_mac__DOT__p___05Fh10311 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d20) 
                                                  ^ (IData)(vlTOPp->mk_mac__DOT__b___05Fh10304)));
    vlTOPp->mk_mac__DOT__y___05Fh3436 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh2661) 
                                               & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73)));
    vlTOPp->mk_mac__DOT__y___05Fh3501 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2661) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh3382 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2661) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT__p___05Fh2661)));
    vlTOPp->mk_mac__DOT__y___05Fh3318 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2661) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380)));
    vlTOPp->mk_mac__DOT__y___05Fh3040 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2661) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh3565 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2661) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh2661) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh3104 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2661) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh2661) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh28666 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh28668) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh28669));
    vlTOPp->mk_mac__DOT__y___05Fh28667 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29303) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29304));
    vlTOPp->mk_mac__DOT__x___05Fh29364 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29303) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29367));
    vlTOPp->mk_mac__DOT__x___05Fh30653 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30656)));
    vlTOPp->mk_mac__DOT__y___05Fh30654 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30758) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh30822 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30758) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh30634) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh31288 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh31354) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d928));
    vlTOPp->mk_mac__DOT__x___05Fh31287 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh31290)));
    vlTOPp->mk_mac__DOT__x___05Fh31081 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh31084)));
    vlTOPp->mk_mac__DOT__x___05Fh31212 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh31148) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh30634));
    vlTOPp->mk_mac__DOT__y___05Fh31082 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh31148) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh27454) 
           & ((IData)(vlTOPp->mk_mac__DOT__INV_x7387___05Fq3) 
              >> 3U));
    vlTOPp->mk_mac__DOT__p___05Fh27463 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh27454) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mk_mac__DOT__INV_x7387___05Fq3) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1072 
        = (7U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d928) 
                  >> 1U) & (IData)(vlTOPp->mk_mac__DOT__INV_x7387___05Fq3)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1074 
        = (7U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d928) 
                  >> 1U) ^ (IData)(vlTOPp->mk_mac__DOT__INV_x7387___05Fq3)));
    vlTOPp->mk_mac__DOT__x___05Fh29596 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh29262) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh29599));
    vlTOPp->mk_mac__DOT__y___05Fh29595 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29660) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29448));
    vlTOPp->mk_mac__DOT__y___05Fh29597 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29660) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29365));
    vlTOPp->mk_mac__DOT__x___05Fh29793 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh29304) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh29796));
    vlTOPp->mk_mac__DOT__x___05Fh32492 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh32495)));
    vlTOPp->mk_mac__DOT__y___05Fh33127 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33193) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990));
    vlTOPp->mk_mac__DOT__x___05Fh33126 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh33129)));
    vlTOPp->mk_mac__DOT__y___05Fh32493 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32597) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh32661 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32597) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh32473) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh32920 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh32923)));
    vlTOPp->mk_mac__DOT__x___05Fh33051 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32987) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh32473));
    vlTOPp->mk_mac__DOT__y___05Fh32921 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32987) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138));
    vlTOPp->mk_mac__DOT__y___05Fh36733 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36799) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012));
    vlTOPp->mk_mac__DOT__x___05Fh36732 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36735)));
    vlTOPp->mk_mac__DOT__x___05Fh36098 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36101)));
    vlTOPp->mk_mac__DOT__x___05Fh36526 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36529)));
    vlTOPp->mk_mac__DOT__x___05Fh36657 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36593) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh36079));
    vlTOPp->mk_mac__DOT__y___05Fh36527 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36593) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296));
    vlTOPp->mk_mac__DOT__y___05Fh36099 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36203) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh36267 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36203) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh36079) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT___theResult___05F_snd_fst___05Fh952 
        = (((0xffU == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                >> 7U))) | (0xffU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                >> 7U))))
            ? 0xffU : (IData)(vlTOPp->mk_mac__DOT__exp_add_s1___05Fh897));
    vlTOPp->mk_mac__DOT__x___05Fh7014 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24) 
                                                >> 3U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7017)));
    vlTOPp->mk_mac__DOT__y___05Fh7015 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7081) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh7145 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7081) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh6428) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh6832 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6898) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39) 
                                            >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh6831 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24) 
                                                >> 1U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6834)));
    vlTOPp->mk_mac__DOT__x___05Fh6598 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24) 
                                                >> 2U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6601)));
    vlTOPp->mk_mac__DOT__x___05Fh6729 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6665) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh6428));
    vlTOPp->mk_mac__DOT__y___05Fh6599 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6665) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24));
    vlTOPp->mk_mac__DOT__x___05Fh8511 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129) 
                                                >> 3U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8514)));
    vlTOPp->mk_mac__DOT__y___05Fh8512 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8578) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh8642 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8578) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh7970) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh8329 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8395) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150) 
                                            >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh8328 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129) 
                                                >> 1U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8331)));
    vlTOPp->mk_mac__DOT__x___05Fh8095 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129) 
                                                >> 2U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8098)));
    vlTOPp->mk_mac__DOT__x___05Fh8226 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8162) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh7970));
    vlTOPp->mk_mac__DOT__y___05Fh8096 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8162) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129));
    vlTOPp->mk_mac__DOT__x___05Fh4690 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4692) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh4693));
    vlTOPp->mk_mac__DOT__y___05Fh4691 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4754) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d76) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh4815 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4754) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d80) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh4286 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4288) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh4289));
    vlTOPp->mk_mac__DOT__y___05Fh4513 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4576) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                            >> 7U));
    vlTOPp->mk_mac__DOT__x___05Fh4512 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d76) 
                                                >> 1U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh4515)));
    vlTOPp->mk_mac__DOT__x___05Fh4413 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4352) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d80));
    vlTOPp->mk_mac__DOT__y___05Fh4287 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4352) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d76));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d271 
        = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d80) 
           ^ ((2U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d76) 
                      | (IData)(vlTOPp->mk_mac__DOT__y___05Fh4628)) 
                     << 1U)) | (1U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                      >> 7U))));
    vlTOPp->mk_mac__DOT__x___05Fh6021 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276) 
                                                >> 3U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6024)));
    vlTOPp->mk_mac__DOT__y___05Fh6022 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6088) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh6152 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6088) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh5480) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh5839 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh5905) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56));
    vlTOPp->mk_mac__DOT__x___05Fh5838 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276) 
                                                >> 1U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh5841)));
    vlTOPp->mk_mac__DOT__x___05Fh5605 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276) 
                                                >> 2U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh5608)));
    vlTOPp->mk_mac__DOT__x___05Fh5736 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh5672) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh5480));
    vlTOPp->mk_mac__DOT__y___05Fh5606 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh5672) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276));
    vlTOPp->mk_mac__DOT__y___05Fh10857 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh10311) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh10921 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh10311) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh10311) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh10674 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh10311) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158)));
    vlTOPp->mk_mac__DOT__x___05Fh10532 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh10311) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh10311) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh10468 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh10311) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh3498 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380) 
                                                >> 3U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh3501)));
    vlTOPp->mk_mac__DOT__y___05Fh3316 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3382) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73));
    vlTOPp->mk_mac__DOT__x___05Fh3315 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380) 
                                                >> 1U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh3318)));
    vlTOPp->mk_mac__DOT__x___05Fh3037 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380) 
                                                >> 2U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh3040)));
    vlTOPp->mk_mac__DOT__y___05Fh3499 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3565) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh3629 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3565) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh2661) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh3168 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3104) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh2661));
    vlTOPp->mk_mac__DOT__y___05Fh3038 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3104) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380));
    vlTOPp->mk_mac__DOT__x___05Fh28664 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh28666) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh28667));
    vlTOPp->mk_mac__DOT__y___05Fh28663 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29364) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29448));
    vlTOPp->mk_mac__DOT__y___05Fh28665 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29364) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh29365));
    vlTOPp->mk_mac__DOT__x___05Fh30651 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30653) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30654));
    vlTOPp->mk_mac__DOT__x___05Fh30908 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30822) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh30634));
    vlTOPp->mk_mac__DOT__y___05Fh30652 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30822) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048));
    vlTOPp->mk_mac__DOT__y___05Fh31080 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh31212) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d928));
    vlTOPp->mk_mac__DOT__x___05Fh31079 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh31081) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh31082));
    vlTOPp->mk_mac__DOT__y___05Fh27485 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh27463) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh27690 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh27463) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh27463) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh28442 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh27463) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956) 
                                                   >> 5U)));
    vlTOPp->mk_mac__DOT__x___05Fh28388 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh27463) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh27463)));
    vlTOPp->mk_mac__DOT__y___05Fh28324 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh27463) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935)));
    vlTOPp->mk_mac__DOT__y___05Fh28118 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh27463) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh28182 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh27463) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh27463) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh31648 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1074) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1072) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh31626 = (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1074) 
                                           << 1U) | 
                                          (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1088) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091) 
                                                  >> 5U))));
    vlTOPp->mk_mac__DOT__x___05Fh31794 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1074) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1074) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh32287 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1074) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh31856));
    vlTOPp->mk_mac__DOT__x___05Fh32151 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1074) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1074)));
    vlTOPp->mk_mac__DOT__y___05Fh32090 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1074) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1072)));
    vlTOPp->mk_mac__DOT__x___05Fh29594 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29596) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh29597));
    vlTOPp->mk_mac__DOT__a___05Fh34104 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh29306) 
                                          ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29793) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh29794)));
    vlTOPp->mk_mac__DOT__x___05Fh32490 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32492) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh32493));
    vlTOPp->mk_mac__DOT__x___05Fh32747 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32661) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh32473));
    vlTOPp->mk_mac__DOT__y___05Fh32491 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32661) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138));
    vlTOPp->mk_mac__DOT__y___05Fh32919 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33051) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990));
    vlTOPp->mk_mac__DOT__x___05Fh32918 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32920) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh32921));
    vlTOPp->mk_mac__DOT__y___05Fh36525 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36657) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012));
    vlTOPp->mk_mac__DOT__x___05Fh36524 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36526) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36527));
    vlTOPp->mk_mac__DOT__x___05Fh36096 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36098) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36099));
    vlTOPp->mk_mac__DOT__x___05Fh36353 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36267) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh36079));
    vlTOPp->mk_mac__DOT__y___05Fh36097 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36267) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296));
    vlTOPp->mk_mac__DOT___theResult___05F_snd_fst___05Fh950 
        = (((0U == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                             >> 7U))) | (0U == (0xffU 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                   >> 7U))))
            ? 0U : (IData)(vlTOPp->mk_mac__DOT___theResult___05F_snd_fst___05Fh952));
    vlTOPp->mk_mac__DOT__x___05Fh7012 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7014) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7015));
    vlTOPp->mk_mac__DOT__x___05Fh7231 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7145) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh6428));
    vlTOPp->mk_mac__DOT__y___05Fh7013 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7145) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24));
    vlTOPp->mk_mac__DOT__y___05Fh6597 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6729) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39) 
                                            >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh6596 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6598) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6599));
    vlTOPp->mk_mac__DOT__x___05Fh8509 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8511) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8512));
    vlTOPp->mk_mac__DOT__x___05Fh8728 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8642) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh7970));
    vlTOPp->mk_mac__DOT__y___05Fh8510 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8642) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129));
    vlTOPp->mk_mac__DOT__y___05Fh8094 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8226) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150) 
                                            >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh8093 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8095) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8096));
    vlTOPp->mk_mac__DOT__x___05Fh4688 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4690) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh4691));
    vlTOPp->mk_mac__DOT__x___05Fh4897 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4815) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d80));
    vlTOPp->mk_mac__DOT__y___05Fh4689 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4815) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d76));
    vlTOPp->mk_mac__DOT__a___05Fh13779 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4312) 
                                          ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4512) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh4513)));
    vlTOPp->mk_mac__DOT__y___05Fh4285 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4413) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                            >> 7U));
    vlTOPp->mk_mac__DOT__x___05Fh4284 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4286) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh4287));
    vlTOPp->mk_mac__DOT__x___05Fh6019 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6021) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6022));
    vlTOPp->mk_mac__DOT__x___05Fh6238 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6152) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh5480));
    vlTOPp->mk_mac__DOT__y___05Fh6020 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6152) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276));
    vlTOPp->mk_mac__DOT__y___05Fh5604 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh5736) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56));
    vlTOPp->mk_mac__DOT__x___05Fh5603 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh5605) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh5606));
    vlTOPp->mk_mac__DOT__x___05Fh10854 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10857)));
    vlTOPp->mk_mac__DOT__x___05Fh10985 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10921) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh10311) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh10855 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10921) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh10466 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10532) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158));
    vlTOPp->mk_mac__DOT__x___05Fh10465 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10468)));
    vlTOPp->mk_mac__DOT__x___05Fh3496 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3498) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh3499));
    vlTOPp->mk_mac__DOT__x___05Fh3715 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3629) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh2661));
    vlTOPp->mk_mac__DOT__y___05Fh3497 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3629) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380));
    vlTOPp->mk_mac__DOT__y___05Fh3036 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3168) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73));
    vlTOPp->mk_mac__DOT__x___05Fh3035 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3037) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh3038));
    vlTOPp->mk_mac__DOT__x___05Fh28662 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh28664) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh28665));
    vlTOPp->mk_mac__DOT__y___05Fh30650 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30908) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d928));
    vlTOPp->mk_mac__DOT__x___05Fh30649 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30651) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30652));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1114 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh31079) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh31080)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh31287) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh31288)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh31408)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d928)))));
    vlTOPp->mk_mac__DOT__x___05Fh27482 = (1U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh27485)));
    vlTOPp->mk_mac__DOT__y___05Fh27483 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh27690) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh27754 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh27690) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh27463) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh28322 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh28388) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956) 
                                             >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh28321 = (1U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh28324)));
    vlTOPp->mk_mac__DOT__x___05Fh28115 = (1U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh28118)));
    vlTOPp->mk_mac__DOT__x___05Fh28246 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh28182) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh27463));
    vlTOPp->mk_mac__DOT__y___05Fh28116 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh28182) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935));
    vlTOPp->mk_mac__DOT__x___05Fh31645 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1072) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh31648)));
    vlTOPp->mk_mac__DOT__x___05Fh31855 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh31794) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1074));
    vlTOPp->mk_mac__DOT__y___05Fh31646 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh31794) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1072));
    vlTOPp->mk_mac__DOT__y___05Fh32088 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32151) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh31856));
    vlTOPp->mk_mac__DOT__x___05Fh32087 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1072) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh32090)));
    vlTOPp->mk_mac__DOT__a___05Fh30452 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29261) 
                                          ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh29594) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh29595)));
    vlTOPp->mk_mac__DOT__y___05Fh32489 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32747) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990));
    vlTOPp->mk_mac__DOT__x___05Fh32488 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32490) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh32491));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1183 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh32918) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh32919)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh33126) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh33127)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh33247)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990)))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1334 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh36524) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36525)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh36732) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36733)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36853)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012)))));
    vlTOPp->mk_mac__DOT__y___05Fh36095 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36353) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012));
    vlTOPp->mk_mac__DOT__x___05Fh36094 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36096) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36097));
    vlTOPp->mk_mac__DOT__exp___05Fh988 = ((((0xffU 
                                             == (0xffU 
                                                 & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                                    >> 7U))) 
                                            & (0U == 
                                               (0xffU 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                   >> 7U)))) 
                                           | ((0U == 
                                               (0xffU 
                                                & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                                   >> 7U))) 
                                              & (0xffU 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                     >> 7U)))))
                                           ? 0xffU : (IData)(vlTOPp->mk_mac__DOT___theResult___05F_snd_fst___05Fh950));
    vlTOPp->mk_mac__DOT__y___05Fh7011 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7231) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39) 
                                            >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh7010 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7012) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7013));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d51 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh6596) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6597)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh6831) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6832)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6952)) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39) 
                                                      >> 5U)))));
    vlTOPp->mk_mac__DOT__y___05Fh8508 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8728) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150) 
                                            >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh8507 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8509) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8510));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d193 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh8093) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8094)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh8328) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8329)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8449)) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150) 
                                                      >> 6U)))));
    vlTOPp->mk_mac__DOT__y___05Fh4687 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4897) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                            >> 7U));
    vlTOPp->mk_mac__DOT__x___05Fh4686 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4688) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh4689));
    vlTOPp->mk_mac__DOT__a___05Fh13969 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d60) 
                                          ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4284) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh4285)));
    vlTOPp->mk_mac__DOT__y___05Fh6018 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6238) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56));
    vlTOPp->mk_mac__DOT__x___05Fh6017 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6019) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6020));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d317 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh5603) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh5604)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh5838) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh5839)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh5959)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56)))));
    vlTOPp->mk_mac__DOT__y___05Fh10853 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10985) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158));
    vlTOPp->mk_mac__DOT__x___05Fh10852 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10854) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10855));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh10231 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh10311) 
         ^ ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh10465) 
              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10466)) 
             << 3U) | ((4U & ((0xfffffffcU & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158) 
                                              << 1U)) 
                              | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh10674) 
                                 << 2U))) | (2U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158) 
                                                   << 1U)))));
    vlTOPp->mk_mac__DOT__y___05Fh3495 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3715) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73));
    vlTOPp->mk_mac__DOT__x___05Fh3494 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh3496) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh3497));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d418 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh3035) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh3036)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh3315) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh3316)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh3436)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73)))));
    vlTOPp->mk_mac__DOT__a___05Fh28575 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh28662) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh28663));
    vlTOPp->mk_mac__DOT__cout___05Fh30635 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30649) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30650));
    vlTOPp->mk_mac__DOT__sum___05Fh30636 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh30634) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1114));
    vlTOPp->mk_mac__DOT__x___05Fh27480 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh27482) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh27483));
    vlTOPp->mk_mac__DOT__x___05Fh27840 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh27754) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh27463));
    vlTOPp->mk_mac__DOT__y___05Fh27481 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh27754) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935));
    vlTOPp->mk_mac__DOT__y___05Fh28114 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh28246) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956) 
                                             >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh28113 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh28115) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh28116));
    vlTOPp->mk_mac__DOT__y___05Fh31644 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh31855) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh31856));
    vlTOPp->mk_mac__DOT__x___05Fh31643 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh31645) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh31646));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1127 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh32087) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh32088)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1072) 
                              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh32287)) 
                             << 2U)) | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh31856) 
                                        << 1U)));
    vlTOPp->mk_mac__DOT__cout___05Fh32474 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh32488) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh32489));
    vlTOPp->mk_mac__DOT__sum___05Fh32475 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh32473) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1183));
    vlTOPp->mk_mac__DOT__sum___05Fh36081 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh36079) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1334));
    vlTOPp->mk_mac__DOT__cout___05Fh36080 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36094) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36095));
    vlTOPp->mk_mac__DOT__exp___05F_1___05Fh18674 = 
        (0xffU & ((IData)(1U) + (IData)(vlTOPp->mk_mac__DOT__exp___05Fh988)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh5348 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh6428) 
         ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d51));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d153 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh8507) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh8508));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh7889 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh7970) 
         ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d193));
    vlTOPp->mk_mac__DOT__a___05Fh14159 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh4686) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh4687));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d297 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh6017) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh6018));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh5399 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh5480) 
         ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d317));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d174 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh10852) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh10853));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh2575 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh2661) 
         ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d418));
    vlTOPp->mk_mac__DOT__y___05Fh27479 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh27840) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956) 
                                             >> 5U));
    vlTOPp->mk_mac__DOT__x___05Fh27478 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh27480) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh27481));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d977 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh28113) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh28114)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh28321) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh28322)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh28442)) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956) 
                                                      >> 5U)))));
    vlTOPp->mk_mac__DOT__cout___05Fh31627 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh31643) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh31644));
    vlTOPp->mk_mac__DOT__sum___05Fh31628 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh31626) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1127));
    vlTOPp->mk_mac__DOT__y___05Fh33339 = ((IData)(vlTOPp->mk_mac__DOT__sum_BIT_0___05F_h31474) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cout___05Fh32474));
    vlTOPp->mk_mac__DOT__y___05Fh33402 = ((IData)(vlTOPp->mk_mac__DOT__sum_BIT_0___05F_h31474) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__cout___05Fh32474));
    vlTOPp->mk_mac__DOT__y___05Fh33400 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh31507)) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh32475) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__y___05Fh33483 = (1U & ((~ (IData)(vlTOPp->mk_mac__DOT__x___05Fh31507)) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh32475) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__rg_b___05Fh36000 = ((0xeU 
                                              & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh32475) 
                                                 << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh38758 = ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh36081) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh38327));
    vlTOPp->mk_mac__DOT__rg_a___05Fh35999 = (((IData)(vlTOPp->mk_mac__DOT__cout___05Fh36080) 
                                              << 3U) 
                                             | (7U 
                                                & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh36081) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh14105 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh13969) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5348) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh13915 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh13779) 
                                          & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5348));
    vlTOPp->mk_mac__DOT__x___05Fh14011 = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh13969) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5348) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh13821 = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh13779) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5348)));
    vlTOPp->mk_mac__DOT__y___05Fh11380 = (1U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh7889) 
                                                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh10231)));
    vlTOPp->mk_mac__DOT__y___05Fh11422 = (1U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh7889) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh10231)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d207 
        = (7U & (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh7889) 
                  & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh10231)) 
                 >> 1U));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211 
        = (7U & (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh7889) 
                  ^ (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh10231)) 
                 >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh14295 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh14159) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5348) 
                                             >> 2U));
    vlTOPp->mk_mac__DOT__x___05Fh14201 = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh14159) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5348) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh11730 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d271) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d297));
    vlTOPp->mk_mac__DOT__x___05Fh11752 = (1U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d271) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d297)));
    vlTOPp->mk_mac__DOT__x___05Fh11355 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5399) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__x___05Fh11379 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150) 
                                                 >> 7U) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5399) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__b___05Fh2101 = ((0xeU & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5399) 
                                                  << 1U)) 
                                         | (1U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh13096 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d153) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d174));
    vlTOPp->mk_mac__DOT__x___05Fh13119 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d153) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d174));
    vlTOPp->mk_mac__DOT__x___05Fh15144 = (1U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh2575) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d502) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh15211 = (1U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh2575) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d505) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__a___05Fh2100 = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh3494) 
                                           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh3495)) 
                                          << 3U) | 
                                         (7U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh2575) 
                                                >> 1U)));
    vlTOPp->mk_mac__DOT__cout___05Fh27464 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh27478) 
                                             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh27479));
    vlTOPp->mk_mac__DOT__sum___05Fh27465 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh27463) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d977));
    vlTOPp->mk_mac__DOT__x___05Fh30584 = ((IData)(vlTOPp->mk_mac__DOT__cout___05Fh30635) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cout___05Fh31627));
    vlTOPp->mk_mac__DOT__x___05Fh33296 = ((IData)(vlTOPp->mk_mac__DOT__cout___05Fh30635) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__cout___05Fh31627));
    vlTOPp->mk_mac__DOT__y___05Fh33297 = (1U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh30636) 
                                                 & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh31628)) 
                                                >> 3U));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1239 
        = (7U & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh30636) 
                 & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh31628)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1241 
        = (7U & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh30636) 
                 ^ (IData)(vlTOPp->mk_mac__DOT__sum___05Fh31628)));
    vlTOPp->mk_mac__DOT__y___05Fh33341 = (1U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh30636) 
                                                 ^ (IData)(vlTOPp->mk_mac__DOT__sum___05Fh31628)) 
                                                >> 3U));
    vlTOPp->mk_mac__DOT__y___05Fh33850 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh33402) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33400));
    vlTOPp->mk_mac__DOT__y___05Fh33963 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh33483) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh33911 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh33402) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33483));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh35999) 
           & (IData)(vlTOPp->mk_mac__DOT__rg_b___05Fh36000));
    vlTOPp->mk_mac__DOT__p___05Fh36008 = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh35999) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__rg_b___05Fh36000));
    vlTOPp->mk_mac__DOT__y___05Fh11555 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh11422) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d334));
    vlTOPp->mk_mac__DOT__y___05Fh13032 = (1U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                                   >> 6U)));
    vlTOPp->mk_mac__DOT__y___05Fh12681 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d207) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh12978 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211)));
    vlTOPp->mk_mac__DOT__y___05Fh12914 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d207)));
    vlTOPp->mk_mac__DOT__x___05Fh12745 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d98 
        = (4U | ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh5348) 
                        >> 2U)) | (1U & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14201) 
                                         ^ ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39) 
                                            >> 7U)))));
    vlTOPp->mk_mac__DOT__y___05Fh14296 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14201) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39) 
                                             >> 7U));
    vlTOPp->mk_mac__DOT__y___05Fh11731 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11752) 
                                          & (IData)(vlTOPp->mk_mac__DOT__x___05Fh11355));
    vlTOPp->mk_mac__DOT__p___05Fh10029 = (((IData)(vlTOPp->mk_mac__DOT__x___05Fh11752) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->mk_mac__DOT__x___05Fh11379) 
                                            << 2U) 
                                           | (((IData)(vlTOPp->mk_mac__DOT__y___05Fh11422) 
                                               << 1U) 
                                              | (1U 
                                                 & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56) 
                                                     >> 1U) 
                                                    ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39))))));
    vlTOPp->mk_mac__DOT__x___05Fh11419 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11379) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh11422));
    vlTOPp->mk_mac__DOT__y___05Fh11356 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11379) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh11380));
    vlTOPp->mk_mac__DOT__x___05Fh11792 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11752) 
                                          & (IData)(vlTOPp->mk_mac__DOT__x___05Fh11379));
    vlTOPp->mk_mac__DOT__y___05Fh13097 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13119) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d207) 
                                             >> 2U));
    vlTOPp->mk_mac__DOT__x___05Fh13161 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13119) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211) 
                                             >> 2U));
    vlTOPp->mk_mac__DOT__y___05Fh15145 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh15211) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d502));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425 
        = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh2100) 
           & (IData)(vlTOPp->mk_mac__DOT__b___05Fh2101));
    vlTOPp->mk_mac__DOT__p___05Fh2109 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh2100) 
                                         ^ (IData)(vlTOPp->mk_mac__DOT__b___05Fh2101));
    vlTOPp->mk_mac__DOT__y___05Fh39859 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_BIT_7_21___05F_d922) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cout___05Fh27464));
    vlTOPp->mk_mac__DOT__y___05Fh39901 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_BIT_7_21___05F_d922) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__cout___05Fh27464));
    vlTOPp->mk_mac__DOT__x___05Fh30003 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh28575) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh27465) 
                                             >> 2U));
    vlTOPp->mk_mac__DOT__x___05Fh34215 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh34104) 
                                          & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh27465));
    vlTOPp->mk_mac__DOT__x___05Fh34017 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh30452) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh27465) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh28617 = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh28575) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh27465) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh34146 = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh34104) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT__sum___05Fh27465)));
    vlTOPp->mk_mac__DOT__x___05Fh30494 = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh30452) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh27465) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh30585 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33296) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33297));
    vlTOPp->mk_mac__DOT__y___05Fh34415 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1241) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1239) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh34561 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1241) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1241) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh34393 = (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1241) 
                                           << 1U) | 
                                          (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990) 
                                                  >> 1U) 
                                                 ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956))));
    vlTOPp->mk_mac__DOT__y___05Fh35054 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1241) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh34623));
    vlTOPp->mk_mac__DOT__x___05Fh34918 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1241) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1241)));
    vlTOPp->mk_mac__DOT__y___05Fh34857 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1241) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1239)));
    vlTOPp->mk_mac__DOT__p___05Fh30563 = (((IData)(vlTOPp->mk_mac__DOT__x___05Fh33296) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->mk_mac__DOT__y___05Fh33341) 
                                            << 2U) 
                                           | (((IData)(vlTOPp->mk_mac__DOT__y___05Fh33402) 
                                               << 1U) 
                                              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh33483))));
    vlTOPp->mk_mac__DOT__x___05Fh33338 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33296) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33341));
    vlTOPp->mk_mac__DOT__y___05Fh33653 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh33341) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33339));
    vlTOPp->mk_mac__DOT__x___05Fh33714 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh33341) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33402));
    vlTOPp->mk_mac__DOT__x___05Fh33847 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh33339) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh33850));
    vlTOPp->mk_mac__DOT__y___05Fh33848 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33911) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__y___05Fh37634 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh36008) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001)));
    vlTOPp->mk_mac__DOT__x___05Fh37580 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36008) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh36008)));
    vlTOPp->mk_mac__DOT__y___05Fh37516 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36008) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341)));
    vlTOPp->mk_mac__DOT__y___05Fh37310 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36008) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh37374 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36008) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh36008) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh36030 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36008) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh36984 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh36008) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh36008) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh12678 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d207) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh12681)));
    vlTOPp->mk_mac__DOT__y___05Fh12912 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh12978) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh12911 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d207) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh12914)));
    vlTOPp->mk_mac__DOT__x___05Fh12809 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh12745) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211));
    vlTOPp->mk_mac__DOT__y___05Fh12679 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh12745) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d207));
    vlTOPp->mk_mac__DOT__x___05Fh11728 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11730) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11731));
    vlTOPp->mk_mac__DOT__y___05Fh11354 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11419) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d334));
    vlTOPp->mk_mac__DOT__x___05Fh11353 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11355) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11356));
    vlTOPp->mk_mac__DOT__x___05Fh11853 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11792) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh11422));
    vlTOPp->mk_mac__DOT__y___05Fh11729 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11792) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh11380));
    vlTOPp->mk_mac__DOT__x___05Fh13094 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13096) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh13097));
    vlTOPp->mk_mac__DOT__y___05Fh13095 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13161) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d207) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh13225 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13161) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh9136 = (1U & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh2109) 
                                               & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63)));
    vlTOPp->mk_mac__DOT__x___05Fh9082 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2109) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT__p___05Fh2109)));
    vlTOPp->mk_mac__DOT__y___05Fh9018 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2109) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425)));
    vlTOPp->mk_mac__DOT__y___05Fh7581 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2109) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh9201 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2109) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh7645 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2109) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh2109) 
                                                  >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh9265 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh2109) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh2109) 
                                                  >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh30004 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh28617) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh28577));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1034 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh28617) 
           ^ (IData)(vlTOPp->mk_mac__DOT__cin___05Fh28577));
    vlTOPp->mk_mac__DOT__x___05Fh30582 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30584) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30585));
    vlTOPp->mk_mac__DOT__x___05Fh34412 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1239) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh34415)));
    vlTOPp->mk_mac__DOT__x___05Fh34622 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34561) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1241));
    vlTOPp->mk_mac__DOT__y___05Fh34413 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34561) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1239));
    vlTOPp->mk_mac__DOT__y___05Fh34855 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34918) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh34623));
    vlTOPp->mk_mac__DOT__x___05Fh34854 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1239) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh34857)));
    vlTOPp->mk_mac__DOT__y___05Fh30583 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33338) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33339));
    vlTOPp->mk_mac__DOT__x___05Fh33399 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33338) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33402));
    vlTOPp->mk_mac__DOT__x___05Fh33650 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh33297) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh33653));
    vlTOPp->mk_mac__DOT__x___05Fh33775 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33714) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33483));
    vlTOPp->mk_mac__DOT__y___05Fh33651 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33714) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33400));
    vlTOPp->mk_mac__DOT__y___05Fh37514 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37580) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001));
    vlTOPp->mk_mac__DOT__x___05Fh37513 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh37516)));
    vlTOPp->mk_mac__DOT__x___05Fh37307 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh37310)));
    vlTOPp->mk_mac__DOT__x___05Fh37438 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37374) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh36008));
    vlTOPp->mk_mac__DOT__y___05Fh37308 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37374) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341));
    vlTOPp->mk_mac__DOT__x___05Fh36027 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36030)));
    vlTOPp->mk_mac__DOT__y___05Fh36028 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36984) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh37048 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36984) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh36008) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d346 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh12911) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh12912)) 
            << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d207) 
                              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh13032)) 
                             << 1U)) | (1U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                              >> 6U))));
    vlTOPp->mk_mac__DOT__y___05Fh12677 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh12809) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh12676 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh12678) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh12679));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d367 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh11353) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11354)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh11380) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11555)) 
                       << 2U) | ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d334) 
                                 << 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh11727 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11853) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d334));
    vlTOPp->mk_mac__DOT__x___05Fh11726 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11728) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11729));
    vlTOPp->mk_mac__DOT__x___05Fh13092 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13094) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh13095));
    vlTOPp->mk_mac__DOT__x___05Fh13311 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13225) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211));
    vlTOPp->mk_mac__DOT__y___05Fh13093 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13225) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d207));
    vlTOPp->mk_mac__DOT__y___05Fh9016 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9082) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63));
    vlTOPp->mk_mac__DOT__x___05Fh9015 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425) 
                                                >> 1U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9018)));
    vlTOPp->mk_mac__DOT__x___05Fh7578 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425) 
                                                >> 2U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7581)));
    vlTOPp->mk_mac__DOT__x___05Fh9198 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425) 
                                                >> 3U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9201)));
    vlTOPp->mk_mac__DOT__x___05Fh7709 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7645) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh2109));
    vlTOPp->mk_mac__DOT__y___05Fh7579 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7645) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425));
    vlTOPp->mk_mac__DOT__y___05Fh9199 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9265) 
                                         & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh9329 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9265) 
                                         & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh2109) 
                                            >> 1U));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1026 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30003) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30004));
    vlTOPp->mk_mac__DOT__y___05Fh34411 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34622) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh34623));
    vlTOPp->mk_mac__DOT__x___05Fh34410 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34412) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh34413));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1280 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh34854) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh34855)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1239) 
                              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh35054)) 
                             << 2U)) | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh34623) 
                                        << 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh30580 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30582) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30583));
    vlTOPp->mk_mac__DOT__x___05Fh33481 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33399) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33483));
    vlTOPp->mk_mac__DOT__y___05Fh30581 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33399) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh33400));
    vlTOPp->mk_mac__DOT__y___05Fh33649 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33775) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh33648 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33650) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh33651));
    vlTOPp->mk_mac__DOT__y___05Fh37306 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37438) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001));
    vlTOPp->mk_mac__DOT__x___05Fh37305 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37307) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh37308));
    vlTOPp->mk_mac__DOT__x___05Fh36025 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36027) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36028));
    vlTOPp->mk_mac__DOT__x___05Fh37134 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37048) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh36008));
    vlTOPp->mk_mac__DOT__y___05Fh36026 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37048) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d347 
        = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211) 
           ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d346));
    vlTOPp->mk_mac__DOT__cin___05Fh13781 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13119) 
                                            ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh12676) 
                                               | (IData)(vlTOPp->mk_mac__DOT__y___05Fh12677)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh9949 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh10029) 
         ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d367));
    vlTOPp->mk_mac__DOT__b___05Fh13590 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh11726) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh11727));
    vlTOPp->mk_mac__DOT__y___05Fh13091 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13311) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh13090 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13092) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh13093));
    vlTOPp->mk_mac__DOT__y___05Fh7577 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7709) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63));
    vlTOPp->mk_mac__DOT__x___05Fh7576 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh7578) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7579));
    vlTOPp->mk_mac__DOT__x___05Fh9196 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9198) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9199));
    vlTOPp->mk_mac__DOT__x___05Fh9415 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9329) 
                                         & (IData)(vlTOPp->mk_mac__DOT__p___05Fh2109));
    vlTOPp->mk_mac__DOT__y___05Fh9197 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9329) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425));
    vlTOPp->mk_mac__DOT__y___05Fh39899 = (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh27465) 
                                           >> 3U) & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1026));
    vlTOPp->mk_mac__DOT__y___05Fh39961 = (1U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh27465) 
                                                 >> 3U) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1026)));
    vlTOPp->mk_mac__DOT__b___05Fh34303 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34410) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh34411));
    vlTOPp->mk_mac__DOT__sum___05Fh34395 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh34393) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1280));
    vlTOPp->mk_mac__DOT__y___05Fh30579 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh33481) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091) 
                                             >> 6U));
    vlTOPp->mk_mac__DOT__x___05Fh30578 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30580) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30581));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1224 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh33648) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh33649)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh33847) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh33848)) 
                       << 2U) | ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh33400) 
                                   | (IData)(vlTOPp->mk_mac__DOT__y___05Fh33963)) 
                                  << 1U) | (1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091) 
                                                  >> 6U)))));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1390 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh37305) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh37306)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh37513) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh37514)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh37634)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001)))));
    vlTOPp->mk_mac__DOT__y___05Fh36024 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37134) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001));
    vlTOPp->mk_mac__DOT__x___05Fh36023 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36025) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36026));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d267 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13821) 
           ^ (IData)(vlTOPp->mk_mac__DOT__cin___05Fh13781));
    vlTOPp->mk_mac__DOT__y___05Fh13916 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13821) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh13781));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d377 
        = (1U & (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh9949) 
                  >> 3U) ^ ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d347) 
                            >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh13536 = (1U & (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh9949) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d347) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh13725 = (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d271) 
                                           >> 1U) & (IData)(vlTOPp->mk_mac__DOT__b___05Fh13590));
    vlTOPp->mk_mac__DOT__x___05Fh13631 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d271) 
                                                 >> 1U) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT__b___05Fh13590)));
    vlTOPp->mk_mac__DOT__cin___05Fh13971 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13090) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh13091));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d474 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh7576) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7577)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh9015) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9016)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9136)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63)))));
    vlTOPp->mk_mac__DOT__y___05Fh9195 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9415) 
                                         & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63));
    vlTOPp->mk_mac__DOT__x___05Fh9194 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9196) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9197));
    vlTOPp->mk_mac__DOT__y___05Fh40034 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh39901) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh39899));
    vlTOPp->mk_mac__DOT__p___05Fh27268 = (4U | (((IData)(vlTOPp->mk_mac__DOT__y___05Fh39901) 
                                                 << 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39961)));
    vlTOPp->mk_mac__DOT__x___05Fh40095 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh39901) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh39961));
    vlTOPp->mk_mac__DOT__x___05Fh35240 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh34302) 
                                          & (IData)(vlTOPp->mk_mac__DOT__b___05Fh34303));
    vlTOPp->mk_mac__DOT__x___05Fh34344 = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh34302) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__b___05Fh34303));
    vlTOPp->mk_mac__DOT__x___05Fh35497 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001) 
                                                 >> 5U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh34395) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__x___05Fh35428 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001) 
                                                 >> 5U) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh34395) 
                                                   >> 3U)));
    vlTOPp->mk_mac__DOT__cin___05Fh30454 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30578) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30579));
    vlTOPp->mk_mac__DOT__sum___05Fh30565 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh30563) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1224));
    vlTOPp->mk_mac__DOT__sum___05Fh36010 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh36008) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1390));
    vlTOPp->mk_mac__DOT__a___05Fh35949 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh36023) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh36024));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d264 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13915) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh13916));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d356 
        = (1U & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13631) 
                 ^ ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d347) 
                    >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh13726 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13631) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d347) 
                                             >> 2U));
    vlTOPp->mk_mac__DOT__y___05Fh14106 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14011) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh13971));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d244 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14011) 
           ^ (IData)(vlTOPp->mk_mac__DOT__cin___05Fh13971));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh2023 = 
        ((IData)(vlTOPp->mk_mac__DOT__p___05Fh2109) 
         ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d474));
    vlTOPp->mk_mac__DOT__a___05Fh1731 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh9194) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh9195));
    vlTOPp->mk_mac__DOT__x___05Fh40031 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh39859) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40034));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1198 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30494) 
           ^ (IData)(vlTOPp->mk_mac__DOT__cin___05Fh30454));
    vlTOPp->mk_mac__DOT__y___05Fh34018 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30494) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh30454));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1268 
        = (1U & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34344) 
                 ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh30565) 
                    >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh35498 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35428) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh30565) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1234 
        = (1U & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34146) 
                 ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh30565) 
                    >> 3U)));
    vlTOPp->mk_mac__DOT__y___05Fh35241 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34344) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh30565) 
                                             >> 2U));
    vlTOPp->mk_mac__DOT__y___05Fh34216 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34146) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh30565) 
                                             >> 3U));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1293 
        = (1U & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35428) 
                 ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh30565) 
                    >> 1U)));
    vlTOPp->mk_mac__DOT__p___05Fh38098 = ((0xcU & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh36010) 
                                                   << 2U)) 
                                          | ((2U & 
                                              ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh36081) 
                                               << 1U)) 
                                             | (1U 
                                                & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1088) 
                                                    >> 1U) 
                                                   ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091)))));
    vlTOPp->mk_mac__DOT__x___05Fh38622 = (1U & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh36010) 
                                                & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh36081)));
    vlTOPp->mk_mac__DOT__x___05Fh38265 = (1U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh36010) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh36010)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1394 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh36010) 
                  >> 2U) & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh34395)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1398 
        = (3U & (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh36010) 
                  >> 2U) ^ (IData)(vlTOPp->mk_mac__DOT__sum___05Fh34395)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1367 
        = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh35949) 
                 ^ ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh34395) 
                    >> 2U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1364 
        = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh35949) 
           & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh34395) 
              >> 2U));
    vlTOPp->mk_mac__DOT__y___05Fh16986 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d356) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh13536));
    vlTOPp->mk_mac__DOT__y___05Fh17030 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d356) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__y___05Fh13536));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d350 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh13725) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh13726));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d229 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh7010) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh7011)) 
            << 2U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh14295) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14296)) 
                       << 1U) | ((IData)(vlTOPp->mk_mac__DOT__x___05Fh14105) 
                                 | (IData)(vlTOPp->mk_mac__DOT__y___05Fh14106))));
    vlTOPp->mk_mac__DOT__x___05Fh17427 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d244) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d264));
    vlTOPp->mk_mac__DOT__x___05Fh17450 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d244) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d264));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh1233 = 
        ((8U & (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh2023) 
                 ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh15144) 
                    | (IData)(vlTOPp->mk_mac__DOT__y___05Fh15145))) 
                << 3U)) | ((4U & (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh2575) 
                                   << 2U) ^ ((0xfffffffcU 
                                              & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d502) 
                                                 << 1U)) 
                                             | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh15353) 
                                                << 2U)))) 
                           | ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d505) 
                              ^ (2U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d502) 
                                       << 1U)))));
    vlTOPp->mk_mac__DOT__x___05Fh15600 = (1U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh2023) 
                                                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh2575)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d479 
        = (6U & (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh2023) 
                  >> 1U) & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh9949) 
                            << 1U)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483 
        = (7U & (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh2023) 
                  >> 1U) ^ (6U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh9949) 
                                  << 1U))));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d448 
        = ((IData)(vlTOPp->mk_mac__DOT__a___05Fh1731) 
           & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh9949) 
              >> 2U));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d454 
        = (1U & ((IData)(vlTOPp->mk_mac__DOT__a___05Fh1731) 
                 ^ ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh9949) 
                    >> 2U)));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1195 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34017) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh34018));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1287 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35497) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh35498));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1262 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35240) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh35241));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1228 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh34215) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh34216));
    vlTOPp->mk_mac__DOT__y___05Fh38559 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38622) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh38327));
    vlTOPp->mk_mac__DOT__x___05Fh38326 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38265) 
                                          & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh36081));
    vlTOPp->mk_mac__DOT__x___05Fh39243 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1398) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1398)));
    vlTOPp->mk_mac__DOT__y___05Fh39182 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1398) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1394)));
    vlTOPp->mk_mac__DOT__y___05Fh37803 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1367) 
                                          & (IData)(vlTOPp->mk_mac__DOT__sum___05Fh30565));
    vlTOPp->mk_mac__DOT__y___05Fh37847 = (1U & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1367) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT__sum___05Fh30565)));
    vlTOPp->mk_mac__DOT__x___05Fh35842 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1293) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1364));
    vlTOPp->mk_mac__DOT__x___05Fh37802 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1293) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1364));
    vlTOPp->mk_mac__DOT__x___05Fh16962 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d267) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d350));
    vlTOPp->mk_mac__DOT__x___05Fh16985 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d267) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d350));
    vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d230 
        = ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d98) 
           & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d229));
    vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d232 
        = ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d98) 
           ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d229));
    vlTOPp->mk_mac__DOT__y___05Fh15534 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh15600) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d502) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh15664 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh15600) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d505) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh16018 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d479) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh16361 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483)));
    vlTOPp->mk_mac__DOT__y___05Fh16297 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d479)));
    vlTOPp->mk_mac__DOT__x___05Fh16082 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh17028 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d377) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d448));
    vlTOPp->mk_mac__DOT__y___05Fh17093 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d377) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d448));
    vlTOPp->mk_mac__DOT__x___05Fh16479 = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d454) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d347));
    vlTOPp->mk_mac__DOT__x___05Fh16502 = (1U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d454) 
                                                ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d347)));
    vlTOPp->mk_mac__DOT__x___05Fh30345 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1034) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1195));
    vlTOPp->mk_mac__DOT__x___05Fh35523 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1034) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1195));
    vlTOPp->mk_mac__DOT__y___05Fh35627 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1268) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1287));
    vlTOPp->mk_mac__DOT__y___05Fh35710 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1268) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1287));
    vlTOPp->mk_mac__DOT__y___05Fh35566 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1234) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1262));
    vlTOPp->mk_mac__DOT__y___05Fh35629 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1234) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1262));
    vlTOPp->mk_mac__DOT__y___05Fh35524 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1198) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1228));
    vlTOPp->mk_mac__DOT__y___05Fh35568 = ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1198) 
                                          ^ (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1228));
    vlTOPp->mk_mac__DOT__sum___05Fh38100 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh38098) 
                                            ^ (((IData)(vlTOPp->mk_mac__DOT__y___05Fh38559) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->mk_mac__DOT__y___05Fh38758) 
                                                   << 2U) 
                                                  | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh38327) 
                                                     << 1U))));
    vlTOPp->mk_mac__DOT__cin___05Fh35814 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38326) 
                                            & (IData)(vlTOPp->mk_mac__DOT__y___05Fh38327));
    vlTOPp->mk_mac__DOT__x___05Fh39179 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1394) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39182)));
    vlTOPp->mk_mac__DOT__y___05Fh38985 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37847) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1394) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh39046 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37847) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1398) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh35843 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37802) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37803));
    vlTOPp->mk_mac__DOT__x___05Fh37844 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37802) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh37847));
    vlTOPp->mk_mac__DOT__y___05Fh17428 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17450) 
                                          & (IData)(vlTOPp->mk_mac__DOT__x___05Fh16962));
    vlTOPp->mk_mac__DOT__y___05Fh16963 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16985) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh16986));
    vlTOPp->mk_mac__DOT__x___05Fh17027 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16985) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh17030));
    vlTOPp->mk_mac__DOT__x___05Fh17492 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17450) 
                                          & (IData)(vlTOPp->mk_mac__DOT__x___05Fh16985));
    vlTOPp->mk_mac__DOT__y___05Fh17915 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d232) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d230) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh18251 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d232) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d232)));
    vlTOPp->mk_mac__DOT__y___05Fh18190 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d232) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d230)));
    vlTOPp->mk_mac__DOT__x___05Fh17977 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d232) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d232) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh15532 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh15664) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d502));
    vlTOPp->mk_mac__DOT__x___05Fh16015 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d479) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16018)));
    vlTOPp->mk_mac__DOT__x___05Fh16294 = (1U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d479) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16297)));
    vlTOPp->mk_mac__DOT__x___05Fh16146 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16082) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483));
    vlTOPp->mk_mac__DOT__y___05Fh16016 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16082) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d479));
    vlTOPp->mk_mac__DOT__y___05Fh17245 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh17030) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh17028));
    vlTOPp->mk_mac__DOT__x___05Fh17309 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh17030) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh17093));
    vlTOPp->mk_mac__DOT__y___05Fh16480 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16502) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d479) 
                                             >> 2U));
    vlTOPp->mk_mac__DOT__x___05Fh16544 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16502) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483) 
                                             >> 2U));
    vlTOPp->mk_mac__DOT__x___05Fh39669 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh35629) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35710));
    vlTOPp->mk_mac__DOT__y___05Fh39608 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh35629) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35627));
    vlTOPp->mk_mac__DOT__y___05Fh30346 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35523) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35524));
    vlTOPp->mk_mac__DOT__y___05Fh39411 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh35568) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35566));
    vlTOPp->mk_mac__DOT__x___05Fh39472 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh35568) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35629));
    vlTOPp->mk_mac__DOT__x___05Fh35565 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35523) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35568));
    vlTOPp->mk_mac__DOT__rg_a___05Fh43400 = ((0xeU 
                                              & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38100) 
                                                 << 1U)) 
                                             | (1U 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1088)));
    vlTOPp->mk_mac__DOT__y___05Fh39180 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39243) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh35814));
    vlTOPp->mk_mac__DOT__y___05Fh39295 = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1398) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh35814));
    vlTOPp->mk_mac__DOT__x___05Fh38982 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh37803) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38985));
    vlTOPp->mk_mac__DOT__x___05Fh39107 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39046) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1398));
    vlTOPp->mk_mac__DOT__y___05Fh38983 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39046) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1394));
    vlTOPp->mk_mac__DOT__x___05Fh35840 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35842) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh35843));
    vlTOPp->mk_mac__DOT__y___05Fh35841 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37844) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1394) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh37905 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37844) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1398) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh17425 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17427) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17428));
    vlTOPp->mk_mac__DOT__x___05Fh16960 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16962) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16963));
    vlTOPp->mk_mac__DOT__x___05Fh17091 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17027) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh17093));
    vlTOPp->mk_mac__DOT__y___05Fh16961 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17027) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh17028));
    vlTOPp->mk_mac__DOT__y___05Fh17426 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17492) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh16986));
    vlTOPp->mk_mac__DOT__x___05Fh17556 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17492) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh17030));
    vlTOPp->mk_mac__DOT__x___05Fh17912 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d230) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17915)));
    vlTOPp->mk_mac__DOT__x___05Fh18187 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d230) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh18190)));
    vlTOPp->mk_mac__DOT__x___05Fh18038 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17977) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d232));
    vlTOPp->mk_mac__DOT__y___05Fh17913 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17977) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d230));
    vlTOPp->mk_mac__DOT__IF_y5534_OR_y5532_THEN_1_ELSE_0___05Fq1 
        = (((IData)(vlTOPp->mk_mac__DOT__y___05Fh15534) 
            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh15532))
            ? 1U : 0U);
    vlTOPp->mk_mac__DOT__x___05Fh16013 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16015) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16016));
    vlTOPp->mk_mac__DOT__x___05Fh17242 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh16986) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17245));
    vlTOPp->mk_mac__DOT__x___05Fh16477 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16479) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16480));
    vlTOPp->mk_mac__DOT__y___05Fh16478 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16544) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d479) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh16608 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16544) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh39605 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh35566) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39608));
    vlTOPp->mk_mac__DOT__x___05Fh30343 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30345) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30346));
    vlTOPp->mk_mac__DOT__x___05Fh39408 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh35524) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39411));
    vlTOPp->mk_mac__DOT__x___05Fh39533 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39472) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35710));
    vlTOPp->mk_mac__DOT__y___05Fh39409 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39472) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35627));
    vlTOPp->mk_mac__DOT__y___05Fh30344 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35565) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35566));
    vlTOPp->mk_mac__DOT__x___05Fh35626 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35565) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35629));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh43400) 
           & vlTOPp->mk_mac__DOT__int_8_rg_c);
    vlTOPp->mk_mac__DOT__p___05Fh43408 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh43400) 
                                                  ^ vlTOPp->mk_mac__DOT__int_8_rg_c));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1586 
        = ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1398) 
           ^ ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1394) 
                      | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39295)) 
                     << 1U)) | (IData)(vlTOPp->mk_mac__DOT__cin___05Fh35814)));
    vlTOPp->mk_mac__DOT__y___05Fh38981 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39107) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh35814));
    vlTOPp->mk_mac__DOT__x___05Fh38980 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38982) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38983));
    vlTOPp->mk_mac__DOT__x___05Fh35838 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35840) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh35841));
    vlTOPp->mk_mac__DOT__x___05Fh37987 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37905) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1398));
    vlTOPp->mk_mac__DOT__y___05Fh35839 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37905) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1394));
    vlTOPp->mk_mac__DOT__x___05Fh16958 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16960) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16961));
    vlTOPp->mk_mac__DOT__x___05Fh17423 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17425) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17426));
    vlTOPp->mk_mac__DOT__x___05Fh17642 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17556) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh17093));
    vlTOPp->mk_mac__DOT__y___05Fh17424 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17556) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh17028));
    vlTOPp->mk_mac__DOT__x___05Fh17910 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17912) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17913));
    vlTOPp->mk_mac__DOT__y___05Fh16014 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16146) 
                                          & (IData)(vlTOPp->mk_mac__DOT__IF_y5534_OR_y5532_THEN_1_ELSE_0___05Fq1));
    vlTOPp->mk_mac__DOT__y___05Fh16295 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16361) 
                                          & (IData)(vlTOPp->mk_mac__DOT__IF_y5534_OR_y5532_THEN_1_ELSE_0___05Fq1));
    vlTOPp->mk_mac__DOT__y___05Fh16415 = (1U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483) 
                                                & (IData)(vlTOPp->mk_mac__DOT__IF_y5534_OR_y5532_THEN_1_ELSE_0___05Fq1)));
    vlTOPp->mk_mac__DOT__x___05Fh16475 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16477) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16478));
    vlTOPp->mk_mac__DOT__x___05Fh16694 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16608) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483));
    vlTOPp->mk_mac__DOT__y___05Fh16476 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16608) 
                                          & (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d479));
    vlTOPp->mk_mac__DOT__x___05Fh39406 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39408) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39409));
    vlTOPp->mk_mac__DOT__x___05Fh30341 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30343) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30344));
    vlTOPp->mk_mac__DOT__x___05Fh35708 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35626) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35710));
    vlTOPp->mk_mac__DOT__y___05Fh30342 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35626) 
                                          & (IData)(vlTOPp->mk_mac__DOT__y___05Fh35627));
    vlTOPp->mk_mac__DOT__y___05Fh44047 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh43408) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622)));
    vlTOPp->mk_mac__DOT__x___05Fh43905 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh43408) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh43408) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh43841 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh43408) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh43430 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh43408) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh43534 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh43408) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh43408) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__rg_a___05Fh43009 = ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh37847) 
                                               ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39179) 
                                                  | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39180))) 
                                              << 3U) 
                                             | (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1586) 
                                                 << 1U) 
                                                | (1U 
                                                   & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh38100) 
                                                      >> 3U))));
    vlTOPp->mk_mac__DOT__y___05Fh35837 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37987) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh35814));
    vlTOPp->mk_mac__DOT__x___05Fh35836 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35838) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh35839));
    vlTOPp->mk_mac__DOT__x___05Fh17421 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17423) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17424));
    vlTOPp->mk_mac__DOT__mul_round_bit___05Fh18677 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16502) 
           ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16013) 
              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16014)));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d536 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh16294) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16295)) 
            << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d479) 
                              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16415)) 
                             << 1U)) | (1U & (IData)(vlTOPp->mk_mac__DOT__IF_y5534_OR_y5532_THEN_1_ELSE_0___05Fq1))));
    vlTOPp->mk_mac__DOT__y___05Fh16474 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16694) 
                                          & (IData)(vlTOPp->mk_mac__DOT__IF_y5534_OR_y5532_THEN_1_ELSE_0___05Fq1));
    vlTOPp->mk_mac__DOT__x___05Fh16473 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16475) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16476));
    vlTOPp->mk_mac__DOT__x___05Fh30339 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30341) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30342));
    vlTOPp->mk_mac__DOT__y___05Fh43839 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43905) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622));
    vlTOPp->mk_mac__DOT__x___05Fh43838 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43841)));
    vlTOPp->mk_mac__DOT__x___05Fh43427 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43430)));
    vlTOPp->mk_mac__DOT__x___05Fh43598 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43534) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh43408) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh43428 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43534) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh43009) 
           & (vlTOPp->mk_mac__DOT__int_8_rg_c >> 4U));
    vlTOPp->mk_mac__DOT__p___05Fh43018 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh43009) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c 
                                                   >> 4U)));
    vlTOPp->mk_mac__DOT__cin___05Fh30317 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35836) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh35837));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d537 
        = ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483) 
           ^ (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d536));
    vlTOPp->mk_mac__DOT__cin___05Fh16828 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16473) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16474));
    vlTOPp->mk_mac__DOT__sum___05Fh43410 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh43408) 
                                            ^ ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh43838) 
                                                 | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43839)) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((0xfffffffcU 
                                                       & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622) 
                                                          << 1U)) 
                                                      | ((IData)(vlTOPp->mk_mac__DOT__y___05Fh44047) 
                                                         << 2U))) 
                                                  | (2U 
                                                     & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622) 
                                                        << 1U)))));
    vlTOPp->mk_mac__DOT__y___05Fh43426 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43598) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622));
    vlTOPp->mk_mac__DOT__x___05Fh43425 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43427) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43428));
    vlTOPp->mk_mac__DOT__x___05Fh44551 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh43018) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh43018)));
    vlTOPp->mk_mac__DOT__y___05Fh44487 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh43018) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599)));
    vlTOPp->mk_mac__DOT__y___05Fh44281 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh43018) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh44345 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh43018) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh43018) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh43040 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh43018) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh43144 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh43018) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh43018) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__y___05Fh39407 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39533) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh30317));
    vlTOPp->mk_mac__DOT__y___05Fh39606 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39669) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh30317));
    vlTOPp->mk_mac__DOT__y___05Fh39721 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh35710) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh30317));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1555 
        = ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh35710) 
             ^ (IData)(vlTOPp->mk_mac__DOT__cin___05Fh30317)) 
            << 1U) | ((IData)(vlTOPp->mk_mac__DOT__x___05Fh37802) 
                      ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh38980) 
                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh38981))));
    vlTOPp->mk_mac__DOT__y___05Fh30340 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35708) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh30317));
    vlTOPp->mk_mac__DOT__x___05Fh18767 = (((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d537) 
                                           << 4U) | (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh1233));
    vlTOPp->mk_mac__DOT__x___05Fh18791 = ((0x30U & 
                                           ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d537) 
                                            << 4U)) 
                                          | (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh1233));
    vlTOPp->mk_mac__DOT__y___05Fh16959 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17091) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh16828));
    vlTOPp->mk_mac__DOT__y___05Fh17243 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17309) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh16828));
    vlTOPp->mk_mac__DOT__y___05Fh17363 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh17093) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh16828));
    vlTOPp->mk_mac__DOT__mul_guard_bit___05Fh18676 
        = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh17093) 
           ^ (IData)(vlTOPp->mk_mac__DOT__cin___05Fh16828));
    vlTOPp->mk_mac__DOT__y___05Fh17422 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17642) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh16828));
    vlTOPp->mk_mac__DOT__cin___05Fh43011 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43425) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43426));
    vlTOPp->mk_mac__DOT__x___05Fh44484 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44487)));
    vlTOPp->mk_mac__DOT__x___05Fh44278 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44281)));
    vlTOPp->mk_mac__DOT__x___05Fh44409 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44345) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh43018));
    vlTOPp->mk_mac__DOT__y___05Fh44279 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44345) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599));
    vlTOPp->mk_mac__DOT__x___05Fh43037 = (1U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43040)));
    vlTOPp->mk_mac__DOT__y___05Fh43038 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43144) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh43208 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43144) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh43018) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__rg_a___05Fh42618 = ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh35568) 
                                               ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39605) 
                                                  | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39606))) 
                                              << 3U) 
                                             | ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh35629) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mk_mac__DOT__y___05Fh35627) 
                                                   | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39721))) 
                                                 << 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1555)));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1418 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh30339) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh30340));
    vlTOPp->mk_mac__DOT__mul_sticky_bit___05Fh18678 
        = (0U != (IData)(vlTOPp->mk_mac__DOT__x___05Fh18767));
    vlTOPp->mk_mac__DOT__mul_sticky_bit___05Fh18704 
        = (0U != (IData)(vlTOPp->mk_mac__DOT__x___05Fh18791));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d593 
        = ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh17030) 
             ^ ((IData)(vlTOPp->mk_mac__DOT__y___05Fh17028) 
                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17363))) 
            << 1U) | (IData)(vlTOPp->mk_mac__DOT__mul_guard_bit___05Fh18676));
    vlTOPp->mk_mac__DOT__cin___05Fh17776 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17421) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17422));
    vlTOPp->mk_mac__DOT__y___05Fh44485 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44551) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh43011));
    vlTOPp->mk_mac__DOT__y___05Fh44605 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh43018) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh43011));
    vlTOPp->mk_mac__DOT__y___05Fh44277 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44409) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh43011));
    vlTOPp->mk_mac__DOT__x___05Fh44276 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44278) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44279));
    vlTOPp->mk_mac__DOT__x___05Fh43035 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43037) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43038));
    vlTOPp->mk_mac__DOT__x___05Fh43294 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43208) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh43018));
    vlTOPp->mk_mac__DOT__y___05Fh43036 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43208) 
                                          & (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh42618) 
           & (vlTOPp->mk_mac__DOT__int_8_rg_c >> 8U));
    vlTOPp->mk_mac__DOT__p___05Fh42627 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh42618) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c 
                                                   >> 8U)));
    vlTOPp->mk_mac__DOT__y___05Fh40147 = ((IData)(vlTOPp->mk_mac__DOT__y___05Fh39961) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1418));
    vlTOPp->mk_mac__DOT__y___05Fh40032 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40095) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1418));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh1177 = 
        ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh17450) 
           ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh16958) 
              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh16959))) 
          << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh16985) 
                      ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17242) 
                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17243))) 
                     << 2U) | (IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d593)));
    vlTOPp->mk_mac__DOT__y___05Fh17911 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh18038) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh17776));
    vlTOPp->mk_mac__DOT__y___05Fh18188 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh18251) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh17776));
    vlTOPp->mk_mac__DOT__y___05Fh18303 = ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d232) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh17776));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1769 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh44276) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44277)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh44484) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44485)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44605)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__cin___05Fh43011))));
    vlTOPp->mk_mac__DOT__y___05Fh43034 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43294) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh43011));
    vlTOPp->mk_mac__DOT__x___05Fh43033 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43035) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43036));
    vlTOPp->mk_mac__DOT__x___05Fh44991 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42627) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh42627)));
    vlTOPp->mk_mac__DOT__y___05Fh44927 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42627) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558)));
    vlTOPp->mk_mac__DOT__y___05Fh44721 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42627) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh44785 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42627) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh42627) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh42649 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42627) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh42753 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42627) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh42627) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_BIT_7_ETC___05F_d1420 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40031) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40032));
    vlTOPp->mk_mac__DOT__spliced_bits_BIT_3___05F_h18658 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh17910) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh17911));
    vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d572 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh18187) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh18188)) 
            << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d230) 
                              | (IData)(vlTOPp->mk_mac__DOT__y___05Fh18303)) 
                             << 1U)) | (IData)(vlTOPp->mk_mac__DOT__cin___05Fh17776)));
    vlTOPp->mk_mac__DOT__sum___05Fh43020 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh43018) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1769));
    vlTOPp->mk_mac__DOT__cin___05Fh42620 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh43033) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh43034));
    vlTOPp->mk_mac__DOT__x___05Fh44924 = (1U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44927)));
    vlTOPp->mk_mac__DOT__x___05Fh44718 = (1U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44721)));
    vlTOPp->mk_mac__DOT__x___05Fh44849 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44785) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh42627));
    vlTOPp->mk_mac__DOT__y___05Fh44719 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44785) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558));
    vlTOPp->mk_mac__DOT__x___05Fh42646 = (1U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42649)));
    vlTOPp->mk_mac__DOT__y___05Fh42647 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42753) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh42817 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42753) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh42627) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__sum___05Fh27270 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh27268) 
                                            ^ ((0xcU 
                                                & ((- (IData)((IData)(vlTOPp->mk_mac__DOT__int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_BIT_7_ETC___05F_d1420))) 
                                                   << 2U)) 
                                               | ((((IData)(vlTOPp->mk_mac__DOT__y___05Fh39899) 
                                                    | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40147)) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1418))));
    if (vlTOPp->mk_mac__DOT__spliced_bits_BIT_3___05F_h18658) {
        vlTOPp->mk_mac__DOT__grs_mul_round___05Fh998 
            = (((IData)(vlTOPp->mk_mac__DOT__mul_guard_bit___05Fh18676) 
                << 2U) | (((IData)(vlTOPp->mk_mac__DOT__mul_round_bit___05Fh18677) 
                           << 1U) | (IData)(vlTOPp->mk_mac__DOT__mul_sticky_bit___05Fh18678)));
        vlTOPp->mk_mac__DOT__exp___05Fh990 = vlTOPp->mk_mac__DOT__exp___05F_1___05Fh18674;
    } else {
        vlTOPp->mk_mac__DOT__grs_mul_round___05Fh998 
            = (((IData)(vlTOPp->mk_mac__DOT__mul_round_bit___05Fh18677) 
                << 2U) | ((2U & ((IData)(vlTOPp->mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d537) 
                                 >> 1U)) | (IData)(vlTOPp->mk_mac__DOT__mul_sticky_bit___05Fh18704)));
        vlTOPp->mk_mac__DOT__exp___05Fh990 = vlTOPp->mk_mac__DOT__exp___05Fh988;
    }
    vlTOPp->mk_mac__DOT__spliced_bits_BITS_2_TO_0___05F_h18871 
        = ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d232) 
           ^ (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d572));
    vlTOPp->mk_mac__DOT__y___05Fh44925 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44991) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh42620));
    vlTOPp->mk_mac__DOT__y___05Fh45045 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh42627) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh42620));
    vlTOPp->mk_mac__DOT__y___05Fh44717 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44849) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh42620));
    vlTOPp->mk_mac__DOT__x___05Fh44716 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh44718) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44719));
    vlTOPp->mk_mac__DOT__x___05Fh42644 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42646) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42647));
    vlTOPp->mk_mac__DOT__x___05Fh42903 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42817) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh42627));
    vlTOPp->mk_mac__DOT__y___05Fh42645 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42817) 
                                          & (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558));
    vlTOPp->mk_mac__DOT__rg_a___05Fh40871 = (0xfU & 
                                             (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh27270) 
                                                            >> 2U)))));
    vlTOPp->mk_mac__DOT__rg_a___05Fh42226 = ((0xeU 
                                              & ((IData)(vlTOPp->mk_mac__DOT__sum___05Fh27270) 
                                                 << 1U)) 
                                             | ((IData)(vlTOPp->mk_mac__DOT__x___05Fh35523) 
                                                ^ ((IData)(vlTOPp->mk_mac__DOT__x___05Fh39406) 
                                                   | (IData)(vlTOPp->mk_mac__DOT__y___05Fh39407))));
    vlTOPp->mk_mac__DOT__exp___05F_1___05Fh18877 = 
        (0xffU & ((IData)(1U) + (IData)(vlTOPp->mk_mac__DOT__exp___05Fh990)));
    vlTOPp->mk_mac__DOT__mant_1___05Fh18701 = (((IData)(vlTOPp->mk_mac__DOT__spliced_bits_BITS_2_TO_0___05F_h18871) 
                                                << 5U) 
                                               | (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh1177) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mk_mac__DOT__mul_round_bit___05Fh18677)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh1149 = 
        (((IData)(vlTOPp->mk_mac__DOT__spliced_bits_BIT_3___05F_h18658) 
          << 3U) | (IData)(vlTOPp->mk_mac__DOT__spliced_bits_BITS_2_TO_0___05F_h18871));
    vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1751 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh44716) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44717)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh44924) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh44925)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45045)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__cin___05Fh42620))));
    vlTOPp->mk_mac__DOT__y___05Fh42643 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42903) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh42620));
    vlTOPp->mk_mac__DOT__x___05Fh42642 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42644) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42645));
    vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1432 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh40871) 
           & (vlTOPp->mk_mac__DOT__int_8_rg_c >> 0x1cU));
    vlTOPp->mk_mac__DOT__p___05Fh26912 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh40871) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c 
                                                   >> 0x1cU)));
    vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh40871) 
           & (vlTOPp->mk_mac__DOT__int_8_rg_c >> 0x18U));
    vlTOPp->mk_mac__DOT__p___05Fh40880 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh40871) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c 
                                                   >> 0x18U)));
    vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh40871) 
           & (vlTOPp->mk_mac__DOT__int_8_rg_c >> 0x14U));
    vlTOPp->mk_mac__DOT__p___05Fh41332 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh40871) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c 
                                                   >> 0x14U)));
    vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh40871) 
           & (vlTOPp->mk_mac__DOT__int_8_rg_c >> 0x10U));
    vlTOPp->mk_mac__DOT__p___05Fh41784 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh40871) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c 
                                                   >> 0x10U)));
    vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517 
        = ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh42226) 
           & (vlTOPp->mk_mac__DOT__int_8_rg_c >> 0xcU));
    vlTOPp->mk_mac__DOT__p___05Fh42235 = (0xfU & ((IData)(vlTOPp->mk_mac__DOT__rg_a___05Fh42226) 
                                                  ^ 
                                                  (vlTOPp->mk_mac__DOT__int_8_rg_c 
                                                   >> 0xcU)));
    vlTOPp->mk_mac__DOT__mant_1___05Fh18675 = (((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh1149) 
                                                << 4U) 
                                               | (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh1177));
    vlTOPp->mk_mac__DOT__sum___05Fh42629 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh42627) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1751));
    vlTOPp->mk_mac__DOT__cin___05Fh42228 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42642) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42643));
    vlTOPp->mk_mac__DOT__x___05Fh47191 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh26912) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh26912)));
    vlTOPp->mk_mac__DOT__y___05Fh47127 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh26912) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1432)));
    vlTOPp->mk_mac__DOT__y___05Fh46921 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh26912) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1432) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh46985 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh26912) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh26912) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh46751 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40880) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh40880)));
    vlTOPp->mk_mac__DOT__y___05Fh46687 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40880) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446)));
    vlTOPp->mk_mac__DOT__y___05Fh46481 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40880) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh46545 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40880) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh40880) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh40902 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40880) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh41066 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh40880) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh40880) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh46311 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41332) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh41332)));
    vlTOPp->mk_mac__DOT__y___05Fh46247 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41332) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466)));
    vlTOPp->mk_mac__DOT__y___05Fh46041 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41332) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh46105 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41332) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh41332) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh41354 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41332) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh41518 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41332) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh41332) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh45871 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41784) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh41784)));
    vlTOPp->mk_mac__DOT__y___05Fh45807 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41784) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486)));
    vlTOPp->mk_mac__DOT__y___05Fh45601 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41784) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh45665 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41784) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh41784) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh41806 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41784) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh41970 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh41784) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh41784) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh45431 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42235) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT__p___05Fh42235)));
    vlTOPp->mk_mac__DOT__y___05Fh45367 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42235) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517)));
    vlTOPp->mk_mac__DOT__y___05Fh45161 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42235) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__x___05Fh45225 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42235) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh42235) 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__y___05Fh42257 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42235) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__x___05Fh42362 = (1U & (((IData)(vlTOPp->mk_mac__DOT__p___05Fh42235) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh42235) 
                                                   >> 2U)));
    vlTOPp->mk_mac__DOT__mant_1___05Fh992 = ((IData)(vlTOPp->mk_mac__DOT__spliced_bits_BIT_3___05F_h18658)
                                              ? (IData)(vlTOPp->mk_mac__DOT__mant_1___05Fh18675)
                                              : (IData)(vlTOPp->mk_mac__DOT__mant_1___05Fh18701));
    vlTOPp->mk_mac__DOT__y___05Fh45485 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh42235) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh42228));
    vlTOPp->mk_mac__DOT__x___05Fh47124 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1432) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47127)));
    vlTOPp->mk_mac__DOT__x___05Fh46918 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1432) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46921)));
    vlTOPp->mk_mac__DOT__x___05Fh47049 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46985) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh26912));
    vlTOPp->mk_mac__DOT__y___05Fh46919 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46985) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1432));
    vlTOPp->mk_mac__DOT__x___05Fh46684 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46687)));
    vlTOPp->mk_mac__DOT__x___05Fh46478 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46481)));
    vlTOPp->mk_mac__DOT__x___05Fh46609 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46545) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh40880));
    vlTOPp->mk_mac__DOT__y___05Fh46479 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46545) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446));
    vlTOPp->mk_mac__DOT__x___05Fh40899 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40902)));
    vlTOPp->mk_mac__DOT__y___05Fh40900 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41066) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh41130 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41066) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh40880) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh46244 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46247)));
    vlTOPp->mk_mac__DOT__x___05Fh46038 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46041)));
    vlTOPp->mk_mac__DOT__x___05Fh46169 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46105) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh41332));
    vlTOPp->mk_mac__DOT__y___05Fh46039 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46105) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466));
    vlTOPp->mk_mac__DOT__x___05Fh41351 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41354)));
    vlTOPp->mk_mac__DOT__y___05Fh41352 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41518) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh41582 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41518) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh41332) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh45804 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45807)));
    vlTOPp->mk_mac__DOT__x___05Fh45598 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45601)));
    vlTOPp->mk_mac__DOT__x___05Fh45729 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45665) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh41784));
    vlTOPp->mk_mac__DOT__y___05Fh45599 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45665) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486));
    vlTOPp->mk_mac__DOT__x___05Fh41803 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41806)));
    vlTOPp->mk_mac__DOT__y___05Fh41804 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41970) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh42034 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41970) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh41784) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__y___05Fh45365 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45431) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh42228));
    vlTOPp->mk_mac__DOT__x___05Fh45364 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45367)));
    vlTOPp->mk_mac__DOT__x___05Fh45158 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45161)));
    vlTOPp->mk_mac__DOT__x___05Fh45289 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45225) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh42235));
    vlTOPp->mk_mac__DOT__y___05Fh45159 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45225) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517));
    vlTOPp->mk_mac__DOT__x___05Fh42254 = (1U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517) 
                                                 >> 3U) 
                                                | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42257)));
    vlTOPp->mk_mac__DOT__y___05Fh42255 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42362) 
                                          & ((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__x___05Fh42426 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42362) 
                                          & ((IData)(vlTOPp->mk_mac__DOT__p___05Fh42235) 
                                             >> 1U));
    vlTOPp->mk_mac__DOT__mantissa_round___05Fh18831 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->mk_mac__DOT__mant_1___05Fh992)));
    vlTOPp->mk_mac__DOT__x___05Fh46916 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46918) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46919));
    vlTOPp->mk_mac__DOT__x___05Fh46476 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46478) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46479));
    vlTOPp->mk_mac__DOT__x___05Fh40897 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40899) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40900));
    vlTOPp->mk_mac__DOT__x___05Fh41216 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41130) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh40880));
    vlTOPp->mk_mac__DOT__y___05Fh40898 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41130) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446));
    vlTOPp->mk_mac__DOT__x___05Fh46036 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46038) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46039));
    vlTOPp->mk_mac__DOT__x___05Fh41349 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41351) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41352));
    vlTOPp->mk_mac__DOT__x___05Fh41668 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41582) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh41332));
    vlTOPp->mk_mac__DOT__y___05Fh41350 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41582) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466));
    vlTOPp->mk_mac__DOT__x___05Fh45596 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45598) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45599));
    vlTOPp->mk_mac__DOT__x___05Fh41801 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41803) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41804));
    vlTOPp->mk_mac__DOT__x___05Fh42120 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42034) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh41784));
    vlTOPp->mk_mac__DOT__y___05Fh41802 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42034) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486));
    vlTOPp->mk_mac__DOT__y___05Fh45157 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45289) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh42228));
    vlTOPp->mk_mac__DOT__x___05Fh45156 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45158) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45159));
    vlTOPp->mk_mac__DOT__x___05Fh42252 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42254) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42255));
    vlTOPp->mk_mac__DOT__x___05Fh42512 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42426) 
                                          & (IData)(vlTOPp->mk_mac__DOT__p___05Fh42235));
    vlTOPp->mk_mac__DOT__y___05Fh42253 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42426) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517));
    vlTOPp->mk_mac__DOT__IF_IF_1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_T_ETC___05F_d600 
        = ((((3U == (IData)(vlTOPp->mk_mac__DOT__grs_mul_round___05Fh998)) 
             | (6U == (IData)(vlTOPp->mk_mac__DOT__grs_mul_round___05Fh998))) 
            | (7U == (IData)(vlTOPp->mk_mac__DOT__grs_mul_round___05Fh998)))
            ? (IData)(vlTOPp->mk_mac__DOT__mantissa_round___05Fh18831)
            : (IData)(vlTOPp->mk_mac__DOT__mant_1___05Fh992));
    vlTOPp->mk_mac__DOT__x___05Fh40895 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40897) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40898));
    vlTOPp->mk_mac__DOT__x___05Fh41347 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41349) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41350));
    vlTOPp->mk_mac__DOT__x___05Fh41799 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41801) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41802));
    vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1733 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh45156) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45157)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh45364) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45365)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45485)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__cin___05Fh42228))));
    vlTOPp->mk_mac__DOT__y___05Fh42251 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42512) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh42228));
    vlTOPp->mk_mac__DOT__x___05Fh42250 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42252) 
                                          | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42253));
    vlTOPp->mk_mac__DOT___theResult___05F___05F_1___05Fh1000 
        = ((0x100U & (IData)(vlTOPp->mk_mac__DOT__IF_IF_1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_T_ETC___05F_d600))
            ? (IData)(vlTOPp->mk_mac__DOT__exp___05F_1___05Fh18877)
            : (IData)(vlTOPp->mk_mac__DOT__exp___05Fh990));
    vlTOPp->mk_mac__DOT__sum___05Fh42237 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh42235) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1733));
    vlTOPp->mk_mac__DOT__cin___05Fh41777 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42250) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh42251));
    vlTOPp->mk_mac__DOT__IF_theResult___05F___05F_1000_EQ_255_THEN_0_ELSE_IF_IF_ETC___05Fq2 
        = ((0xffU == (IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_1___05Fh1000))
            ? 0U : (0xff0000U & ((IData)(vlTOPp->mk_mac__DOT__IF_IF_1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_T_ETC___05F_d600) 
                                 << 0x10U)));
    vlTOPp->mk_mac__DOT__y___05Fh45597 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45729) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh41777));
    vlTOPp->mk_mac__DOT__y___05Fh45805 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh45871) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh41777));
    vlTOPp->mk_mac__DOT__y___05Fh45925 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh41784) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh41777));
    vlTOPp->mk_mac__DOT__y___05Fh41800 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh42120) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh41777));
    vlTOPp->mk_mac__DOT__IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_AND_NOT_b_ETC___05F_d637 
        = (((((0U != (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                               >> 7U))) & (0U != (0xffU 
                                                  & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                     >> 7U)))) 
             & (0xffU != (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                   >> 7U)))) & (0xffU 
                                                != 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                    >> 7U))))
            ? (((IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_1___05Fh1000) 
                << 0x17U) | (0x7fffffU & vlTOPp->mk_mac__DOT__IF_theResult___05F___05F_1000_EQ_255_THEN_0_ELSE_IF_IF_ETC___05Fq2))
            : ((((((0U != (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                    >> 7U))) & (0U 
                                                != 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                    >> 7U)))) 
                  & ((0xffU == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                         >> 7U))) | 
                     (0xffU == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                         >> 7U)))))
                  ? 0xffU : (((((0xffU != (0xffU & 
                                           ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                            >> 7U))) 
                                | (0U != (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                   >> 7U)))) 
                               & ((0U != (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                                   >> 7U))) 
                                  | (0xffU != (0xffU 
                                               & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                  >> 7U))))) 
                              & ((0U == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                                  >> 7U))) 
                                 | (0U == (0xffU & 
                                           ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                            >> 7U)))))
                              ? 0U : 0xffU)) << 0x17U) 
               | (((((0U != (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                      >> 7U))) & (0U 
                                                  != 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                      >> 7U)))) 
                    & ((0xffU == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                           >> 7U))) 
                       | (0xffU == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                             >> 7U))))) 
                   | ((((0xffU != (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                            >> 7U))) 
                        | (0U != (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                           >> 7U)))) 
                       & ((0U != (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                           >> 7U))) 
                          | (0xffU != (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                                >> 7U))))) 
                      & ((0U == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_A) 
                                          >> 7U))) 
                         | (0U == (0xffU & ((IData)(vlTOPp->mk_mac__DOT__bfloat_rg_B) 
                                            >> 7U))))))
                   ? 0U : 0x400000U)));
    vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1715 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh45596) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45597)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh45804) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45805)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh45925)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__cin___05Fh41777))));
    vlTOPp->mk_mac__DOT__cin___05Fh41325 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41799) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41800));
    vlTOPp->mk_mac__DOT__IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_AND_NOT_b_ETC___05F_d641 
        = ((0xffU & (vlTOPp->mk_mac__DOT__IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_AND_NOT_b_ETC___05F_d637 
                     >> 0x17U)) < (0xffU & (vlTOPp->mk_mac__DOT__bfloat_rg_C 
                                            >> 0x17U)));
    vlTOPp->mk_mac__DOT__mul_result___05Fh401 = (((IData)(vlTOPp->mk_mac__DOT__sign_s1___05Fh896) 
                                                  << 0x1fU) 
                                                 | vlTOPp->mk_mac__DOT__IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_AND_NOT_b_ETC___05F_d637);
    vlTOPp->mk_mac__DOT__sum___05Fh41786 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh41784) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1715));
    vlTOPp->mk_mac__DOT__y___05Fh46037 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46169) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh41325));
    vlTOPp->mk_mac__DOT__y___05Fh46245 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46311) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh41325));
    vlTOPp->mk_mac__DOT__y___05Fh46365 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh41332) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh41325));
    vlTOPp->mk_mac__DOT__y___05Fh41348 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41668) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh41325));
    if (vlTOPp->mk_mac__DOT__IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_AND_NOT_b_ETC___05F_d641) {
        vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 = vlTOPp->mk_mac__DOT__bfloat_rg_C;
        vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 = vlTOPp->mk_mac__DOT__mul_result___05Fh401;
    } else {
        vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 = vlTOPp->mk_mac__DOT__mul_result___05Fh401;
        vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 = vlTOPp->mk_mac__DOT__bfloat_rg_C;
    }
    vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1697 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh46036) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46037)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh46244) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46245)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46365)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__cin___05Fh41325))));
    vlTOPp->mk_mac__DOT__cin___05Fh40873 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41347) 
                                            | (IData)(vlTOPp->mk_mac__DOT__y___05Fh41348));
    vlTOPp->mk_mac__DOT__rg_mult_s6___05Fh19167 = (
                                                   (0x80000000U 
                                                    & vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402) 
                                                   | ((0U 
                                                       == 
                                                       (0x7fffffU 
                                                        & vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402))
                                                       ? 0x7f800000U
                                                       : 
                                                      (0x7f800000U 
                                                       | (0x7fffffU 
                                                          & vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402))));
    vlTOPp->mk_mac__DOT__rg_mult_s6___05Fh19413 = (0x80000000U 
                                                   & vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402);
    vlTOPp->mk_mac__DOT__exp_diff_s6___05Fh19161 = 
        (0xffU & ((vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 
                   >> 0x17U) - (vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 
                                >> 0x17U)));
    vlTOPp->mk_mac__DOT__rg_C_s6___05Fh19168 = ((0x80000000U 
                                                 & vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403) 
                                                | ((0U 
                                                    == 
                                                    (0x7fffffU 
                                                     & vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403))
                                                    ? 0x7f800000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x7fffffU 
                                                       & vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403))));
    vlTOPp->mk_mac__DOT__rg_C_s6___05Fh19414 = (0x80000000U 
                                                & vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403);
    vlTOPp->mk_mac__DOT__sum___05Fh41334 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh41332) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1697));
    vlTOPp->mk_mac__DOT__y___05Fh46477 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46609) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh40873));
    vlTOPp->mk_mac__DOT__y___05Fh46685 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh46751) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh40873));
    vlTOPp->mk_mac__DOT__y___05Fh46805 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh40880) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh40873));
    vlTOPp->mk_mac__DOT__y___05Fh40896 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh41216) 
                                          & (IData)(vlTOPp->mk_mac__DOT__cin___05Fh40873));
    vlTOPp->mk_mac__DOT___theResult___05F___05F_3_fst___05Fh19163 
        = (((0U != (0xffU & (vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 
                             >> 0x17U))) | (0U != (0xffU 
                                                   & (vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 
                                                      >> 0x17U))))
            ? vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402
            : vlTOPp->mk_mac__DOT__rg_mult_s6___05Fh19413);
    vlTOPp->mk_mac__DOT__shift_count___05Fh414 = ((
                                                   (0xffU 
                                                    != 
                                                    (0xffU 
                                                     & (vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 
                                                        >> 0x17U))) 
                                                   & (0xffU 
                                                      != 
                                                      (0xffU 
                                                       & (vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 
                                                          >> 0x17U))))
                                                   ? (IData)(vlTOPp->mk_mac__DOT__exp_diff_s6___05Fh19161)
                                                   : 0xffU);
    vlTOPp->mk_mac__DOT___theResult___05F___05F_3_snd_fst___05Fh19165 
        = (((0U != (0xffU & (vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 
                             >> 0x17U))) | (0U != (0xffU 
                                                   & (vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 
                                                      >> 0x17U))))
            ? vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403
            : vlTOPp->mk_mac__DOT__rg_C_s6___05Fh19414);
    vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1679 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh46476) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46477)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh46684) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46685)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46805)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT__cin___05Fh40873))));
    vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1650 
        = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh40895) 
           | (IData)(vlTOPp->mk_mac__DOT__y___05Fh40896));
    if (((0xffU != (0xffU & (vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 
                             >> 0x17U))) & (0xffU != 
                                            (0xffU 
                                             & (vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 
                                                >> 0x17U))))) {
        vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d668 
            = vlTOPp->mk_mac__DOT___theResult___05F___05F_3_fst___05Fh19163;
        vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d680 
            = vlTOPp->mk_mac__DOT___theResult___05F___05F_3_snd_fst___05Fh19165;
    } else {
        vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d668 
            = vlTOPp->mk_mac__DOT__rg_mult_s6___05Fh19167;
        vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d680 
            = vlTOPp->mk_mac__DOT__rg_C_s6___05Fh19168;
    }
    vlTOPp->mk_mac__DOT__sum___05Fh40882 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh40880) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1679));
    vlTOPp->mk_mac__DOT__y___05Fh46917 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47049) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1650));
    vlTOPp->mk_mac__DOT__y___05Fh47125 = ((IData)(vlTOPp->mk_mac__DOT__x___05Fh47191) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1650));
    vlTOPp->mk_mac__DOT__y___05Fh47245 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh26912) 
                                          & (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1650));
    vlTOPp->mk_mac__DOT__exponent___05Fh26143 = (0xffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d668 
                                                     >> 0x17U)));
    vlTOPp->mk_mac__DOT__mult_mant_s7___05Fh415 = (0x4000000U 
                                                   | (0x3fffff8U 
                                                      & (vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d668 
                                                         << 3U)));
    vlTOPp->mk_mac__DOT__c_mant_s7___05Fh416 = (0x3fffff8U 
                                                & (vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d680 
                                                   << 3U));
    vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1661 
        = ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh46916) 
             | (IData)(vlTOPp->mk_mac__DOT__y___05Fh46917)) 
            << 3U) | ((((IData)(vlTOPp->mk_mac__DOT__x___05Fh47124) 
                        | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47125)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1432) 
                                         | (IData)(vlTOPp->mk_mac__DOT__y___05Fh47245)) 
                                        << 1U)) | (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1650))));
    vlTOPp->mk_mac__DOT__shiftedmantissa___05Fh417 
        = ((0x1aU >= (IData)(vlTOPp->mk_mac__DOT__shift_count___05Fh414))
            ? (0x7ffffffU & ((0x4000000U | vlTOPp->mk_mac__DOT__c_mant_s7___05Fh416) 
                             >> (IData)(vlTOPp->mk_mac__DOT__shift_count___05Fh414)))
            : 0U);
    vlTOPp->mk_mac__DOT__sum___05Fh26914 = ((IData)(vlTOPp->mk_mac__DOT__p___05Fh26912) 
                                            ^ (IData)(vlTOPp->mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1661));
    vlTOPp->mk_mac__DOT___0b1_CONCAT_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_1_ETC___05F_d687 
        = (vlTOPp->mk_mac__DOT__mult_mant_s7___05Fh415 
           <= vlTOPp->mk_mac__DOT__shiftedmantissa___05Fh417);
    vlTOPp->mk_mac__DOT__int_8_out_D_IN = (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh26914) 
                                            << 0x1cU) 
                                           | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh40882) 
                                               << 0x18U) 
                                              | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh41334) 
                                                  << 0x14U) 
                                                 | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh41786) 
                                                     << 0x10U) 
                                                    | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh42237) 
                                                        << 0xcU) 
                                                       | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh42629) 
                                                           << 8U) 
                                                          | (((IData)(vlTOPp->mk_mac__DOT__sum___05Fh43020) 
                                                              << 4U) 
                                                             | (IData)(vlTOPp->mk_mac__DOT__sum___05Fh43410))))))));
    if (vlTOPp->mk_mac__DOT___0b1_CONCAT_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_1_ETC___05F_d687) {
        vlTOPp->mk_mac__DOT__rg_sign_s9___05Fh435 = 
            (1U & (vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d680 
                   >> 0x1fU));
        vlTOPp->mk_mac__DOT__a_temp___05Fh19326 = vlTOPp->mk_mac__DOT__shiftedmantissa___05Fh417;
        vlTOPp->mk_mac__DOT__b_temp___05Fh19327 = (0x4000000U 
                                                   | (0x3fffff8U 
                                                      & (vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d668 
                                                         << 3U)));
    } else {
        vlTOPp->mk_mac__DOT__rg_sign_s9___05Fh435 = 
            (1U & (vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d668 
                   >> 0x1fU));
        vlTOPp->mk_mac__DOT__a_temp___05Fh19326 = (0x4000000U 
                                                   | (0x3fffff8U 
                                                      & (vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d668 
                                                         << 3U)));
        vlTOPp->mk_mac__DOT__b_temp___05Fh19327 = vlTOPp->mk_mac__DOT__shiftedmantissa___05Fh417;
    }
    vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
        = (0x1fffffffU & ((0x80000000U & (vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d668 
                                          ^ vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d680))
                           ? (vlTOPp->mk_mac__DOT__a_temp___05Fh19326 
                              - vlTOPp->mk_mac__DOT__b_temp___05Fh19327)
                           : (vlTOPp->mk_mac__DOT__a_temp___05Fh19326 
                              + vlTOPp->mk_mac__DOT__b_temp___05Fh19327)));
    if ((0x8000000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)) {
        vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_fst___05Fh26137 
            = (0xffU & (IData)(vlTOPp->mk_mac__DOT__exponent___05Fh26143));
        vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_fst___05Fh26141 
            = (1U & (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                     >> 4U));
        vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_fst___05Fh26275 
            = (1U & (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                     >> 3U));
    } else {
        vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_fst___05Fh26137 
            = (0xffU & (vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d668 
                        >> 0x17U));
        vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_fst___05Fh26141 
            = (1U & (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                     >> 3U));
        vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_fst___05Fh26275 
            = (1U & (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                     >> 2U));
    }
    vlTOPp->mk_mac__DOT__sticky_bit_s9___05Fh26195 
        = (1U & ((vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                  >> 1U) | vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698));
    vlTOPp->mk_mac__DOT__x___05Fh26382 = (1U & ((vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                                                 >> 2U) 
                                                | (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                                                   >> 1U)));
    vlTOPp->mk_mac__DOT__rg_mant_s9___05Fh26192 = (0x7fffffeU 
                                                   & (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                                                      << 1U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh21537 = 
        ((2U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((1U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20709 = 
        ((0x2000000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((0x1000000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20778 = 
        ((0x800000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((0x400000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20847 = 
        ((0x200000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((0x100000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20916 = 
        ((0x80000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((0x40000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20985 = 
        ((0x20000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((0x10000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh21054 = 
        ((0x8000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((0x4000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh21123 = 
        ((0x2000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((0x1000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh21192 = 
        ((0x800U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((0x400U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh21261 = 
        ((0x200U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((0x100U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh21330 = 
        ((0x80U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((0x40U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh21399 = 
        ((0x20U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((0x10U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh21468 = 
        ((8U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
          ? 0U : ((4U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                   ? 1U : 2U));
    vlTOPp->mk_mac__DOT__sticky_bit_s9___05Fh26147 
        = (1U & ((IData)(vlTOPp->mk_mac__DOT__x___05Fh26382) 
                 | vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698));
    vlTOPp->mk_mac__DOT___theResult___05F___05F_2_fst___05Fh26135 
        = (0x7ffffffU & ((0x8000000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
                          ? vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698
                          : vlTOPp->mk_mac__DOT__rg_mant_s9___05Fh26192));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20327 = 
        ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21537))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21537))
                   ? 2U : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21537)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20494 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20709) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20778)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20709))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20778)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20709)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20467 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20847) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20916)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20847))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20916)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20847)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20439 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20985) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21054)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20985))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21054)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20985)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20411 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21123) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21192)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21123))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21192)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21123)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20383 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21261) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21330)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21261))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21330)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21261)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20355 = 
        ((2U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21399) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21468)))
          ? 4U : ((2U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21399))
                   ? (2U | (1U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21468)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh21399)));
    vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_snd_fst___05Fh26368 
        = ((0x8000000U & vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698)
            ? (IData)(vlTOPp->mk_mac__DOT__sticky_bit_s9___05Fh26147)
            : (IData)(vlTOPp->mk_mac__DOT__sticky_bit_s9___05Fh26195));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20125 = 
        ((4U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20327))
          ? 8U : ((4U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20327))
                   ? 4U : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20327)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20208 = 
        ((4U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20494) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20467)))
          ? 8U : ((4U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20494))
                   ? (4U | (3U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20467)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20494)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20181 = 
        ((4U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20439) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20411)))
          ? 8U : ((4U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20439))
                   ? (4U | (3U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20411)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20439)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20153 = 
        ((4U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20383) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20355)))
          ? 8U : ((4U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20383))
                   ? (4U | (3U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20355)))
                   : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20383)));
    vlTOPp->mk_mac__DOT__IF_IF_IF_IF_IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BI_ETC___05F_d796 
        = ((8U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20208) 
                  & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20181)))
            ? 0x10U : ((8U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20208))
                        ? (8U | (7U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20181)))
                        : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20208)));
    vlTOPp->mk_mac__DOT__spliced_bits___05Fh20007 = 
        ((8U & ((IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20153) 
                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20125)))
          ? 0x10U : ((8U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20153))
                      ? (8U | (7U & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20125)))
                      : (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20153)));
    vlTOPp->mk_mac__DOT__out___05Fh19964 = ((0x10U 
                                             & ((IData)(vlTOPp->mk_mac__DOT__IF_IF_IF_IF_IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BI_ETC___05F_d796) 
                                                & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20007)))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlTOPp->mk_mac__DOT__IF_IF_IF_IF_IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BI_ETC___05F_d796))
                                              ? (0x10U 
                                                 | (0xfU 
                                                    & (IData)(vlTOPp->mk_mac__DOT__spliced_bits___05Fh20007)))
                                              : (IData)(vlTOPp->mk_mac__DOT__IF_IF_IF_IF_IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BI_ETC___05F_d796)));
    vlTOPp->mk_mac__DOT__leftshift_count___05Fh19894 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->mk_mac__DOT__out___05Fh19964)));
    vlTOPp->mk_mac__DOT__op2___05Fh26526 = vlTOPp->mk_mac__DOT__leftshift_count___05Fh19894;
    vlTOPp->mk_mac__DOT__mantissa_a___05Fh19896 = (0x3ffffffU 
                                                   & (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                                                      << (IData)(vlTOPp->mk_mac__DOT__leftshift_count___05Fh19894)));
    vlTOPp->mk_mac__DOT__exponent___05Fh19895 = (0xffU 
                                                 & ((vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d668 
                                                     >> 0x17U) 
                                                    - (IData)(vlTOPp->mk_mac__DOT__op2___05Fh26526)));
    vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_fst___05Fh19268 
        = (((0xffU != (0xffU & (vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 
                                >> 0x17U))) & (0xffU 
                                               != (0xffU 
                                                   & (vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 
                                                      >> 0x17U)))) 
           & ((0U == (3U & (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                            >> 0x1aU))) ? (vlTOPp->mk_mac__DOT__mantissa_a___05Fh19896 
                                           >> 3U) : (IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_fst___05Fh26141)));
    vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_fst___05Fh26248 
        = (((0xffU != (0xffU & (vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 
                                >> 0x17U))) & (0xffU 
                                               != (0xffU 
                                                   & (vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 
                                                      >> 0x17U)))) 
           & ((0U == (3U & (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                            >> 0x1aU))) ? (vlTOPp->mk_mac__DOT__mantissa_a___05Fh19896 
                                           >> 2U) : (IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_fst___05Fh26275)));
    vlTOPp->mk_mac__DOT__sticky_bit_s9___05Fh19900 
        = (1U & ((vlTOPp->mk_mac__DOT__mantissa_a___05Fh19896 
                  >> 1U) | vlTOPp->mk_mac__DOT__mantissa_a___05Fh19896));
    vlTOPp->mk_mac__DOT__rg_mant_s9___05Fh19897 = (vlTOPp->mk_mac__DOT__mantissa_a___05Fh19896 
                                                   << 1U);
    vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_fst___05Fh19278 
        = ((0U == (3U & (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                         >> 0x1aU))) ? (IData)(vlTOPp->mk_mac__DOT__exponent___05Fh19895)
            : (IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_fst___05Fh26137));
    vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_snd_fst___05Fh26320 
        = (((0xffU != (0xffU & (vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 
                                >> 0x17U))) & (0xffU 
                                               != (0xffU 
                                                   & (vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 
                                                      >> 0x17U)))) 
           & ((0U == (3U & (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                            >> 0x1aU))) ? (IData)(vlTOPp->mk_mac__DOT__sticky_bit_s9___05Fh19900)
               : (IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_snd_fst___05Fh26368)));
    vlTOPp->mk_mac__DOT___theResult___05F___05F_2_fst___05Fh19276 
        = ((0U == (3U & (vlTOPp->mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 
                         >> 0x1aU))) ? vlTOPp->mk_mac__DOT__rg_mant_s9___05Fh19897
            : vlTOPp->mk_mac__DOT___theResult___05F___05F_2_fst___05Fh26135);
    vlTOPp->mk_mac__DOT__rg_exponent_s9___05Fh433 = 
        (((0xffU != (0xffU & (vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 
                              >> 0x17U))) & (0xffU 
                                             != (0xffU 
                                                 & (vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 
                                                    >> 0x17U))))
          ? (IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_fst___05Fh19278)
          : 0xffU);
    vlTOPp->mk_mac__DOT__grs___05Fh438 = (((IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_fst___05Fh19268) 
                                           << 2U) | 
                                          (((IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_fst___05Fh26248) 
                                            << 1U) 
                                           | (IData)(vlTOPp->mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_snd_fst___05Fh26320)));
    vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d913 
        = (((0xffU != (0xffU & (vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402 
                                >> 0x17U))) & (0xffU 
                                               != (0xffU 
                                                   & (vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403 
                                                      >> 0x17U))))
            ? vlTOPp->mk_mac__DOT___theResult___05F___05F_2_fst___05Fh19276
            : (((0U != (0x7fffffU & vlTOPp->mk_mac__DOT__rg_C_s5___05Fh403)) 
                | (0U != (0x7fffffU & vlTOPp->mk_mac__DOT__rg_mult_s5___05Fh402)))
                ? 0x4000000U : 0U));
    vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d915 
        = (0x7fffffU & ((IData)(1U) + (vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d913 
                                       >> 4U)));
    vlTOPp->mk_mac__DOT__CASE_grs38_0b11_IF_NOT_IF_IF_NOT_bfloat_rg_A_B_ETC___05Fq4 
        = (0x7fffffU & ((((3U == (IData)(vlTOPp->mk_mac__DOT__grs___05Fh438)) 
                          | (6U == (IData)(vlTOPp->mk_mac__DOT__grs___05Fh438))) 
                         | (7U == (IData)(vlTOPp->mk_mac__DOT__grs___05Fh438)))
                         ? vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d915
                         : (vlTOPp->mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d913 
                            >> 4U)));
    vlTOPp->mk_mac__DOT__bfloat_out_r_D_IN = (((IData)(vlTOPp->mk_mac__DOT__rg_sign_s9___05Fh435) 
                                               << 0x1fU) 
                                              | (((IData)(vlTOPp->mk_mac__DOT__rg_exponent_s9___05Fh433) 
                                                  << 0x17U) 
                                                 | vlTOPp->mk_mac__DOT__CASE_grs38_0b11_IF_NOT_IF_IF_NOT_bfloat_rg_A_B_ETC___05Fq4));
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    RST_N = VL_RAND_RESET_I(1);
    put_inp_A_a = VL_RAND_RESET_I(16);
    EN_put_inp_A = VL_RAND_RESET_I(1);
    RDY_put_inp_A = VL_RAND_RESET_I(1);
    put_inp_B_b = VL_RAND_RESET_I(16);
    EN_put_inp_B = VL_RAND_RESET_I(1);
    RDY_put_inp_B = VL_RAND_RESET_I(1);
    put_inp_C_c = VL_RAND_RESET_I(32);
    EN_put_inp_C = VL_RAND_RESET_I(1);
    RDY_put_inp_C = VL_RAND_RESET_I(1);
    put_inp_sel_sel = VL_RAND_RESET_I(1);
    EN_put_inp_sel = VL_RAND_RESET_I(1);
    RDY_put_inp_sel = VL_RAND_RESET_I(1);
    get_mac_op = VL_RAND_RESET_I(32);
    RDY_get_mac_op = VL_RAND_RESET_I(1);
    mk_mac__DOT__CLK = VL_RAND_RESET_I(1);
    mk_mac__DOT__RST_N = VL_RAND_RESET_I(1);
    mk_mac__DOT__put_inp_A_a = VL_RAND_RESET_I(16);
    mk_mac__DOT__EN_put_inp_A = VL_RAND_RESET_I(1);
    mk_mac__DOT__RDY_put_inp_A = VL_RAND_RESET_I(1);
    mk_mac__DOT__put_inp_B_b = VL_RAND_RESET_I(16);
    mk_mac__DOT__EN_put_inp_B = VL_RAND_RESET_I(1);
    mk_mac__DOT__RDY_put_inp_B = VL_RAND_RESET_I(1);
    mk_mac__DOT__put_inp_C_c = VL_RAND_RESET_I(32);
    mk_mac__DOT__EN_put_inp_C = VL_RAND_RESET_I(1);
    mk_mac__DOT__RDY_put_inp_C = VL_RAND_RESET_I(1);
    mk_mac__DOT__put_inp_sel_sel = VL_RAND_RESET_I(1);
    mk_mac__DOT__EN_put_inp_sel = VL_RAND_RESET_I(1);
    mk_mac__DOT__RDY_put_inp_sel = VL_RAND_RESET_I(1);
    mk_mac__DOT__get_mac_op = VL_RAND_RESET_I(32);
    mk_mac__DOT__RDY_get_mac_op = VL_RAND_RESET_I(1);
    mk_mac__DOT__bfloat_out_r = VL_RAND_RESET_I(32);
    mk_mac__DOT__bfloat_out_r_D_IN = VL_RAND_RESET_I(32);
    mk_mac__DOT__bfloat_out_r_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__bfloat_rg_A = VL_RAND_RESET_I(16);
    mk_mac__DOT__bfloat_rg_A_D_IN = VL_RAND_RESET_I(16);
    mk_mac__DOT__bfloat_rg_A_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__bfloat_rg_B = VL_RAND_RESET_I(16);
    mk_mac__DOT__bfloat_rg_B_D_IN = VL_RAND_RESET_I(16);
    mk_mac__DOT__bfloat_rg_B_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__bfloat_rg_C = VL_RAND_RESET_I(32);
    mk_mac__DOT__bfloat_rg_C_D_IN = VL_RAND_RESET_I(32);
    mk_mac__DOT__bfloat_rg_C_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__int_8_out = VL_RAND_RESET_I(32);
    mk_mac__DOT__int_8_out_D_IN = VL_RAND_RESET_I(32);
    mk_mac__DOT__int_8_out_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__int_8_rg_a = VL_RAND_RESET_I(8);
    mk_mac__DOT__int_8_rg_a_D_IN = VL_RAND_RESET_I(8);
    mk_mac__DOT__int_8_rg_a_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__int_8_rg_b = VL_RAND_RESET_I(8);
    mk_mac__DOT__int_8_rg_b_D_IN = VL_RAND_RESET_I(8);
    mk_mac__DOT__int_8_rg_b_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__int_8_rg_c = VL_RAND_RESET_I(32);
    mk_mac__DOT__int_8_rg_c_D_IN = VL_RAND_RESET_I(32);
    mk_mac__DOT__int_8_rg_c_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__rg_A = VL_RAND_RESET_I(16);
    mk_mac__DOT__rg_A_D_IN = VL_RAND_RESET_I(16);
    mk_mac__DOT__rg_A_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__rg_B = VL_RAND_RESET_I(16);
    mk_mac__DOT__rg_B_D_IN = VL_RAND_RESET_I(16);
    mk_mac__DOT__rg_B_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__rg_C = VL_RAND_RESET_I(32);
    mk_mac__DOT__rg_C_D_IN = VL_RAND_RESET_I(32);
    mk_mac__DOT__rg_C_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__rg_out = VL_RAND_RESET_I(32);
    mk_mac__DOT__rg_out_D_IN = VL_RAND_RESET_I(32);
    mk_mac__DOT__rg_out_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__rg_sel = VL_RAND_RESET_I(1);
    mk_mac__DOT__rg_sel_D_IN = VL_RAND_RESET_I(1);
    mk_mac__DOT__rg_sel_EN = VL_RAND_RESET_I(1);
    mk_mac__DOT__CAN_FIRE_RL_bfloat_mac = VL_RAND_RESET_I(1);
    mk_mac__DOT__CAN_FIRE_RL_inp = VL_RAND_RESET_I(1);
    mk_mac__DOT__CAN_FIRE_RL_int_8_r1 = VL_RAND_RESET_I(1);
    mk_mac__DOT__CAN_FIRE_RL_out = VL_RAND_RESET_I(1);
    mk_mac__DOT__CAN_FIRE_put_inp_A = VL_RAND_RESET_I(1);
    mk_mac__DOT__CAN_FIRE_put_inp_B = VL_RAND_RESET_I(1);
    mk_mac__DOT__CAN_FIRE_put_inp_C = VL_RAND_RESET_I(1);
    mk_mac__DOT__CAN_FIRE_put_inp_sel = VL_RAND_RESET_I(1);
    mk_mac__DOT__WILL_FIRE_RL_bfloat_mac = VL_RAND_RESET_I(1);
    mk_mac__DOT__WILL_FIRE_RL_inp = VL_RAND_RESET_I(1);
    mk_mac__DOT__WILL_FIRE_RL_int_8_r1 = VL_RAND_RESET_I(1);
    mk_mac__DOT__WILL_FIRE_RL_out = VL_RAND_RESET_I(1);
    mk_mac__DOT__WILL_FIRE_put_inp_A = VL_RAND_RESET_I(1);
    mk_mac__DOT__WILL_FIRE_put_inp_B = VL_RAND_RESET_I(1);
    mk_mac__DOT__WILL_FIRE_put_inp_C = VL_RAND_RESET_I(1);
    mk_mac__DOT__WILL_FIRE_put_inp_sel = VL_RAND_RESET_I(1);
    mk_mac__DOT__CASE_grs38_0b11_IF_NOT_IF_IF_NOT_bfloat_rg_A_B_ETC___05Fq4 = VL_RAND_RESET_I(23);
    mk_mac__DOT__IF_IF_1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_T_ETC___05F_d600 = VL_RAND_RESET_I(9);
    mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d668 = VL_RAND_RESET_I(32);
    mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d680 = VL_RAND_RESET_I(32);
    mk_mac__DOT___theResult___05F___05F_3_fst___05Fh19163 = VL_RAND_RESET_I(32);
    mk_mac__DOT___theResult___05F___05F_3_snd_fst___05Fh19165 = VL_RAND_RESET_I(32);
    mk_mac__DOT__mul_result___05Fh401 = VL_RAND_RESET_I(32);
    mk_mac__DOT__rg_C_s5___05Fh403 = VL_RAND_RESET_I(32);
    mk_mac__DOT__rg_C_s6___05Fh19168 = VL_RAND_RESET_I(32);
    mk_mac__DOT__rg_C_s6___05Fh19414 = VL_RAND_RESET_I(32);
    mk_mac__DOT__rg_mult_s5___05Fh402 = VL_RAND_RESET_I(32);
    mk_mac__DOT__rg_mult_s6___05Fh19167 = VL_RAND_RESET_I(32);
    mk_mac__DOT__rg_mult_s6___05Fh19413 = VL_RAND_RESET_I(32);
    mk_mac__DOT__IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_AND_NOT_b_ETC___05F_d637 = VL_RAND_RESET_I(31);
    mk_mac__DOT__IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_E_ETC___05F_d698 = VL_RAND_RESET_I(29);
    mk_mac__DOT__a_temp___05Fh19326 = VL_RAND_RESET_I(29);
    mk_mac__DOT__b_temp___05Fh19327 = VL_RAND_RESET_I(29);
    mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d913 = VL_RAND_RESET_I(27);
    mk_mac__DOT___theResult___05F___05F_2_fst___05Fh19276 = VL_RAND_RESET_I(27);
    mk_mac__DOT___theResult___05F___05F_2_fst___05Fh26135 = VL_RAND_RESET_I(27);
    mk_mac__DOT__mult_mant_s7___05Fh415 = VL_RAND_RESET_I(27);
    mk_mac__DOT__rg_mant_s9___05Fh19897 = VL_RAND_RESET_I(27);
    mk_mac__DOT__rg_mant_s9___05Fh26192 = VL_RAND_RESET_I(27);
    mk_mac__DOT__shiftedmantissa___05Fh417 = VL_RAND_RESET_I(27);
    mk_mac__DOT__c_mant_s7___05Fh416 = VL_RAND_RESET_I(26);
    mk_mac__DOT__mantissa_a___05Fh19896 = VL_RAND_RESET_I(26);
    mk_mac__DOT__IF_theResult___05F___05F_1000_EQ_255_THEN_0_ELSE_IF_IF_ETC___05Fq2 = VL_RAND_RESET_I(24);
    mk_mac__DOT__IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_ETC___05F_d915 = VL_RAND_RESET_I(23);
    mk_mac__DOT__mantissa_round___05Fh18831 = VL_RAND_RESET_I(9);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d150 = VL_RAND_RESET_I(8);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d20 = VL_RAND_RESET_I(8);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d39 = VL_RAND_RESET_I(8);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d56 = VL_RAND_RESET_I(8);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d63 = VL_RAND_RESET_I(8);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d73 = VL_RAND_RESET_I(8);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d90 = VL_RAND_RESET_I(8);
    mk_mac__DOT___theResult___05F___05F_1___05Fh1000 = VL_RAND_RESET_I(8);
    mk_mac__DOT___theResult___05F___05F_2_snd_fst___05Fh19278 = VL_RAND_RESET_I(8);
    mk_mac__DOT___theResult___05F___05F_2_snd_fst___05Fh26137 = VL_RAND_RESET_I(8);
    mk_mac__DOT___theResult___05F_snd_fst___05Fh950 = VL_RAND_RESET_I(8);
    mk_mac__DOT___theResult___05F_snd_fst___05Fh952 = VL_RAND_RESET_I(8);
    mk_mac__DOT__e___05Fh18882 = VL_RAND_RESET_I(8);
    mk_mac__DOT__exp___05F_1___05Fh18674 = VL_RAND_RESET_I(8);
    mk_mac__DOT__exp___05F_1___05Fh18877 = VL_RAND_RESET_I(8);
    mk_mac__DOT__exp___05Fh988 = VL_RAND_RESET_I(8);
    mk_mac__DOT__exp___05Fh990 = VL_RAND_RESET_I(8);
    mk_mac__DOT__exp_add_s1___05Fh897 = VL_RAND_RESET_I(8);
    mk_mac__DOT__exp_diff_s6___05Fh19161 = VL_RAND_RESET_I(8);
    mk_mac__DOT__exponent___05Fh19895 = VL_RAND_RESET_I(8);
    mk_mac__DOT__exponent___05Fh26143 = VL_RAND_RESET_I(8);
    mk_mac__DOT__mant_1___05Fh18675 = VL_RAND_RESET_I(8);
    mk_mac__DOT__mant_1___05Fh18701 = VL_RAND_RESET_I(8);
    mk_mac__DOT__mant_1___05Fh992 = VL_RAND_RESET_I(8);
    mk_mac__DOT__op2___05Fh26526 = VL_RAND_RESET_I(8);
    mk_mac__DOT__rg_exponent_s9___05Fh433 = VL_RAND_RESET_I(8);
    mk_mac__DOT__shift_count___05Fh414 = VL_RAND_RESET_I(8);
    mk_mac__DOT__x___05Fh18907 = VL_RAND_RESET_I(8);
    mk_mac__DOT__INV_x7387___05Fq3 = VL_RAND_RESET_I(7);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1001 = VL_RAND_RESET_I(7);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1012 = VL_RAND_RESET_I(7);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1088 = VL_RAND_RESET_I(7);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1091 = VL_RAND_RESET_I(7);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d928 = VL_RAND_RESET_I(7);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d956 = VL_RAND_RESET_I(7);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d990 = VL_RAND_RESET_I(7);
    mk_mac__DOT__x___05Fh18767 = VL_RAND_RESET_I(7);
    mk_mac__DOT__x___05Fh27387 = VL_RAND_RESET_I(7);
    mk_mac__DOT__y___05Fh27389 = VL_RAND_RESET_I(7);
    mk_mac__DOT__x___05Fh18791 = VL_RAND_RESET_I(6);
    mk_mac__DOT__IF_IF_IF_IF_IF_IF_NOT_IF_IF_NOT_bfloat_rg_A_BI_ETC___05F_d796 = VL_RAND_RESET_I(5);
    mk_mac__DOT__leftshift_count___05Fh19894 = VL_RAND_RESET_I(5);
    mk_mac__DOT__out___05Fh19964 = VL_RAND_RESET_I(5);
    mk_mac__DOT__spliced_bits___05Fh20007 = VL_RAND_RESET_I(5);
    mk_mac__DOT__IF_y5534_OR_y5532_THEN_1_ELSE_0___05Fq1 = VL_RAND_RESET_I(4);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1558 = VL_RAND_RESET_I(4);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1751 = VL_RAND_RESET_I(4);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d935 = VL_RAND_RESET_I(4);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d977 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d129 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d158 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d193 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d24 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d276 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d317 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d367 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d380 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d418 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d425 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d474 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d51 = VL_RAND_RESET_I(4);
    mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1432 = VL_RAND_RESET_I(4);
    mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1446 = VL_RAND_RESET_I(4);
    mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1466 = VL_RAND_RESET_I(4);
    mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1486 = VL_RAND_RESET_I(4);
    mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1517 = VL_RAND_RESET_I(4);
    mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1661 = VL_RAND_RESET_I(4);
    mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1679 = VL_RAND_RESET_I(4);
    mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1697 = VL_RAND_RESET_I(4);
    mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1715 = VL_RAND_RESET_I(4);
    mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1733 = VL_RAND_RESET_I(4);
    mk_mac__DOT__a___05Fh2100 = VL_RAND_RESET_I(4);
    mk_mac__DOT__b___05Fh10304 = VL_RAND_RESET_I(4);
    mk_mac__DOT__b___05Fh2101 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1048 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1114 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1127 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1138 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1183 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1224 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1280 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1296 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1334 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1341 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1390 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1599 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1622 = VL_RAND_RESET_I(4);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1769 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh10029 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh10311 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh2109 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh2661 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh26912 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh27268 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh27463 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh30563 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh30634 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh31626 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh32473 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh34393 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh36008 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh36079 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh38098 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh40880 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh41332 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh41784 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh42235 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh42627 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh43018 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh43408 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh5480 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh6428 = VL_RAND_RESET_I(4);
    mk_mac__DOT__p___05Fh7970 = VL_RAND_RESET_I(4);
    mk_mac__DOT__rg_a___05Fh27454 = VL_RAND_RESET_I(4);
    mk_mac__DOT__rg_a___05Fh35999 = VL_RAND_RESET_I(4);
    mk_mac__DOT__rg_a___05Fh40871 = VL_RAND_RESET_I(4);
    mk_mac__DOT__rg_a___05Fh42226 = VL_RAND_RESET_I(4);
    mk_mac__DOT__rg_a___05Fh42618 = VL_RAND_RESET_I(4);
    mk_mac__DOT__rg_a___05Fh43009 = VL_RAND_RESET_I(4);
    mk_mac__DOT__rg_a___05Fh43400 = VL_RAND_RESET_I(4);
    mk_mac__DOT__rg_b___05Fh36000 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh10231 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh1149 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh1177 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh1233 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh20125 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh20153 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh20181 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh20208 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh2023 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh2575 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh5348 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh5399 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh7889 = VL_RAND_RESET_I(4);
    mk_mac__DOT__spliced_bits___05Fh9949 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh26914 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh27270 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh27465 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh30565 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh30636 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh31628 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh32475 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh34395 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh36010 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh36081 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh38100 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh40882 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh41334 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh41786 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh42237 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh42629 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh43020 = VL_RAND_RESET_I(4);
    mk_mac__DOT__sum___05Fh43410 = VL_RAND_RESET_I(4);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d207 = VL_RAND_RESET_I(3);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d211 = VL_RAND_RESET_I(3);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d229 = VL_RAND_RESET_I(3);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d346 = VL_RAND_RESET_I(3);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d347 = VL_RAND_RESET_I(3);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d479 = VL_RAND_RESET_I(3);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d483 = VL_RAND_RESET_I(3);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d536 = VL_RAND_RESET_I(3);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d537 = VL_RAND_RESET_I(3);
    mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d230 = VL_RAND_RESET_I(3);
    mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d232 = VL_RAND_RESET_I(3);
    mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d572 = VL_RAND_RESET_I(3);
    mk_mac__DOT___1_CONCAT_0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6___05FETC___05F_d98 = VL_RAND_RESET_I(3);
    mk_mac__DOT__grs___05Fh438 = VL_RAND_RESET_I(3);
    mk_mac__DOT__grs_mul_round___05Fh998 = VL_RAND_RESET_I(3);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1072 = VL_RAND_RESET_I(3);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1074 = VL_RAND_RESET_I(3);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1239 = VL_RAND_RESET_I(3);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1241 = VL_RAND_RESET_I(3);
    mk_mac__DOT__spliced_bits_BITS_2_TO_0___05F_h18871 = VL_RAND_RESET_I(3);
    mk_mac__DOT__spliced_bits___05Fh20327 = VL_RAND_RESET_I(3);
    mk_mac__DOT__spliced_bits___05Fh20355 = VL_RAND_RESET_I(3);
    mk_mac__DOT__spliced_bits___05Fh20383 = VL_RAND_RESET_I(3);
    mk_mac__DOT__spliced_bits___05Fh20411 = VL_RAND_RESET_I(3);
    mk_mac__DOT__spliced_bits___05Fh20439 = VL_RAND_RESET_I(3);
    mk_mac__DOT__spliced_bits___05Fh20467 = VL_RAND_RESET_I(3);
    mk_mac__DOT__spliced_bits___05Fh20494 = VL_RAND_RESET_I(3);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1555 = VL_RAND_RESET_I(2);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d271 = VL_RAND_RESET_I(2);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d502 = VL_RAND_RESET_I(2);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d505 = VL_RAND_RESET_I(2);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d593 = VL_RAND_RESET_I(2);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d76 = VL_RAND_RESET_I(2);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d80 = VL_RAND_RESET_I(2);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1394 = VL_RAND_RESET_I(2);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1398 = VL_RAND_RESET_I(2);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1586 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh20709 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh20778 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh20847 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh20916 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh20985 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh21054 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh21123 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh21192 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh21261 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh21330 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh21399 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh21468 = VL_RAND_RESET_I(2);
    mk_mac__DOT__spliced_bits___05Fh21537 = VL_RAND_RESET_I(2);
    mk_mac__DOT__IF_NOT_bfloat_rg_A_BITS_14_TO_7_EQ_0_AND_NOT_b_ETC___05F_d641 = VL_RAND_RESET_I(1);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1026 = VL_RAND_RESET_I(1);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1034 = VL_RAND_RESET_I(1);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1195 = VL_RAND_RESET_I(1);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1198 = VL_RAND_RESET_I(1);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1228 = VL_RAND_RESET_I(1);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1234 = VL_RAND_RESET_I(1);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1262 = VL_RAND_RESET_I(1);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1268 = VL_RAND_RESET_I(1);
    mk_mac__DOT__INV_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_B_ETC___05F_d1418 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_IF_NOT_IF_IF_NOT_bfloat_rg_A_BITS_1_ETC___05F_d687 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d153 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d174 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d244 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d264 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d267 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d297 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d334 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d350 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d356 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d377 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d448 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d454 = VL_RAND_RESET_I(1);
    mk_mac__DOT___0b1_CONCAT_bfloat_rg_A_BITS_6_TO_0_6_7_AND_SEX_ETC___05F_d60 = VL_RAND_RESET_I(1);
    mk_mac__DOT___1_CONCAT_int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_ETC___05F_d1650 = VL_RAND_RESET_I(1);
    mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_fst___05Fh19268 = VL_RAND_RESET_I(1);
    mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_fst___05Fh26141 = VL_RAND_RESET_I(1);
    mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_fst___05Fh26248 = VL_RAND_RESET_I(1);
    mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_fst___05Fh26275 = VL_RAND_RESET_I(1);
    mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_snd_fst___05Fh26320 = VL_RAND_RESET_I(1);
    mk_mac__DOT___theResult___05F___05F_2_snd_snd_snd_snd_snd_fst___05Fh26368 = VL_RAND_RESET_I(1);
    mk_mac__DOT__a___05Fh13779 = VL_RAND_RESET_I(1);
    mk_mac__DOT__a___05Fh13969 = VL_RAND_RESET_I(1);
    mk_mac__DOT__a___05Fh14159 = VL_RAND_RESET_I(1);
    mk_mac__DOT__a___05Fh1731 = VL_RAND_RESET_I(1);
    mk_mac__DOT__a___05Fh28575 = VL_RAND_RESET_I(1);
    mk_mac__DOT__a___05Fh30452 = VL_RAND_RESET_I(1);
    mk_mac__DOT__a___05Fh34104 = VL_RAND_RESET_I(1);
    mk_mac__DOT__a___05Fh34302 = VL_RAND_RESET_I(1);
    mk_mac__DOT__a___05Fh35949 = VL_RAND_RESET_I(1);
    mk_mac__DOT__b___05Fh13590 = VL_RAND_RESET_I(1);
    mk_mac__DOT__b___05Fh34303 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh13781 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh13971 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh16828 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh17776 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh28577 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh30317 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh30454 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh35814 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh40873 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh41325 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh41777 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh42228 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh42620 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cin___05Fh43011 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cout___05Fh27464 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cout___05Fh30635 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cout___05Fh31627 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cout___05Fh32474 = VL_RAND_RESET_I(1);
    mk_mac__DOT__cout___05Fh36080 = VL_RAND_RESET_I(1);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1287 = VL_RAND_RESET_I(1);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1293 = VL_RAND_RESET_I(1);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1364 = VL_RAND_RESET_I(1);
    mk_mac__DOT__int_8_rg_a_18_BITS_6_TO_0_26_AND_SEXT_int_8_rg_ETC___05F_d1367 = VL_RAND_RESET_I(1);
    mk_mac__DOT__int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_BIT_7_21___05F_d922 = VL_RAND_RESET_I(1);
    mk_mac__DOT__int_8_rg_a_18_BIT_7_19_AND_int_8_rg_b_20_BIT_7_ETC___05F_d1420 = VL_RAND_RESET_I(1);
    mk_mac__DOT__mul_guard_bit___05Fh18676 = VL_RAND_RESET_I(1);
    mk_mac__DOT__mul_round_bit___05Fh18677 = VL_RAND_RESET_I(1);
    mk_mac__DOT__mul_sticky_bit___05Fh18678 = VL_RAND_RESET_I(1);
    mk_mac__DOT__mul_sticky_bit___05Fh18704 = VL_RAND_RESET_I(1);
    mk_mac__DOT__rg_sign_s9___05Fh435 = VL_RAND_RESET_I(1);
    mk_mac__DOT__sign_s1___05Fh896 = VL_RAND_RESET_I(1);
    mk_mac__DOT__spliced_bits_BIT_3___05F_h18658 = VL_RAND_RESET_I(1);
    mk_mac__DOT__sticky_bit_s9___05Fh19900 = VL_RAND_RESET_I(1);
    mk_mac__DOT__sticky_bit_s9___05Fh26147 = VL_RAND_RESET_I(1);
    mk_mac__DOT__sticky_bit_s9___05Fh26195 = VL_RAND_RESET_I(1);
    mk_mac__DOT__sum_BIT_0___05F_h31474 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh10465 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh10532 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh10852 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh10854 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh10921 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh10985 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh11353 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh11355 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh11379 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh11419 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh11726 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh11728 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh11730 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh11752 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh11792 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh11853 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh12676 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh12678 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh12745 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh12809 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh12911 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh12978 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13090 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13092 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13094 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13096 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13119 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13161 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13225 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13311 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13631 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13725 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13821 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh13915 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh14011 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh14105 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh14201 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh14295 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh15144 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh15211 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh15600 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh15664 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16013 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16015 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16082 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16146 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16294 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16361 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16473 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16475 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16477 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16479 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16502 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16544 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16608 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16694 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16958 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16960 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16962 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh16985 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17027 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17091 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17242 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17309 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17421 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17423 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17425 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17427 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17450 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17492 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17556 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17642 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17910 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17912 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh17977 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh18038 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh18187 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh18251 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh26382 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh27478 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh27480 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh27482 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh27537 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh27690 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh27754 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh27840 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh27958 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28113 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28115 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28182 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28246 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28321 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28388 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28617 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28662 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28664 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28666 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28668 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28722 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28843 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh28964 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh29085 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh29261 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh29303 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh29364 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh29594 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh29596 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh29660 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh29793 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30003 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30339 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30341 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30343 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30345 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3035 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3037 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30494 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30578 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30580 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30582 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30584 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30649 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30651 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30653 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30758 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30822 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh30908 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3104 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh31079 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh31081 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh31148 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh31212 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh31287 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh31354 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh31507 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh31643 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh31645 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3168 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh31794 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh31855 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh32087 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh32151 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh32488 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh32490 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh32492 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh32597 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh32661 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh32747 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh32918 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh32920 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh32987 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33051 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33126 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3315 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33193 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33296 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33338 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33399 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33481 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33648 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33650 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33714 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33775 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3382 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33847 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh33911 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh34017 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh34146 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh34215 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh34344 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh34410 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh34412 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh34561 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh34622 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh34854 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh34918 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3494 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3496 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3498 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh35240 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh35428 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh35497 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh35523 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh35565 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh35626 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3565 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh35708 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh35836 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh35838 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh35840 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh35842 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36023 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36025 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36027 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36094 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36096 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36098 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36203 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36267 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3629 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36353 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36524 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36526 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36593 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36657 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36732 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36799 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh36984 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37048 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37134 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh3715 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37305 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37307 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37374 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37438 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37513 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37580 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37802 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37844 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37905 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh37987 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh38265 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh38326 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh38622 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh38980 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh38982 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh39046 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh39107 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh39179 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh39243 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh39406 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh39408 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh39472 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh39533 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh39605 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh39669 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh40031 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh40095 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh40895 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh40897 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh40899 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41066 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41130 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41216 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41347 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41349 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41351 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41518 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41582 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41668 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41799 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41801 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41803 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh41970 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42034 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42120 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42250 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42252 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42254 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42362 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42426 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42512 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42642 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42644 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42646 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42753 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42817 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4284 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4286 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4288 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh42903 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43033 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43035 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43037 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4312 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43144 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43208 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43294 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43425 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43427 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4352 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43534 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43598 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43838 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh43905 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4413 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44276 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44278 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44345 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44409 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44484 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44551 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44716 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44718 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44785 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44849 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44924 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh44991 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4512 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45156 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45158 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45225 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45289 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45364 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45431 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45596 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45598 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45665 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45729 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4576 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45804 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh45871 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46036 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46038 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46105 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46169 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46244 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46311 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46476 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46478 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46545 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46609 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46684 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46751 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4686 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4688 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4690 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46916 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46918 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4692 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh46985 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh47049 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh47124 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh47191 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4754 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4815 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh4897 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh5603 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh5605 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh5672 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh5736 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh5838 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh5905 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6017 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6019 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6021 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6088 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6152 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6238 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6596 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6598 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6665 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6729 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6831 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh6898 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh7010 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh7012 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh7014 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh7081 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh7145 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh7231 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh7576 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh7578 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh7645 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh7709 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8093 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8095 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8162 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8226 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8328 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8395 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8507 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8509 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8511 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8578 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8642 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh8728 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh9015 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh9082 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh9194 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh9196 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh9198 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh9265 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh9329 = VL_RAND_RESET_I(1);
    mk_mac__DOT__x___05Fh9415 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh10466 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh10468 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh10674 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh10853 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh10855 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh10857 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh11354 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh11356 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh11380 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh11422 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh11555 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh11727 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh11729 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh11731 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh12677 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh12679 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh12681 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh12912 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh12914 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh13032 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh13091 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh13093 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh13095 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh13097 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh13536 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh13726 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh13916 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh14106 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh14296 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh15145 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh15353 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh15532 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh15534 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16014 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16016 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16018 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16295 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16297 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16415 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16474 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16476 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16478 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16480 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16959 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16961 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16963 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh16986 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17028 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17030 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17093 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17243 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17245 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17363 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17422 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17424 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17426 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17428 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17911 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17913 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh17915 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh18188 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh18190 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh18303 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh27479 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh27481 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh27483 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh27485 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh28114 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh28116 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh28118 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh28322 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh28324 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh28442 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh28663 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh28665 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh28667 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh28669 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh29262 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh29304 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh29306 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh29365 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh29367 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh29448 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh29595 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh29597 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh29599 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh29794 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh29796 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30004 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30340 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30342 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30344 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30346 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh3036 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh3038 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh3040 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30579 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30581 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30583 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30585 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30650 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30652 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30654 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh30656 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh31080 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh31082 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh31084 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh31288 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh31290 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh31408 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh31644 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh31646 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh31648 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh31856 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh32088 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh32090 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh32287 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh32489 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh32491 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh32493 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh32495 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh32919 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh32921 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh32923 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33127 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33129 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh3316 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh3318 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33247 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33297 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33339 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33341 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33400 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33402 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33483 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33649 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33651 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33653 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33848 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33850 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh33963 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh34018 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh34216 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh3436 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh34411 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh34413 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh34415 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh34623 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh34855 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh34857 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh3495 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh3497 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh3499 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh3501 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35054 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35241 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35498 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35524 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35566 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35568 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35627 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35629 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35710 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35837 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35839 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35841 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh35843 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36024 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36026 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36028 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36030 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36095 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36097 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36099 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36101 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36525 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36527 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36529 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36733 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36735 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh36853 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh37306 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh37308 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh37310 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh37514 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh37516 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh37634 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh37803 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh37847 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh38327 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh38559 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh38758 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh38981 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh38983 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh38985 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39180 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39182 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39295 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39407 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39409 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39411 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39606 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39608 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39721 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39859 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39899 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39901 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh39961 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh40032 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh40034 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh40147 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh40896 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh40898 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh40900 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh40902 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh41348 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh41350 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh41352 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh41354 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh41800 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh41802 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh41804 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh41806 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh42251 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh42253 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh42255 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh42257 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh42643 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh42645 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh42647 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh42649 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh4285 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh4287 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh4289 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh43034 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh43036 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh43038 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh43040 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh43426 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh43428 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh43430 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh43839 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh43841 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44047 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44277 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44279 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44281 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44485 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44487 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44605 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44717 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44719 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44721 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44925 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh44927 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45045 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh4513 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh4515 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45157 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45159 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45161 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45365 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45367 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45485 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45597 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45599 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45601 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45805 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45807 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh45925 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46037 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46039 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46041 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46245 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46247 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh4628 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46365 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46477 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46479 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46481 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46685 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46687 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46805 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh4687 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh4689 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh4691 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46917 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46919 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh46921 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh4693 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh47125 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh47127 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh47245 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh5604 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh5606 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh5608 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh5839 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh5841 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh5959 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh6018 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh6020 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh6022 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh6024 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh6597 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh6599 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh6601 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh6832 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh6834 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh6952 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh7011 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh7013 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh7015 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh7017 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh7577 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh7579 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh7581 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh8094 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh8096 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh8098 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh8329 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh8331 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh8449 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh8508 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh8510 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh8512 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh8514 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh9016 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh9018 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh9136 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh9195 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh9197 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh9199 = VL_RAND_RESET_I(1);
    mk_mac__DOT__y___05Fh9201 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
