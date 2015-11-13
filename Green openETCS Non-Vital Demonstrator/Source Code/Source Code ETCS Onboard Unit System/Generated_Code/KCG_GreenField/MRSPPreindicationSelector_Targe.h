/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */
#ifndef _MRSPPreindicationSelector_Targ
#define _MRSPPreindicationSelector_Targ

#include "kcg_types.h"
#include "MRSPPreindicationIterator_Targe.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::MRSPPreindicationSelector */
extern void MRSPPreindicationSelector_Targe(
  /* TargetLimits_Pkg::MRSPPreindicationSelector::MRSP */ MRSP_internal_T_TargetManagemen *MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::EBDcurve */ ParabolaCurve_T_CalcBrakingCurv *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::SBDcurve */ ParabolaCurve_T_CalcBrakingCurv *SBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurv *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::isEoA */ kcg_bool isEoA,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_preindication */ L_internal_real_Type_SDM_Types_ *D_preindication,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_I_V_MRSP */ L_internal_real_Type_SDM_Types_ *D_I_V_MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::valid */ kcg_bool *valid);

#endif /* _MRSPPreindicationSelector_Targ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MRSPPreindicationSelector_Targe.h
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */

