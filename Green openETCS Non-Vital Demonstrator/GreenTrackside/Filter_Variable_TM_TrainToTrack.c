/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Filter_Variable_TM_TrainToTrack.h"

/* TM_TrainToTrack::Filter_Variable */
kcg_int Filter_Variable_TM_TrainToTrack(
  /* TM_TrainToTrack::Filter_Variable::valid */ kcg_bool valid,
  /* TM_TrainToTrack::Filter_Variable::int_in */ kcg_int int_in)
{
  /* TM_TrainToTrack::Filter_Variable::int_out */
  static kcg_int int_out;
  
  /* 1 */ if (valid) {
    int_out = int_in;
  }
  else {
    int_out = INVALID_VARIABLE_TM_TrainToTrac;
  }
  return int_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Filter_Variable_TM_TrainToTrack.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

