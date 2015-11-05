/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T14:49:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_200_GP_Convert_P21_to_DistanceProfile_TA_Gradient.h"

/* TA_Gradient::GP_Convert_P21_to_DistanceProfile */
void _200_GP_Convert_P21_to_DistanceProfile_TA_Gradient(
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::Packet21_in */ P021_OBU_T_TM *Packet21_in,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::GradientProfile */ GradientProfile_t_TrackAtlasTypes *GradientProfile)
{
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile */ GradientProfile_t_TrackAtlasTypes acc;
  kcg_int i;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    GradientProfile,
    (GradientProfile_t_TrackAtlasTypes *)
      &DEFAULT_GradientProfile_TrackAtlasTypes);
  /* 1 */ for (i = 0; i < 33; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, GradientProfile);
    /* 1 */
    GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient(
      i,
      &acc,
      &(*Packet21_in).sections,
      (*Packet21_in).q_scale,
      GradientProfile);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _200_GP_Convert_P21_to_DistanceProfile_TA_Gradient.c
** Generation date: 2015-11-05T14:49:07
*************************************************************$ */

