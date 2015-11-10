/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Correct_StartSection_TA_SSP.h"

/* TA_SSP::SSP_Correct_StartSection */
void SSP_Correct_StartSection_TA_SSP(
  /* TA_SSP::SSP_Correct_StartSection::Profile_in */ StaticSpeedProfile_t_TrackAtlas *Profile_in,
  /* TA_SSP::SSP_Correct_StartSection::Profile_out */ StaticSpeedProfile_t_TrackAtlas *Profile_out)
{
  kcg_copy_StaticSpeedProfile_t_T(Profile_out, Profile_in);
  kcg_copy_StaticSpeedSection_t_T(&(*Profile_out)[0], &(*Profile_in)[0]);
  (*Profile_out)[0].d_static_LRBG = 0;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Correct_StartSection_TA_SSP.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

