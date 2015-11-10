/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */
#ifndef _InitalValues_CalcBrakingCurves
#define _InitalValues_CalcBrakingCurves

#include "kcg_types.h"
#include "isMRSPorLOATarget_CalcBrakingCu.h"
#include "CalculateEBDFootForMRSPorLOA_Ca.h"
#include "InitAccWithTargetArc_CalcBrakin.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::InitalValues */
extern void InitalValues_CalcBrakingCurves_(
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::target */ Target_real_T_TargetManagement_ *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::BCAcc */ BCAccumulator_type_CalcBrakingC *BCAcc);

#endif /* _InitalValues_CalcBrakingCurves */
/* $**************** KCG Version 6.4 (build i21) ****************
** InitalValues_CalcBrakingCurves_.h
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */

