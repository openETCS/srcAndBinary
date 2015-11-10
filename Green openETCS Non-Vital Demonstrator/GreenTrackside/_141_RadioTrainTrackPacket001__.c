/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_141_RadioTrainTrackPacket001__.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_V_TRAIN */
V_TRAIN _141_RadioTrainTrackPacket001__(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_V_TRAIN::inRadioTrainTrackPacket */ PT1_PositionReport_2BG_T_Packet *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_V_TRAIN::out_V_TRAIN */
  static V_TRAIN out_V_TRAIN;
  
  out_V_TRAIN = (*inRadioTrainTrackPacket).packet1.V_TRAIN;
  return out_V_TRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _141_RadioTrainTrackPacket001__.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

