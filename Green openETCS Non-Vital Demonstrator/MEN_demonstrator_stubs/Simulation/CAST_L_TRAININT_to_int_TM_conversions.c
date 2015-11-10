/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_TRAININT_to_int_TM_conversions.h"

void CAST_L_TRAININT_to_int_reset_TM_conversions(
  outC_CAST_L_TRAININT_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_L_TRAININT_to_int */
void CAST_L_TRAININT_to_int_TM_conversions(
  /* TM_conversions::CAST_L_TRAININT_to_int::l_trainint */L_TRAININT l_trainint,
  outC_CAST_L_TRAININT_to_int_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L15 = DIM_L_TRAININT_max_TM_conversions;
  outC->_L14 = DIM_L_TRAININT_min_TM_conversions;
  outC->_L1 = l_trainint;
  outC->l_trainint_int = outC->_L1;
  outC->_L9 = outC->_L1 > outC->_L15;
  outC->_L8 = outC->_L1 < outC->_L14;
  _1_noname = outC->_L8;
  noname = outC->_L9;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_L_TRAININT_to_int_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

