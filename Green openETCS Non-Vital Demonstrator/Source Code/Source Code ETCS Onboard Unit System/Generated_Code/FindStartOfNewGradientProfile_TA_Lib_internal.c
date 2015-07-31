/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewGradientProfile_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewGradientProfile */
kcg_int FindStartOfNewGradientProfile_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewGradientProfile::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfile::New_Profile */GradientProfile_t_TrackAtlasTypes *New_Profile)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TA_Lib_internal::FindStartOfNewGradientProfile::relevant_section */
  static kcg_int relevant_section;
  
  relevant_section = 0;
  for (i = 0; i < 33; i++) {
    tmp1 = relevant_section;
    /* 1 */
    FindStartOfNewGradientProfile_LOOP_TA_Lib_internal(
      i,
      tmp1,
      (*New_Profile)[0].Loc_LRBG,
      Profile_in,
      &tmp,
      &relevant_section);
    if (!tmp) {
      break;
    }
  }
  return relevant_section;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewGradientProfile_TA_Lib_internal.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

