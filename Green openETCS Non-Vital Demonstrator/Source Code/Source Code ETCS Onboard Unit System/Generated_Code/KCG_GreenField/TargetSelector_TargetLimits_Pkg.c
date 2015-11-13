/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetSelector */
void TargetSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetSelector::Targets */ TargetCollection_T_TargetManage *Targets,
  /* TargetLimits_Pkg::TargetSelector::Curves */ CurveCollection_T_CalcBrakingCu *Curves,
  /* TargetLimits_Pkg::TargetSelector::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::TargetSelector::trainData_int */ trainData_internal_t_SDM_Types_ *trainData_int,
  /* TargetLimits_Pkg::TargetSelector::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::TargetSelector::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* TargetLimits_Pkg::TargetSelector::trainLocations */ TrainLocations_real_T_SDM_Types *trainLocations,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveDisplayedTarget */ Target_T_TargetManagement_types *MostRestrictiveDisplayedTarget,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveEBDCurve */ ParabolaCurve_T_CalcBrakingCurv *MostRestrictiveEBDCurve,
  /* TargetLimits_Pkg::TargetSelector::SBDcurve */ ParabolaCurve_T_CalcBrakingCurv *SBDcurve,
  /* TargetLimits_Pkg::TargetSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurv *GUIcurve,
  /* TargetLimits_Pkg::TargetSelector::GUICurveEnabled */ kcg_bool *GUICurveEnabled,
  /* TargetLimits_Pkg::TargetSelector::V_Target */ V_internal_real_Type_SDM_Types_ *V_Target,
  /* TargetLimits_Pkg::TargetSelector::V_P_MRDT */ V_internal_real_Type_SDM_Types_ *V_P_MRDT,
  /* TargetLimits_Pkg::TargetSelector::D_EOA */ L_internal_real_Type_SDM_Types_ *D_EOA,
  /* TargetLimits_Pkg::TargetSelector::D_SvL */ L_internal_real_Type_SDM_Types_ *D_SvL,
  /* TargetLimits_Pkg::TargetSelector::v_est */ V_internal_real_Type_SDM_Types_ *v_est,
  /* TargetLimits_Pkg::TargetSelector::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::TargetSelector::V_ura */ V_internal_real_Type_SDM_Types_ *V_ura,
  /* TargetLimits_Pkg::TargetSelector::bec */ bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::TargetSelector::D_SBI2 */ L_internal_real_Type_SDM_Types_ *D_SBI2,
  /* TargetLimits_Pkg::TargetSelector::valid_D_SBI2 */ kcg_bool *valid_D_SBI2,
  /* TargetLimits_Pkg::TargetSelector::D_estfront */ L_internal_real_Type_SDM_Types_ *D_estfront,
  /* TargetLimits_Pkg::TargetSelector::D_maxsafefront */ L_internal_real_Type_SDM_Types_ *D_maxsafefront)
{
  /* TargetLimits_Pkg::TargetSelector */
  static TargetIteratorAkku_TargetLimits acc;
  static kcg_int i;
  /* TargetLimits_Pkg::TargetSelector */
  static V_internal_real_Type_SDM_Types_ tmp;
  /* TargetLimits_Pkg::TargetSelector::_L29 */
  static TargetIteratorAkku_TargetLimits _L29;
  /* TargetLimits_Pkg::TargetSelector::_L59 */
  static kcg_bool _L59;
  /* TargetLimits_Pkg::TargetSelector::_L60 */
  static TargetIteratorAkku_TargetLimits _L60;
  /* TargetLimits_Pkg::TargetSelector::_L55 */
  static kcg_int _L55;
  /* TargetLimits_Pkg::TargetSelector::_L157 */
  static Target_real_T_TargetManagement_ _L157;
  /* TargetLimits_Pkg::TargetSelector::_L261 */
  static kcg_bool _L261;
  /* TargetLimits_Pkg::TargetSelector::_L262 */
  static kcg_bool _L262;
  /* TargetLimits_Pkg::TargetSelector::_L282 */
  static Target_real_T_TargetManagement_ _L282;
  
  _L29.ttype = invalid_TargetManagement_types;
  _L29.bec.v = 0.0;
  _L29.bec.d = 0.0;
  _L29.V_est = 0.0;
  _L29.V_ura = 0.0;
  _L29.V_P_MRDT_ebd = 0.0;
  _L262 = (*Targets).EOA_target.targetType == EoA_TargetManagement_types;
  kcg_copy_ParabolaCurve_T_CalcBr(SBDcurve, &(*Curves).EOA_SBD_curve);
  _L55 = - 1;
  _L29.index = _L55;
  _L29.V_P_MRDT_index = _L29.index;
  _L29.SBI2 = 0.0;
  _L29.T.Traction = 0.0;
  _L29.T.berem = 0.0;
  _L29.T.bs = 0.0;
  _L29.T.bs1 = 0.0;
  _L29.T.bs2 = 0.0;
  _L29.T.indication = 0.0;
  *D_maxsafefront = (*trainLocations).d_maxSafeFrontEndPos;
  kcg_copy_ParabolaCurve_T_CalcBr(GUIcurve, &(*Curves).GUI_curve);
  *GUICurveEnabled = (*Curves).GUI_curve_enabled;
  switch ((*NationalValues).q_nvinhsmicperm) {
    case Q_NVINHSMICPERM_Yes :
      _L29.T.inhComp = kcg_true;
      break;
    
    default :
      _L29.T.inhComp = kcg_false;
  }
  for (i = 0; i < 200; i++) {
    kcg_copy_TargetIteratorAkku_Tar(&acc, &_L29);
    /* 2 */
    TargetIterator_TargetLimits_Pkg(
      i,
      &acc,
      &(*Targets).MRSP_targetList[i],
      &(*Curves).MRSP_EBD_curves[i],
      trainData_int,
      odometry,
      T_b,
      *D_maxsafefront,
      GUIcurve,
      *GUICurveEnabled,
      &_L59,
      &_L29);
    if (!_L59) {
      break;
    }
  }
  /* 4 */
  TargetIterator_TargetLimits_Pkg(
    _L55,
    &_L29,
    &(*Targets).SvL_LoA_target,
    &(*Curves).SvL_LoA_EBD_curve,
    trainData_int,
    odometry,
    T_b,
    *D_maxsafefront,
    GUIcurve,
    *GUICurveEnabled,
    &_L59,
    &_L60);
  *v_est = _L60.V_est;
  *D_estfront = (*trainLocations).d_est_frontendPos;
  *D_EOA = (*Targets).EOA_target.distance;
  kcg_copy_T_trac_t_TargetLimits_(T, &_L60.T);
  *D_SvL = (*Targets).SvL_LoA_target.distance;
  if ((0 <= _L60.V_P_MRDT_index) & (_L60.V_P_MRDT_index < 200)) {
    kcg_copy_Target_real_T_TargetMa(
      &_L157,
      &(*Targets).MRSP_targetList[_L60.V_P_MRDT_index]);
  }
  else {
    kcg_copy_Target_real_T_TargetMa(&_L157, &(*Targets).SvL_LoA_target);
  }
  if ((0 <= _L60.index) & (_L60.index < 200)) {
    kcg_copy_ParabolaCurve_T_CalcBr(
      MostRestrictiveEBDCurve,
      &(*Curves).MRSP_EBD_curves[_L60.index]);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBr(
      MostRestrictiveEBDCurve,
      &(*Curves).SvL_LoA_EBD_curve);
  }
  kcg_copy_bec_t_TargetLimits_Pkg(bec, &_L60.bec);
  *D_SBI2 = _L60.SBI2;
  *V_ura = _L60.V_ura;
  *valid_D_SBI2 = _L60.ttype != invalid_TargetManagement_types;
  /* ck__L275 */ if (_L262) {
    /* 2 */
    v_SBI1_TargetLimits_Pkg(
      SBDcurve,
      *v_est,
      *D_estfront,
      *D_EOA,
      T_driver_SDM_Types_Pkg,
      *GUICurveEnabled,
      GUIcurve,
      T,
      &_L59,
      &tmp);
  }
  else {
    _L59 = kcg_false;
    tmp = 0.0;
  }
  /* 1 */
  selectLEValid_TargetLimits_Pkg(
    (kcg_bool) (_L157.targetType != invalid_TargetManagement_types),
    _L60.V_P_MRDT_ebd,
    _L59,
    tmp,
    &_L261,
    &_L262,
    V_P_MRDT);
  /* 1 */ if (_L261) {
    kcg_copy_Target_real_T_TargetMa(&_L282, &_L157);
  }
  else {
    kcg_copy_Target_real_T_TargetMa(&_L282, &(*Targets).EOA_target);
  }
  (*MostRestrictiveDisplayedTarget).targetType = _L282.targetType;
  (*MostRestrictiveDisplayedTarget).valid = invalid_TargetManagement_types !=
    _L282.targetType;
  *V_Target = _L282.speed;
  (*MostRestrictiveDisplayedTarget).distance = /* 1 */
    TransformL_realToL_int_SDM_Type(_L282.distance);
  (*MostRestrictiveDisplayedTarget).speed = /* 1 */
    TransformV_realToV_int_SDM_Type(*V_Target);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TargetSelector_TargetLimits_Pkg.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

