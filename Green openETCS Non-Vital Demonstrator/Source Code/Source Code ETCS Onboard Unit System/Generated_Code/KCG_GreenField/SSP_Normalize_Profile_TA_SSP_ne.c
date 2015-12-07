/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Normalize_Profile_TA_SSP_ne.h"

/* TA_SSP_new::SSP_Normalize_Profile */
void SSP_Normalize_Profile_TA_SSP_ne(
  /* TA_SSP_new::SSP_Normalize_Profile::ProfileIn */ StaticSpeedProfile_t_TrackAtlas *ProfileIn,
  /* TA_SSP_new::SSP_Normalize_Profile::pos_BG */ L_internal_Type_Obu_BasicTypes_ pos_BG,
  /* TA_SSP_new::SSP_Normalize_Profile::train_length */ L_internal_Type_Obu_BasicTypes_ train_length,
  /* TA_SSP_new::SSP_Normalize_Profile::ProfileNormalized_LRBG */ StaticSpeedProfile_t_TrackAtlas *ProfileNormalized_LRBG)
{
  /* TA_SSP_new::SSP_Normalize_Profile */
  static StaticSpeedProfile_t_TrackAtlas acc;
  static kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_T(ProfileNormalized_LRBG, ProfileIn);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_T(&acc, ProfileNormalized_LRBG);
    /* 1 */
    SSP_Normalize_Profile_loop_TA_S(
      i,
      &acc,
      pos_BG,
      train_length,
      ProfileNormalized_LRBG);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Normalize_Profile_TA_SSP_ne.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

