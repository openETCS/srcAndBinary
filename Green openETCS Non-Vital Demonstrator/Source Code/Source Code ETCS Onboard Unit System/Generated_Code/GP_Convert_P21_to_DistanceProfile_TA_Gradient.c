/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Convert_P21_to_DistanceProfile_TA_Gradient.h"

/* TA_Gradient::GP_Convert_P21_to_DistanceProfile */
void GP_Convert_P21_to_DistanceProfile_TA_Gradient(
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::Packet21_in */ P021_OBU_T_TM *Packet21_in,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::GradientProfile */ GradientProfile_t_TrackAtlasTypes *GradientProfile)
{
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile */
  static GradientProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  
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
** GP_Convert_P21_to_DistanceProfile_TA_Gradient.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

