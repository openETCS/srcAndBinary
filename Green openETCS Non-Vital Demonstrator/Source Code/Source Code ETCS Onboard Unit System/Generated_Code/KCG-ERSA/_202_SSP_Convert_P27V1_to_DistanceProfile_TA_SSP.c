/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T14:49:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_202_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.h"

/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile */
void _202_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP(
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::Packet27V1_in */ P027V1_OBU_T_TM_baseline2 *Packet27V1_in,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::SpeedProfile */ StaticSpeedProfile_t_TrackAtlasTypes *SpeedProfile)
{
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile */ StaticSpeedProfile_t_TrackAtlasTypes acc;
  kcg_int i;
  
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
** _202_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.c
** Generation date: 2015-11-05T14:49:07
*************************************************************$ */

