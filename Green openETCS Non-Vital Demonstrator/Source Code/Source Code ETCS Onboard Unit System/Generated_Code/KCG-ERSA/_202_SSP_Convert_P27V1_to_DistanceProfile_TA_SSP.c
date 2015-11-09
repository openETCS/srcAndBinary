/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_202_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.h"

/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile */
void _202_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP(
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::Packet27V1_in */P027V1_OBU_T_TM_baseline2 *Packet27V1_in,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::SpeedProfile */StaticSpeedProfile_t_TrackAtlasTypes *SpeedProfile)
{
  static StaticSpeedProfile_t_TrackAtlasTypes tmp;
  static kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    SpeedProfile,
    (StaticSpeedProfile_t_TrackAtlasTypes *)
      &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, SpeedProfile);
    /* 1 */
    SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP(
      i,
      &tmp,
      &(*Packet27V1_in).sections,
      (*Packet27V1_in).q_scale,
      SpeedProfile);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _202_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

