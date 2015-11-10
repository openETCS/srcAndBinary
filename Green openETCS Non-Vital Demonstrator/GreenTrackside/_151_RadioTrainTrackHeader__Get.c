/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_151_RadioTrainTrackHeader__Get.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref */
T_TRAIN _151_RadioTrainTrackHeader__Get(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref::inRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio *inRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref::out_T_TRAIN_Ref */
  static T_TRAIN out_T_TRAIN_Ref;
  
  out_T_TRAIN_Ref = (*inRadioTrainTrackHeader).xT_TRAIN;
  return out_T_TRAIN_Ref;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _151_RadioTrainTrackHeader__Get.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

