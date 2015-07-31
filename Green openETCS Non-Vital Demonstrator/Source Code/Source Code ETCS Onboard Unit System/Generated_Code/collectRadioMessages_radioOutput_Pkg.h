/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _collectRadioMessages_radioOutput_Pkg_H_
#define _collectRadioMessages_radioOutput_Pkg_H_

#include "kcg_types.h"
#include "mapToRTM_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */


/* radioOutput_Pkg::collectRadioMessages */
extern void collectRadioMessages_radioOutput_Pkg(
  /* radioOutput_Pkg::collectRadioMessages::inFromPositionReport */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromPositionReport,
  /* radioOutput_Pkg::collectRadioMessages::inFromRadioSM */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromRadioSM,
  /* radioOutput_Pkg::collectRadioMessages::inFromTrainData */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromTrainData,
  /* radioOutput_Pkg::collectRadioMessages::cmdsToMobile */mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::collectRadioMessages::inFromMA */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromMA,
  /* radioOutput_Pkg::collectRadioMessages::inModeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* radioOutput_Pkg::collectRadioMessages::insafeSessionEstablished */kcg_bool insafeSessionEstablished,
  /* radioOutput_Pkg::collectRadioMessages::outRadioToAPI */API_EuroRadioOutput_T_API_RadioCommunication_Pkg *outRadioToAPI);

#endif /* _collectRadioMessages_radioOutput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** collectRadioMessages_radioOutput_Pkg.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

