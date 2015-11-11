/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "radioStatusRouter_Handover_Pkg_.h"

/* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter */
void radioStatusRouter_Handover_Pkg_(
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatus_1 */ morcStatus_T_RCM_Session_Types_ *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatus_2 */ morcStatus_T_RCM_Session_Types_ *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::handingOverMobile_is_mobile_1 */ kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatusFromAcceptingRBC */ morcStatus_T_RCM_Session_Types_ *morcStatusFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatusFromHandingOverRBC */ morcStatus_T_RCM_Session_Types_ *morcStatusFromHandingOverRBC)
{
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility == isAbleToManageOneSession_Handov;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_morcStatus_T_RCM_Sessi(morcStatusFromAcceptingRBC, morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Sessi(morcStatusFromHandingOverRBC, morcStatus_1);
  }
  else /* 21 */ if (handingOverMobile_is_mobile_1) {
    kcg_copy_morcStatus_T_RCM_Sessi(morcStatusFromAcceptingRBC, morcStatus_2);
    kcg_copy_morcStatus_T_RCM_Sessi(morcStatusFromHandingOverRBC, morcStatus_1);
  }
  else {
    kcg_copy_morcStatus_T_RCM_Sessi(morcStatusFromAcceptingRBC, morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Sessi(morcStatusFromHandingOverRBC, morcStatus_2);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** radioStatusRouter_Handover_Pkg_.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

