/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Read_M157_TM_radio_messages_trackside_H_
#define _Read_M157_TM_radio_messages_trackside_H_

#include "kcg_types.h"
#include "C_compr_P001_TM_TrainToTrack.h"
#include "C_compr_P000_TM_TrainToTrack.h"
#include "C_compr_P004_TM_TrainToTrack.h"
#include "C_compr_P005_TM_TrainToTrack.h"
#include "C_compr_P044_TM_TrainToTrack.h"
#include "C_header_to_M157_TM_RBC_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_157_T_TM_radio_messages /* TM_radio_messages_trackside::Read_M157::Message_157_out */ Message_157_out;
  P000_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::P000 */ P000;
  P001_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::P001 */ P001;
  P004_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::P004 */ P004;
  P005_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::P005 */ P005;
  P044_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::P044 */ P044;
  M_VERSION /* TM_radio_messages_trackside::Read_M157::m_version */ _10_m_version;
  T_TRAIN /* TM_radio_messages_trackside::Read_M157::t_train_received */ t_train_received;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_header_to_M157_TM_RBC_conversions /* 1 */ _4_Context_1;
  outC_C_compr_P001_TM_TrainToTrack /* 1 */ _3_Context_1;
  outC_C_compr_P000_TM_TrainToTrack /* 2 */ Context_2;
  outC_C_compr_P004_TM_TrainToTrack /* 1 */ _2_Context_1;
  outC_C_compr_P005_TM_TrainToTrack /* 1 */ _1_Context_1;
  outC_C_compr_P044_TM_TrainToTrack /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1::else */ else_clock_Det_if_P0_or_P1;
  kcg_bool /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1 */ Det_if_P0_or_P1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P000_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1::then::_L3 */ _L3_Det_if_P0_or_P1;
  P000_TrainTrack_int_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1::then::_L2 */ _L2_Det_if_P0_or_P1;
  P001_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1::then::_L1 */ _L1_Det_if_P0_or_P1;
  P000_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1::else::else::_L1 */ _L19_Det_if_P0_or_P1;
  P001_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1::else::else::_L2 */ _L28_Det_if_P0_or_P1;
  P000_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1::else::then::_L1 */ _L17_Det_if_P0_or_P1;
  P000_TrainTrack_int_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1::else::then::_L2 */ _L26_Det_if_P0_or_P1;
  P001_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1::else::then::_L3 */ _L35_Det_if_P0_or_P1;
  P000_TrainTrack_int_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::P0_or_P1 */ P0_or_P1;
  kcg_int /* TM_radio_messages_trackside::Read_M157::nid_packet */ nid_packet;
  array_int_3 /* TM_radio_messages_trackside::Read_M157::p4local */ p4local;
  array_int_3 /* TM_radio_messages_trackside::Read_M157::p5local */ p5local;
  array_int_25 /* TM_radio_messages_trackside::Read_M157::p44local */ p44local;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_radio_messages_trackside::Read_M157::_L98 */ _L98;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* TM_radio_messages_trackside::Read_M157::_L100 */ _L100;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* TM_radio_messages_trackside::Read_M157::_L99 */ _L99;
  M_157_T_TM_radio_messages /* TM_radio_messages_trackside::Read_M157::_L103 */ _L103;
  array_int_17 /* TM_radio_messages_trackside::Read_M157::_L104 */ _L104;
  kcg_int /* TM_radio_messages_trackside::Read_M157::_L105 */ _L105;
  P004_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::_L109 */ _L109;
  T_TRAIN /* TM_radio_messages_trackside::Read_M157::_L111 */ _L111;
  M_VERSION /* TM_radio_messages_trackside::Read_M157::_L113 */ _L113;
  P005_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::_L116 */ _L116;
  P044_TM_TrainToTrack /* TM_radio_messages_trackside::Read_M157::_L119 */ _L119;
} outC_Read_M157_TM_radio_messages_trackside;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages_trackside::Read_M157 */
extern void Read_M157_TM_radio_messages_trackside(
  /* TM_radio_messages_trackside::Read_M157::t_train_global */T_TRAIN t_train_global,
  /* TM_radio_messages_trackside::Read_M157::MessageIn */M_TrainTrack_Message_T_TM_radio_messages *MessageIn,
  outC_Read_M157_TM_radio_messages_trackside *outC);

extern void Read_M157_reset_TM_radio_messages_trackside(
  outC_Read_M157_TM_radio_messages_trackside *outC);

#endif /* _Read_M157_TM_radio_messages_trackside_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_M157_TM_radio_messages_trackside.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

