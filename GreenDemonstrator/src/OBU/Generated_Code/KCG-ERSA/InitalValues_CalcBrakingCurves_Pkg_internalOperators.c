/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitalValues_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitalValues */
void InitalValues_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::target */ Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::BCAcc */ BCAccumulator_type_CalcBrakingCurves_Pkg *BCAcc)
{
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues */ L_internal_real_Type_SDM_Types_Pkg tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::targetIsMRSPorLOA */ kcg_bool targetIsMRSPorLOA;
  
  targetIsMRSPorLOA = /* isMRSPorLOATarget */
    isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators(target);
  /* 4 */ if (targetIsMRSPorLOA) {
    tmp = /* CalculateEBDFootForMRSPorLOA */
      CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators(
        targetIsMRSPorLOA,
        target,
        aSafe);
  }
  else {
    tmp = (*target).distance;
  }
  /* InitAccWithTargetArc */
  InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators(
    tmp,
    target,
    aSafe,
    BCAcc);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InitalValues_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

