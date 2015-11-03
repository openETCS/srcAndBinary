/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Truncate_at_BG_TA_SSP.h"

/* TA_SSP::SSP_Truncate_at_BG */
void SSP_Truncate_at_BG_TA_SSP(
  /* TA_SSP::SSP_Truncate_at_BG::Profile_in */ StaticSpeedProfile_t_TrackAtlas *Profile_in,
  /* TA_SSP::SSP_Truncate_at_BG::Profile_out */ StaticSpeedProfile_t_TrackAtlas *Profile_out)
{
  /* TA_SSP::SSP_Truncate_at_BG */
  static kcg_int acc1;
  /* TA_SSP::SSP_Truncate_at_BG */
  static StaticSpeedProfile_t_TrackAtlas acc;
  /* TA_SSP::SSP_Truncate_at_BG */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TA_SSP::SSP_Truncate_at_BG::_L5 */
  static kcg_int _L5;
  
  _L5 = 0;
  /* 2 */ for (i = 0; i < 50; i++) {
    acc1 = _L5;
    /* 1 */
    SSP_Find_First_Speed_Section_Af(i, acc1, Profile_in, &cond_iterw, &_L5);
    /* 2 */ if (!cond_iterw) {
      break;
    }
  }
  kcg_copy_StaticSpeedProfile_t_T(
    Profile_out,
    (StaticSpeedProfile_t_TrackAtlas *) &DEFAULT_StaticSpeedProfile_Trac);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_T(&acc, Profile_out);
    /* 1 */
    SSP_Truncate_at_BG_loop_TA_SSP(
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
** SSP_Truncate_at_BG_TA_SSP.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

