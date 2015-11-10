/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket001__Get_N.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_NID_PRVLRBG */
NID_PRVLRBG RadioTrainTrackPacket001__Get_N(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_NID_PRVLRBG::inRadioTrainTrackPacket */ PT1_PositionReport_2BG_T_Packet *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_NID_PRVLRBG::out_NID_PRVLRBG */
  static NID_PRVLRBG out_NID_PRVLRBG;
  
  out_NID_PRVLRBG = (*inRadioTrainTrackPacket).packet1.NID_PRVLRBG;
  return out_NID_PRVLRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket001__Get_N.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

