/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__Ta.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable */
void RadioTrackTrainMessageQueue__Ta(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::inIndex */ kcg_int inIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::inAccumulator */ kcg_int inAccumulator,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntr *inRadioTrackTrainMessageQueueEn,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::outContinueIteration */ kcg_bool *outContinueIteration,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::outAccumulator */ kcg_int *outAccumulator)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable */
  static kcg_bool tmp;
  
  *outAccumulator = inIndex;
  tmp = /* 1 */
    _74_RadioTrackTrainMessageQueue(inRadioTrackTrainMessageQueueEn);
  /* 1 */ if (tmp) {
    *outContinueIteration = kcg_false;
  }
  else {
    *outContinueIteration = kcg_true;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueue__Ta.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

