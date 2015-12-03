/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _CAST_Q_DRLRBG_to_int_TM_conversions_H_
#define _CAST_Q_DRLRBG_to_int_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_conversions::CAST_Q_DRLRBG_to_int::q_drlrbg_int */ q_drlrbg_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else */ _1_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::then::_L5 */ _L5_IfBlock1;
  kcg_int /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else::else::then::_L4 */ _L43_IfBlock1;
  kcg_int /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else::else::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else::else::else::_L1 */ _L1_IfBlock1;
  kcg_int /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else::else::else::_L2 */ _L24_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else::else */ else_clock_IfBlock1;
  kcg_int /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else::then::_L5 */ _L52_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Q_DRLRBG_to_int::error */ error;
  Q_DLRBG /* TM_conversions::CAST_Q_DRLRBG_to_int::q_drlrbg_in */ q_drlrbg_in;
  kcg_bool /* TM_conversions::CAST_Q_DRLRBG_to_int::_L13 */ _L13;
  Q_DLRBG /* TM_conversions::CAST_Q_DRLRBG_to_int::_L12 */ _L12;
} outC_CAST_Q_DRLRBG_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Q_DRLRBG_to_int */
extern void CAST_Q_DRLRBG_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_DRLRBG_to_int::q_drlrbg */Q_DLRBG q_drlrbg,
  outC_CAST_Q_DRLRBG_to_int_TM_conversions *outC);

extern void CAST_Q_DRLRBG_to_int_reset_TM_conversions(
  outC_CAST_Q_DRLRBG_to_int_TM_conversions *outC);

#endif /* _CAST_Q_DRLRBG_to_int_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Q_DRLRBG_to_int_TM_conversions.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

