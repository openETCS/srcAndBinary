/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_118_RadioTrainTrackPacket011__.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AIRTIGHT */
M_AIRTIGHT _118_RadioTrainTrackPacket011__(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AIRTIGHT::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packe *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AIRTIGHT::out_M_AIRTIGHT */
  static M_AIRTIGHT out_M_AIRTIGHT;
  
  out_M_AIRTIGHT = (*inRadioTrainTrackPacket).m_airtight;
  return out_M_AIRTIGHT;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _118_RadioTrainTrackPacket011__.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

