/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_127_RadioTrainTrackPacket000__.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DLRBG */
Q_DLRBG _127_RadioTrainTrackPacket000__(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DLRBG::inRadioTrainTrackPacket */ PT0_PositionReport_T_Packet_Tra *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DLRBG::out_Q_DLRBG */
  static Q_DLRBG out_Q_DLRBG;
  
  out_Q_DLRBG = (*inRadioTrainTrackPacket).packet0.dlrbg;
  return out_Q_DLRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _127_RadioTrainTrackPacket000__.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

