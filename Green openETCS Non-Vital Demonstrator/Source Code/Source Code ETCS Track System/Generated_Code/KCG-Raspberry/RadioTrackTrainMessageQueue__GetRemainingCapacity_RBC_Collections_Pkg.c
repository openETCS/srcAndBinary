/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity */
kcg_int RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::inRadioTrackTrainMessageQueue */RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue)
{
  kcg_int tmp2;
  kcg_bool tmp1;
  RadioTrackTrainMessageQueueEntry_T tmp;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::index */ kcg_int index;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::remainingCapacity */ kcg_int remainingCapacity;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L2 */ RadioTrackTrainMessageQueueEntries_T _L2;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::outRemainingCapacity */ kcg_int outRemainingCapacity;
  
  /* 1 */
  RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
    inRadioTrackTrainMessageQueue,
    &_L2);
  index = 0;
  for (remainingCapacity = 0; remainingCapacity < 8; remainingCapacity++) {
    tmp2 = index;
    /* 1 */
    RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_RBC_Collections_Pkg(
      remainingCapacity,
      tmp2,
      &_L2[remainingCapacity],
      &tmp1,
      &index);
    if (!tmp1) {
      break;
    }
  }
  remainingCapacity = RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY - (index + 0);
  if (RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY - 1 == index) {
    if ((0 <= index) & (index < 8)) {
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(&tmp, &_L2[index]);
    }
    else {
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &tmp,
        (RadioTrackTrainMessageQueueEntry_T *)
          &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
    }
    tmp1 = /* 1 */
      RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg(&tmp);
    if (tmp1) {
      outRemainingCapacity = 0;
    }
    else {
      outRemainingCapacity = remainingCapacity;
    }
  }
  else {
    outRemainingCapacity = remainingCapacity;
  }
  return outRemainingCapacity;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

