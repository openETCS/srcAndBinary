/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_e_h_k_ProvidePosit.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_e_h_k_init_Provide(outC_op_3_6_5_1_4_e_h_k_Provide *outC)
{
  outC->trigger = kcg_true;
  outC->init = kcg_true;
  outC->rem_trackInfo.minSafeRearEndPassed = kcg_true;
  outC->rem_trackInfo.maxSafeFrontEndPassed = kcg_true;
  outC->rem_rbcComm.newSessionEstablished = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_e_h_k_reset_Provid(outC_op_3_6_5_1_4_e_h_k_Provide *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k */
void op_3_6_5_1_4_e_h_k_ProvidePosit(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::trackInfo */ LocationBasedEvents_T_ProvidePo *trackInfo,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::rbcComm */ RBC_Communication_T_ProvidePosi *rbcComm,
  outC_op_3_6_5_1_4_e_h_k_Provide *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k */
  static kcg_bool tmp;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L22 */
  static LocationBasedEvents_T_ProvidePo _L22;
  
  /* last_init_ck_rbcComm */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_LocationBasedEvents_T_(
      &_L22,
      (LocationBasedEvents_T_ProvidePo *) &cLocationBasedEvents_T_ProvideP);
    tmp = cRBC_Communication_T_ProvidePos.newSessionEstablished;
  }
  else {
    kcg_copy_LocationBasedEvents_T_(&_L22, &outC->rem_trackInfo);
    tmp = outC->rem_rbcComm.newSessionEstablished;
  }
  outC->trigger = ((tmp != (*rbcComm).newSessionEstablished) &
      (*rbcComm).newSessionEstablished) | ((*trackInfo).minSafeRearEndPassed &
      ((*trackInfo).minSafeRearEndPassed != _L22.minSafeRearEndPassed)) |
    (((*trackInfo).maxSafeFrontEndPassed != _L22.maxSafeFrontEndPassed) &
      _L22.maxSafeFrontEndPassed);
  kcg_copy_LocationBasedEvents_T_(&outC->rem_trackInfo, trackInfo);
  kcg_copy_RBC_Communication_T_Pr(&outC->rem_rbcComm, rbcComm);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_e_h_k_ProvidePosit.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

