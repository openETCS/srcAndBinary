/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_203_SSP_Convert_P27V1_to_Dista.h"

/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile */
void _203_SSP_Convert_P27V1_to_Dista(
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::Packet27V1_in */ P027V1_OBU_T_TM_baseline2 *Packet27V1_in,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::SpeedProfile */ StaticSpeedProfile_t_TrackAtlas *SpeedProfile)
{
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile */
  static StaticSpeedProfile_t_TrackAtlas acc;
  static kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_T(
    SpeedProfile,
    (StaticSpeedProfile_t_TrackAtlas *) &DEFAULT_StaticSpeedProfile_Trac);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_T(&acc, SpeedProfile);
    /* 1 */
    SSP_Convert_P27V1_to_DistancePr(
      i,
      &acc,
      &(*Packet27V1_in).sections,
      (*Packet27V1_in).q_scale,
      SpeedProfile);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _203_SSP_Convert_P27V1_to_Dista.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

