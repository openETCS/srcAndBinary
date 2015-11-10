/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Filter_Variable_TM_TrainToTrack.h"

void Filter_Variable_reset_TM_TrainToTrack(
  outC_Filter_Variable_TM_TrainToTrack *outC)
{
}

/* TM_TrainToTrack::Filter_Variable */
void Filter_Variable_TM_TrainToTrack(
  /* TM_TrainToTrack::Filter_Variable::valid */kcg_bool valid,
  /* TM_TrainToTrack::Filter_Variable::int_in */kcg_int int_in,
  outC_Filter_Variable_TM_TrainToTrack *outC)
{
  outC->_L1 = valid;
  outC->_L2 = int_in;
  outC->_L3 = INVALID_VARIABLE_TM_TrainToTrack;
  if (outC->_L1) {
    outC->_L4 = outC->_L2;
  }
  else {
    outC->_L4 = outC->_L3;
  }
  outC->int_out = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Filter_Variable_TM_TrainToTrack.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

