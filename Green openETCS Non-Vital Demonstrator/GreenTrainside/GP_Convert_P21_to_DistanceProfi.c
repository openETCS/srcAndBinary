/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Convert_P21_to_DistanceProfi.h"

/* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop */
void GP_Convert_P21_to_DistanceProfi(
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::i */ kcg_int i,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::ProfileAccu */ GradientProfile_t_TrackAtlasTyp *ProfileAccu,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::SectionIn */ P021_OBU_sectionlist_enum_T_TM *SectionIn,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::q_scale */ Q_SCALE q_scale,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::GradientProfile */ GradientProfile_t_TrackAtlasTyp *GradientProfile)
{
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop */
  static kcg_int tmp4;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop */
  static kcg_int tmp3;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop */
  static G_internal_Type_Obu_BasicTypes_ tmp2;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop */
  static L_internal_Type_Obu_BasicTypes_ tmp1;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop */
  static P021_section_enum_T_TM tmp;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L123 */
  static P021_section_enum_T_TM _L123;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L143 */
  static Gradient_section_t_TrackAtlasTy _L143;
  
  if ((0 <= i) & (i < 33)) {
    kcg_copy_P021_section_enum_T_TM(&_L123, &(*SectionIn)[i]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &_L123,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  tmp1 = /* 3 */ Normalize_Distance_d_internal_t(q_scale, _L123.d_gradient);
  if ((0 <= i - 1) & (i - 1 < 50)) {
    kcg_copy_Gradient_section_t_Tra(&_L143, &(*ProfileAccu)[i - 1]);
  }
  else {
    kcg_copy_Gradient_section_t_Tra(
      &_L143,
      (Gradient_section_t_TrackAtlasTy *) &DEFAULT_GP_Section_TA_Gradient);
  }
  kcg_copy_GradientProfile_t_Trac(GradientProfile, ProfileAccu);
  /* 2 */ if (_L123.valid) {
    tmp4 = tmp1 + _L143.Loc_Absolute;
    tmp3 = tmp1 + _L143.Loc_LRBG;
  }
  else {
    tmp4 = 0;
    tmp3 = 0;
  }
  tmp2 = /* 2 */ EVAL_Q_GDIR_TA_Lib_internal(_L123.q_gdir, _L123.g_a);
  if ((0 <= i + 1) & (i + 1 < 33)) {
    kcg_copy_P021_section_enum_T_TM(&tmp, &(*SectionIn)[i + 1]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &tmp,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  tmp1 = /* 4 */ Normalize_Distance_d_internal_t(q_scale, tmp.d_gradient);
  if ((0 <= i) & (i < 50)) {
    (*GradientProfile)[i].valid = _L123.valid;
    (*GradientProfile)[i].Loc_Absolute = tmp4;
    (*GradientProfile)[i].Loc_LRBG = tmp3;
    (*GradientProfile)[i].Gradient = tmp2;
    (*GradientProfile)[i].L_Gradient = tmp1;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Convert_P21_to_DistanceProfi.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

