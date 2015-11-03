/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_205_FindStartOfNewSpeedProfile.h"

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs */
kcg_int _205_FindStartOfNewSpeedProfile(
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::Profile_in */ StaticSpeedProfile_t_TrackAtlas *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::New_Profile */ StaticSpeedProfile_t_TrackAtlas *New_Profile)
{
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs */
  static kcg_int acc;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::relevant_section */
  static kcg_int relevant_section;
  
  relevant_section = 0;
  /* 1 */ for (i = 0; i < 50; i++) {
    acc = relevant_section;
    /* 1 */
    FindStartOfNewSpeedProfileAbs_L(
      i,
      acc,
      (*New_Profile)[0].d_static_abs,
      Profile_in,
      &cond_iterw,
      &relevant_section);
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
  return relevant_section;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _205_FindStartOfNewSpeedProfile.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

