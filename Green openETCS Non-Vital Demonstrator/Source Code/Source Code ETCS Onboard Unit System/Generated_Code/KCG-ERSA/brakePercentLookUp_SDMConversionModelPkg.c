/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePercentLookUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePercentLookUp */
void brakePercentLookUp_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakePercentLookUp::lambda0 */ kcg_int lambda0,
  /* SDMConversionModelPkg::brakePercentLookUp::av */ av_Map_t_SDMConversionModelPkg *av)
{
  /* SDMConversionModelPkg::brakePercentLookUp */ kcg_int tmp2;
  /* SDMConversionModelPkg::brakePercentLookUp */ kcg_int tmp1;
  /* SDMConversionModelPkg::brakePercentLookUp */ kcg_int tmp;
  /* SDMConversionModelPkg::brakePercentLookUp::V_lim */ kcg_int V_lim;
  /* SDMConversionModelPkg::brakePercentLookUp::_L96 */ kcg_bool _L96;
  /* SDMConversionModelPkg::brakePercentLookUp::_L101 */ kcg_bool _L101;
  /* SDMConversionModelPkg::brakePercentLookUp::_L102 */ kcg_bool _L102;
  
  tmp = lambda0 - cBrakePercentStepsMin_SDMConversionModelPkg;
  if ((0 <= tmp) & (tmp < 221)) {
    V_lim = cBrakePercentSpeedLookup_SDMConversionModelPkg[tmp];
    kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(
      &(*av).a,
      (a_BrakeSteps_t_SDMConversionModelPkg *)
        &cBrakePercentALookup_SDMConversionModelPkg[tmp]);
  }
  else {
    V_lim = cBrakePercentSpeedLookup_SDMConversionModelPkg[0];
    kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(
      &(*av).a,
      (a_BrakeSteps_t_SDMConversionModelPkg *)
        &cBrakePercentALookup_SDMConversionModelPkg[0]);
  }
  _L96 = V_lim <= cBrakePercentV_lim_SDMConversionModelPkg[0];
  _L101 = V_lim <= cBrakePercentV_lim_SDMConversionModelPkg[1];
  _L102 = V_lim <= cBrakePercentV_lim_SDMConversionModelPkg[2];
  (*av).v[0] = 0;
  (*av).v[1] = V_lim;
  /* 10 */ if (_L96) {
    (*av).v[2] = cBrakePercentV_lim_SDMConversionModelPkg[0];
    tmp2 = cBrakePercentV_lim_SDMConversionModelPkg[1];
    tmp1 = cBrakePercentV_lim_SDMConversionModelPkg[2];
    tmp = cBrakePercentV_lim_SDMConversionModelPkg[3];
  }
  else {
    /* 9 */ if (_L101) {
      (*av).v[2] = cBrakePercentV_lim_SDMConversionModelPkg[1];
      tmp2 = cBrakePercentV_lim_SDMConversionModelPkg[2];
      tmp1 = cBrakePercentV_lim_SDMConversionModelPkg[3];
    }
    else {
      /* 8 */ if (_L102) {
        (*av).v[2] = cBrakePercentV_lim_SDMConversionModelPkg[2];
        tmp2 = cBrakePercentV_lim_SDMConversionModelPkg[3];
      }
      else {
        /* 7 */ if (V_lim <= cBrakePercentV_lim_SDMConversionModelPkg[3]) {
          (*av).v[2] = cBrakePercentV_lim_SDMConversionModelPkg[3];
        }
        else {
          (*av).v[2] = 0;
        }
        tmp2 = 0;
      }
      tmp1 = 0;
    }
    tmp = 0;
  }
  (*av).v[3] = tmp2;
  (*av).v[4] = tmp1;
  (*av).v[5] = tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakePercentLookUp_SDMConversionModelPkg.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

