/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new.h"

/* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop */
void SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new(
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::i */ kcg_int i,
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::ProfileAccu */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileAccu,
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::SectionIn */ P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::q_scale */ Q_SCALE q_scale,
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::SpeedtProfile */ StaticSpeedProfile_t_TrackAtlasTypes *SpeedtProfile)
{
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop */ kcg_int tmp2;
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop */ kcg_int tmp1;
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop */ kcg_bool tmp;
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::_L135 */ L_internal_Type_Obu_BasicTypes_Pkg _L135;
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::_L123 */ P027V1_section_enum_T_TM_baseline2 _L123;
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::_L143 */ StaticSpeedSection_t_TrackAtlasTypes _L143;
  
  if ((0 <= i) & (i < 33)) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(&_L123, &(*SectionIn)[i]);
  }
  else {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &_L123,
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027v1_OBU_section_TM_baseline2);
  }
  _L135 = /* 2 */
    Normalize_Distance_d_internal_t_TA_Lib_internal(q_scale, _L123.d_static);
  if ((0 <= i - 1) & (i - 1 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L143,
      &(*ProfileAccu)[i - 1]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L143,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(SpeedtProfile, ProfileAccu);
  /* 2 */ if (_L123.valid) {
    tmp2 = _L135 + _L143.d_static_abs;
    tmp1 = _L135 + _L143.d_static_LRBG;
  }
  else {
    tmp2 = 0;
    tmp1 = 0;
  }
  tmp = /* 1 */ Eval_Q_Front_TA_Lib_internal(_L123.q_front);
  if ((0 <= i) & (i < 50)) {
    (*SpeedtProfile)[i].valid = _L123.valid;
    (*SpeedtProfile)[i].d_static_abs = tmp2;
    (*SpeedtProfile)[i].d_static_LRBG = tmp1;
    (*SpeedtProfile)[i].q_train_length_corr = tmp;
    (*SpeedtProfile)[i].v_static = _L123.v_static;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

