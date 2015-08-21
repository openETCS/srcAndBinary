/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDMLimitLocations_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::SDMLimitLocations */
void SDMLimitLocations_TargetLimits_Pkg(
  /* TargetLimits_Pkg::SDMLimitLocations::MRSP_Profile */MRSP_internal_T_TargetManagement_types *MRSP_Profile,
  /* TargetLimits_Pkg::SDMLimitLocations::odometry */Odometry_real_T_SDM_Types_Pkg *odometry,
  /* TargetLimits_Pkg::SDMLimitLocations::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::SDMLimitLocations::targetCollection */TargetCollection_T_TargetManagement_types *targetCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::curveCollection */CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::MA */MA_section_real_T_TargetManagement_types *MA,
  /* TargetLimits_Pkg::SDMLimitLocations::T_b */t_Brake_t_SDMConversionModelPkg *T_b,
  /* TargetLimits_Pkg::SDMLimitLocations::trainData_int */trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::SDMLimitLocations::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TargetLimits_Pkg::SDMLimitLocations::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* TargetLimits_Pkg::SDMLimitLocations::MostRestrictiveTarget */Target_real_T_TargetManagement_types *MostRestrictiveTarget,
  /* TargetLimits_Pkg::SDMLimitLocations::FLOIisSBI1 */kcg_bool *FLOIisSBI1,
  /* TargetLimits_Pkg::SDMLimitLocations::speeds */Speeds_T_SDM_Types_Pkg *speeds)
{
  /* TargetLimits_Pkg::SDMLimitLocations::V_est */
  static V_internal_real_Type_SDM_Types_Pkg V_est;
  /* TargetLimits_Pkg::SDMLimitLocations::bec */
  static bec_t_TargetLimits_Pkg bec;
  /* TargetLimits_Pkg::SDMLimitLocations::SBDcurve */
  static ParabolaCurve_T_CalcBrakingCurves_types SBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::EBDcurve */
  static ParabolaCurve_T_CalcBrakingCurves_types EBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::T */
  static T_trac_t_TargetLimits_Pkg T;
  /* TargetLimits_Pkg::SDMLimitLocations::V_release */
  static V_internal_real_Type_SDM_Types_Pkg V_release;
  /* TargetLimits_Pkg::SDMLimitLocations::D_EOA */
  static L_internal_real_Type_SDM_Types_Pkg D_EOA;
  /* TargetLimits_Pkg::SDMLimitLocations::GUIcurve */
  static ParabolaCurve_T_CalcBrakingCurves_types GUIcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::valid_RSM1_start */
  static kcg_bool valid_RSM1_start;
  /* TargetLimits_Pkg::SDMLimitLocations::_L25 */
  static V_internal_real_Type_SDM_Types_Pkg _L25;
  /* TargetLimits_Pkg::SDMLimitLocations::_L26 */
  static V_internal_real_Type_SDM_Types_Pkg _L26;
  /* TargetLimits_Pkg::SDMLimitLocations::_L70 */
  static V_internal_real_Type_SDM_Types_Pkg _L70;
  /* TargetLimits_Pkg::SDMLimitLocations::_L87 */
  static L_internal_real_Type_SDM_Types_Pkg _L87;
  /* TargetLimits_Pkg::SDMLimitLocations::_L86 */
  static L_internal_real_Type_SDM_Types_Pkg _L86;
  /* TargetLimits_Pkg::SDMLimitLocations::_L615 */
  static kcg_bool _L615;
  /* TargetLimits_Pkg::SDMLimitLocations::_L614 */
  static V_internal_real_Type_SDM_Types_Pkg _L614;
  /* TargetLimits_Pkg::SDMLimitLocations::_L642 */
  static kcg_bool _L642;
  
  /* 5 */
  TargetSelector_TargetLimits_Pkg(
    targetCollection,
    curveCollection,
    odometry,
    trainData_int,
    T_b,
    NationalValues,
    MostRestrictiveTarget,
    &EBDcurve,
    &SBDcurve,
    &GUIcurve,
    &valid_RSM1_start,
    &_L87,
    &D_EOA,
    &V_release,
    &V_est,
    &T,
    &_L614,
    &bec,
    &_L25,
    &_L642);
  (*locations).d_EBI_of_V_est = _L25 + V_est * T.bs2;
  (*locations).d_eoa = D_EOA;
  (*locations).d_svl = V_release;
  /* 1 */
  v_release_TargetLimits_Pkg(
    &EBDcurve,
    _L87,
    D_EOA,
    MA,
    _L614,
    trainLocations,
    &T,
    &V_release,
    &_L615);
  /* 1 */
  P_SpeedRelatedToEBD_SDM_Types_Pkg(
    (*trainLocations).d_maxSafeFrontEndPos,
    (*trainLocations).d_maxSafeFrontEndPos,
    V_est,
    &EBDcurve,
    &GUIcurve,
    T.bs2,
    _L87,
    valid_RSM1_start,
    bec.d,
    bec.v,
    &_L614,
    &_L615);
  /* 2 */
  d_limits_TargetLimits_Pkg(
    V_est,
    &SBDcurve,
    _L642,
    _L25,
    (*trainLocations).d_est_frontendPos,
    (*trainLocations).d_maxSafeFrontEndPos,
    &T,
    &GUIcurve,
    valid_RSM1_start,
    trainData_int,
    &(*locations).d_I_of_V_est,
    &_L26,
    &_L70,
    &_L86,
    FLOIisSBI1);
  (*locations).d_P_of_V_est = _L26;
  (*locations).d_W_of_V_est = _L70;
  (*locations).d_FLOI_of_V_est = _L86;
  /* 1 */
  v_SBI1_TargetLimits_Pkg(
    &SBDcurve,
    V_est,
    (*trainLocations).d_est_frontendPos,
    D_EOA,
    &T,
    &_L25,
    &_L642);
  (*locations).SBI1_of_V_est = _L25;
  /* 1 */
  v_SBI2_TargetLimits_Pkg(
    &EBDcurve,
    V_est,
    _L87,
    &bec,
    (*trainLocations).d_maxSafeFrontEndPos,
    &T,
    &_L26,
    &_L642);
  (*locations).SBI2_of_V_est = _L26;
  if (*FLOIisSBI1) {
    _L70 = _L25;
  }
  else {
    _L70 = _L26;
  }
  (*locations).FLOI_of_V_est = _L70;
  _L86 = /* 1 */
    getMRSFromMRSP_SDM_Types_Pkg(
      MRSP_Profile,
      (*trainLocations).d_maxSafeFrontEndPos);
  _L25 = /* 1 */
    P_SpeedRelatedToSBD_SDM_Types_Pkg(
      valid_RSM1_start,
      (*trainLocations).d_est_frontendPos,
      V_est,
      &GUIcurve,
      T.bs1,
      &SBDcurve,
      D_EOA);
  /* 1 */
  CalcSpeeds_SDM_Types_Pkg(
    odometry,
    _L86,
    V_release,
    _L87,
    MostRestrictiveTarget,
    _L614,
    _L25,
    _L615,
    _L70,
    speeds);
  /* 1 */
  d_P_target_TargetLimits_Pkg(
    &EBDcurve,
    _L87,
    &T,
    &_L642,
    &(*locations).d_P_of_V_target);
  /* 1 */
  MRSPPreindicationSelector_TargetLimits_Pkg(
    MRSP_Profile,
    &EBDcurve,
    &SBDcurve,
    &GUIcurve,
    valid_RSM1_start,
    MostRestrictiveTarget,
    &T,
    &_L25,
    &_L615);
  (*locations).EBD_preindication_location = _L25;
  (*locations).d_I_of_V_MRSP = (*locations).EBD_preindication_location;
  (*locations).SBD_preindication_location = _L25;
  (*locations).Preindication_EBD_location_valid = _L615;
  (*locations).Preindication_SBD_location_valid = *FLOIisSBI1 & _L615;
  /* 1 */
  d_RSM_start_TargetLimits_Pkg(
    V_release,
    &EBDcurve,
    &SBDcurve,
    (*trainLocations).d_maxSafeFrontEndPos,
    (*trainLocations).d_est_frontendPos,
    &T,
    &_L26,
    &(*locations).EBD_RSM_start_location,
    &_L86,
    &_L642,
    &valid_RSM1_start);
  (*locations).SBD_RSM_start_location = _L86;
  (*locations).RSM_start_location_EBD_valid = _L642;
  (*locations).RSM_start_location_SBD_valid = valid_RSM1_start;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SDMLimitLocations_TargetLimits_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

