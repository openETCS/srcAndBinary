/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortByDistances_CalcBrakingCurv.h"

/* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
void SortByDistances_CalcBrakingCurv(
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::reverseBC */ ParabolaCurve_T_CalcBrakingCurv *reverseBC,
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::sortedBC */ ParabolaCurve_T_CalcBrakingCurv *sortedBC)
{
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
  static ParabolaCurveSpeeds_T_CalcBraki tmp2;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
  static ParabolaCurveAccelerations_T_Ca tmp1;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
  static ParabolaCurveValid_T_CalcBrakin tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
  static ParabolaCurve_T_CalcBrakingCurv acc;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
  static kcg_bool cond_iterw;
  static kcg_int i;
  
  for (i = 0; i < 114; i++) {
    (*sortedBC).distances[i] = (*reverseBC).distances[113 - i];
    tmp2[i] = (*reverseBC).speeds[113 - i];
    tmp1[i] = (*reverseBC).accelerations[113 - i];
    tmp[i] = (*reverseBC).valid[113 - i];
  }
  kcg_copy_ParabolaCurveSpeeds_T_(&(*sortedBC).speeds, &tmp2);
  kcg_copy_ParabolaCurveAccelerat(&(*sortedBC).accelerations, &tmp1);
  kcg_copy_ParabolaCurveValid_T_C(&(*sortedBC).valid, &tmp);
  for (i = 0; i < 114; i++) {
    kcg_copy_ParabolaCurve_T_CalcBr(&acc, sortedBC);
    /* 1 */ deleteLeadingUndefinedElements_(&acc, &cond_iterw, sortedBC);
    if (!cond_iterw) {
      break;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SortByDistances_CalcBrakingCurv.c
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

