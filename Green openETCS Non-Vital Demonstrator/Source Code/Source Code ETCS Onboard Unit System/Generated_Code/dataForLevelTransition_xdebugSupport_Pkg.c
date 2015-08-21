/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dataForLevelTransition_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::dataForLevelTransition */
void dataForLevelTransition_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::dataForLevelTransition::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::dataForLevelTransition::storedData */T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg *storedData,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::dataForLevelTransition::positionNeeded */kcg_bool positionNeeded,
  /* xdebugSupport_Pkg::dataForLevelTransition::forLevelManagement */T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg *forLevelManagement,
  /* xdebugSupport_Pkg::dataForLevelTransition::outPositionNeeded */kcg_bool *outPositionNeeded)
{
  static P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg tmp;
  static kcg_bool tmp1;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L4 */
  static P015_OBU_T_TM _L4;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L11 */
  static P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg _L11;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L18 */
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg _L18;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L21 */
  static P021_OBU_T_TM _L21;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L20 */
  static kcg_bool _L20;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L56 */
  static NID_LRBG _L56;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L71 */
  static kcg_bool _L71;
  
  /* 1 */ Read_P015_TM(&(*actualMessage).packets, &tmp1, &_L4);
  /* 1 */ Read_P046_Legacy_TM_specific(&(*actualMessage).packets, &_L11);
  /* 1 */ Read_P041_Legacy_TM_specific(&(*actualMessage).packets, &_L18);
  /* 1 */ Read_P021_TM(&(*actualMessage).packets, &_L20, &_L21);
  if (((*actualMessage).source == msrc_Euroradio_Common_Types_Pkg) &
    _L18[0].valid) {
    _L56 = (*actualMessage).Radio_Common_Header.nid_lrbg;
  }
  else {
    _L56 = (*storedData).LRBG;
  }
  _L71 = positionNeeded | _L18[0].valid;
  kcg_copy_T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg(
    forLevelManagement,
    storedData);
  if (_L18[0].valid) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &(*forLevelManagement).P41,
      &_L18);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &(*forLevelManagement).P41,
      &(*storedData).P41);
  }
  if (_L11[0].valid) {
    kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &(*forLevelManagement).P46,
      &_L11);
  }
  else {
    kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &(*forLevelManagement).P46,
      &(*storedData).P46);
  }
  (*forLevelManagement).P15_received = tmp1 | (*storedData).P15_received;
  (*forLevelManagement).P21_received = _L20 | (*storedData).P21_received;
  /* 1 */
  Read_P027V1_Legacy_for_ML_TM_specific(&(*actualMessage).packets, &tmp);
  (*forLevelManagement).P27_received = tmp.valid | (*storedData).P27_received;
  (*forLevelManagement).LRBG = _L56;
  if (_L71) {
    /* 1 */
    locationOfReferenceLRBG_xdebugSupport_Pkg(
      _L56,
      trainPosition,
      &(*forLevelManagement).referenceLocation,
      &tmp1);
    *outPositionNeeded = !tmp1;
  }
  else {
    (*forLevelManagement).referenceLocation = (*storedData).referenceLocation;
    *outPositionNeeded = !positionNeeded;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** dataForLevelTransition_xdebugSupport_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

