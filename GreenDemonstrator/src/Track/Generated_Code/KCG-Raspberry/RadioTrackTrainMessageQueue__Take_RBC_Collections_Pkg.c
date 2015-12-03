/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take */
void RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::inRadioTrackTrainMessageQueue */RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueue */RadioTrackTrainMessageQueue_T *outRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueueEntry */RadioTrackTrainMessageQueueEntry_T *outRadioTrackTrainMessageQueueEntry)
{
  RadioTrackTrainMessageQueueEntries_T tmp5;
  kcg_int tmp4;
  kcg_bool tmp3;
  array__47140 tmp2;
  array__47140 tmp1;
  array__47140 tmp;
  kcg_int i;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L2 */ RadioTrackTrainMessageQueueEntries_T _L2_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::foundIndex */ kcg_int foundIndex_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L1 */ RadioTrackTrainMessageQueueEntries_T _L1_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::remainingCapacity */ kcg_int remainingCapacity;
  
  remainingCapacity = /* 1 */
    RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(
      inRadioTrackTrainMessageQueue);
  IfBlock1_clock = remainingCapacity == 0;
  if (IfBlock1_clock) {
    /* 2 */
    RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
      inRadioTrackTrainMessageQueue,
      &_L2_IfBlock1);
    kcg_copy_array__51418(&tmp2[0], (array__51418 *) &_L2_IfBlock1[0]);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &(&tmp2[7])[0],
      (RadioTrackTrainMessageQueueEntry_T *)
        &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
    /* 1 */
    RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
      &tmp2,
      outRadioTrackTrainMessageQueue);
    if ((0 <= RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY - 1) &
      (RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY - 1 < 8)) {
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        outRadioTrackTrainMessageQueueEntry,
        &_L2_IfBlock1[RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY - 1]);
    }
    else {
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        outRadioTrackTrainMessageQueueEntry,
        (RadioTrackTrainMessageQueueEntry_T *)
          &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
    }
  }
  else {
    else_clock_IfBlock1 = remainingCapacity ==
      RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY;
    if (else_clock_IfBlock1) {
      kcg_copy_RadioTrackTrainMessageQueue_T(
        outRadioTrackTrainMessageQueue,
        inRadioTrackTrainMessageQueue);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        outRadioTrackTrainMessageQueueEntry,
        (RadioTrackTrainMessageQueueEntry_T *)
          &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
    }
    else {
      /* 4 */
      RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
        inRadioTrackTrainMessageQueue,
        &tmp5);
      for (i = 0; i < 8; i++) {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          &_L1_IfBlock1[i],
          &tmp5[7 - i]);
      }
      foundIndex_IfBlock1 = 0;
      for (i = 0; i < 8; i++) {
        tmp4 = foundIndex_IfBlock1;
        /* 2 */
        RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg(
          i,
          tmp4,
          &_L1_IfBlock1[i],
          &tmp3,
          &foundIndex_IfBlock1);
        if (!tmp3) {
          break;
        }
      }
      for (i = 0; i < 8; i++) {
        /* 2 */
        RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg(
          i,
          foundIndex_IfBlock1,
          &_L1_IfBlock1[i],
          &tmp[i]);
      }
      for (i = 0; i < 8; i++) {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(&tmp1[i], &tmp[7 - i]);
      }
      /* 3 */
      RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
        &tmp1,
        outRadioTrackTrainMessageQueue);
      if ((0 <= foundIndex_IfBlock1) & (foundIndex_IfBlock1 < 8)) {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          outRadioTrackTrainMessageQueueEntry,
          &_L1_IfBlock1[foundIndex_IfBlock1]);
      }
      else {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          outRadioTrackTrainMessageQueueEntry,
          (RadioTrackTrainMessageQueueEntry_T *)
            &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

