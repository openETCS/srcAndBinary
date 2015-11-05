/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */
#ifndef _d_EBI_non_est_TargetLimits_Pkg
#define _d_EBI_non_est_TargetLimits_Pkg

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingC.h"
#include "f_41_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::d_EBI_non_est */
extern void d_EBI_non_est_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_EBI_non_est::V */ V_internal_real_Type_SDM_Types_ V,
  /* TargetLimits_Pkg::d_EBI_non_est::EBDcurve */ ParabolaCurve_T_CalcBrakingCurv *EBDcurve,
  /* TargetLimits_Pkg::d_EBI_non_est::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_EBI_non_est::D_SBI2 */ L_internal_real_Type_SDM_Types_ *D_SBI2,
  /* TargetLimits_Pkg::d_EBI_non_est::valid */ kcg_bool *valid);

#endif /* _d_EBI_non_est_TargetLimits_Pkg */
/* $**************** KCG Version 6.4 (build i21) ****************
** d_EBI_non_est_TargetLimits_Pkg.h
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */

