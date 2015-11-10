/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_116_RadioTrainTrackPacket011__.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_V_MAXTRAIN */
V_MAXTRAIN _116_RadioTrainTrackPacket011__(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_V_MAXTRAIN::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packe *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_V_MAXTRAIN::out_V_MAXTRAIN */
  static V_MAXTRAIN out_V_MAXTRAIN;
  
  out_V_MAXTRAIN = (*inRadioTrainTrackPacket).v_maxtrain;
  return out_V_MAXTRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _116_RadioTrainTrackPacket011__.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

