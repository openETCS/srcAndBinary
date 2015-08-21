/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfile_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewSpeedProfile */
kcg_int FindStartOfNewSpeedProfile_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfile::Profile_in */SSP_cat_t_TA_MRSP *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile::New_Profile */SSP_cat_t_TA_MRSP *New_Profile)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TA_Lib_internal::FindStartOfNewSpeedProfile::relevant_section */
  static kcg_int relevant_section;
  
  relevant_section = 0;
  for (i = 0; i < 33; i++) {
    tmp1 = relevant_section;
    /* 1 */
    FindStartOfNewSpeedProfile_LOOP_TA_Lib_internal(
      i,
      tmp1,
      (*New_Profile)[0].target,
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
** FindStartOfNewSpeedProfile_TA_Lib_internal.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

