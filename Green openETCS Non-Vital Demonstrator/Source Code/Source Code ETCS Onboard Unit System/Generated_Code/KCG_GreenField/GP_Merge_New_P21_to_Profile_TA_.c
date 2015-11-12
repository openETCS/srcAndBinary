/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Merge_New_P21_to_Profile_TA_.h"

/* TA_Gradient::GP_Merge_New_P21_to_Profile */
void GP_Merge_New_P21_to_Profile_TA_(
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::new_GP */ GradientProfile_t_TrackAtlasTyp *new_GP,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::Last_GradientProfile_in */ GradientProfile_t_TrackAtlasTyp *Last_GradientProfile_in,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::GradientdProfile_out */ GradientProfile_t_TrackAtlasTyp *GradientdProfile_out)
{
  /* TA_Gradient::GP_Merge_New_P21_to_Profile */
  static GradientProfile_t_TrackAtlasTyp acc;
  static kcg_int i;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L1 */
  static kcg_int _L1;
  
  /* ck__L148 */ if ((*Last_GradientProfile_in)[0].valid) {
    _L1 = /* 1 */
      _208_FindStartOfNewGradientProf(Last_GradientProfile_in, new_GP);
  }
  else {
    _L1 = 0;
  }
  kcg_copy_GradientProfile_t_Trac(
    GradientdProfile_out,
    Last_GradientProfile_in);
  /* 2 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_Trac(&acc, GradientdProfile_out);
    /* 1 */
    GP_Merge_New_P21_to_Profile_loo(i, &acc, _L1, new_GP, GradientdProfile_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Merge_New_P21_to_Profile_TA_.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

