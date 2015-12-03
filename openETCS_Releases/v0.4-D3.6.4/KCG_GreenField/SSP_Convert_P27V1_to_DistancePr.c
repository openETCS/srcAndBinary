/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Convert_P27V1_to_DistancePr.h"

/* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop */
void SSP_Convert_P27V1_to_DistancePr(
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::i */ kcg_int i,
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::ProfileAccu */ StaticSpeedProfile_t_TrackAtlas *ProfileAccu,
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::SectionIn */ P027V1_OBU_sectionlist_enum_T_T *SectionIn,
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::q_scale */ Q_SCALE q_scale,
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::SpeedtProfile */ StaticSpeedProfile_t_TrackAtlas *SpeedtProfile)
{
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop */
  static kcg_int tmp2;
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop */
  static kcg_int tmp1;
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop */
  static kcg_bool tmp;
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::_L135 */
  static L_internal_Type_Obu_BasicTypes_ _L135;
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::_L123 */
  static P027V1_section_enum_T_TM_baseli _L123;
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop::_L143 */
  static StaticSpeedSection_t_TrackAtlas _L143;
  
  if ((0 <= i) & (i < 33)) {
    kcg_copy_P027V1_section_enum_T_(&_L123, &(*SectionIn)[i]);
  }
  else {
    kcg_copy_P027V1_section_enum_T_(
      &_L123,
      (P027V1_section_enum_T_TM_baseli *) &DEFAULT_P027v1_OBU_section_TM_b);
  }
  _L135 = /* 2 */ Normalize_Distance_d_internal_t(q_scale, _L123.d_static);
  if ((0 <= i - 1) & (i - 1 < 50)) {
    kcg_copy_StaticSpeedSection_t_T(&_L143, &(*ProfileAccu)[i - 1]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_T(
      &_L143,
      (StaticSpeedSection_t_TrackAtlas *) &DEFAULT_StaticSpeedSection_Trac);
  }
  kcg_copy_StaticSpeedProfile_t_T(SpeedtProfile, ProfileAccu);
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
** SSP_Convert_P27V1_to_DistancePr.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

