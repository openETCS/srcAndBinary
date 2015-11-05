/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dataForLevelTransition_xdebugSu.h"

/* xdebugSupport_Pkg::dataForLevelTransition */
void dataForLevelTransition_xdebugSu(
  /* xdebugSupport_Pkg::dataForLevelTransition::actualMessage */ ReceivedMessage_T_Common_Types_ *actualMessage,
  /* xdebugSupport_Pkg::dataForLevelTransition::storedData */ dataCollectionForLevelTransitio *storedData,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* xdebugSupport_Pkg::dataForLevelTransition::positionNeeded */ kcg_bool positionNeeded,
  /* xdebugSupport_Pkg::dataForLevelTransition::actualLevel */ M_LEVEL actualLevel,
  /* xdebugSupport_Pkg::dataForLevelTransition::outstoredData */ dataCollectionForLevelTransitio *outstoredData,
  /* xdebugSupport_Pkg::dataForLevelTransition::outPositionNeeded */ kcg_bool *outPositionNeeded)
{
  /* xdebugSupport_Pkg::dataForLevelTransition */
  static kcg_bool tmp1;
  /* xdebugSupport_Pkg::dataForLevelTransition */
  static P27_InternationalStaticSpeedPro tmp;
  /* xdebugSupport_Pkg::dataForLevelTransition::ntcRequested */
  static kcg_bool ntcRequested;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L3 */
  static kcg_bool _L3;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L4 */
  static P015_OBU_T_TM _L4;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L18 */
  static P41_LevelTransistionOrders_T_Pa _L18;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L21 */
  static P021_OBU_T_TM _L21;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L20 */
  static kcg_bool _L20;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L71 */
  static kcg_bool _L71;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L116 */
  static NID_LRBG _L116;
  
  tmp1 = /* 1 */
    packetValid_xdebugSupport_Pkg(
      &(*actualMessage).packets.PacketHeaders,
      cp041_Level_Transition_Order_Id);
  _L71 = positionNeeded | tmp1;
  /* 1 */ Read_P015_TM(&(*actualMessage).packets, &_L3, &_L4);
  /* 1 */ Read_P041_Legacy_TM_specific(&(*actualMessage).packets, &_L18);
  /* 1 */ Read_P021_TM(&(*actualMessage).packets, &_L20, &_L21);
  kcg_copy_dataCollectionForLevel(outstoredData, storedData);
  /* 2 */ if (tmp1) {
    _L116 = /* 1 */ getLRBGFromMsg_xdebugSupport_Pk(actualMessage);
    ntcRequested = /* 2 */ checkNTCPriority_xdebugSupport_(&_L18);
    kcg_copy_P41_LevelTransistionOr(&(*outstoredData).p41, &_L18);
  }
  else {
    _L116 = (*storedData).LRBG;
    ntcRequested = kcg_false;
    /* 4 */ if (actualLevel == M_LEVEL_Level_0) {
      kcg_copy_P41_LevelTransistionOr(
        &(*outstoredData).p41,
        (P41_LevelTransistionOrders_T_Pa *) &cNoP41_xdebugSupport_Pkg);
    }
    else {
      kcg_copy_P41_LevelTransistionOr(
        &(*outstoredData).p41,
        &(*storedData).p41);
    }
  }
  tmp1 = /* 2 */
    packetValid_xdebugSupport_Pkg(
      &(*actualMessage).packets.PacketHeaders,
      cp046_Conditional_Level_Transit);
  /* 3 */ if (tmp1) {
    /* 1 */
    Read_P046_Legacy_TM_specific(
      &(*actualMessage).packets,
      &(*outstoredData).p46);
  }
  else {
    kcg_copy__7_P46_ConditionalLeve(&(*outstoredData).p46, &(*storedData).p46);
  }
  (*outstoredData).p15_received = _L3 | (*storedData).p15_received |
    ntcRequested;
  (*outstoredData).p21_received = _L20 | (*storedData).p21_received;
  /* 1 */ Read_P027V1_Legacy_for_ML_TM_sp(&(*actualMessage).packets, &tmp);
  (*outstoredData).p27_received = tmp.valid | (*storedData).p27_received |
    ntcRequested;
  (*outstoredData).LRBG = _L116;
  /* ck__L71 */ if (_L71) {
    /* 1 */
    locationOfReferenceLRBG_xdebugS(
      _L116,
      trainPosition,
      &(*outstoredData).referenceLocation,
      &tmp1);
    *outPositionNeeded = !tmp1;
  }
  else {
    (*outstoredData).referenceLocation = (*storedData).referenceLocation;
    *outPositionNeeded = !positionNeeded;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dataForLevelTransition_xdebugSu.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

