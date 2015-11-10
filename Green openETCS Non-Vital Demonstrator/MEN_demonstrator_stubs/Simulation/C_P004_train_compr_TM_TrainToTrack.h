/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _C_P004_train_compr_TM_TrainToTrack_H_
#define _C_P004_train_compr_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "CAST_NID_PACKET_to_int_TM_conversions.h"
#include "CAST_L_PACKET_to_int_TM_conversions.h"
#include "CAST_M_ERROR_to_int_TM_conversions.h"
#include "Encode_NID_PACKET_TM_TrainToTrack.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P004_TrainTrack_int_TM_TrainToTrack /* TM_TrainToTrack::C_P004_train_compr::P004_int */ P004_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_L_PACKET_to_int_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_M_ERROR_to_int_TM_conversions /* 1 */ _2_Context_1;
  outC_Encode_NID_PACKET_TM_TrainToTrack /* 1 */ _1_Context_1;
  outC_CAST_NID_PACKET_to_int_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P004_TM_TrainToTrack /* TM_TrainToTrack::C_P004_train_compr::_L1 */ _L1;
  M_ERROR /* TM_TrainToTrack::C_P004_train_compr::_L5 */ _L5;
  L_PACKET /* TM_TrainToTrack::C_P004_train_compr::_L4 */ _L4;
  NID_PACKET /* TM_TrainToTrack::C_P004_train_compr::_L3 */ _L3;
  kcg_bool /* TM_TrainToTrack::C_P004_train_compr::_L2 */ _L2;
  array_int_3 /* TM_TrainToTrack::C_P004_train_compr::_L68 */ _L68;
  kcg_int /* TM_TrainToTrack::C_P004_train_compr::_L69 */ _L69;
  kcg_int /* TM_TrainToTrack::C_P004_train_compr::_L70 */ _L70;
  kcg_int /* TM_TrainToTrack::C_P004_train_compr::_L71 */ _L71;
  kcg_int /* TM_TrainToTrack::C_P004_train_compr::_L89 */ _L89;
} outC_C_P004_train_compr_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_P004_train_compr */
extern void C_P004_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P004_train_compr::P004_in */P004_TM_TrainToTrack *P004_in,
  outC_C_P004_train_compr_TM_TrainToTrack *outC);

extern void C_P004_train_compr_reset_TM_TrainToTrack(
  outC_C_P004_train_compr_TM_TrainToTrack *outC);

#endif /* _C_P004_train_compr_TM_TrainToTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P004_train_compr_TM_TrainToTrack.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

