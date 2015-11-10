/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _CAST_Int_to_Q_LENGTH_TM_conversions_H_
#define _CAST_Int_to_Q_LENGTH_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_LENGTH /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length */ q_length;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else */ _2_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else */ _1_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::then::_L3 */ _L3_IfBlock1;
  Q_LENGTH /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else::then::_L4 */ _L4_IfBlock1;
  Q_LENGTH /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else::then::_L1 */ _L14_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else::else */ else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else::else::else::_L2 */ _L28_IfBlock1;
  Q_LENGTH /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else::else::else::_L1 */ _L17_IfBlock1;
  Q_LENGTH /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else::else::then::_L1 */ _L16_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else::else::then::_L3 */ _L35_IfBlock1;
  Q_LENGTH /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::then::_L3 */ _L33_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length_in */ q_length_in;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LENGTH::error */ error;
  kcg_int /* TM_conversions::CAST_Int_to_Q_LENGTH::_L2 */ _L2;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LENGTH::_L4 */ _L4;
} outC_CAST_Int_to_Q_LENGTH_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_Q_LENGTH */
extern void CAST_Int_to_Q_LENGTH_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length_int */kcg_int q_length_int,
  outC_CAST_Int_to_Q_LENGTH_TM_conversions *outC);

extern void CAST_Int_to_Q_LENGTH_reset_TM_conversions(
  outC_CAST_Int_to_Q_LENGTH_TM_conversions *outC);

#endif /* _CAST_Int_to_Q_LENGTH_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_LENGTH_TM_conversions.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

