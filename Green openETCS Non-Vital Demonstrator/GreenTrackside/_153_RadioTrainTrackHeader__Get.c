/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_153_RadioTrainTrackHeader__Get.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_ENGINE */
NID_ENGINE _153_RadioTrainTrackHeader__Get(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_ENGINE::in_RadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio *in_RadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_ENGINE::out_NID_ENGINE */
  static NID_ENGINE out_NID_ENGINE;
  
  out_NID_ENGINE = (*in_RadioTrainTrackHeader).nid_engine;
  return out_NID_ENGINE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _153_RadioTrainTrackHeader__Get.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

