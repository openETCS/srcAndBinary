/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Truncate_at_BG_TA_Gradient_n.h"

/* TA_Gradient_new::GP_Truncate_at_BG */
void GP_Truncate_at_BG_TA_Gradient_n(
  /* TA_Gradient_new::GP_Truncate_at_BG::Profile_in */ GradientProfile_t_TrackAtlasTyp *Profile_in,
  /* TA_Gradient_new::GP_Truncate_at_BG::Profile_out */ GradientProfile_t_TrackAtlasTyp *Profile_out)
{
  /* TA_Gradient_new::GP_Truncate_at_BG */
  static kcg_int acc1;
  /* TA_Gradient_new::GP_Truncate_at_BG */
  static GradientProfile_t_TrackAtlasTyp acc;
  /* TA_Gradient_new::GP_Truncate_at_BG */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TA_Gradient_new::GP_Truncate_at_BG::_L5 */
  static kcg_int _L5;
  
  _L5 = 0;
  /* 2 */ for (i = 0; i < 50; i++) {
    acc1 = _L5;
    /* 1 */
    GP_Find_First_Gsection_After_BG(i, acc1, Profile_in, &cond_iterw, &_L5);
    /* 2 */ if (!cond_iterw) {
      break;
    }
  }
  kcg_copy_GradientProfile_t_Trac(
    Profile_out,
    (GradientProfile_t_TrackAtlasTyp *) &DEFAULT_GradientProfile_TrackAt);
  /* 3 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_Trac(&acc, Profile_out);
    /* 1 */
    GP_Truncate_at_BG_loop_TA_Gradi(
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
** GP_Truncate_at_BG_TA_Gradient_n.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

