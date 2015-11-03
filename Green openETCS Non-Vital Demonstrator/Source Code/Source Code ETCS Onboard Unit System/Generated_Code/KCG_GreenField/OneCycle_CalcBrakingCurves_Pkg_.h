/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _OneCycle_CalcBrakingCurves_Pkg
#define _OneCycle_CalcBrakingCurves_Pkg

#include "kcg_types.h"
#include "FormularNewSpeed_CalcBrakingCur.h"
#include "FormularNewPosition_CalcBraking.h"
#include "nextIndex_CalcBrakingCurves_Pkg.h"
#include "getAFromAsafeByIndex_CalcBrakin.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::OneCycle */
extern void OneCycle_CalcBrakingCurves_Pkg_(
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentDistance */ L_internal_real_Type_SDM_Types_ currentDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentSpeed */ V_internal_real_Type_SDM_Types_ currentSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentDistanceIndex */ kcg_int currentDistanceIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentSpeedIndex */ kcg_int currentSpeedIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::backwardCalculation */ kcg_bool backwardCalculation,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::inAsafe */ ASafe_T_CalcBrakingCurves_types *inAsafe,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newDistance */ L_internal_real_Type_SDM_Types_ *newDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeed */ V_internal_real_Type_SDM_Types_ *newSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newDistanceIndex */ kcg_int *newDistanceIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeedIndex */ kcg_int *newSpeedIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newArc */ ParabolaArc_T_CalcBrakingCurves *newArc);

#endif /* _OneCycle_CalcBrakingCurves_Pkg */
/* $**************** KCG Version 6.4 (build i21) ****************
** OneCycle_CalcBrakingCurves_Pkg_.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */

