/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_120_RadioTrainTrackPacket000__.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_MODE */
M_MODE _120_RadioTrainTrackPacket000__(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_MODE::inRadioTrainTrackPacket */ PT0_PositionReport_T_Packet_Tra *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_MODE::out_M_MODE */
  static M_MODE out_M_MODE;
  
  out_M_MODE = (*inRadioTrainTrackPacket).packet0.mode;
  return out_M_MODE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _120_RadioTrainTrackPacket000__.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

