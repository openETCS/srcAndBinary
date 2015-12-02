/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Correct_StartSection_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Correct_StartSection */
void GP_Correct_StartSection_TA_Gradient_new(
  /* TA_Gradient_new::GP_Correct_StartSection::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient_new::GP_Correct_StartSection::Loc_BG */ kcg_int Loc_BG,
  /* TA_Gradient_new::GP_Correct_StartSection::Profile_out */ GradientProfile_t_TrackAtlasTypes *Profile_out)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(Profile_out, Profile_in);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(
    &(*Profile_out)[0],
    &(*Profile_in)[0]);
  (*Profile_out)[0].Loc_LRBG = 0;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Correct_StartSection_TA_Gradient_new.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

