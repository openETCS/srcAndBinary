/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__Ge.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable */
void RadioTrackTrainMessageQueue__Ge(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::inIndex */ kcg_int inIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::inAccumulator */ kcg_int inAccumulator,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntr *inRadioTrackTrainMessageQueueEn,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::outContinue */ kcg_bool *outContinue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::outAccumulator */ kcg_int *outAccumulator)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable */
  static kcg_bool tmp;
  
  *outAccumulator = inIndex;
  tmp = /* 1 */
    _74_RadioTrackTrainMessageQueue(inRadioTrackTrainMessageQueueEn);
  /* 1 */ if (tmp) {
    *outContinue = kcg_true;
  }
  else {
    *outContinue = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueue__Ge.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

