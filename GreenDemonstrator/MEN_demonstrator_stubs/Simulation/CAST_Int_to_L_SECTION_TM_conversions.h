/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _CAST_Int_to_L_SECTION_TM_conversions_H_
#define _CAST_Int_to_L_SECTION_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_SECTION /* TM_conversions::CAST_Int_to_L_SECTION::l_section */ l_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_L_SECTION::_L1 */ _L1;
  kcg_bool /* TM_conversions::CAST_Int_to_L_SECTION::_L9 */ _L9;
  kcg_bool /* TM_conversions::CAST_Int_to_L_SECTION::_L8 */ _L8;
  kcg_int /* TM_conversions::CAST_Int_to_L_SECTION::_L10 */ _L10;
  kcg_int /* TM_conversions::CAST_Int_to_L_SECTION::_L11 */ _L11;
} outC_CAST_Int_to_L_SECTION_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_L_SECTION */
extern void CAST_Int_to_L_SECTION_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_SECTION::l_section_int */kcg_int l_section_int,
  outC_CAST_Int_to_L_SECTION_TM_conversions *outC);

extern void CAST_Int_to_L_SECTION_reset_TM_conversions(
  outC_CAST_Int_to_L_SECTION_TM_conversions *outC);

#endif /* _CAST_Int_to_L_SECTION_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_L_SECTION_TM_conversions.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

