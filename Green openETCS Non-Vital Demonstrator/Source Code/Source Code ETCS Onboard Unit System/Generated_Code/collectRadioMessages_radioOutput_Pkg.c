/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
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
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg tmp1;
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg tmp;
  /* radioOutput_Pkg::collectRadioMessages::_L8 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L8;
  /* radioOutput_Pkg::collectRadioMessages::_L43 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L43;
  
  if (insafeSessionEstablished & (*inFromPositionReport).present) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &_L8,
      inFromPositionReport);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &_L8,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
        &cInitOutputToRadioAPI_API_RadioCommunication_Pkg);
  }
  if ((*inFromMA).present & insafeSessionEstablished & ((M_LEVEL_Level_3 ==
        (*inModeAndLevel).level) | ((*inModeAndLevel).level ==
        M_LEVEL_Level_2))) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&_L43, inFromMA);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&_L43, &_L8);
  }
  if ((*inFromTrainData).present) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&tmp, inFromTrainData);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&tmp, &_L43);
  }
  if ((*inFromRadioSM).present) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).firstOutput,
      inFromRadioSM);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&tmp1, &tmp);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).firstOutput,
      &tmp);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&tmp1, &_L43);
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &(*outRadioToAPI).secondOutput,
    &tmp1);
  if ((*inFromRadioSM).present & (*inFromTrainData).present) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).thirdOutput,
      &_L43);
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
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

