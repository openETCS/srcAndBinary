/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Normalize_Profile_TA_SSP.h"

/* TA_SSP::SSP_Normalize_Profile */
void SSP_Normalize_Profile_TA_SSP(
  /* TA_SSP::SSP_Normalize_Profile::ProfileIn */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Normalize_Profile::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_SSP::SSP_Normalize_Profile::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SSP::SSP_Normalize_Profile::ProfileNormalized_LRBG */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  /* TA_SSP::SSP_Normalize_Profile */
  static StaticSpeedProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    ProfileNormalized_LRBG,
    ProfileIn);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, ProfileNormalized_LRBG);
    /* 1 */
    SSP_Normalize_Profile_loop_TA_SSP(
      i,
      &acc,
      pos_BG,
      train_length,
      ProfileNormalized_LRBG);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Normalize_Profile_TA_SSP.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

