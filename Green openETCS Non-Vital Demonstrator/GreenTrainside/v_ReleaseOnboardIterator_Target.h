/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */
#ifndef _v_ReleaseOnboardIterator_Targe
#define _v_ReleaseOnboardIterator_Targe

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingC.h"
#include "getSpeedOnCurve_CalcBrakingCurv.h"
#include "f_41_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::v_ReleaseOnboardIterator */
extern void v_ReleaseOnboardIterator_Target(
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_release */ V_internal_real_Type_SDM_Types_ V_release,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::EBDcurve */ ParabolaCurve_T_CalcBrakingCurv *EBDcurve,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_ura */ V_internal_real_Type_SDM_Types_ V_ura,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_target */ V_internal_real_Type_SDM_Types_ V_target,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::D_tripEOA */ L_internal_real_Type_SDM_Types_ D_tripEOA,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::run_condition */ kcg_bool *run_condition,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_release_next */ V_internal_real_Type_SDM_Types_ *V_release_next);

#endif /* _v_ReleaseOnboardIterator_Targe */
/* $**************** KCG Version 6.4 (build i21) ****************
** v_ReleaseOnboardIterator_Target.h
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */

