/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDMLimitLocations_TargetLimits_.h"

/* TargetLimits_Pkg::SDMLimitLocations */
void SDMLimitLocations_TargetLimits_(
  /* TargetLimits_Pkg::SDMLimitLocations::MRSP_Profile */ MRSP_internal_T_TargetManagemen *MRSP_Profile,
  /* TargetLimits_Pkg::SDMLimitLocations::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::SDMLimitLocations::trainLocations */ TrainLocations_real_T_SDM_Types *trainLocations,
  /* TargetLimits_Pkg::SDMLimitLocations::targetCollection */ TargetCollection_T_TargetManage *targetCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::curveCollection */ CurveCollection_T_CalcBrakingCu *curveCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::MA */ MA_section_real_T_TargetManagem *MA,
  /* TargetLimits_Pkg::SDMLimitLocations::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::SDMLimitLocations::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* TargetLimits_Pkg::SDMLimitLocations::trainData_int */ trainData_internal_t_SDM_Types_ *trainData_int,
  /* TargetLimits_Pkg::SDMLimitLocations::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* TargetLimits_Pkg::SDMLimitLocations::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* TargetLimits_Pkg::SDMLimitLocations::MostRestrictiveDisplayedTarget */ Target_T_TargetManagement_types *MostRestrictiveDisplayedTarget,
  /* TargetLimits_Pkg::SDMLimitLocations::FLOIisSBI1 */ kcg_bool *FLOIisSBI1)
{
  /* TargetLimits_Pkg::SDMLimitLocations */
  static kcg_real tmp;
  /* TargetLimits_Pkg::SDMLimitLocations::V_est */
  static V_internal_real_Type_SDM_Types_ V_est;
  /* TargetLimits_Pkg::SDMLimitLocations::bec */
  static bec_t_TargetLimits_Pkg bec;
  /* TargetLimits_Pkg::SDMLimitLocations::V_target */
  static V_internal_real_Type_SDM_Types_ V_target;
  /* TargetLimits_Pkg::SDMLimitLocations::SBDcurve */
  static ParabolaCurve_T_CalcBrakingCurv SBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::EBDcurve */
  static ParabolaCurve_T_CalcBrakingCurv EBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::T */
  static T_trac_t_TargetLimits_Pkg T;
  /* TargetLimits_Pkg::SDMLimitLocations::V_release */
  static V_internal_real_Type_SDM_Types_ V_release;
  /* TargetLimits_Pkg::SDMLimitLocations::D_EOA */
  static L_internal_real_Type_SDM_Types_ D_EOA;
  /* TargetLimits_Pkg::SDMLimitLocations::D_SvL */
  static L_internal_real_Type_SDM_Types_ D_SvL;
  /* TargetLimits_Pkg::SDMLimitLocations::D_est */
  static L_internal_real_Type_SDM_Types_ D_est;
  /* TargetLimits_Pkg::SDMLimitLocations::D_maxsafefront */
  static L_internal_real_Type_SDM_Types_ D_maxsafefront;
  /* TargetLimits_Pkg::SDMLimitLocations::GUIcurve */
  static ParabolaCurve_T_CalcBrakingCurv GUIcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::valid_RSM1_start */
  static kcg_bool valid_RSM1_start;
  /* TargetLimits_Pkg::SDMLimitLocations::D_SBI2 */
  static L_internal_real_Type_SDM_Types_ D_SBI2;
  /* TargetLimits_Pkg::SDMLimitLocations::V_SBI_MRDT */
  static V_internal_real_Type_SDM_Types_ V_SBI_MRDT;
  /* TargetLimits_Pkg::SDMLimitLocations::_L24 */
  static L_internal_real_Type_SDM_Types_ _L24;
  /* TargetLimits_Pkg::SDMLimitLocations::_L23 */
  static L_internal_real_Type_SDM_Types_ _L23;
  /* TargetLimits_Pkg::SDMLimitLocations::_L22 */
  static L_internal_real_Type_SDM_Types_ _L22;
  /* TargetLimits_Pkg::SDMLimitLocations::_L21 */
  static L_internal_real_Type_SDM_Types_ _L21;
  /* TargetLimits_Pkg::SDMLimitLocations::_L25 */
  static V_internal_real_Type_SDM_Types_ _L25;
  /* TargetLimits_Pkg::SDMLimitLocations::_L87 */
  static L_internal_real_Type_SDM_Types_ _L87;
  /* TargetLimits_Pkg::SDMLimitLocations::_L86 */
  static L_internal_real_Type_SDM_Types_ _L86;
  /* TargetLimits_Pkg::SDMLimitLocations::_L641 */
  static kcg_bool _L641;
  /* TargetLimits_Pkg::SDMLimitLocations::_L910 */
  static V_internal_real_Type_SDM_Types_ _L910;
  /* TargetLimits_Pkg::SDMLimitLocations::_L909 */
  static V_internal_real_Type_SDM_Types_ _L909;
  /* TargetLimits_Pkg::SDMLimitLocations::_L934 */
  static kcg_real _L934;
  /* TargetLimits_Pkg::SDMLimitLocations::_L931 */
  static kcg_real _L931;
  /* TargetLimits_Pkg::SDMLimitLocations::_L982 */
  static V_odometry_Type_Obu_BasicTypes_ _L982;
  /* TargetLimits_Pkg::SDMLimitLocations::_L992 */
  static kcg_bool _L992;
  /* TargetLimits_Pkg::SDMLimitLocations::_L988 */
  static kcg_bool _L988;
  /* TargetLimits_Pkg::SDMLimitLocations::_L344 */
  static L_internal_real_Type_SDM_Types_ _L344;
  /* TargetLimits_Pkg::SDMLimitLocations::_L343 */
  static kcg_bool _L343;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1030 */
  static V_odometry_Type_Obu_BasicTypes_ _L1030;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1031 */
  static V_odometry_Type_Obu_BasicTypes_ _L1031;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1032 */
  static V_odometry_Type_Obu_BasicTypes_ _L1032;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1050 */
  static L_internal_real_Type_SDM_Types_ _L1050;
  
  (*speeds).OdoStandStill = (*odometry).motionState ==
    noMotion_Obu_BasicTypes_Pkg;
  /* 5 */
  TargetSelector_TargetLimits_Pkg(
    targetCollection,
    curveCollection,
    odometry,
    trainData_int,
    T_b,
    NationalValues,
    trainLocations,
    MostRestrictiveDisplayedTarget,
    &EBDcurve,
    &SBDcurve,
    &GUIcurve,
    &_L343,
    &V_target,
    &_L909,
    &D_EOA,
    &D_SvL,
    &V_est,
    &T,
    &_L25,
    &bec,
    &D_SBI2,
    &_L641,
    &D_est,
    &D_maxsafefront);
  _L992 = EoA_TargetManagement_types ==
    (*MostRestrictiveDisplayedTarget).targetType;
  /* 1 */
  MRSPPreindicationSelector_Targe(
    MRSP_Profile,
    &EBDcurve,
    &SBDcurve,
    &GUIcurve,
    _L343,
    _L992,
    &T,
    &_L86,
    &_L1050,
    &_L988);
  (*locations).Preindication_EBD_location_vali = _L988;
  (*locations).SBD_preindication_location = /* 1 */
    TransformL_realToL_int_SDM_Type(_L86);
  (*locations).EBD_preindication_location =
    (*locations).SBD_preindication_location;
  /* 1 */
  v_release_TargetLimits_Pkg(
    &EBDcurve,
    V_target,
    D_EOA,
    MA,
    _L25,
    trainLocations,
    trainData_int,
    &T,
    &V_release,
    &valid_RSM1_start);
  /* 1 */
  d_RSM_start_TargetLimits_Pkg(
    V_release,
    &EBDcurve,
    &SBDcurve,
    D_maxsafefront,
    D_est,
    &T,
    &_L21,
    &_L87,
    &_L86,
    &(*locations).RSM_start_location_EBD_valid,
    &valid_RSM1_start);
  (*locations).RSM_start_location_SBD_valid = valid_RSM1_start;
  /* 2 */
  d_limits_TargetLimits_Pkg(
    V_est,
    &SBDcurve,
    _L641,
    D_SBI2,
    D_est,
    D_maxsafefront,
    &T,
    &GUIcurve,
    _L343,
    &_L24,
    &_L23,
    &_L22,
    &_L21,
    FLOIisSBI1);
  (*locations).Preindication_SBD_location_vali = *FLOIisSBI1 & _L988;
  /* 1 */
  v_SBI1_TargetLimits_Pkg(
    &SBDcurve,
    V_est,
    D_est,
    D_EOA,
    0.0,
    kcg_false,
    &GUIcurve,
    &T,
    &valid_RSM1_start,
    &_L25);
  /* 1 */
  v_SBI2_TargetLimits_Pkg(
    &EBDcurve,
    V_est,
    V_target,
    &bec,
    D_maxsafefront,
    0.0,
    kcg_false,
    &GUIcurve,
    &T,
    &_L641,
    &_L910);
  /* 1 */ if (*FLOIisSBI1) {
    V_SBI_MRDT = _L25;
  }
  else {
    V_SBI_MRDT = _L910;
  }
  /* 1 */ d_P_target_TargetLimits_Pkg(&EBDcurve, V_target, &T, &_L343, &_L344);
  _L988 = _L992 | ((*MostRestrictiveDisplayedTarget).targetType ==
      SvL_TargetManagement_types);
  (*locations).EBD_RSM_start_location = /* 3 */
    TransformL_realToL_int_SDM_Type(_L87);
  (*locations).SBD_RSM_start_location = /* 10 */
    TransformL_realToL_int_SDM_Type(_L86);
  (*locations).d_I_of_V_est = /* 4 */ TransformL_realToL_int_SDM_Type(_L24);
  (*locations).d_I_of_V_MRSP = /* 11 */ TransformL_realToL_int_SDM_Type(_L1050);
  (*locations).d_P_of_V_est = /* 5 */ TransformL_realToL_int_SDM_Type(_L23);
  (*locations).d_W_of_V_est = /* 12 */ TransformL_realToL_int_SDM_Type(_L22);
  (*locations).d_FLOI_of_V_est = /* 6 */ TransformL_realToL_int_SDM_Type(_L21);
  (*locations).d_EBI_of_V_est = /* 13 */
    TransformL_realToL_int_SDM_Type(D_SBI2 + V_est * T.bs2);
  (*locations).FLOI_of_V_est = /* 7 */
    TransformL_realToL_int_SDM_Type(V_SBI_MRDT);
  (*locations).SBI1_of_V_est = /* 14 */ TransformL_realToL_int_SDM_Type(_L25);
  (*locations).SBI2_of_V_est = /* 8 */ TransformL_realToL_int_SDM_Type(_L910);
  (*locations).d_target = /* 15 */
    TransformL_realToL_int_SDM_Type(
      /* 1 */
      TargetDistance_TargetLimits_Pkg(
        _L344,
        D_maxsafefront,
        D_est,
        D_SvL,
        D_EOA,
        _L988));
  (*locations).d_eoa = /* 9 */ TransformL_realToL_int_SDM_Type(D_EOA);
  (*locations).d_svl = /* 16 */ TransformL_realToL_int_SDM_Type(D_SvL);
  _L25 = /* 1 */ getMRSFromMRSP_SDM_Types_Pkg(MRSP_Profile, D_maxsafefront);
  _L1032 = /* 16 */ TransformV_realToV_odo_SDM_Type(_L25);
  (*speeds).V_MRSP = _L1032;
  _L1031 = /* 15 */ TransformV_realToV_odo_SDM_Type(V_target);
  (*speeds).V_target = _L1031;
  _L1030 = /* 14 */ TransformV_realToV_odo_SDM_Type(_L909);
  (*speeds).v_p_mrdt = _L1030;
  /* 2 */ if (_L1031 >= _L1030) {
    _L982 = _L1031;
  }
  else {
    _L982 = _L1030;
  }
  _L910 = /* 1 */ dV_sbi_for_V_SDM_Types_Pkg(V_target);
  /* 2 */ if (_L988) {
    _L931 = V_target + _L910;
  }
  else {
    _L931 = V_release;
  }
  /* 2 */ if (_L931 >= V_SBI_MRDT) {
    _L934 = _L931;
  }
  else {
    _L934 = V_SBI_MRDT;
  }
  _L909 = /* 2 */ dV_sbi_for_V_SDM_Types_Pkg(_L25);
  _L931 = _L25 + _L909;
  (*speeds).V_est = /* 1 */ TransformV_realToV_odo_SDM_Type(V_est);
  (*speeds).V_release = /* 13 */ TransformV_realToV_odo_SDM_Type(V_release);
  /* 1 */ if (_L1032 <= _L982) {
    (*speeds).v_p_dmi = _L1032;
  }
  else {
    (*speeds).v_p_dmi = _L982;
  }
  (*speeds).v_sbi_mrdt = /* 11 */ TransformV_realToV_odo_SDM_Type(V_SBI_MRDT);
  /* 1 */ if (_L934 <= _L931) {
    tmp = _L934;
  }
  else {
    tmp = _L931;
  }
  (*speeds).v_FLOI_dmi = /* 10 */ TransformV_realToV_odo_SDM_Type(tmp);
  (*speeds).dV_warning_V_MRSP = /* 9 */
    TransformV_realToV_odo_SDM_Type(
      /* 2 */ dV_warning_for_V_SDM_Types_Pkg(_L25));
  (*speeds).dV_warning_V_target = /* 8 */
    TransformV_realToV_odo_SDM_Type(
      /* 1 */ dV_warning_for_V_SDM_Types_Pkg(V_target));
  (*speeds).dV_sbi_V_MRSP = /* 7 */ TransformV_realToV_odo_SDM_Type(_L909);
  (*speeds).dV_sbi_V_target = /* 6 */ TransformV_realToV_odo_SDM_Type(_L910);
  (*speeds).dV_ebi_V_MRSP = /* 5 */
    TransformV_realToV_odo_SDM_Type(/* 2 */ dV_ebi_for_V_SDM_Types_Pkg(_L25));
  (*speeds).dV_ebi_V_target = /* 4 */
    TransformV_realToV_odo_SDM_Type(
      /* 1 */ dV_ebi_for_V_SDM_Types_Pkg(V_target));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SDMLimitLocations_TargetLimits_.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

