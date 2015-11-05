/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T14:49:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_203_FindStartOfNewGradientProfileAbs_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewGradientProfileAbs */
kcg_int _203_FindStartOfNewGradientProfileAbs_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::New_Profile */ GradientProfile_t_TrackAtlasTypes *New_Profile)
{
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs */ kcg_int acc;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs */ kcg_bool cond_iterw;
  kcg_int i;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::relevant_section */ kcg_int relevant_section;
  
  relevant_section = 0;
  /* 1 */ for (i = 0; i < 50; i++) {
    acc = relevant_section;
    /* 1 */
    FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal(
      i,
      acc,
      (*New_Profile)[0].Loc_Absolute,
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
** _203_FindStartOfNewGradientProfileAbs_TA_Lib_internal.c
** Generation date: 2015-11-05T14:49:07
*************************************************************$ */

