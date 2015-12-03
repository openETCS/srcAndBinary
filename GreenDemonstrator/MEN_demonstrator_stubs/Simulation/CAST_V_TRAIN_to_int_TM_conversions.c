/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_V_TRAIN_to_int_TM_conversions.h"

void CAST_V_TRAIN_to_int_reset_TM_conversions(
  outC_CAST_V_TRAIN_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_V_TRAIN_to_int */
void CAST_V_TRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_V_TRAIN_to_int::v_train */V_TRAIN v_train,
  outC_CAST_V_TRAIN_to_int_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L16 = 120;
  outC->_L1 = v_train;
  outC->_L12 = 5;
  outC->_L11 = outC->_L1 / outC->_L12;
  outC->_L13 = 0;
  outC->_L15 = outC->_L11 < outC->_L13;
  outC->_L14 = outC->_L11 > outC->_L16;
  _1_noname = outC->_L14;
  noname = outC->_L15;
  outC->v_train_int = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_V_TRAIN_to_int_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

