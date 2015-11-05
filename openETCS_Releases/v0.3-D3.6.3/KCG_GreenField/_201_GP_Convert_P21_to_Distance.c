/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_201_GP_Convert_P21_to_Distance.h"

/* TA_Gradient::GP_Convert_P21_to_DistanceProfile */
void _201_GP_Convert_P21_to_Distance(
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::Packet21_in */ P021_OBU_T_TM *Packet21_in,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::GradientProfile */ GradientProfile_t_TrackAtlasTyp *GradientProfile)
{
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile */
  static GradientProfile_t_TrackAtlasTyp acc;
  static kcg_int i;
  
  kcg_copy_GradientProfile_t_Trac(
    GradientProfile,
    (GradientProfile_t_TrackAtlasTyp *) &DEFAULT_GradientProfile_TrackAt);
  /* 1 */ for (i = 0; i < 33; i++) {
    kcg_copy_GradientProfile_t_Trac(&acc, GradientProfile);
    /* 1 */
    GP_Convert_P21_to_DistanceProfi(
      i,
      &acc,
      &(*Packet21_in).sections,
      (*Packet21_in).q_scale,
      GradientProfile);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _201_GP_Convert_P21_to_Distance.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

