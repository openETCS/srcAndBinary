/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_ENGINE_to_int_TM_conversions.h"

void CAST_NID_ENGINE_to_int_reset_TM_conversions(
  outC_CAST_NID_ENGINE_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_NID_ENGINE_to_int */
void CAST_NID_ENGINE_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_ENGINE_to_int::nid_ctraction */NID_CTRACTION nid_ctraction,
  outC_CAST_NID_ENGINE_to_int_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L11 = 0;
  outC->_L10 = 16777215;
  outC->_L1 = nid_ctraction;
  outC->_L9 = outC->_L1 > outC->_L10;
  outC->_L8 = outC->_L1 < outC->_L11;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->nid_ctraction_int = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NID_ENGINE_to_int_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

