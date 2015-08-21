/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectRadioMessages_radioOutput_Pkg.h"

/* radioOutput_Pkg::collectRadioMessages */
void collectRadioMessages_radioOutput_Pkg(
  /* radioOutput_Pkg::collectRadioMessages::inFromPositionReport */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromPositionReport,
  /* radioOutput_Pkg::collectRadioMessages::inFromRadioSM */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromRadioSM,
  /* radioOutput_Pkg::collectRadioMessages::inFromTrainData */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromTrainData,
  /* radioOutput_Pkg::collectRadioMessages::cmdsToMobile */mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::collectRadioMessages::inFromMA */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromMA,
  /* radioOutput_Pkg::collectRadioMessages::inModeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* radioOutput_Pkg::collectRadioMessages::insafeSessionEstablished */kcg_bool insafeSessionEstablished,
  /* radioOutput_Pkg::collectRadioMessages::outRadioToAPI */API_EuroRadioOutput_T_API_RadioCommunication_Pkg *outRadioToAPI)
{
  static kcg_int tmp4;
  static kcg_int tmp3;
  static kcg_int tmp2;
  static kcg_int tmp1;
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg tmp;
  /* radioOutput_Pkg::collectRadioMessages::sendPRep */
  static kcg_bool sendPRep;
  /* radioOutput_Pkg::collectRadioMessages::sendMA */
  static kcg_bool sendMA;
  /* radioOutput_Pkg::collectRadioMessages::msgCount */
  static kcg_int msgCount;
  /* radioOutput_Pkg::collectRadioMessages::_L8 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L8;
  /* radioOutput_Pkg::collectRadioMessages::_L90 */
  static kcg_bool _L90;
  
  _L90 = (*inFromRadioSM).present & (*inFromTrainData).present;
  sendMA = (*inFromMA).present & insafeSessionEstablished & ((M_LEVEL_Level_3 ==
        (*inModeAndLevel).level) | ((*inModeAndLevel).level ==
        M_LEVEL_Level_2));
  sendPRep = insafeSessionEstablished & (*inFromPositionReport).present;
  if ((*inFromRadioSM).present) {
    tmp2 = 1;
  }
  else {
    tmp2 = 0;
  }
  if ((*inFromTrainData).present) {
    tmp1 = 1;
  }
  else {
    tmp1 = 0;
  }
  if (sendPRep) {
    tmp3 = 1;
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &_L8,
      inFromPositionReport);
  }
  else {
    tmp3 = 0;
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &_L8,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
        &cInitOutputToRadioAPI_API_RadioCommunication_Pkg);
  }
  if (sendMA) {
    tmp4 = 1;
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&tmp, inFromMA);
  }
  else {
    tmp4 = 0;
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&tmp, &_L8);
  }
  msgCount = tmp4 + tmp3 + tmp2 + tmp1;
  if ((*inFromRadioSM).present) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).firstOutput,
      inFromRadioSM);
  }
  else if ((*inFromTrainData).present) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).firstOutput,
      inFromTrainData);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).firstOutput,
      &tmp);
  }
  if (msgCount <= 1) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).secondOutput,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
        &cInitOutputToRadioAPI_API_RadioCommunication_Pkg);
  }
  else if (_L90) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).secondOutput,
      inFromTrainData);
  }
  else if ((*inFromRadioSM).present | (*inFromTrainData).present) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).secondOutput,
      &tmp);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).secondOutput,
      &_L8);
  }
  if (msgCount <= 2) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).thirdOutput,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
        &cInitOutputToRadioAPI_API_RadioCommunication_Pkg);
  }
  else if (_L90 & sendMA) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).thirdOutput,
      inFromMA);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).thirdOutput,
      &_L8);
  }
  /* 1 */
  mapToRTM_radioOutput_Pkg(cmdsToMobile, &(*outRadioToAPI).radioEVCtoUnit);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** collectRadioMessages_radioOutput_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

