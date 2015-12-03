/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSpaceLoop_TM_TrainTrack_Bus.h"

void CheckSpaceLoop_reset_TM_TrainTrack_Bus(
  outC_CheckSpaceLoop_TM_TrainTrack_Bus *outC)
{
}

/* TM_TrainTrack_Bus::CheckSpaceLoop */
void CheckSpaceLoop_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::CheckSpaceLoop::i */kcg_int i,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Acc */kcg_int Acc,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Message */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message,
  outC_CheckSpaceLoop_TM_TrainTrack_Bus *outC)
{
  outC->_L20 = kcg_true;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L1, Message);
  outC->_L2 = i;
  if ((0 <= outC->_L2) & (outC->_L2 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L8,
      &outC->_L1[outC->_L2]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L8,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
  outC->_L9 = outC->_L8.Message.valid;
  outC->_L17 = 1;
  outC->_L18 = 0;
  if (outC->_L9) {
    outC->_L16 = outC->_L17;
  }
  else {
    outC->_L16 = outC->_L18;
  }
  outC->_L3 = Acc;
  outC->_L19 = outC->_L16 + outC->_L3;
  outC->Count = outC->_L19;
  outC->cont = outC->_L20;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckSpaceLoop_TM_TrainTrack_Bus.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

