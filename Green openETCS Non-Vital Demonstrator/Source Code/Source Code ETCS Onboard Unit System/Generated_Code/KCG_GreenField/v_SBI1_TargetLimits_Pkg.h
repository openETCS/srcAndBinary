/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:16
*************************************************************$ */
#ifndef _v_SBI1_TargetLimits_Pkg_H_
#define _v_SBI1_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getSpeedOnCurve_CalcBrakingCurv.h"
#include "selectLEValid_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::v_SBI1 */
extern void v_SBI1_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI1::SBDcurve */ ParabolaCurve_T_CalcBrakingCurv *SBDcurve,
  /* TargetLimits_Pkg::v_SBI1::V_est */ V_internal_real_Type_SDM_Types_ V_est,
  /* TargetLimits_Pkg::v_SBI1::D_estfront */ L_internal_real_Type_SDM_Types_ D_estfront,
  /* TargetLimits_Pkg::v_SBI1::D_EOA */ L_internal_real_Type_SDM_Types_ D_EOA,
  /* TargetLimits_Pkg::v_SBI1::t_driver */ T_internal_real_Type_SDM_Types_ t_driver,
  /* TargetLimits_Pkg::v_SBI1::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::v_SBI1::GUIcurve */ ParabolaCurve_T_CalcBrakingCurv *GUIcurve,
  /* TargetLimits_Pkg::v_SBI1::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_SBI1::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::v_SBI1::V_SBI1 */ V_internal_real_Type_SDM_Types_ *V_SBI1);

#endif /* _v_SBI1_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** v_SBI1_TargetLimits_Pkg.h
** Generation date: 2015-12-07T14:50:16
*************************************************************$ */

