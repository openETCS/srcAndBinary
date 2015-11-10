/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_100_RadioTrackTrainHeader__Get.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE */
NID_MESSAGE _100_RadioTrackTrainHeader__Get(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE::inRadioTrackTrainHeader */ _6_Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE::out_NID_MESSAGE */
  static NID_MESSAGE out_NID_MESSAGE;
  
  out_NID_MESSAGE = (*inRadioTrackTrainHeader).nid_message;
  return out_NID_MESSAGE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _100_RadioTrackTrainHeader__Get.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

