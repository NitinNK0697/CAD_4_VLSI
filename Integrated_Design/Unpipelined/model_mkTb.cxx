/*
 * Generated by Bluespec Compiler, version 2024.07 (build b4f31dbe)
 * 
 * On Thu Oct 24 14:25:20 IST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkTb.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkTb::MODEL_mkTb()
{
  mkTb_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkTb()
{
  MODEL_mkTb *model = new MODEL_mkTb();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkTb &INST_top = *((MOD_mkTb *)(instance_ptr));
	 INST_top.DEF_CAN_FIRE_RL_mac_top_bfloat_mac = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_mac_top_bfloat_mac = INST_top.DEF_CAN_FIRE_RL_mac_top_bfloat_mac;
	 INST_top.DEF_CAN_FIRE_RL_mac_top_inp = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_mac_top_inp = INST_top.DEF_CAN_FIRE_RL_mac_top_inp;
	 INST_top.DEF_CAN_FIRE_RL_mac_top_int_8_r1 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_mac_top_int_8_r1 = INST_top.DEF_CAN_FIRE_RL_mac_top_int_8_r1;
	 INST_top.DEF_CAN_FIRE_RL_mac_top_out = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_mac_top_out = INST_top.DEF_CAN_FIRE_RL_mac_top_out;
	 INST_top.DEF_CAN_FIRE_RL_r1 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_r1 = INST_top.DEF_CAN_FIRE_RL_r1;
	 INST_top.DEF_CAN_FIRE_RL_r3 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_r3 = INST_top.DEF_CAN_FIRE_RL_r3;
	 INST_top.DEF_CAN_FIRE_RL_r2 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_r2 = INST_top.DEF_CAN_FIRE_RL_r2;
	 if (INST_top.DEF_WILL_FIRE_RL_r2)
	   INST_top.RL_r2();
	 if (INST_top.DEF_WILL_FIRE_RL_mac_top_out)
	   INST_top.RL_mac_top_out();
	 if (INST_top.DEF_WILL_FIRE_RL_mac_top_bfloat_mac)
	   INST_top.RL_mac_top_bfloat_mac();
	 if (INST_top.DEF_WILL_FIRE_RL_mac_top_int_8_r1)
	   INST_top.RL_mac_top_int_8_r1();
	 if (INST_top.DEF_WILL_FIRE_RL_mac_top_inp)
	   INST_top.RL_mac_top_inp();
	 if (INST_top.DEF_WILL_FIRE_RL_r3)
	   INST_top.RL_r3();
	 if (INST_top.DEF_WILL_FIRE_RL_r1)
	   INST_top.RL_r1();
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_rg_A.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rg_B.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rg_C.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rg_sel.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_count.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_rg_A.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_rg_B.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_rg_C.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_rg_sel.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_rg_out.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_bfloat_rg_A.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_bfloat_rg_B.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_bfloat_rg_C.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_bfloat_out_r.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_int_8_rg_a.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_int_8_rg_b.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_int_8_rg_c.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mac_top_int_8_out.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkTb::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkTb_instance = new MOD_mkTb(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mkTb_instance->set_clk_0)("CLK");
}
void MODEL_mkTb::destroy_model()
{
  delete mkTb_instance;
  mkTb_instance = NULL;
}
void MODEL_mkTb::reset_model(bool asserted)
{
  (mkTb_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkTb::get_instance()
{
  return mkTb_instance;
}

/* Fill in version numbers */
void MODEL_mkTb::get_version(char const **name, char const **build)
{
  *name = "2024.07";
  *build = "b4f31dbe";
}

/* Get the model creation time */
time_t MODEL_mkTb::get_creation_time()
{
  
  /* Thu Oct 24 08:55:20 UTC 2024 */
  return 1729760120llu;
}

/* State dumping function */
void MODEL_mkTb::dump_state()
{
  (mkTb_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkTb & mkTb_backing(tSimStateHdl simHdl)
{
  static MOD_mkTb *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkTb(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkTb::dump_VCD_defs()
{
  (mkTb_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkTb::dump_VCD(tVCDDumpType dt)
{
  (mkTb_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkTb_backing(sim_hdl));
}
