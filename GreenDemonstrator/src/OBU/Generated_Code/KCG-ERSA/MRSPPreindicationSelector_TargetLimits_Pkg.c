/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSPPreindicationSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::MRSPPreindicationSelector */
void MRSPPreindicationSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::MRSPPreindicationSelector::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::isEoA */ kcg_bool isEoA,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_preindication */ L_internal_real_Type_SDM_Types_Pkg *D_preindication,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_I_V_MRSP */ L_internal_real_Type_SDM_Types_Pkg *D_I_V_MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::valid */ kcg_bool *valid)
{
  /* TargetLimits_Pkg::MRSPPreindicationSelector */ MRSP_internal_section_T_TargetManagement_types acc;
  /* TargetLimits_Pkg::MRSPPreindicationSelector */ kcg_bool cond_iterw;
  kcg_int i;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L1 */ MRSP_internal_section_T_TargetManagement_types _L1;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L69 */ ParabolaCurve_T_CalcBrakingCurves_types _L69;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L75 */ T_trac_t_TargetLimits_Pkg _L75;
  
  _L1.Loc_Abs = 0.0;
  _L1.MRS = 0.0;
  _L1.valid = kcg_false;
  /* 2 */ if (isEoA) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L69, SBDcurve);
    kcg_copy_T_trac_t_TargetLimits_Pkg(&_L75, T);
    _L75.berem = 0.0;
    _L75.Traction = 0.0;
    _L75.bs2 = (*T).bs1;
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L69, EBDcurve);
    kcg_copy_T_trac_t_TargetLimits_Pkg(&_L75, T);
  }
  for (i = 0; i < 110; i++) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&acc, &_L1);
    /* 1 */
    MRSPPreindicationIterator_TargetLimits_Pkg(
      i,
      &acc,
      &(*MRSP)[i],
      &_L69,
      guiCurveEnabled,
      GUIcurve,
      &_L75,
      &cond_iterw,
      &_L1);
    if (!cond_iterw) {
      break;
    }
  }
  *valid = _L1.valid;
  *D_preindication = _L1.Loc_Abs;
  *D_I_V_MRSP = T_preindication_SDM_Types_Pkg * _L1.MRS + *D_preindication;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MRSPPreindicationSelector_TargetLimits_Pkg.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

