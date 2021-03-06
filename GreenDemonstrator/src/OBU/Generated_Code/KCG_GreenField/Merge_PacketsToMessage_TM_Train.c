/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merge_PacketsToMessage_TM_Train.h"

/* TM_TrainToTrack::Merge_PacketsToMessage */
void Merge_PacketsToMessage_TM_Train(
  /* TM_TrainToTrack::Merge_PacketsToMessage::OptionalPackets */ M_TrainTrack_compressed_packets *OptionalPackets,
  /* TM_TrainToTrack::Merge_PacketsToMessage::MessageHeader */ M_TrainTrack_MessageHd_T_TM_rad *MessageHeader,
  /* TM_TrainToTrack::Merge_PacketsToMessage::RadioMessage */ M_TrainTrack_Message_T_TM_radio *RadioMessage)
{
  kcg_copy_M_TrainTrack_MessageHd(&(*RadioMessage).Message, MessageHeader);
  kcg_copy_M_TrainTrack_compresse(
    &(*RadioMessage).OptionalPackets,
    OptionalPackets);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merge_PacketsToMessage_TM_Train.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

