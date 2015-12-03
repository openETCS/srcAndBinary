/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _MergeMessageToBus_TM_TrainTrack_Bus_H_
#define _MergeMessageToBus_TM_TrainTrack_Bus_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_TrainTrack_Bus::MergeMessageToBus::MessageBus_out */ MessageBus_out;
  kcg_int /* TM_TrainTrack_Bus::MergeMessageToBus::t_train_assigned */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_TrainTrack_Bus::MergeMessageToBus::_L1 */ _L1;
  T_internal_Type_Obu_BasicTypes_Pkg /* TM_TrainTrack_Bus::MergeMessageToBus::_L2 */ _L2;
  kcg_int /* TM_TrainTrack_Bus::MergeMessageToBus::_L3 */ _L3;
  kcg_int /* TM_TrainTrack_Bus::MergeMessageToBus::_L4 */ _L4;
  T_internal_Type_Obu_BasicTypes_Pkg /* TM_TrainTrack_Bus::MergeMessageToBus::_L6 */ _L6;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_TrainTrack_Bus::MergeMessageToBus::_L7 */ _L7;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_TrainTrack_Bus::MergeMessageToBus::_L12 */ _L12;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_TrainTrack_Bus::MergeMessageToBus::_L13 */ _L13;
  kcg_bool /* TM_TrainTrack_Bus::MergeMessageToBus::_L14 */ _L14;
  kcg_int /* TM_TrainTrack_Bus::MergeMessageToBus::_L15 */ _L15;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_TrainTrack_Bus::MergeMessageToBus::_L16 */ _L16;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_TrainTrack_Bus::MergeMessageToBus::_L17 */ _L17;
} outC_MergeMessageToBus_TM_TrainTrack_Bus;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainTrack_Bus::MergeMessageToBus */
extern void MergeMessageToBus_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::MergeMessageToBus::Message_in */M_TrainTrack_Message_T_TM_radio_messages *Message_in,
  /* TM_TrainTrack_Bus::MergeMessageToBus::slots_used */kcg_int slots_used,
  /* TM_TrainTrack_Bus::MergeMessageToBus::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_TrainTrack_Bus::MergeMessageToBus::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  outC_MergeMessageToBus_TM_TrainTrack_Bus *outC);

extern void MergeMessageToBus_reset_TM_TrainTrack_Bus(
  outC_MergeMessageToBus_TM_TrainTrack_Bus *outC);

#endif /* _MergeMessageToBus_TM_TrainTrack_Bus_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeMessageToBus_TM_TrainTrack_Bus.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

