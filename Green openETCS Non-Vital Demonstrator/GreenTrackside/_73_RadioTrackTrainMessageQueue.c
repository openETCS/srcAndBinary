/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_73_RadioTrackTrainMessageQueue.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create */
void _73_RadioTrackTrainMessageQueue(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create::inRadioTrackTrainMessage */ CompressedRadioMessage_TM *inRadioTrackTrainMessage,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create::outRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntr *outRadioTrackTrainMessageQueueE)
{
  kcg_copy_RadioTrackTrainMessage(
    outRadioTrackTrainMessageQueueE,
    (RadioTrackTrainMessageQueueEntr *) &_14_RADIO_TRACK_TRAIN_MESSAGE_Q);
  kcg_copy_CompressedRadioMessage(
    &(*outRadioTrackTrainMessageQueueE).m_Entry,
    inRadioTrackTrainMessage);
  (*outRadioTrackTrainMessageQueueE).m_IsValid = kcg_true;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _73_RadioTrackTrainMessageQueue.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

