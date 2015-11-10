/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_115_RadioTrainTrackPacket011__.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_CDTRAIN */
NC_CDTRAIN _115_RadioTrainTrackPacket011__(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_CDTRAIN::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packe *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_CDTRAIN::out_NC_CDTRAIN */
  static NC_CDTRAIN out_NC_CDTRAIN;
  
  out_NC_CDTRAIN = (*inRadioTrainTrackPacket).nc_cdtrain;
  return out_NC_CDTRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _115_RadioTrainTrackPacket011__.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

