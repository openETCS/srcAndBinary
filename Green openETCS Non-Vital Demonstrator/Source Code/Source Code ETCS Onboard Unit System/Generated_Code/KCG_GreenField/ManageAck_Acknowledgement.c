/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageAck_Acknowledgement.h"

#ifndef KCG_USER_DEFINED_INIT
void ManageAck_init_Acknowledgement(outC_ManageAck_Acknowledgement *outC)
{
  outC->needsAckFromDriver = kcg_true;
  outC->service_brake = kcg_true;
  /* 1 */ RequestAck_init_Acknowledgement(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManageAck_reset_Acknowledgement(outC_ManageAck_Acknowledgement *outC)
{
  /* 1 */ RequestAck_reset_Acknowledgemen(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Acknowledgement::ManageAck */
void ManageAck_Acknowledgement(
  /* Acknowledgement::ManageAck::selected_level_transition */ T_LevelTransition_Level_And_Mod *selected_level_transition,
  /* Acknowledgement::ManageAck::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* Acknowledgement::ManageAck::last_level */ M_LEVEL last_level,
  /* Acknowledgement::ManageAck::levelAck */ kcg_bool levelAck,
  /* Acknowledgement::ManageAck::IsNewLevel */ kcg_bool IsNewLevel,
  outC_ManageAck_Acknowledgement *outC)
{
  /* 1 */
  RequestAck_Acknowledgement(
    /* 1 */ IsAckNeeded_Acknowledgement(selected_level_transition, last_level),
    selected_level_transition,
    trainPosition,
    levelAck,
    IsNewLevel,
    &outC->Context_1);
  outC->needsAckFromDriver = outC->Context_1.needsAckFromDriver;
  outC->service_brake = outC->Context_1.service_brake;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ManageAck_Acknowledgement.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

