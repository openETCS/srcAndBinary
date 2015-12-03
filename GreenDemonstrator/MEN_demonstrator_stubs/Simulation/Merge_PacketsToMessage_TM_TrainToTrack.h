/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Merge_PacketsToMessage_TM_TrainToTrack_H_
#define _Merge_PacketsToMessage_TM_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* TM_TrainToTrack::Merge_PacketsToMessage::RadioMessage */ RadioMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* TM_TrainToTrack::Merge_PacketsToMessage::_L1 */ _L1;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* TM_TrainToTrack::Merge_PacketsToMessage::_L2 */ _L2;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_TrainToTrack::Merge_PacketsToMessage::_L4 */ _L4;
} outC_Merge_PacketsToMessage_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::Merge_PacketsToMessage */
extern void Merge_PacketsToMessage_TM_TrainToTrack(
  /* TM_TrainToTrack::Merge_PacketsToMessage::OptionalPackets */M_TrainTrack_compressed_packets_T_TM_radio_messages *OptionalPackets,
  /* TM_TrainToTrack::Merge_PacketsToMessage::MessageHeader */M_TrainTrack_MessageHd_T_TM_radio_messages *MessageHeader,
  outC_Merge_PacketsToMessage_TM_TrainToTrack *outC);

extern void Merge_PacketsToMessage_reset_TM_TrainToTrack(
  outC_Merge_PacketsToMessage_TM_TrainToTrack *outC);

#endif /* _Merge_PacketsToMessage_TM_TrainToTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merge_PacketsToMessage_TM_TrainToTrack.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

