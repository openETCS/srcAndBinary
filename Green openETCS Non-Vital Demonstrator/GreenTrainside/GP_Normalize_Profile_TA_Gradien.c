/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Normalize_Profile_TA_Gradien.h"

/* TA_Gradient::GP_Normalize_Profile */
void GP_Normalize_Profile_TA_Gradien(
  /* TA_Gradient::GP_Normalize_Profile::ProfileIn */ GradientProfile_t_TrackAtlasTyp *ProfileIn,
  /* TA_Gradient::GP_Normalize_Profile::pos_BG */ L_internal_Type_Obu_BasicTypes_ pos_BG,
  /* TA_Gradient::GP_Normalize_Profile::ProfileNormalized_LRBG */ GradientProfile_t_TrackAtlasTyp *ProfileNormalized_LRBG)
{
  /* TA_Gradient::GP_Normalize_Profile */
  static GradientProfile_t_TrackAtlasTyp acc;
  static kcg_int i;
  
  kcg_copy_GradientProfile_t_Trac(ProfileNormalized_LRBG, ProfileIn);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_Trac(&acc, ProfileNormalized_LRBG);
    /* 1 */
    GP_Normalize_Profile_loop_TA_Gr(i, &acc, pos_BG, ProfileNormalized_LRBG);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Normalize_Profile_TA_Gradien.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

