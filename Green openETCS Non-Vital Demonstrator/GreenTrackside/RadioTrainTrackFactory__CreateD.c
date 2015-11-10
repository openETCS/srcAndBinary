/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackFactory__CreateD.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg */
void RadioTrainTrackFactory__CreateD(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg::o_RadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *o_RadioTrainTrackMessage)
{
  kcg_copy_Radio_TrainTrack_Messa(
    o_RadioTrainTrackMessage,
    (Radio_TrainTrack_Message_T_Radi *) &RADIO_TRAIN_TRACK_MESSAGE_DEFAU);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackFactory__CreateD.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

