/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Truncate_at_BG_TA_Gradient.h"

/* TA_Gradient::GP_Truncate_at_BG */
void GP_Truncate_at_BG_TA_Gradient(
  /* TA_Gradient::GP_Truncate_at_BG::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Truncate_at_BG::Profile_out */ GradientProfile_t_TrackAtlasTypes *Profile_out)
{
  /* TA_Gradient::GP_Truncate_at_BG */
  static kcg_int acc1;
  /* TA_Gradient::GP_Truncate_at_BG */
  static GradientProfile_t_TrackAtlasTypes acc;
  /* TA_Gradient::GP_Truncate_at_BG */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TA_Gradient::GP_Truncate_at_BG::_L5 */
  static kcg_int _L5;
  
  _L5 = 0;
  /* 2 */ for (i = 0; i < 50; i++) {
    acc1 = _L5;
    /* 1 */
    GP_Find_First_Gsection_After_BG_loop_TA_Gradient(
      i,
      acc1,
      Profile_in,
      &cond_iterw,
      &_L5);
    /* 2 */ if (!cond_iterw) {
      break;
    }
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    Profile_out,
    (GradientProfile_t_TrackAtlasTypes *)
      &DEFAULT_GradientProfile_TrackAtlasTypes);
  /* 3 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, Profile_out);
    /* 1 */
    GP_Truncate_at_BG_loop_TA_Gradient(
      i,
      &acc,
      Profile_in,
      _L5,
      &cond_iterw,
      Profile_out);
    /* 3 */ if (!cond_iterw) {
      break;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Truncate_at_BG_TA_Gradient.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

