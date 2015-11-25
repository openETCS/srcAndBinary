/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Truncate_at_BG_TA_SSP_new.h"

/* TA_SSP_new::SSP_Truncate_at_BG */
void SSP_Truncate_at_BG_TA_SSP_new(
  /* TA_SSP_new::SSP_Truncate_at_BG::Profile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP_new::SSP_Truncate_at_BG::Profile_out */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_out)
{
  /* TA_SSP_new::SSP_Truncate_at_BG */ kcg_int acc1;
  /* TA_SSP_new::SSP_Truncate_at_BG */ StaticSpeedProfile_t_TrackAtlasTypes acc;
  /* TA_SSP_new::SSP_Truncate_at_BG */ kcg_bool cond_iterw;
  kcg_int i;
  /* TA_SSP_new::SSP_Truncate_at_BG::_L5 */ kcg_int _L5;
  
  _L5 = 0;
  /* 2 */ for (i = 0; i < 50; i++) {
    acc1 = _L5;
    /* 1 */
    SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new(
      i,
      acc1,
      Profile_in,
      &cond_iterw,
      &_L5);
    /* 2 */ if (!cond_iterw) {
      break;
    }
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    Profile_out,
    (StaticSpeedProfile_t_TrackAtlasTypes *)
      &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, Profile_out);
    /* 1 */
    SSP_Truncate_at_BG_loop_TA_SSP_new(
      i,
      &acc,
      Profile_in,
      _L5,
      &cond_iterw,
      Profile_out);
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Truncate_at_BG_TA_SSP_new.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

