/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.h"

/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile */
void SSP_Convert_P27V1_to_DistanceProfile_TA_SSP(
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::Packet27V1_in */ P027V1_OBU_T_TM_baseline2 *Packet27V1_in,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::SpeedProfile */ StaticSpeedProfile_t_TrackAtlasTypes *SpeedProfile)
{
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile */
  static StaticSpeedProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    SpeedProfile,
    (StaticSpeedProfile_t_TrackAtlasTypes *)
      &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, SpeedProfile);
    /* 1 */
    SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP(
      i,
      &acc,
      &(*Packet27V1_in).sections,
      (*Packet27V1_in).q_scale,
      SpeedProfile);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

