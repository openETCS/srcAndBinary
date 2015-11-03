/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _CalculateEBDFootForMRSPorLOA_C
#define _CalculateEBDFootForMRSPorLOA_C

#include "kcg_types.h"
#include "BCFoldOperatorForward_CalcBraki.h"
#include "SortByDistances_CalcBrakingCurv.h"
#include "InitilizeAccForEBDFootCalc_Calc.h"
#include "getLocationOnCurve_CalcBrakingC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA */
extern L_internal_real_Type_SDM_Types_ CalculateEBDFootForMRSPorLOA_Ca(
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::IsMRSPorLOATarget */ kcg_bool IsMRSPorLOATarget,
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::target */ Target_real_T_TargetManagement_ *target,
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe);

#endif /* _CalculateEBDFootForMRSPorLOA_C */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateEBDFootForMRSPorLOA_Ca.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

