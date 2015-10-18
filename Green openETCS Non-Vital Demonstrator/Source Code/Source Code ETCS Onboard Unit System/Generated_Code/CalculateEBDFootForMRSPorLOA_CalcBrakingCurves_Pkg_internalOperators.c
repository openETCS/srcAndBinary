/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA */
L_internal_real_Type_SDM_Types_Pkg CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::IsMRSPorLOATarget */ kcg_bool IsMRSPorLOATarget,
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::target */ Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe)
{
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA */
  static BCAccumulator_type_CalcBrakingCurves_Pkg acc;
  static kcg_int i;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA */
  static ParabolaCurve_T_CalcBrakingCurves_types tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L5 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L10 */
  static kcg_bool _L10;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::EBDfoot */
  static L_internal_real_Type_SDM_Types_Pkg EBDfoot;
  
  /* InitilizeAccForEBDFootCalc */
  InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators(
    target,
    aSafe,
    &_L5);
  if (IsMRSPorLOATarget) {
    for (i = 0; i < 113; i++) {
      kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&acc, &_L5);
      /* 1 */
      BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators(
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
  /* 1 */
  SortByDistances_CalcBrakingCurves_Pkg_internalOperators(&_L5.BC, &tmp);
  /* 1 */
  getLocationOnCurve_CalcBrakingCurves_types(
    &tmp,
    (*target).speed,
    &_L10,
    &EBDfoot);
  return EBDfoot;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

