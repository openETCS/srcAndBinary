/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSpaceLoop_TM_TrainTrack_Bu.h"

/* TM_TrainTrack_Bus::CheckSpaceLoop */
void CheckSpaceLoop_TM_TrainTrack_Bu(
  /* TM_TrainTrack_Bus::CheckSpaceLoop::i */ kcg_int i,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Acc */ kcg_int Acc,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Message */ M_TrainTrackMessageBus_t_TM_Tra *Message,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::cont */ kcg_bool *cont,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Count */ kcg_int *Count)
{
  /* TM_TrainTrack_Bus::CheckSpaceLoop */
  static kcg_int tmp1;
  /* TM_TrainTrack_Bus::CheckSpaceLoop */
  static M_TrainTrack_Message_T_TM_radio tmp;
  
  *cont = kcg_true;
  if ((0 <= i) & (i < 5)) {
    kcg_copy_M_TrainTrack_Message_T(&tmp, &(*Message)[i]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T(
      &tmp,
      (M_TrainTrack_Message_T_TM_radio *) &DEFAULT_TrainToTrackMessage_TM_);
  }
  /* 1 */ if (tmp.Message.valid) {
    tmp1 = 1;
  }
  else {
    tmp1 = 0;
  }
  *Count = tmp1 + Acc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckSpaceLoop_TM_TrainTrack_Bu.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

