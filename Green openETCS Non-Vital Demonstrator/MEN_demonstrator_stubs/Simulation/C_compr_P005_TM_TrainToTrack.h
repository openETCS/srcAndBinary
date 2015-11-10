/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _C_compr_P005_TM_TrainToTrack_H_
#define _C_compr_P005_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_OPERATIONAL_TM_conversions.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"
#include "Filter_Variable_TM_TrainToTrack.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P005_TM_TrainToTrack /* TM_TrainToTrack::C_compr_P005::P005_out */ P005_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_OPERATIONAL_TM_conversions /* 1 */ _2_Context_1;
  outC_Filter_Variable_TM_TrainToTrack /* 1 */ _1_Context_1;
  outC_Filter_Variable_TM_TrainToTrack /* 2 */ Context_2;
  outC_Filter_Variable_TM_TrainToTrack /* 3 */ Context_3;
  outC_Decode_NID_PACKET_TM_TrainToTrack /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_L_PACKET::_L1 */ _L1_13;
  kcg_bool /* TM_conversions::CAST_Int_to_L_PACKET::_L9 */ _L9_1;
  kcg_bool /* TM_conversions::CAST_Int_to_L_PACKET::_L8 */ _L8_1;
  kcg_int /* TM_conversions::CAST_Int_to_L_PACKET::_L12 */ _L12_1;
  kcg_int /* TM_conversions::CAST_Int_to_L_PACKET::_L13 */ _L13_1;
  L_PACKET /* TM_conversions::CAST_Int_to_L_PACKET::l_packet */ l_packet_1;
  kcg_int /* TM_conversions::CAST_Int_to_L_PACKET::l_packet_int */ l_packet_int_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */ _L1_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */ _L5_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */ _L4_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */ _L3_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */ _L2_1;
  NID_PACKET /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */ nid_packet_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */ nid_packet_int_1;
  P005_TrainTrack_int_TM_TrainToTrack /* TM_TrainToTrack::C_compr_P005::_L1 */ _L1;
  kcg_int /* TM_TrainToTrack::C_compr_P005::_L4 */ _L4;
  kcg_int /* TM_TrainToTrack::C_compr_P005::_L3 */ _L3;
  kcg_int /* TM_TrainToTrack::C_compr_P005::_L2 */ _L2;
  NID_PACKET /* TM_TrainToTrack::C_compr_P005::_L69 */ _L69;
  L_PACKET /* TM_TrainToTrack::C_compr_P005::_L70 */ _L70;
  NID_OPERATIONAL /* TM_TrainToTrack::C_compr_P005::_L71 */ _L71;
  P005_TM_TrainToTrack /* TM_TrainToTrack::C_compr_P005::_L72 */ _L72;
  kcg_bool /* TM_TrainToTrack::C_compr_P005::_L73 */ _L73;
  kcg_int /* TM_TrainToTrack::C_compr_P005::_L74 */ _L74;
  kcg_int /* TM_TrainToTrack::C_compr_P005::_L75 */ _L75;
  kcg_int /* TM_TrainToTrack::C_compr_P005::_L76 */ _L76;
} outC_C_compr_P005_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_compr_P005 */
extern void C_compr_P005_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P005::P005_in */P005_TrainTrack_int_TM_TrainToTrack *P005_in,
  outC_C_compr_P005_TM_TrainToTrack *outC);

extern void C_compr_P005_reset_TM_TrainToTrack(
  outC_C_compr_P005_TM_TrainToTrack *outC);

#endif /* _C_compr_P005_TM_TrainToTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_compr_P005_TM_TrainToTrack.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

