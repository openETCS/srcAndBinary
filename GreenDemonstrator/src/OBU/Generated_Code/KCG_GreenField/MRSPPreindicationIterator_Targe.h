/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */
#ifndef _MRSPPreindicationIterator_Targ
#define _MRSPPreindicationIterator_Targ

#include "kcg_types.h"
#include "d_I_MRSP_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::MRSPPreindicationIterator */
extern void MRSPPreindicationIterator_Targe(
  /* TargetLimits_Pkg::MRSPPreindicationIterator::i */ kcg_int i,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_preindication_mix */ MRSP_internal_section_T_TargetM *MRSP_preindication_mix,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_sect_n */ MRSP_internal_section_T_TargetM *MRSP_sect_n,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::EBDcurve */ ParabolaCurve_T_CalcBrakingCurv *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::GUIcurve */ ParabolaCurve_T_CalcBrakingCurv *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::goOn */ kcg_bool *goOn,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_preindication_next */ MRSP_internal_section_T_TargetM *MRSP_preindication_next);

#endif /* _MRSPPreindicationIterator_Targ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MRSPPreindicationIterator_Targe.h
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */

