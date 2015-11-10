/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_70_RadioTrackTrainMessageQueue.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry */
void _70_RadioTrackTrainMessageQueue(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntr *inRadioTrackTrainMessageQueueEn,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry::outRadioTrackTrainMessage */ CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  kcg_copy_CompressedRadioMessage(
    outRadioTrackTrainMessage,
    &(*inRadioTrackTrainMessageQueueEn).m_Entry);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _70_RadioTrackTrainMessageQueue.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

