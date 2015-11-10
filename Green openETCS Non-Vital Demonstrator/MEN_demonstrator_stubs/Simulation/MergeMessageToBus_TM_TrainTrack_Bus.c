/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"

void MergeMessageToBus_reset_TM_TrainTrack_Bus(
  outC_MergeMessageToBus_TM_TrainTrack_Bus *outC)
{
}

/* TM_TrainTrack_Bus::MergeMessageToBus */
void MergeMessageToBus_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::MergeMessageToBus::Message_in */M_TrainTrack_Message_T_TM_radio_messages *Message_in,
  /* TM_TrainTrack_Bus::MergeMessageToBus::slots_used */kcg_int slots_used,
  /* TM_TrainTrack_Bus::MergeMessageToBus::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_TrainTrack_Bus::MergeMessageToBus::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  outC_MergeMessageToBus_TM_TrainTrack_Bus *outC)
{
  outC->_L1 = slots_used;
  outC->_L6 = Time_10ms_TM_TrainTrack_Bus;
  outC->_L4 = outC->_L1 * outC->_L6;
  outC->_L2 = t_train_global;
  outC->_L3 = outC->_L4 + outC->_L2;
  outC->t_train_assigned = outC->_L3;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L7, Message_in);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L12, &outC->_L7);
  if (kcg_true) {
    outC->_L12.Message.t_train = outC->_L3;
  }
  outC->_L14 = outC->_L12.Message.valid;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L13, MessageBus);
  outC->_L15 = slots_used;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L16, &outC->_L13);
  if ((0 <= outC->_L15) & (outC->_L15 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L16[outC->_L15],
      &outC->_L12);
  }
  if (outC->_L14) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L17,
      &outC->_L16);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L17,
      &outC->_L13);
  }
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeMessageToBus_TM_TrainTrack_Bus.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

