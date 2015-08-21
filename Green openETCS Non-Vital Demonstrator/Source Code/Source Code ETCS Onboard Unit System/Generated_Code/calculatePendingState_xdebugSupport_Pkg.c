/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculatePendingState_xdebugSupport_Pkg.h"

void calculatePendingState_reset_xdebugSupport_Pkg(
  outC_calculatePendingState_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* xdebugSupport_Pkg::calculatePendingState */
void calculatePendingState_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::calculatePendingState::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::calculatePendingState::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_calculatePendingState_xdebugSupport_Pkg *outC)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  /* xdebugSupport_Pkg::calculatePendingState::IfBlock1::then::_L3 */
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg _L3_IfBlock1;
  /* xdebugSupport_Pkg::calculatePendingState::p41Store */
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg last_p41Store;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &last_p41Store,
      (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
        &cNoP41_xdebugSupport_Pkg);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &last_p41Store,
      &outC->p41Store);
  }
  if ((*actualMessage).valid) {
    /* 1 */
    Read_P041_Legacy_TM_specific(&(*actualMessage).packets, &_L3_IfBlock1);
    if (_L3_IfBlock1[0].valid) {
      kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
        &outC->p41Store,
        &_L3_IfBlock1);
    }
    else {
      kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
        &outC->p41Store,
        &last_p41Store);
    }
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->p41Store,
      &last_p41Store);
  }
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
    &outC->outFilterEvents,
    inFilterEvents);
  if (outC->p41Store[0].valid) {
    tmp1 = outC->p41Store[0].m_leveltr == M_LEVELTR_Level_2;
    tmp = outC->p41Store[0].m_leveltr == M_LEVELTR_Level_3;
  }
  else {
    tmp = kcg_false;
    tmp1 = kcg_false;
  }
  outC->outFilterEvents.pendingL12L3Transition = tmp1 | tmp;
  if (outC->p41Store[0].valid) {
    outC->outFilterEvents.pendingL1Transition = outC->p41Store[0].m_leveltr ==
      M_LEVELTR_Level_1;
  }
  else {
    outC->outFilterEvents.pendingL1Transition = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculatePendingState_xdebugSupport_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

