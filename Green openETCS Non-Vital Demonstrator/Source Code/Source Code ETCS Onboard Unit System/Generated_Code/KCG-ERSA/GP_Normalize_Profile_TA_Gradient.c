/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Normalize_Profile_TA_Gradient.h"

/* TA_Gradient::GP_Normalize_Profile */
void GP_Normalize_Profile_TA_Gradient(
  /* TA_Gradient::GP_Normalize_Profile::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Normalize_Profile::pos_BG */L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_Gradient::GP_Normalize_Profile::ProfileNormalized_LRBG */GradientProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  static GradientProfile_t_TrackAtlasTypes tmp;
  static kcg_int i;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileNormalized_LRBG, ProfileIn);
  for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, ProfileNormalized_LRBG);
    /* 1 */
    GP_Normalize_Profile_loop_TA_Gradient(
      i,
      &tmp,
      pos_BG,
      ProfileNormalized_LRBG);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Normalize_Profile_TA_Gradient.c
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

