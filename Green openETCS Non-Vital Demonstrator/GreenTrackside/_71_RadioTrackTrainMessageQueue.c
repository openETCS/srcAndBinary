/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_71_RadioTrackTrainMessageQueue.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2 */
void _71_RadioTrackTrainMessageQueue(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::inIndex */ kcg_int inIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::inComparisonIndex */ kcg_int inComparisonIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntr *inRadioTrackTrainMessageQueueEn,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::outRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntr *outRadioTrackTrainMessageQueueE)
{
  /* 1 */ if (inIndex == inComparisonIndex) {
    kcg_copy_RadioTrackTrainMessage(
      outRadioTrackTrainMessageQueueE,
      (RadioTrackTrainMessageQueueEntr *) &_14_RADIO_TRACK_TRAIN_MESSAGE_Q);
  }
  else {
    kcg_copy_RadioTrackTrainMessage(
      outRadioTrackTrainMessageQueueE,
      inRadioTrackTrainMessageQueueEn);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _71_RadioTrackTrainMessageQueue.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

