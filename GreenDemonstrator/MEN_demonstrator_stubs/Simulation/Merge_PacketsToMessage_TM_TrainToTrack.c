/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merge_PacketsToMessage_TM_TrainToTrack.h"

void Merge_PacketsToMessage_reset_TM_TrainToTrack(
  outC_Merge_PacketsToMessage_TM_TrainToTrack *outC)
{
}

/* TM_TrainToTrack::Merge_PacketsToMessage */
void Merge_PacketsToMessage_TM_TrainToTrack(
  /* TM_TrainToTrack::Merge_PacketsToMessage::OptionalPackets */M_TrainTrack_compressed_packets_T_TM_radio_messages *OptionalPackets,
  /* TM_TrainToTrack::Merge_PacketsToMessage::MessageHeader */M_TrainTrack_MessageHd_T_TM_radio_messages *MessageHeader,
  outC_Merge_PacketsToMessage_TM_TrainToTrack *outC)
{
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L2,
    MessageHeader);
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &outC->_L1,
    OptionalPackets);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L4.Message,
    &outC->_L2);
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &outC->_L4.OptionalPackets,
    &outC->_L1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->RadioMessage,
    &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merge_PacketsToMessage_TM_TrainToTrack.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

