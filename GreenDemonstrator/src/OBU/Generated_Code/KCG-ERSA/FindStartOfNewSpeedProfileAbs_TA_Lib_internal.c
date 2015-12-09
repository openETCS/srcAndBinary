/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfileAbs_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs */
kcg_int FindStartOfNewSpeedProfileAbs_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::Profile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::New_Profile */ StaticSpeedProfile_t_TrackAtlasTypes *New_Profile)
{
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs */ kcg_int acc;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs */ kcg_bool cond_iterw;
  kcg_int i;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::relevant_section */ kcg_int relevant_section;
  
  relevant_section = 0;
  /* 1 */ for (i = 0; i < 50; i++) {
    acc = relevant_section;
    /* 1 */
    FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal(
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
** FindStartOfNewSpeedProfileAbs_TA_Lib_internal.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

