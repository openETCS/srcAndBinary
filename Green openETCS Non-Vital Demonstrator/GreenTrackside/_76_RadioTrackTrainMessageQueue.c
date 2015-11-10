/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_76_RadioTrackTrainMessageQueue.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity */
kcg_int _76_RadioTrackTrainMessageQueue(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::inRadioTrackTrainMessageQueue */ _9_RadioTrackTrainMessageQueue_ *inRadioTrackTrainMessageQueue)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity */
  static kcg_int acc;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity */
  static kcg_bool tmp1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity */
  static RadioTrackTrainMessageQueueEntr tmp;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::index */
  static kcg_int index;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::remainingCapacity */
  static kcg_int remainingCapacity;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L2 */
  static _8_RadioTrackTrainMessageQueueE _L2;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::outRemainingCapacity */
  static kcg_int outRemainingCapacity;
  
  /* 1 */ _75_RadioTrackTrainMessageQueue(inRadioTrackTrainMessageQueue, &_L2);
  index = 0;
  for (remainingCapacity = 0; remainingCapacity < 8; remainingCapacity++) {
    acc = index;
    /* 1 */
    RadioTrackTrainMessageQueue__Ge(
      remainingCapacity,
      acc,
      &_L2[remainingCapacity],
      &tmp1,
      &index);
    if (!tmp1) {
      break;
    }
  }
  remainingCapacity = _15_RADIO_TRACK_TRAIN_MESSAGE_Q - (index + 0);
  /* 1 */ if (_15_RADIO_TRACK_TRAIN_MESSAGE_Q - 1 == index) {
    if ((0 <= index) & (index < 8)) {
      kcg_copy_RadioTrackTrainMessage(&tmp, &_L2[index]);
    }
    else {
      kcg_copy_RadioTrackTrainMessage(
        &tmp,
        (RadioTrackTrainMessageQueueEntr *) &_14_RADIO_TRACK_TRAIN_MESSAGE_Q);
    }
    tmp1 = /* 1 */ _74_RadioTrackTrainMessageQueue(&tmp);
    /* 2 */ if (tmp1) {
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

/* $**************** KCG Version 6.4 (build i21) ****************
** _76_RadioTrackTrainMessageQueue.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

