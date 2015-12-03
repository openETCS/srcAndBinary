/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _C_compr_P000_TM_TrainToTrack_H_
#define _C_compr_P000_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_NTC_TM_conversions.h"
#include "CAST_Int_to_NID_LRBG_TM_conversions.h"
#include "CAST_Int_to_Q_DIRLRBG_TM_conversions.h"
#include "CAST_Int_to_Q_DRLRBG_TM_conversions.h"
#include "CAST_Int_to_L_DOUBTOVER_TM_conversions.h"
#include "CAST_Int_to_L_DOUBTUNDER_TM_conversions.h"
#include "CAST_Int_to_Q_LENGTH_TM_conversions.h"
#include "CAST_Int_to_L_TRAININT_TM_conversions.h"
#include "CAST_Int_to_V_TRAIN_TM_conversions.h"
#include "CAST_Int_to_Q_DIRTRAIN_TM_conversions.h"
#include "CAST_Int_to_M_MODE_TM_conversions.h"
#include "CAST_Int_to_M_LEVEL_TM_conversions.h"
#include "CAST_Int_to_D_LRBG_TM_conversions.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"
#include "Filter_Variable_TM_TrainToTrack.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P000_TM_TrainToTrack /* TM_TrainToTrack::C_compr_P000::P000_out */ P000_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_NTC_TM_conversions /* 1 */ _14_Context_1;
  outC_CAST_Int_to_M_LEVEL_TM_conversions /* 1 */ _13_Context_1;
  outC_CAST_Int_to_M_MODE_TM_conversions /* 1 */ _12_Context_1;
  outC_CAST_Int_to_Q_DIRTRAIN_TM_conversions /* 1 */ _11_Context_1;
  outC_CAST_Int_to_V_TRAIN_TM_conversions /* 1 */ _10_Context_1;
  outC_CAST_Int_to_L_TRAININT_TM_conversions /* 1 */ _9_Context_1;
  outC_CAST_Int_to_Q_LENGTH_TM_conversions /* 1 */ _8_Context_1;
  outC_CAST_Int_to_L_DOUBTUNDER_TM_conversions /* 1 */ _7_Context_1;
  outC_CAST_Int_to_L_DOUBTOVER_TM_conversions /* 1 */ _6_Context_1;
  outC_CAST_Int_to_Q_DRLRBG_TM_conversions /* 1 */ _5_Context_1;
  outC_CAST_Int_to_Q_DIRLRBG_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_Int_to_NID_LRBG_TM_conversions /* 1 */ _3_Context_1;
  outC_Filter_Variable_TM_TrainToTrack /* 1 */ _2_Context_1;
  outC_Filter_Variable_TM_TrainToTrack /* 2 */ Context_2;
  outC_Filter_Variable_TM_TrainToTrack /* 4 */ Context_4;
  outC_Filter_Variable_TM_TrainToTrack /* 3 */ Context_3;
  outC_Filter_Variable_TM_TrainToTrack /* 6 */ Context_6;
  outC_Filter_Variable_TM_TrainToTrack /* 5 */ Context_5;
  outC_Filter_Variable_TM_TrainToTrack /* 8 */ Context_8;
  outC_Filter_Variable_TM_TrainToTrack /* 7 */ Context_7;
  outC_Filter_Variable_TM_TrainToTrack /* 10 */ Context_10;
  outC_Filter_Variable_TM_TrainToTrack /* 9 */ Context_9;
  outC_Filter_Variable_TM_TrainToTrack /* 12 */ Context_12;
  outC_Filter_Variable_TM_TrainToTrack /* 11 */ Context_11;
  outC_Filter_Variable_TM_TrainToTrack /* 14 */ Context_14;
  outC_Filter_Variable_TM_TrainToTrack /* 13 */ Context_13;
  outC_Filter_Variable_TM_TrainToTrack /* 16 */ Context_16;
  outC_CAST_Int_to_D_LRBG_TM_conversions /* 1 */ _1_Context_1;
  outC_Filter_Variable_TM_TrainToTrack /* 17 */ Context_17;
  outC_Decode_NID_PACKET_TM_TrainToTrack /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ _20_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */ _L3_122_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */ _L2_121_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */ _L1_119_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */ _L1_118_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */ _L2_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ else_clock_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */ _L1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */ _L3_1_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */ q_scale_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::error */ error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */ _L2_117;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */ _L4_116;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ q_scale_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */ q_scale_int_1;
  kcg_int /* TM_conversions::CAST_Int_to_L_PACKET::_L1 */ _L1_115;
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
  P000_TrainTrack_int_TM_TrainToTrack /* TM_TrainToTrack::C_compr_P000::_L1 */ _L1;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L16 */ _L16;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L15 */ _L15;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L14 */ _L14;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L13 */ _L13;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L12 */ _L12;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L11 */ _L11;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L10 */ _L10;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L9 */ _L9;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L8 */ _L8;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L7 */ _L7;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L6 */ _L6;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L5 */ _L5;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L4 */ _L4;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L3 */ _L3;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L2 */ _L2;
  NID_PACKET /* TM_TrainToTrack::C_compr_P000::_L69 */ _L69;
  L_PACKET /* TM_TrainToTrack::C_compr_P000::_L70 */ _L70;
  Q_SCALE /* TM_TrainToTrack::C_compr_P000::_L71 */ _L71;
  NID_LRBG /* TM_TrainToTrack::C_compr_P000::_L72 */ _L72;
  Q_DIRLRBG /* TM_TrainToTrack::C_compr_P000::_L74 */ _L74;
  Q_DLRBG /* TM_TrainToTrack::C_compr_P000::_L75 */ _L75;
  L_DOUBTOVER /* TM_TrainToTrack::C_compr_P000::_L77 */ _L77;
  L_DOUBTUNDER /* TM_TrainToTrack::C_compr_P000::_L78 */ _L78;
  Q_LENGTH /* TM_TrainToTrack::C_compr_P000::_L79 */ _L79;
  L_TRAININT /* TM_TrainToTrack::C_compr_P000::_L80 */ _L80;
  V_TRAIN /* TM_TrainToTrack::C_compr_P000::_L81 */ _L81;
  Q_DIRTRAIN /* TM_TrainToTrack::C_compr_P000::_L82 */ _L82;
  M_MODE /* TM_TrainToTrack::C_compr_P000::_L83 */ _L83;
  M_LEVEL /* TM_TrainToTrack::C_compr_P000::_L84 */ _L84;
  NID_NTC /* TM_TrainToTrack::C_compr_P000::_L85 */ _L85;
  P000_TM_TrainToTrack /* TM_TrainToTrack::C_compr_P000::_L86 */ _L86;
  kcg_bool /* TM_TrainToTrack::C_compr_P000::_L88 */ _L88;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L90 */ _L90;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L91 */ _L91;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L93 */ _L93;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L92 */ _L92;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L95 */ _L95;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L94 */ _L94;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L97 */ _L97;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L96 */ _L96;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L99 */ _L99;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L98 */ _L98;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L101 */ _L101;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L100 */ _L100;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L103 */ _L103;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L102 */ _L102;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L104 */ _L104;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L105 */ _L105;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L106 */ _L106;
  D_LRBG /* TM_TrainToTrack::C_compr_P000::_L107 */ _L107;
  kcg_int /* TM_TrainToTrack::C_compr_P000::_L108 */ _L108;
} outC_C_compr_P000_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_compr_P000 */
extern void C_compr_P000_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P000::P000_in */P000_TrainTrack_int_TM_TrainToTrack *P000_in,
  outC_C_compr_P000_TM_TrainToTrack *outC);

extern void C_compr_P000_reset_TM_TrainToTrack(
  outC_C_compr_P000_TM_TrainToTrack *outC);

#endif /* _C_compr_P000_TM_TrainToTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_compr_P000_TM_TrainToTrack.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

