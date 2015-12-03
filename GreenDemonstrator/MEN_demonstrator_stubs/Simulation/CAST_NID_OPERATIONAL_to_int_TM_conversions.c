/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_OPERATIONAL_to_int_TM_conversions.h"

void CAST_NID_OPERATIONAL_to_int_reset_TM_conversions(
  outC_CAST_NID_OPERATIONAL_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_NID_OPERATIONAL_to_int */
void CAST_NID_OPERATIONAL_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_OPERATIONAL_to_int::nid_operational */NID_OPERATIONAL nid_operational,
  outC_CAST_NID_OPERATIONAL_to_int_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L5 = 0;
  outC->_L1 = nid_operational;
  outC->_L4 = outC->_L1 < outC->_L5;
  outC->_L3 = 99999999;
  outC->_L2 = outC->_L1 > outC->_L3;
  _1_noname = outC->_L2;
  noname = outC->_L4;
  outC->nid_operational_int = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NID_OPERATIONAL_to_int_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

