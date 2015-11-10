/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__Se.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries */
void RadioTrackTrainMessageQueue__Se(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries::inRadioTrackTrainMessageQueueEntries */ _8_RadioTrackTrainMessageQueueE *inRadioTrackTrainMessageQueueEn,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries::out_RadioTrackTrainMessageQueue */ _9_RadioTrackTrainMessageQueue_ *out_RadioTrackTrainMessageQueue)
{
  kcg_copy__9_RadioTrackTrainMess(
    out_RadioTrackTrainMessageQueue,
    (_9_RadioTrackTrainMessageQueue_ *) &RADIO_TRACK_TRAIN_MESSAGE_QUEUE);
  kcg_copy__8_RadioTrackTrainMess(
    &(*out_RadioTrackTrainMessageQueue).m_Entries,
    inRadioTrackTrainMessageQueueEn);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueue__Se.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

