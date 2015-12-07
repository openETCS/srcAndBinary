/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_dataForLevelTransition_EVC_.h"

/* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */
void MEM_dataForLevelTransition_EVC_(
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::actualMessage */ ReceivedMessage_T_Common_Types_ *actualMessage,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::storedData */ dataCollectionForLevelTransitio *storedData,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::positionNeeded */ kcg_bool positionNeeded,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::actualLevel */ M_LEVEL actualLevel,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::nationalValues */ P003_OBU_T_TM *nationalValues,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::outstoredData */ dataCollectionForLevelTransitio *outstoredData,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::outPositionNeeded */ kcg_bool *outPositionNeeded)
{
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */
  static kcg_bool tmp1;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */
  static P27_InternationalStaticSpeedPro tmp;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */
  static kcg_bool op_call;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::ntcRequested */
  static kcg_bool ntcRequested;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::p80Valid */
  static kcg_bool p80Valid;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L3 */
  static kcg_bool _L3;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L4 */
  static P015_OBU_T_TM _L4;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L18 */
  static P41_LevelTransistionOrders_T_Pa _L18;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L21 */
  static P021_OBU_T_TM _L21;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L20 */
  static kcg_bool _L20;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L71 */
  static kcg_bool _L71;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L116 */
  static NID_LRBG _L116;
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::_L130 */
  static P080_OBU_T_TM _L130;
  
  tmp1 = /* 2 */
    packetValid_xdebugSupport_Pkg(
      &(*actualMessage).packets.PacketHeaders,
      cp041_Level_Transition_Order_Id);
  /* 1 */ Read_P080_TM(&(*actualMessage).packets, &p80Valid, &_L130);
  op_call = cm03_Movement_Authority_Id_Pkg ==
    (*actualMessage).Radio_Common_Header.nid_message;
  _L71 = positionNeeded | tmp1 | p80Valid | op_call;
  /* ck_p41Valid */ if (tmp1) {
    _L116 = /* 1 */ getLRBGFromMsg_xdebugSupport_Pk(actualMessage);
  }
  else {
    _L116 = (*storedData).LRBG;
  }
  /* 1 */ Read_P015_TM(&(*actualMessage).packets, &_L3, &_L4);
  /* 1 */ Read_P041_Legacy_TM_specific(&(*actualMessage).packets, &_L18);
  /* 1 */ Read_P021_TM(&(*actualMessage).packets, &_L20, &_L21);
  kcg_copy_dataCollectionForLevel(outstoredData, storedData);
  /* 2 */ if (tmp1) {
    ntcRequested = /* 1 */ checkNTCPriority_xdebugSupport_(&_L18);
    kcg_copy_P41_LevelTransistionOr(&(*outstoredData).p41, &_L18);
  }
  else {
    ntcRequested = kcg_false;
    /* 3 */ if (actualLevel == M_LEVEL_Level_0) {
      kcg_copy_P41_LevelTransistionOr(
        &(*outstoredData).p41,
        (P41_LevelTransistionOrders_T_Pa *) &cNoP41_EVC_MEM_Support_Pkg);
    }
    else {
      kcg_copy_P41_LevelTransistionOr(
        &(*outstoredData).p41,
        &(*storedData).p41);
    }
  }
  /* 4 */ if (p80Valid) {
    /* 1 */
    MEM_convertP80_EVC_MEM_Support_(
      &_L130,
      nationalValues,
      &(*outstoredData).p80);
  }
  else /* 5 */ if (op_call) {
    kcg_copy_P80_ModeProfiles_T_Pac(
      &(*outstoredData).p80,
      (P80_ModeProfiles_T_Packet_Types *) &Default_P80_legacy_EVC_MEM_Supp);
  }
  else {
    kcg_copy_P80_ModeProfiles_T_Pac(&(*outstoredData).p80, &(*storedData).p80);
  }
  tmp1 = /* 1 */
    packetValid_xdebugSupport_Pkg(
      &(*actualMessage).packets.PacketHeaders,
      cp046_Conditional_Level_Transit);
  /* 1 */ if (tmp1) {
    /* 1 */
    Read_P046_Legacy_TM_specific(
      &(*actualMessage).packets,
      &(*outstoredData).p46);
  }
  else {
    kcg_copy_P46_ConditionalLevelTr(&(*outstoredData).p46, &(*storedData).p46);
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
    MEM_locationOfReferenceLRBG_EVC(
      _L116,
      trainPosition,
      trainProperties,
      &(*outstoredData).referenceLocation,
      &op_call);
    *outPositionNeeded = !op_call;
  }
  else {
    (*outstoredData).referenceLocation = (*storedData).referenceLocation;
    *outPositionNeeded = !positionNeeded;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_dataForLevelTransition_EVC_.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

