/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessage__GetHead.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader */
void RadioTrainTrackMessage__GetHead(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader::outRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio *outRadioTrainTrackHeader)
{
  kcg_copy_Radio_TrainTrack_Heade(
    outRadioTrainTrackHeader,
    &(*inRadioTrainTrackMessage).header);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackMessage__GetHead.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

