/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetSelector */
void TargetSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetSelector::Targets */TargetCollection_T_TargetManagement_types *Targets,
  /* TargetLimits_Pkg::TargetSelector::Curves */CurveCollection_T_CalcBrakingCurves_types *Curves,
  /* TargetLimits_Pkg::TargetSelector::odometry */Odometry_real_T_SDM_Types_Pkg *odometry,
  /* TargetLimits_Pkg::TargetSelector::trainData_int */trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::TargetSelector::T_b */t_Brake_t_SDMConversionModelPkg *T_b,
  /* TargetLimits_Pkg::TargetSelector::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveTarget */Target_real_T_TargetManagement_types *MostRestrictiveTarget,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveCurve */ParabolaCurve_T_CalcBrakingCurves_types *MostRestrictiveCurve,
  /* TargetLimits_Pkg::TargetSelector::SBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::TargetSelector::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::TargetSelector::GUICurveEnabled */kcg_bool *GUICurveEnabled,
  /* TargetLimits_Pkg::TargetSelector::V_Target */V_internal_real_Type_SDM_Types_Pkg *V_Target,
  /* TargetLimits_Pkg::TargetSelector::D_EOA */L_internal_real_Type_SDM_Types_Pkg *D_EOA,
  /* TargetLimits_Pkg::TargetSelector::D_SvL */L_internal_real_Type_SDM_Types_Pkg *D_SvL,
  /* TargetLimits_Pkg::TargetSelector::v_est */V_internal_real_Type_SDM_Types_Pkg *v_est,
  /* TargetLimits_Pkg::TargetSelector::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::TargetSelector::V_ura */V_internal_real_Type_SDM_Types_Pkg *V_ura,
  /* TargetLimits_Pkg::TargetSelector::bec */bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::TargetSelector::D_SBI2 */L_internal_real_Type_SDM_Types_Pkg *D_SBI2,
  /* TargetLimits_Pkg::TargetSelector::valid_D_SBI2 */kcg_bool *valid_D_SBI2)
{
  static kcg_bool tmp;
  static kcg_int i;
  /* TargetLimits_Pkg::TargetSelector::_L29 */
  static TargetIteratorAkku_TargetLimits_Pkg _L29;
  /* TargetLimits_Pkg::TargetSelector::_L60 */
  static TargetIteratorAkku_TargetLimits_Pkg _L60;
  /* TargetLimits_Pkg::TargetSelector::_L55 */
  static kcg_int _L55;
  
  _L29.SBI2 = 0.0;
  _L29.ttype = invalid_TargetManagement_types;
  _L29.bec.v = 0.0;
  _L29.bec.d = 0.0;
  _L29.V_est = 0.0;
  _L29.V_ura = 0.0;
  _L55 = - 1;
  _L29.index = _L55;
  switch ((*NationalValues).q_nvinhsmicperm) {
    case Q_NVINHSMICPERM_Yes :
      tmp = kcg_true;
      break;
    
    default :
      tmp = kcg_false;
  }
  _L29.T.Traction = 0.0;
  _L29.T.berem = 0.0;
  _L29.T.bs = 0.0;
  _L29.T.bs1 = 0.0;
  _L29.T.bs2 = 0.0;
  _L29.T.inhComp = tmp;
  for (i = 0; i < 200; i++) {
    kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L60, &_L29);
    /* 2 */
    TargetIterator_TargetLimits_Pkg(
      i,
      &_L60,
      &(*Targets).MRSP_targetList[i],
      &(*Curves).MRSP_EBD_curves[i],
      trainData_int,
      odometry,
      T_b,
      &tmp,
      &_L29);
    if (!tmp) {
      break;
    }
  }
  /* 4 */
  TargetIterator_TargetLimits_Pkg(
    _L55,
    &_L29,
    &(*Targets).SvL_target,
    &(*Curves).SvL_EBD_curve,
    trainData_int,
    odometry,
    T_b,
    &tmp,
    &_L60);
  if ((0 <= _L60.index) & (_L60.index < 200)) {
    kcg_copy_Target_real_T_TargetManagement_types(
      MostRestrictiveTarget,
      &(*Targets).MRSP_targetList[_L60.index]);
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      MostRestrictiveCurve,
      &(*Curves).MRSP_EBD_curves[_L60.index]);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(
      MostRestrictiveTarget,
      &(*Targets).SvL_target);
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      MostRestrictiveCurve,
      &(*Curves).SvL_EBD_curve);
  }
  *V_Target = (*MostRestrictiveTarget).speed;
  *D_SvL = (*Targets).SvL_target.distance;
  *D_EOA = (*Targets).EOA_target.distance;
  kcg_copy_bec_t_TargetLimits_Pkg(bec, &_L60.bec);
  kcg_copy_T_trac_t_TargetLimits_Pkg(T, &_L60.T);
  *D_SBI2 = _L60.SBI2;
  *V_ura = _L60.V_ura;
  *v_est = _L60.V_est;
  *valid_D_SBI2 = _L60.ttype != invalid_TargetManagement_types;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    SBDcurve,
    &(*Curves).EOA_SBD_curve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    GUIcurve,
    &(*Curves).GUI_curve);
  *GUICurveEnabled = (*Curves).GUI_curve_enabled;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TargetSelector_TargetLimits_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

