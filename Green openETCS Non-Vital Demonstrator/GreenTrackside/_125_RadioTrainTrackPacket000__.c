/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_125_RadioTrainTrackPacket000__.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTUNDER */
L_DOUBTUNDER _125_RadioTrainTrackPacket000__(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTUNDER::inRadioTrainTrackPacket */ PT0_PositionReport_T_Packet_Tra *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTUNDER::out_L_DOUBTUNDER */
  static L_DOUBTUNDER out_L_DOUBTUNDER;
  
  out_L_DOUBTUNDER = (*inRadioTrainTrackPacket).packet0.L_DOUBTUNDER;
  return out_L_DOUBTUNDER;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _125_RadioTrainTrackPacket000__.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

