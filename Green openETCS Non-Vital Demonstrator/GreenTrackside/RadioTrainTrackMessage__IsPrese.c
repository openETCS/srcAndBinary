/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessage__IsPrese.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent */
kcg_bool RadioTrainTrackMessage__IsPrese(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent::outIsPresent */
  static kcg_bool outIsPresent;
  
  outIsPresent = (*inRadioTrainTrackMessage).present;
  return outIsPresent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackMessage__IsPrese.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

