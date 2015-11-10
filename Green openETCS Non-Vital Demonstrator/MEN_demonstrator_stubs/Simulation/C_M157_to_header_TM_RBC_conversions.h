/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _C_M157_to_header_TM_RBC_conversions_H_
#define _C_M157_to_header_TM_RBC_conversions_H_

#include "kcg_types.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"
#include "CAST_Q_STATUS_to_int_TM_conversions.h"
#include "CAST_L_MESSAGE_to_int_TM_conversions.h"
#include "CAST_NID_ENGINE_to_int_TM_conversions.h"
#include "CAST_T_TRAIN_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_MessageHd_T_TM_radio_messages /* TM_RBC_conversions::C_M157_to_header::Message_Header_Out */ Message_Header_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Q_STATUS_to_int_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_NID_MESSAGE_to_int_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_L_MESSAGE_to_int_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_NID_ENGINE_to_int_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_T_TRAIN_to_int_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_157_T_TM_radio_messages /* TM_RBC_conversions::C_M157_to_header::_L1 */ _L1;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* TM_RBC_conversions::C_M157_to_header::_L2 */ _L2;
  NID_ENGINE /* TM_RBC_conversions::C_M157_to_header::_L7 */ _L7;
  T_TRAIN /* TM_RBC_conversions::C_M157_to_header::_L6 */ _L6;
  L_MESSAGE /* TM_RBC_conversions::C_M157_to_header::_L5 */ _L5;
  NID_MESSAGE /* TM_RBC_conversions::C_M157_to_header::_L4 */ _L4;
  kcg_bool /* TM_RBC_conversions::C_M157_to_header::_L3 */ _L3;
  kcg_int /* TM_RBC_conversions::C_M157_to_header::_L19 */ _L19;
  Q_STATUS /* TM_RBC_conversions::C_M157_to_header::_L20 */ _L20;
  kcg_int /* TM_RBC_conversions::C_M157_to_header::_L21 */ _L21;
  kcg_int /* TM_RBC_conversions::C_M157_to_header::_L25 */ _L25;
  kcg_int /* TM_RBC_conversions::C_M157_to_header::_L24 */ _L24;
  kcg_int /* TM_RBC_conversions::C_M157_to_header::_L23 */ _L23;
  kcg_int /* TM_RBC_conversions::C_M157_to_header::_L22 */ _L22;
} outC_C_M157_to_header_TM_RBC_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions::C_M157_to_header */
extern void C_M157_to_header_TM_RBC_conversions(
  /* TM_RBC_conversions::C_M157_to_header::Message_Data_in */M_157_T_TM_radio_messages *Message_Data_in,
  outC_C_M157_to_header_TM_RBC_conversions *outC);

extern void C_M157_to_header_reset_TM_RBC_conversions(
  outC_C_M157_to_header_TM_RBC_conversions *outC);

#endif /* _C_M157_to_header_TM_RBC_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_M157_to_header_TM_RBC_conversions.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

