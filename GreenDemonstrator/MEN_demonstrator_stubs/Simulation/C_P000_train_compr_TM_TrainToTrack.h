/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _C_P000_train_compr_TM_TrainToTrack_H_
#define _C_P000_train_compr_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "CAST_NID_PACKET_to_int_TM_conversions.h"
#include "CAST_L_PACKET_to_int_TM_conversions.h"
#include "CAST_Q_SCALE_to_int_TM_conversions.h"
#include "CAST_NID_LRBG_to_int_TM_conversions.h"
#include "CAST_Q_DIRLRBG_to_int_TM_conversions.h"
#include "CAST_Q_DRLRBG_to_int_TM_conversions.h"
#include "CAST_L_DOUBTOVER_to_int_TM_conversions.h"
#include "CAST_L_DOUBTUNDER_to_int_TM_conversions.h"
#include "CAST_Q_LENGTH_to_int_TM_conversions.h"
#include "CAST_L_TRAININT_to_int_TM_conversions.h"
#include "CAST_V_TRAIN_to_int_TM_conversions.h"
#include "CAST_Q_DIRTRAIN_to_int_TM_conversions.h"
#include "CAST_M_MODE_to_int_TM_conversions.h"
#include "CAST_M_LEVEL_to_int_TM_conversions.h"
#include "CAST_NID_NTC_to_int_TM_conversions.h"
#include "CAST_D_LRBG_to_int_TM_conversions.h"
#include "Encode_NID_PACKET_TM_TrainToTrack.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P000_TrainTrack_int_TM_TrainToTrack /* TM_TrainToTrack::C_P000_train_compr::P000_int */ P000_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_NID_NTC_to_int_TM_conversions /* 1 */ _15_Context_1;
  outC_CAST_M_LEVEL_to_int_TM_conversions /* 1 */ _14_Context_1;
  outC_CAST_M_MODE_to_int_TM_conversions /* 1 */ _13_Context_1;
  outC_CAST_Q_DIRTRAIN_to_int_TM_conversions /* 1 */ _12_Context_1;
  outC_CAST_V_TRAIN_to_int_TM_conversions /* 1 */ _11_Context_1;
  outC_CAST_L_TRAININT_to_int_TM_conversions /* 1 */ _10_Context_1;
  outC_CAST_Q_LENGTH_to_int_TM_conversions /* 1 */ _9_Context_1;
  outC_CAST_L_DOUBTUNDER_to_int_TM_conversions /* 1 */ _8_Context_1;
  outC_CAST_L_DOUBTOVER_to_int_TM_conversions /* 2 */ _7_Context_2;
  outC_CAST_Q_DRLRBG_to_int_TM_conversions /* 2 */ _6_Context_2;
  outC_CAST_Q_DIRLRBG_to_int_TM_conversions /* 1 */ _5_Context_1;
  outC_CAST_NID_LRBG_to_int_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_Q_SCALE_to_int_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_L_PACKET_to_int_TM_conversions /* 1 */ _2_Context_1;
  outC_Encode_NID_PACKET_TM_TrainToTrack /* 2 */ Context_2;
  outC_CAST_NID_PACKET_to_int_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_D_LRBG_to_int_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P000_TM_TrainToTrack /* TM_TrainToTrack::C_P000_train_compr::_L1 */ _L1;
  M_LEVEL /* TM_TrainToTrack::C_P000_train_compr::_L16 */ _L16;
  M_MODE /* TM_TrainToTrack::C_P000_train_compr::_L15 */ _L15;
  Q_DIRTRAIN /* TM_TrainToTrack::C_P000_train_compr::_L14 */ _L14;
  V_TRAIN /* TM_TrainToTrack::C_P000_train_compr::_L13 */ _L13;
  L_TRAININT /* TM_TrainToTrack::C_P000_train_compr::_L12 */ _L12;
  Q_LENGTH /* TM_TrainToTrack::C_P000_train_compr::_L11 */ _L11;
  L_DOUBTUNDER /* TM_TrainToTrack::C_P000_train_compr::_L10 */ _L10;
  L_DOUBTOVER /* TM_TrainToTrack::C_P000_train_compr::_L9 */ _L9;
  Q_DLRBG /* TM_TrainToTrack::C_P000_train_compr::_L8 */ _L8;
  Q_DIRLRBG /* TM_TrainToTrack::C_P000_train_compr::_L7 */ _L7;
  NID_LRBG /* TM_TrainToTrack::C_P000_train_compr::_L6 */ _L6;
  Q_SCALE /* TM_TrainToTrack::C_P000_train_compr::_L5 */ _L5;
  L_PACKET /* TM_TrainToTrack::C_P000_train_compr::_L4 */ _L4;
  NID_PACKET /* TM_TrainToTrack::C_P000_train_compr::_L3 */ _L3;
  kcg_bool /* TM_TrainToTrack::C_P000_train_compr::_L2 */ _L2;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L69 */ _L69;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L70 */ _L70;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L71 */ _L71;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L72 */ _L72;
  NID_NTC /* TM_TrainToTrack::C_P000_train_compr::_L73 */ _L73;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L74 */ _L74;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L75 */ _L75;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L77 */ _L77;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L78 */ _L78;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L79 */ _L79;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L80 */ _L80;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L81 */ _L81;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L82 */ _L82;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L83 */ _L83;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L84 */ _L84;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L85 */ _L85;
  array_int_17 /* TM_TrainToTrack::C_P000_train_compr::_L68 */ _L68;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L91 */ _L91;
  D_LRBG /* TM_TrainToTrack::C_P000_train_compr::_L92 */ _L92;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L93 */ _L93;
  kcg_int /* TM_TrainToTrack::C_P000_train_compr::_L94 */ _L94;
} outC_C_P000_train_compr_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_P000_train_compr */
extern void C_P000_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P000_train_compr::P000_in */P000_TM_TrainToTrack *P000_in,
  outC_C_P000_train_compr_TM_TrainToTrack *outC);

extern void C_P000_train_compr_reset_TM_TrainToTrack(
  outC_C_P000_train_compr_TM_TrainToTrack *outC);

#endif /* _C_P000_train_compr_TM_TrainToTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P000_train_compr_TM_TrainToTrack.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

