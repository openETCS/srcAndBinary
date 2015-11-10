/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_148_RadioTrainTrackHeader__Get.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE */
NID_MESSAGE _148_RadioTrainTrackHeader__Get(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE::in_RadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio *in_RadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE::out_NID_MESSAGE */
  static NID_MESSAGE out_NID_MESSAGE;
  
  out_NID_MESSAGE = (*in_RadioTrainTrackHeader).nid_message;
  return out_NID_MESSAGE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _148_RadioTrainTrackHeader__Get.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

