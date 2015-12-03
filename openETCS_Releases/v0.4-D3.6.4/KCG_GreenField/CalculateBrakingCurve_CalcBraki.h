/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _CalculateBrakingCurve_CalcBrak
#define _CalculateBrakingCurve_CalcBrak

#include "kcg_types.h"
#include "emptyBCAcc_CalcBrakingCurves_Pk.h"
#include "BCFoldOperatorBackward_CalcBrak.h"
#include "InitalValues_CalcBrakingCurves_.h"
#include "SortByDistances_CalcBrakingCurv.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
extern void CalculateBrakingCurve_CalcBraki(
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Target */ Target_real_T_TargetManagement_ *Target,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::d_est_front */ L_internal_real_Type_SDM_Types_ d_est_front,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::cond */ kcg_bool *cond,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::BC */ ParabolaCurve_T_CalcBrakingCurv *BC);

#endif /* _CalculateBrakingCurve_CalcBrak */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateBrakingCurve_CalcBraki.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */

