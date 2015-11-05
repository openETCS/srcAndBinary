/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */
#ifndef _calcBec_TargetLimits_Pkg_H_
#define _calcBec_TargetLimits_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::calcBec */
extern void calcBec_TargetLimits_Pkg(
  /* TargetLimits_Pkg::calcBec::V_dt */ TractionDeltaTriple_TargetLimit *V_dt,
  /* TargetLimits_Pkg::calcBec::V_target */ V_internal_real_Type_SDM_Types_ V_target,
  /* TargetLimits_Pkg::calcBec::V_est */ V_internal_real_Type_SDM_Types_ V_est,
  /* TargetLimits_Pkg::calcBec::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::calcBec::bec */ bec_t_TargetLimits_Pkg *bec);

#endif /* _calcBec_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** calcBec_TargetLimits_Pkg.h
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */

