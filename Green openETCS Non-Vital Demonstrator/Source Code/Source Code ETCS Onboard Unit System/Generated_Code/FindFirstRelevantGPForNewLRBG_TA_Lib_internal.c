/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindFirstRelevantGPForNewLRBG_TA_Lib_internal.h"

/* TA_Lib_internal::FindFirstRelevantGPForNewLRBG */
kcg_int FindFirstRelevantGPForNewLRBG_TA_Lib_internal(
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::Distance_2LRBGs */kcg_int Distance_2LRBGs)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::relevant_section */
  static kcg_int relevant_section;
  
  relevant_section = 0;
  for (i = 0; i < 33; i++) {
    tmp1 = relevant_section;
    /* 1 */
    FindFirstRelevantGPForNewLRBG_Loop_TA_Lib_internal(
      i,
      tmp1,
      Profile_in,
      Distance_2LRBGs,
      &tmp,
      &relevant_section);
    if (!tmp) {
      break;
    }
  }
  return relevant_section;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindFirstRelevantGPForNewLRBG_TA_Lib_internal.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

