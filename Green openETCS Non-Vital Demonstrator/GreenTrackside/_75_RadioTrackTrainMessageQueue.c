/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_75_RadioTrackTrainMessageQueue.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries */
void _75_RadioTrackTrainMessageQueue(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries::inRadioTrackTrainMessageQueue */ _9_RadioTrackTrainMessageQueue_ *inRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries::outRadioTrackTrainMessageQueueEntries */ _8_RadioTrackTrainMessageQueueE *outRadioTrackTrainMessageQueueE)
{
  kcg_copy__8_RadioTrackTrainMess(
    outRadioTrackTrainMessageQueueE,
    &(*inRadioTrackTrainMessageQueue).m_Entries);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _75_RadioTrackTrainMessageQueue.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

