/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */
#ifndef _InitilizeAccForEBDFootCalc_Cal
#define _InitilizeAccForEBDFootCalc_Cal

#include "kcg_types.h"
#include "dV_ebi_for_V_SDM_Types_Pkg.h"
#include "getDistanceStepFromDistance_Cal.h"
#include "getSpeedStepFromSpeed_CalcBraki.h"
#include "makeEmptyParabolaCurve_CalcBrak.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc */
extern void InitilizeAccForEBDFootCalc_Calc(
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::target */ Target_real_T_TargetManagement_ *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::BCACCForEBDFoot */ BCAccumulator_type_CalcBrakingC *BCACCForEBDFoot);

#endif /* _InitilizeAccForEBDFootCalc_Cal */
/* $**************** KCG Version 6.4 (build i21) ****************
** InitilizeAccForEBDFootCalc_Calc.h
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */

