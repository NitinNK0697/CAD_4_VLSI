/*
 * Generated by Bluespec Compiler, version 2024.07 (build b4f31dbe)
 * 
 * On Thu Oct 24 14:25:20 IST 2024
 * 
 */

/* Generation options: keep-fires */
#ifndef __mkTb_h__
#define __mkTb_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkTb module */
class MOD_mkTb : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_Reg<tUInt32> INST_count;
  MOD_Reg<tUInt32> INST_mac_top_bfloat_out_r;
  MOD_Reg<tUInt32> INST_mac_top_bfloat_rg_A;
  MOD_Reg<tUInt32> INST_mac_top_bfloat_rg_B;
  MOD_Reg<tUInt32> INST_mac_top_bfloat_rg_C;
  MOD_Reg<tUInt32> INST_mac_top_int_8_out;
  MOD_Reg<tUInt8> INST_mac_top_int_8_rg_a;
  MOD_Reg<tUInt8> INST_mac_top_int_8_rg_b;
  MOD_Reg<tUInt32> INST_mac_top_int_8_rg_c;
  MOD_Reg<tUInt32> INST_mac_top_rg_A;
  MOD_Reg<tUInt32> INST_mac_top_rg_B;
  MOD_Reg<tUInt32> INST_mac_top_rg_C;
  MOD_Reg<tUInt32> INST_mac_top_rg_out;
  MOD_Reg<tUInt8> INST_mac_top_rg_sel;
  MOD_Reg<tUInt32> INST_rg_A;
  MOD_Reg<tUInt32> INST_rg_B;
  MOD_Reg<tUInt32> INST_rg_C;
  MOD_Reg<tUInt8> INST_rg_sel;
 
 /* Constructor */
 public:
  MOD_mkTb(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_RL_r3;
  tUInt8 DEF_CAN_FIRE_RL_r3;
  tUInt8 DEF_WILL_FIRE_RL_r2;
  tUInt8 DEF_CAN_FIRE_RL_r2;
  tUInt8 DEF_WILL_FIRE_RL_r1;
  tUInt8 DEF_CAN_FIRE_RL_r1;
  tUInt8 DEF_WILL_FIRE_RL_mac_top_out;
  tUInt8 DEF_CAN_FIRE_RL_mac_top_out;
  tUInt8 DEF_WILL_FIRE_RL_mac_top_inp;
  tUInt8 DEF_CAN_FIRE_RL_mac_top_inp;
  tUInt8 DEF_WILL_FIRE_RL_mac_top_int_8_r1;
  tUInt8 DEF_CAN_FIRE_RL_mac_top_int_8_r1;
  tUInt8 DEF_WILL_FIRE_RL_mac_top_bfloat_mac;
  tUInt8 DEF_CAN_FIRE_RL_mac_top_bfloat_mac;
 
 /* Local definitions */
 private:
  tUInt8 DEF_mac_top_rg_sel__h47582;
  tUInt32 DEF_b__h47758;
  tUInt32 DEF_c__h47696;
  tUInt32 DEF_b__h47663;
  tUInt32 DEF_a__h47632;
 
 /* Rules */
 public:
  void RL_mac_top_bfloat_mac();
  void RL_mac_top_int_8_r1();
  void RL_mac_top_inp();
  void RL_mac_top_out();
  void RL_r1();
  void RL_r2();
  void RL_r3();
 
 /* Methods */
 public:
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTb &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkTb &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkTb &backing);
};

#endif /* ifndef __mkTb_h__ */
