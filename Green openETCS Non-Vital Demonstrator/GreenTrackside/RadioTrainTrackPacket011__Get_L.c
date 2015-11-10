/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__Get_L.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN */
L_TRAIN RadioTrainTrackPacket011__Get_L(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packe *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN::out_L_TRAIN */
  static L_TRAIN out_L_TRAIN;
  
  out_L_TRAIN = (*inRadioTrainTrackPacket).l_train;
  return out_L_TRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket011__Get_L.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

