/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _d_RSM_start_TargetLimits_Pkg_H
#define _d_RSM_start_TargetLimits_Pkg_H

#include "kcg_types.h"
#include "isLEValid_TargetLimits_Pkg.h"
#include "d_SBI1_TargetLimits_Pkg.h"
#include "d_EBI_non_est_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::d_RSM_start */
extern void d_RSM_start_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_RSM_start::V_release */ V_internal_real_Type_SDM_Types_ V_release,
  /* TargetLimits_Pkg::d_RSM_start::EBDcurve */ ParabolaCurve_T_CalcBrakingCurv *EBDcurve,
  /* TargetLimits_Pkg::d_RSM_start::SBDcurve */ ParabolaCurve_T_CalcBrakingCurv *SBDcurve,
  /* TargetLimits_Pkg::d_RSM_start::d_maxsafefront */ L_internal_real_Type_SDM_Types_ d_maxsafefront,
  /* TargetLimits_Pkg::d_RSM_start::d_est */ L_internal_real_Type_SDM_Types_ d_est,
  /* TargetLimits_Pkg::d_RSM_start::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_RSM_start::D_FLOI */ L_internal_real_Type_SDM_Types_ *D_FLOI,
  /* TargetLimits_Pkg::d_RSM_start::D_SBI2 */ L_internal_real_Type_SDM_Types_ *D_SBI2,
  /* TargetLimits_Pkg::d_RSM_start::D_SBI1 */ L_internal_real_Type_SDM_Types_ *D_SBI1,
  /* TargetLimits_Pkg::d_RSM_start::valid_SBI2 */ kcg_bool *valid_SBI2,
  /* TargetLimits_Pkg::d_RSM_start::valid_SBI1 */ kcg_bool *valid_SBI1);

#endif /* _d_RSM_start_TargetLimits_Pkg_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** d_RSM_start_TargetLimits_Pkg.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

