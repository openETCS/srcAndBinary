/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSPPreindicationSelector_Targe.h"

/* TargetLimits_Pkg::MRSPPreindicationSelector */
void MRSPPreindicationSelector_Targe(
  /* TargetLimits_Pkg::MRSPPreindicationSelector::MRSP */ MRSP_internal_T_TargetManagemen *MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::EBDcurve */ ParabolaCurve_T_CalcBrakingCurv *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::SBDcurve */ ParabolaCurve_T_CalcBrakingCurv *SBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurv *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::isEoA */ kcg_bool isEoA,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_preindication */ L_internal_real_Type_SDM_Types_ *D_preindication,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_I_V_MRSP */ L_internal_real_Type_SDM_Types_ *D_I_V_MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::valid */ kcg_bool *valid)
{
  /* TargetLimits_Pkg::MRSPPreindicationSelector */
  static MRSP_internal_section_T_TargetM acc;
  /* TargetLimits_Pkg::MRSPPreindicationSelector */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L1 */
  static MRSP_internal_section_T_TargetM _L1;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L69 */
  static ParabolaCurve_T_CalcBrakingCurv _L69;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L75 */
  static T_trac_t_TargetLimits_Pkg _L75;
  
  _L1.Loc_Abs = 0.0;
  _L1.MRS = 0.0;
  _L1.valid = kcg_false;
  /* 2 */ if (isEoA) {
    kcg_copy_ParabolaCurve_T_CalcBr(&_L69, SBDcurve);
    kcg_copy_T_trac_t_TargetLimits_(&_L75, T);
    _L75.berem = 0.0;
    _L75.Traction = 0.0;
    _L75.bs2 = (*T).bs1;
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBr(&_L69, EBDcurve);
    kcg_copy_T_trac_t_TargetLimits_(&_L75, T);
  }
  for (i = 0; i < 200; i++) {
    kcg_copy_MRSP_internal_section_(&acc, &_L1);
    /* 1 */
    MRSPPreindicationIterator_Targe(
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
** MRSPPreindicationSelector_Targe.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

