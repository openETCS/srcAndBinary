/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateBrakingCurve_CalcBraki.h"

/* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
void CalculateBrakingCurve_CalcBraki(
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Target */ Target_real_T_TargetManagement_ *Target,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::d_est_front */ L_internal_real_Type_SDM_Types_ d_est_front,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::cond */ kcg_bool *cond,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::BC */ ParabolaCurve_T_CalcBrakingCurv *BC)
{
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
  static BCAccumulator_type_CalcBrakingC acc;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L19 */
  static BCAccumulator_type_CalcBrakingC _L19;
  
  *cond = invalid_TargetManagement_types != (*Target).targetType;
  if (*cond) {
    /* InitalValues */ InitalValues_CalcBrakingCurves_(Target, Asafe, &_L19);
    for (i = 0; i < 113; i++) {
      kcg_copy_BCAccumulator_type_Cal(&acc, &_L19);
      /* 1 */
      BCFoldOperatorBackward_CalcBrak(
        i,
        &acc,
        Asafe,
        d_est_front,
        &cond_iterw,
        &_L19);
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    /* emptyBCAcc */ emptyBCAcc_CalcBrakingCurves_Pk(&_L19);
  }
  /* SortByDistances */ SortByDistances_CalcBrakingCurv(&_L19.BC, BC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateBrakingCurve_CalcBraki.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

