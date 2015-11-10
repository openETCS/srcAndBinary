/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_117_RadioTrainTrackPacket011__.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE */
M_LOADINGGAUGE _117_RadioTrainTrackPacket011__(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packe *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE::out_M_LOADINGGAUGE */
  static M_LOADINGGAUGE out_M_LOADINGGAUGE;
  
  out_M_LOADINGGAUGE = (*inRadioTrainTrackPacket).m_loadinggoage;
  return out_M_LOADINGGAUGE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _117_RadioTrainTrackPacket011__.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

