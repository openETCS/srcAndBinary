/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */
#ifndef _surplusTractionDeltas_TargetLi
#define _surplusTractionDeltas_TargetLi

#include "kcg_types.h"
#include "limitPositive_SDM_Types_Pkg.h"
#include "TransformA_intToA_real_SDM_Type.h"
#include "TransformV_odoToV_real_SDM_Type.h"
#include "TransformT_intToT_real_SDM_Type.h"
#include "splitT_bs_TargetLimits_Pkg.h"
#include "calcBec_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::surplusTractionDeltas */
extern void surplusTractionDeltas_TargetLim(
  /* TargetLimits_Pkg::surplusTractionDeltas::trainData_int */ trainData_internal_t_SDM_Types_ *trainData_int,
  /* TargetLimits_Pkg::surplusTractionDeltas::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_target */ V_internal_real_Type_SDM_Types_ V_target,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_part */ T_trac_t_TargetLimits_Pkg *T_part,
  /* TargetLimits_Pkg::surplusTractionDeltas::bec */ bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_est */ V_internal_real_Type_SDM_Types_ *V_est,
  /* TargetLimits_Pkg::surplusTractionDeltas::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_ura */ V_internal_real_Type_SDM_Types_ *V_ura);

#endif /* _surplusTractionDeltas_TargetLi */
/* $**************** KCG Version 6.4 (build i21) ****************
** surplusTractionDeltas_TargetLim.h
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */

