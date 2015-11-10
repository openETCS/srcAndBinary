/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Merge_New_P27V1_to_Profile_.h"

/* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop */
void SSP_Merge_New_P27V1_to_Profile_(
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::i */ kcg_int i,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::SP */ StaticSpeedProfile_t_TrackAtlas *SP,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::First_Section_To_Replace */ kcg_int First_Section_To_Replace,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::new_SP_received */ StaticSpeedProfile_t_TrackAtlas *new_SP_received,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::SSP */ StaticSpeedProfile_t_TrackAtlas *SSP)
{
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop */
  static StaticSpeedSection_t_TrackAtlas tmp;
  
  kcg_copy_StaticSpeedProfile_t_T(SSP, SP);
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_T(&tmp, &(*new_SP_received)[i]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_T(
      &tmp,
      (StaticSpeedSection_t_TrackAtlas *) &DEFAULT_StaticSpeedSection_Trac);
  }
  if ((0 <= i + First_Section_To_Replace) & (i + First_Section_To_Replace <
      50)) {
    kcg_copy_StaticSpeedSection_t_T(
      &(*SSP)[i + First_Section_To_Replace],
      &tmp);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Merge_New_P27V1_to_Profile_.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

