/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void changeoverSwitch_init_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->handingOverMobile_is_mobile_1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_state_nxt = SSM_st_mobile_1_SM1;
  /* 1 */ FallingEdge_init_digital(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void changeoverSwitch_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ FallingEdge_reset_digital(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch */
void changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::handoverInprogress */ kcg_bool handoverInprogress,
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */ _1_SSM_ST_SM1 SM1_state_sel;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */ _1_SSM_ST_SM1 SM1_state_act;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::toogle */ kcg_bool toogle;
  
  /* init_SM1 */ if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_mobile_1_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* 1 */ FallingEdge_digital(handoverInprogress, &outC->Context_1);
  toogle = (sessionManagementAbility ==
      isAbleToManageTwoSessions_Handover_Pkg) & outC->Context_1.FE_Output;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_mobile_1_SM1 :
      if (toogle) {
        SM1_state_act = SSM_st_mobile_2_SM1;
      }
      else {
        SM1_state_act = SSM_st_mobile_1_SM1;
      }
      break;
    case SSM_st_mobile_2_SM1 :
      if (toogle) {
        SM1_state_act = SSM_st_mobile_1_SM1;
      }
      else {
        SM1_state_act = SSM_st_mobile_2_SM1;
      }
      break;
    
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_mobile_1_SM1 :
      outC->handingOverMobile_is_mobile_1 = kcg_true;
      outC->SM1_state_nxt = SSM_st_mobile_1_SM1;
      break;
    case SSM_st_mobile_2_SM1 :
      outC->handingOverMobile_is_mobile_1 = kcg_false;
      outC->SM1_state_nxt = SSM_st_mobile_2_SM1;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */
