/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackHeader__IsPresen.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__IsPresent */
kcg_bool RadioTrainTrackHeader__IsPresen(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__IsPresent::inRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio *inRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__IsPresent::outIsPresent */
  static kcg_bool outIsPresent;
  
  outIsPresent = (*inRadioTrainTrackHeader).present;
  return outIsPresent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackHeader__IsPresen.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

