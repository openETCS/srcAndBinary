/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new.h"

/* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile */
void SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new(
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile::Packet27V1_in */ P027V1_OBU_T_TM_baseline2 *Packet27V1_in,
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile::SpeedProfile */ StaticSpeedProfile_t_TrackAtlasTypes *SpeedProfile)
{
  /* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile */ StaticSpeedProfile_t_TrackAtlasTypes acc;
  kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    SpeedProfile,
    (StaticSpeedProfile_t_TrackAtlasTypes *)
      &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, SpeedProfile);
    /* 1 */
    SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new(
      i,
      &acc,
      &(*Packet27V1_in).sections,
      (*Packet27V1_in).q_scale,
      SpeedProfile);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

