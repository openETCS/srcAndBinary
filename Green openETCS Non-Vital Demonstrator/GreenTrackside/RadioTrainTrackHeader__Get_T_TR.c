/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackHeader__Get_T_TR.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN */
T_TRAIN RadioTrainTrackHeader__Get_T_TR(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN::inRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio *inRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN::out_T_TRAIN */
  static T_TRAIN out_T_TRAIN;
  
  out_T_TRAIN = (*inRadioTrainTrackHeader).t_train;
  return out_T_TRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackHeader__Get_T_TR.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

