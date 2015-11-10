/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_72_RadioTrackTrainMessageQueue.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take */
void _72_RadioTrackTrainMessageQueue(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::inRadioTrackTrainMessageQueue */ _9_RadioTrackTrainMessageQueue_ *inRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueue */ _9_RadioTrackTrainMessageQueue_ *outRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntr *outRadioTrackTrainMessageQueueE)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take */
  static _8_RadioTrackTrainMessageQueueE tmp3;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take */
  static kcg_int acc;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take */
  static kcg_bool cond_iterw;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take */
  static _8_RadioTrackTrainMessageQueueE tmp2;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take */
  static _8_RadioTrackTrainMessageQueueE tmp1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take */
  static _8_RadioTrackTrainMessageQueueE tmp;
  static kcg_int i;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L2 */
  static _8_RadioTrackTrainMessageQueueE _L2_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::foundIndex */
  static kcg_int foundIndex_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L1 */
  static _8_RadioTrackTrainMessageQueueE _L1_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::remainingCapacity */
  static kcg_int remainingCapacity;
  
  remainingCapacity = /* 1 */
    _76_RadioTrackTrainMessageQueue(inRadioTrackTrainMessageQueue);
  IfBlock1_clock = remainingCapacity == 0;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 2 */
    _75_RadioTrackTrainMessageQueue(
      inRadioTrackTrainMessageQueue,
      &_L2_IfBlock1);
    kcg_copy_array_44501(&tmp2[0], (array_44501 *) &_L2_IfBlock1[0]);
    kcg_copy_RadioTrackTrainMessage(
      &(&tmp2[7])[0],
      (RadioTrackTrainMessageQueueEntr *) &_14_RADIO_TRACK_TRAIN_MESSAGE_Q);
    /* 1 */
    RadioTrackTrainMessageQueue__Se(&tmp2, outRadioTrackTrainMessageQueue);
    kcg_copy_RadioTrackTrainMessage(
      outRadioTrackTrainMessageQueueE,
      &_L2_IfBlock1[7]);
  }
  else {
    else_clock_IfBlock1 = remainingCapacity == _15_RADIO_TRACK_TRAIN_MESSAGE_Q;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy__9_RadioTrackTrainMess(
        outRadioTrackTrainMessageQueue,
        inRadioTrackTrainMessageQueue);
      kcg_copy_RadioTrackTrainMessage(
        outRadioTrackTrainMessageQueueE,
        (RadioTrackTrainMessageQueueEntr *) &_14_RADIO_TRACK_TRAIN_MESSAGE_Q);
    }
    else {
      /* 4 */
      _75_RadioTrackTrainMessageQueue(inRadioTrackTrainMessageQueue, &tmp3);
      for (i = 0; i < 8; i++) {
        kcg_copy_RadioTrackTrainMessage(&_L1_IfBlock1[i], &tmp3[7 - i]);
      }
      foundIndex_IfBlock1 = 0;
      for (i = 0; i < 8; i++) {
        acc = foundIndex_IfBlock1;
        /* 2 */
        RadioTrackTrainMessageQueue__Ta(
          i,
          acc,
          &_L1_IfBlock1[i],
          &cond_iterw,
          &foundIndex_IfBlock1);
        if (!cond_iterw) {
          break;
        }
      }
      for (i = 0; i < 8; i++) {
        /* 2 */
        _71_RadioTrackTrainMessageQueue(
          i,
          foundIndex_IfBlock1,
          &_L1_IfBlock1[i],
          &tmp[i]);
      }
      for (i = 0; i < 8; i++) {
        kcg_copy_RadioTrackTrainMessage(&tmp1[i], &tmp[7 - i]);
      }
      /* 3 */
      RadioTrackTrainMessageQueue__Se(&tmp1, outRadioTrackTrainMessageQueue);
      if ((0 <= foundIndex_IfBlock1) & (foundIndex_IfBlock1 < 8)) {
        kcg_copy_RadioTrackTrainMessage(
          outRadioTrackTrainMessageQueueE,
          &_L1_IfBlock1[foundIndex_IfBlock1]);
      }
      else {
        kcg_copy_RadioTrackTrainMessage(
          outRadioTrackTrainMessageQueueE,
          (RadioTrackTrainMessageQueueEntr *) &_14_RADIO_TRACK_TRAIN_MESSAGE_Q);
      }
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _72_RadioTrackTrainMessageQueue.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

