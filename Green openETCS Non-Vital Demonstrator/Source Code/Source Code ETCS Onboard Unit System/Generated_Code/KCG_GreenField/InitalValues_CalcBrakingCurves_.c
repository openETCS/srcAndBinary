/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitalValues_CalcBrakingCurves_.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitalValues */
void InitalValues_CalcBrakingCurves_(
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::target */ Target_real_T_TargetManagement_ *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::BCAcc */ BCAccumulator_type_CalcBrakingC *BCAcc)
{
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues */
  static L_internal_real_Type_SDM_Types_ tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::targetIsMRSPorLOA */
  static kcg_bool targetIsMRSPorLOA;
  
  targetIsMRSPorLOA = /* isMRSPorLOATarget */
    isMRSPorLOATarget_CalcBrakingCu(target);
  /* 4 */ if (targetIsMRSPorLOA) {
    tmp = /* CalculateEBDFootForMRSPorLOA */
      CalculateEBDFootForMRSPorLOA_Ca(targetIsMRSPorLOA, target, aSafe);
  }
  else {
    tmp = (*target).distance;
  }
  /* InitAccWithTargetArc */
  InitAccWithTargetArc_CalcBrakin(tmp, target, aSafe, BCAcc);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InitalValues_CalcBrakingCurves_.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

