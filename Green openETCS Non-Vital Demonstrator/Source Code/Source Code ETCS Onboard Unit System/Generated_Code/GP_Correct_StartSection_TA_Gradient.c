/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Correct_StartSection_TA_Gradient.h"

/* TA_Gradient::GP_Correct_StartSection */
void GP_Correct_StartSection_TA_Gradient(
  /* TA_Gradient::GP_Correct_StartSection::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Correct_StartSection::Loc_BG */ kcg_int Loc_BG,
  /* TA_Gradient::GP_Correct_StartSection::Profile_out */ GradientProfile_t_TrackAtlasTypes *Profile_out)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(Profile_out, Profile_in);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(
    &(*Profile_out)[0],
    &(*Profile_in)[0]);
  (*Profile_out)[0].Loc_LRBG = 0;
  (*Profile_out)[0].L_Gradient = (*Profile_in)[1].Loc_Absolute - Loc_BG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Correct_StartSection_TA_Gradient.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

