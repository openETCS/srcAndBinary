/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

/* TM_TrainTrack_Bus::CheckSpace */
void CheckSpace_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::CheckSpace::MessageBus */ M_TrainTrackMessageBus_t_TM_Tra *MessageBus,
  /* TM_TrainTrack_Bus::CheckSpace::Busy */ kcg_bool *Busy,
  /* TM_TrainTrack_Bus::CheckSpace::SlotsUsed */ kcg_int *SlotsUsed)
{
  /* TM_TrainTrack_Bus::CheckSpace */
  static kcg_int acc;
  /* TM_TrainTrack_Bus::CheckSpace */
  static kcg_bool cond_iterw;
  static kcg_int i;
  
  *SlotsUsed = 0;
  /* 1 */ for (i = 0; i < 5; i++) {
    acc = *SlotsUsed;
    /* 1 */
    CheckSpaceLoop_TM_TrainTrack_Bu(i, acc, MessageBus, &cond_iterw, SlotsUsed);
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
  *Busy = *SlotsUsed >= BusWidth_TM_TrainTrack_Bus;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckSpace_TM_TrainTrack_Bus.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

