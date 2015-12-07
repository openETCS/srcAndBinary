/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Merge_New_P21_to_Profile_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Merge_New_P21_to_Profile */
void GP_Merge_New_P21_to_Profile_TA_Gradient_new(
  /* TA_Gradient_new::GP_Merge_New_P21_to_Profile::new_GP */ GradientProfile_t_TrackAtlasTypes *new_GP,
  /* TA_Gradient_new::GP_Merge_New_P21_to_Profile::Last_GradientProfile_in */ GradientProfile_t_TrackAtlasTypes *Last_GradientProfile_in,
  /* TA_Gradient_new::GP_Merge_New_P21_to_Profile::GradientdProfile_out */ GradientProfile_t_TrackAtlasTypes *GradientdProfile_out)
{
  /* TA_Gradient_new::GP_Merge_New_P21_to_Profile */
  static GradientProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  /* TA_Gradient_new::GP_Merge_New_P21_to_Profile::_L1 */
  static kcg_int _L1;
  
  /* ck__L148 */ if ((*Last_GradientProfile_in)[0].valid) {
    _L1 = /* 1 */
      FindStartOfNewGradientProfileAbs_TA_Lib_internal(
        Last_GradientProfile_in,
        new_GP);
  }
  else {
    _L1 = 0;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    GradientdProfile_out,
    Last_GradientProfile_in);
  /* 2 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, GradientdProfile_out);
    /* 1 */
    GP_Merge_New_P21_to_Profile_loop_TA_Gradient_new(
      i,
      &acc,
      _L1,
      new_GP,
      GradientdProfile_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Merge_New_P21_to_Profile_TA_Gradient_new.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

