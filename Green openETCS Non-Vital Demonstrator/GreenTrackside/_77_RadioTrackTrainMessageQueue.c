/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_77_RadioTrackTrainMessageQueue.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut */
void _77_RadioTrackTrainMessageQueue(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::inRadioTrackTrainMessageQueue */ _9_RadioTrackTrainMessageQueue_ *inRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntr *inRadioTrackTrainMessageQueueEn,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::outRadioTrackTrainMessageQueue */ _9_RadioTrackTrainMessageQueue_ *outRadioTrackTrainMessageQueue)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut */
  static _8_RadioTrackTrainMessageQueueE tmp1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut */
  static _8_RadioTrackTrainMessageQueueE tmp;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::hasCapacity */
  static kcg_bool hasCapacity;
  
  hasCapacity = /* 1 */
    _76_RadioTrackTrainMessageQueue(inRadioTrackTrainMessageQueue) > 0;
  /* ck_hasCapacity */ if (hasCapacity) {
    kcg_copy_RadioTrackTrainMessage(
      &(&tmp1[0])[0],
      inRadioTrackTrainMessageQueueEn);
    /* 1 */
    _75_RadioTrackTrainMessageQueue(inRadioTrackTrainMessageQueue, &tmp);
    kcg_copy_array_44501(&tmp1[1], (array_44501 *) &tmp[0]);
    /* 1 */
    RadioTrackTrainMessageQueue__Se(&tmp1, outRadioTrackTrainMessageQueue);
  }
  else {
    kcg_copy__9_RadioTrackTrainMess(
      outRadioTrackTrainMessageQueue,
      inRadioTrackTrainMessageQueue);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _77_RadioTrackTrainMessageQueue.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

