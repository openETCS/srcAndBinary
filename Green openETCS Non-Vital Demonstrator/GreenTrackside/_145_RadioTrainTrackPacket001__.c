/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_145_RadioTrainTrackPacket001__.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_DOUBTUNDER */
L_DOUBTUNDER _145_RadioTrainTrackPacket001__(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_DOUBTUNDER::inRadioTrainTrackPacket */ PT1_PositionReport_2BG_T_Packet *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_DOUBTUNDER::out_L_DOUBTUNDER */
  static L_DOUBTUNDER out_L_DOUBTUNDER;
  
  out_L_DOUBTUNDER = (*inRadioTrainTrackPacket).packet1.L_DOUBTUNDER;
  return out_L_DOUBTUNDER;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _145_RadioTrainTrackPacket001__.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

