/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket003__Count.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers */
kcg_int RadioTrainTrackPacket003__Count(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers::inRadioTrainTrackPacket */ PT3_OnboardTelephoneNumbers_T_P *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers::outCount */
  static kcg_int outCount;
  
  outCount = (*inRadioTrainTrackPacket).number;
  return outCount;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket003__Count.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

