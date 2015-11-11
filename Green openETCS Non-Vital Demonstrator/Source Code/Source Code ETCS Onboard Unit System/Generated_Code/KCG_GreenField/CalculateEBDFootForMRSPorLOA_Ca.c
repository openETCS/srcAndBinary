/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateEBDFootForMRSPorLOA_Ca.h"

/* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA */
L_internal_real_Type_SDM_Types_ CalculateEBDFootForMRSPorLOA_Ca(
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::IsMRSPorLOATarget */ kcg_bool IsMRSPorLOATarget,
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::target */ Target_real_T_TargetManagement_ *target,
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe)
{
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA */
  static BCAccumulator_type_CalcBrakingC acc;
  static kcg_int i;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA */
  static ParabolaCurve_T_CalcBrakingCurv tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L5 */
  static BCAccumulator_type_CalcBrakingC _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L10 */
  static kcg_bool _L10;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::EBDfoot */
  static L_internal_real_Type_SDM_Types_ EBDfoot;
  
  /* InitilizeAccForEBDFootCalc */
  InitilizeAccForEBDFootCalc_Calc(target, aSafe, &_L5);
  if (IsMRSPorLOATarget) {
    for (i = 0; i < 113; i++) {
      kcg_copy_BCAccumulator_type_Cal(&acc, &_L5);
      /* 1 */
      BCFoldOperatorForward_CalcBraki(
        i,
        &acc,
        aSafe,
        (*target).speed,
        &_L10,
        &_L5);
      if (!_L10) {
        break;
      }
    }
  }
  /* 1 */ SortByDistances_CalcBrakingCurv(&_L5.BC, &tmp);
  /* 1 */
  getLocationOnCurve_CalcBrakingC(&tmp, (*target).speed, &_L10, &EBDfoot);
  return EBDfoot;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateEBDFootForMRSPorLOA_Ca.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

