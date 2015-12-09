/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
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
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::nationalValues */ P003_OBU_T_TM *nationalValues,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::outstoredData */ dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *outstoredData,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::outPositionNeeded */ kcg_bool *outPositionNeeded)
{
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */ M_LEVEL tmp2;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */ kcg_bool tmp1;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */ P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg tmp;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::ntcRequested */ kcg_bool ntcRequested;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::p80Valid */ kcg_bool p80Valid;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::isMsg3 */ kcg_bool isMsg3;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::levelStored */ M_LEVEL levelStored;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L3 */ kcg_bool _L3;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L4 */ P015_OBU_T_TM _L4;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L18 */ P41_LevelTransistionOrders_T_Packet_Types_Pkg _L18;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L21 */ P021_OBU_T_TM _L21;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L20 */ kcg_bool _L20;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L71 */ kcg_bool _L71;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L116 */ NID_LRBG _L116;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L130 */ P080_OBU_T_TM _L130;
  
  isMsg3 = /* 2 */
    packetValid_xdebugSupport_Pkg(
      &(*actualMessage).packets.PacketHeaders,
      cp041_Level_Transition_Order_Id_Pkg);
  /* 1 */ Read_P041_Legacy_TM_specific(&(*actualMessage).packets, &_L18);
  /* ck_p41Valid */ if (isMsg3) {
    levelStored = /* 1 */ getP41Level_xdebugSupport_Pkg(&(*storedData).p41);
    tmp2 = /* 2 */ getP41Level_xdebugSupport_Pkg(&_L18);
    ntcRequested = /* 1 */ checkNTCPriority_xdebugSupport_Pkg(&_L18);
  }
  else {
    levelStored = M_LEVEL_Level_0;
    tmp2 = M_LEVEL_Level_0;
    ntcRequested = kcg_false;
  }
  tmp1 = isMsg3 & (tmp2 != levelStored);
  isMsg3 = cm03_Movement_Authority_Id_Pkg ==
    (*actualMessage).Radio_Common_Header.nid_message;
  _L71 = positionNeeded | tmp1 | isMsg3;
  _L3 = isMsg3 | tmp1;
  /* ck__L169 */ if (_L3) {
    _L116 = /* 1 */ getLRBGFromMsg_xdebugSupport_Pkg(actualMessage);
  }
  else {
    _L116 = (*storedData).LRBG;
  }
  /* 1 */ Read_P015_TM(&(*actualMessage).packets, &_L3, &_L4);
  /* 1 */ Read_P021_TM(&(*actualMessage).packets, &_L20, &_L21);
  /* 1 */ Read_P080_TM(&(*actualMessage).packets, &p80Valid, &_L130);
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    outstoredData,
    storedData);
  /* 2 */ if (tmp1) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &(*outstoredData).p41,
      &_L18);
  }
  else /* 3 */ if (actualLevel == levelStored) {
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
  /* 4 */ if (p80Valid) {
    /* 1 */
    MEM_convertP80_EVC_MEM_Support_Pkg(
      &_L130,
      nationalValues,
      &(*outstoredData).p80);
  }
  else /* 5 */ if (isMsg3) {
    kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
      &(*outstoredData).p80,
      (P80_ModeProfiles_T_Packet_Types_Pkg *)
        &Default_P80_legacy_EVC_MEM_Support_Pkg);
  }
  else {
    kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
      &(*outstoredData).p80,
      &(*storedData).p80);
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
      &isMsg3);
    *outPositionNeeded = !isMsg3;
  }
  else {
    (*outstoredData).referenceLocation = (*storedData).referenceLocation;
    *outPositionNeeded = positionNeeded;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_dataForLevelTransition_EVC_MEM_Support_Pkg.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

