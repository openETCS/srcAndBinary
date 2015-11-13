/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_206_SSP_Merge_New_P27V1_to_Pro.h"

/* TA_SSP::SSP_Merge_New_P27V1_to_Profile */
void _206_SSP_Merge_New_P27V1_to_Pro(
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::new_GP */ StaticSpeedProfile_t_TrackAtlas *new_GP,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::Last_SpeedProfile_in */ StaticSpeedProfile_t_TrackAtlas *Last_SpeedProfile_in,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::SpeedProfile_out */ StaticSpeedProfile_t_TrackAtlas *SpeedProfile_out)
{
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile */
  static StaticSpeedProfile_t_TrackAtlas acc;
  static kcg_int i;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L1 */
  static kcg_int _L1;
  
  /* ck__L148 */ if ((*Last_SpeedProfile_in)[0].valid) {
    _L1 = /* 1 */ _209_FindStartOfNewSpeedProfile(Last_SpeedProfile_in, new_GP);
  }
  else {
    _L1 = 0;
  }
  kcg_copy_StaticSpeedProfile_t_T(SpeedProfile_out, Last_SpeedProfile_in);
  /* 2 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_T(&acc, SpeedProfile_out);
    /* 1 */
    SSP_Merge_New_P27V1_to_Profile_(i, &acc, _L1, new_GP, SpeedProfile_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _206_SSP_Merge_New_P27V1_to_Pro.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

