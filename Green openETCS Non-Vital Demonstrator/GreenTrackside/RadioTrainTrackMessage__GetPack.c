/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessage__GetPack.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets */
void RadioTrainTrackMessage__GetPack(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets::outRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *outRadioTrainTrackPackets)
{
  kcg_copy_outPackets_T_Common_Ty(
    outRadioTrainTrackPackets,
    &(*inRadioTrainTrackMessage).packets);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackMessage__GetPack.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

