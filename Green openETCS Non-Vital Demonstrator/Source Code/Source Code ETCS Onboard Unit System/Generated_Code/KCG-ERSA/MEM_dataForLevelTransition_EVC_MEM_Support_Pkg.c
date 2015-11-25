/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_dataForLevelTransition_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */
void MEM_dataForLevelTransition_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::storedData */ dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *storedData,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::positionNeeded */ kcg_bool positionNeeded,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::actualLevel */ M_LEVEL actualLevel,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::outstoredData */ dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *outstoredData,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::outPositionNeeded */ kcg_bool *outPositionNeeded)
{
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */ kcg_bool tmp1;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */ P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg tmp;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::ntcRequested */ kcg_bool ntcRequested;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L3 */ kcg_bool _L3;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L4 */ P015_OBU_T_TM _L4;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L18 */ P41_LevelTransistionOrders_T_Packet_Types_Pkg _L18;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L21 */ P021_OBU_T_TM _L21;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L20 */ kcg_bool _L20;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L71 */ kcg_bool _L71;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L116 */ NID_LRBG _L116;
  
  tmp1 = /* 2 */
    packetValid_xdebugSupport_Pkg(
      &(*actualMessage).packets.PacketHeaders,
      cp041_Level_Transition_Order_Id_Pkg);
  _L71 = positionNeeded | tmp1;
  /* 1 */ Read_P015_TM(&(*actualMessage).packets, &_L3, &_L4);
  /* 1 */ Read_P041_Legacy_TM_specific(&(*actualMessage).packets, &_L18);
  /* 1 */ Read_P021_TM(&(*actualMessage).packets, &_L20, &_L21);
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    outstoredData,
    storedData);
  /* 2 */ if (tmp1) {
    _L116 = /* 1 */ getLRBGFromMsg_xdebugSupport_Pkg(actualMessage);
    ntcRequested = /* 1 */ checkNTCPriority_xdebugSupport_Pkg(&_L18);
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &(*outstoredData).p41,
      &_L18);
  }
  else {
    _L116 = (*storedData).LRBG;
    ntcRequested = kcg_false;
    /* 3 */ if (actualLevel == M_LEVEL_Level_0) {
      kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
        &(*outstoredData).p41,
        (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
          &cNoP41_EVC_MEM_Support_Pkg);
    }
    else {
      kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
        &(*outstoredData).p41,
        &(*storedData).p41);
    }
  }
  tmp1 = /* 1 */
    packetValid_xdebugSupport_Pkg(
      &(*actualMessage).packets.PacketHeaders,
      cp046_Conditional_Level_Transition_Order_Id_Pkg);
  /* 1 */ if (tmp1) {
    /* 1 */
    Read_P046_Legacy_TM_specific(
      &(*actualMessage).packets,
      &(*outstoredData).p46);
  }
  else {
    kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &(*outstoredData).p46,
      &(*storedData).p46);
  }
  (*outstoredData).p15_received = _L3 | (*storedData).p15_received |
    ntcRequested;
  (*outstoredData).p21_received = _L20 | (*storedData).p21_received;
  /* 1 */
  Read_P027V1_Legacy_for_ML_TM_specific(&(*actualMessage).packets, &tmp);
  (*outstoredData).p27_received = tmp.valid | (*storedData).p27_received |
    ntcRequested;
  (*outstoredData).LRBG = _L116;
  /* ck__L71 */ if (_L71) {
    /* 1 */
    MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg(
      _L116,
      trainPosition,
      trainProperties,
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
** MEM_dataForLevelTransition_EVC_MEM_Support_Pkg.c
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

