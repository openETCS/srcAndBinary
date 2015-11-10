/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_137_RadioTrainTrackPacket001__.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_M_LEVEL */
M_LEVEL _137_RadioTrainTrackPacket001__(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_M_LEVEL::inRadioTrainTrackPacket */ PT1_PositionReport_2BG_T_Packet *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_M_LEVEL::out_M_LEVEL */
  static M_LEVEL out_M_LEVEL;
  
  out_M_LEVEL = (*inRadioTrainTrackPacket).packet1.level;
  return out_M_LEVEL;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _137_RadioTrainTrackPacket001__.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

