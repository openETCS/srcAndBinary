/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */
#ifndef _InitAccWithTargetArc_CalcBraki
#define _InitAccWithTargetArc_CalcBraki

#include "kcg_types.h"
#include "setArc_CalcBrakingCurves_Pkg_in.h"
#include "getAFromAsafeByIndex_CalcBrakin.h"
#include "getDistanceStepFromDistance_Cal.h"
#include "getSpeedStepFromSpeed_CalcBraki.h"
#include "makeEmptyParabolaCurve_CalcBrak.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
extern void InitAccWithTargetArc_CalcBrakin(
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::EBDfoot */ L_internal_real_Type_SDM_Types_ EBDfoot,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::target */ Target_real_T_TargetManagement_ *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::Output1 */ BCAccumulator_type_CalcBrakingC *Output1);

#endif /* _InitAccWithTargetArc_CalcBraki */
/* $**************** KCG Version 6.4 (build i21) ****************
** InitAccWithTargetArc_CalcBrakin.h
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */

