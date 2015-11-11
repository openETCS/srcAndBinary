/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SoM_NTC_SN_SoMProcedure_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void SoM_NTC_SN_init_SoMProcedure_Pk(outC_SoM_NTC_SN_SoMProcedure_Pk *outC)
{
  outC->start_ack_to_TIU = kcg_true;
  outC->init = kcg_true;
  outC->Level_NTC_and_Mode_SN_state_nxt = SSM_st_State1_Level_NTC_and_Mod;
}
#endif /* KCG_USER_DEFINED_INIT */


void SoM_NTC_SN_reset_SoMProcedure_P(outC_SoM_NTC_SN_SoMProcedure_Pk *outC)
{
  outC->init = kcg_true;
}

/* SoMProcedure_Pkg::SoM_NTC_SN */
void SoM_NTC_SN_SoMProcedure_Pkg(
  /* SoMProcedure_Pkg::SoM_NTC_SN::Status_Mode_Change_from_Level_and_Mode_Management */ T_Mode_Level_Level_And_Mode_Typ *Status_Mode_Change_from_Level_a,
  outC_SoM_NTC_SN_SoMProcedure_Pk *outC)
{
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_state_sel;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_state_act;
  
  /* init_Level_NTC_and_Mode_SN */ if (outC->init) {
    outC->init = kcg_false;
    Level_NTC_and_Mode_SN_state_sel = SSM_st_State1_Level_NTC_and_Mod;
  }
  else {
    Level_NTC_and_Mode_SN_state_sel = outC->Level_NTC_and_Mode_SN_state_nxt;
  }
  /* sel_Level_NTC_and_Mode_SN */ switch (Level_NTC_and_Mode_SN_state_sel) {
    case SSM_st_State1_Level_NTC_and_Mod :
      Level_NTC_and_Mode_SN_state_act = SSM_st_Waiting_for_Ack_of_propo;
      break;
    case SSM_st_Waiting_for_Ack_of_propo :
      if ((*Status_Mode_Change_from_Level_a).Mode == M_MODE_National_System) {
        Level_NTC_and_Mode_SN_state_act = SSM_st_Level_NTC_andMode_SN_Lev;
      }
      else {
        Level_NTC_and_Mode_SN_state_act = SSM_st_Waiting_for_Ack_of_propo;
      }
      break;
    case SSM_st_Level_NTC_andMode_SN_Lev :
      Level_NTC_and_Mode_SN_state_act = SSM_st_Level_NTC_andMode_SN_Lev;
      break;
    
  }
  /* act_Level_NTC_and_Mode_SN */ switch (Level_NTC_and_Mode_SN_state_act) {
    case SSM_st_State1_Level_NTC_and_Mod :
      outC->start_ack_to_TIU = kcg_false;
      outC->Level_NTC_and_Mode_SN_state_nxt = SSM_st_State1_Level_NTC_and_Mod;
      break;
    case SSM_st_Waiting_for_Ack_of_propo :
      outC->start_ack_to_TIU = kcg_false;
      outC->Level_NTC_and_Mode_SN_state_nxt = SSM_st_Waiting_for_Ack_of_propo;
      break;
    case SSM_st_Level_NTC_andMode_SN_Lev :
      outC->start_ack_to_TIU = kcg_true;
      outC->Level_NTC_and_Mode_SN_state_nxt = SSM_st_Level_NTC_andMode_SN_Lev;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SoM_NTC_SN_SoMProcedure_Pkg.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

