/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Normalize_Profile_loop_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Normalize_Profile_loop */
void GP_Normalize_Profile_loop_TA_Gradient_new(
  /* TA_Gradient_new::GP_Normalize_Profile_loop::i */ kcg_int i,
  /* TA_Gradient_new::GP_Normalize_Profile_loop::ProfileIn */ GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient_new::GP_Normalize_Profile_loop::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_Gradient_new::GP_Normalize_Profile_loop::ProfileNormalized_LRBG */ GradientProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  /* TA_Gradient_new::GP_Normalize_Profile_loop */ Gradient_section_t_TrackAtlasTypes tmp;
  /* TA_Gradient_new::GP_Normalize_Profile_loop::_L4 */ Gradient_section_t_TrackAtlasTypes _L4;
  /* TA_Gradient_new::GP_Normalize_Profile_loop::_L26 */ kcg_int _L26;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L4, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L4,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GP_Section_TA_Gradient_new);
  }
  if ((0 <= i + 1) & (i + 1 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&tmp, &(*ProfileIn)[i + 1]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &tmp,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GP_Section_TA_Gradient_new);
  }
  _L26 = tmp.Loc_Absolute - _L4.Loc_Absolute;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileNormalized_LRBG, ProfileIn);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&tmp, &_L4);
  /* 2 */ if (_L4.valid) {
    tmp.Loc_LRBG = _L4.Loc_Absolute - pos_BG;
  }
  else {
    tmp.Loc_LRBG = 0;
  }
  /* 3 */ if (_L26 > 0) {
    tmp.L_Gradient = _L26;
  }
  else {
    tmp.L_Gradient = 0;
  }
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &(*ProfileNormalized_LRBG)[i],
      &tmp);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Normalize_Profile_loop_TA_Gradient_new.c
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

