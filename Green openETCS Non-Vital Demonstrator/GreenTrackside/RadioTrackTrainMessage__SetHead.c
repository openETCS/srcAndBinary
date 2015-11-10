/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessage__SetHead.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader */
void RadioTrackTrainMessage__SetHead(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::inRadioTrackTrainMessage */ CompressedRadioMessage_TM *inRadioTrackTrainMessage,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::inRadioTrackTrainHeader */ _6_Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::outRadioTrackTrainMessage */ CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  kcg_copy_CompressedRadioMessage(
    outRadioTrackTrainMessage,
    inRadioTrackTrainMessage);
  kcg_copy__6_Radio_TrackTrain_He(
    &(*outRadioTrackTrainMessage).Header,
    inRadioTrackTrainHeader);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessage__SetHead.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

