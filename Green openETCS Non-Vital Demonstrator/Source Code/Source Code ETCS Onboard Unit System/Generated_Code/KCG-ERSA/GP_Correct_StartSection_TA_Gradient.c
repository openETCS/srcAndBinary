/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Correct_StartSection_TA_Gradient.h"

/* TA_Gradient::GP_Correct_StartSection */
void GP_Correct_StartSection_TA_Gradient(
  /* TA_Gradient::GP_Correct_StartSection::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Correct_StartSection::Loc_BG */kcg_int Loc_BG,
  /* TA_Gradient::GP_Correct_StartSection::Profile_out */GradientProfile_t_TrackAtlasTypes *Profile_out)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(Profile_out, Profile_in);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(
    &(*Profile_out)[0],
    &(*Profile_in)[0]);
  (*Profile_out)[0].Loc_LRBG = 0;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Correct_StartSection_TA_Gradient.c
** Generation date: 2015-11-09T11:52:26
*************************************************************$ */

