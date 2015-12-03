/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Merge_New_P27V1_to_Profile_TA_SSP_new.h"

/* TA_SSP_new::SSP_Merge_New_P27V1_to_Profile */
void SSP_Merge_New_P27V1_to_Profile_TA_SSP_new(
  /* TA_SSP_new::SSP_Merge_New_P27V1_to_Profile::new_GP */ StaticSpeedProfile_t_TrackAtlasTypes *new_GP,
  /* TA_SSP_new::SSP_Merge_New_P27V1_to_Profile::Last_SpeedProfile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Last_SpeedProfile_in,
  /* TA_SSP_new::SSP_Merge_New_P27V1_to_Profile::SpeedProfile_out */ StaticSpeedProfile_t_TrackAtlasTypes *SpeedProfile_out)
{
  /* TA_SSP_new::SSP_Merge_New_P27V1_to_Profile */ StaticSpeedProfile_t_TrackAtlasTypes acc;
  kcg_int i;
  /* TA_SSP_new::SSP_Merge_New_P27V1_to_Profile::_L1 */ kcg_int _L1;
  
  /* ck__L148 */ if ((*Last_SpeedProfile_in)[0].valid) {
    _L1 = /* 1 */
      FindStartOfNewSpeedProfileAbs_TA_Lib_internal(
        Last_SpeedProfile_in,
        new_GP);
  }
  else {
    _L1 = 0;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    SpeedProfile_out,
    Last_SpeedProfile_in);
  /* 2 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, SpeedProfile_out);
    /* 1 */
    SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new(
      i,
      &acc,
      _L1,
      new_GP,
      SpeedProfile_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Merge_New_P27V1_to_Profile_TA_SSP_new.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

