/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Truncate_at_BG_loop_TA_Gradient.h"

/* TA_Gradient::GP_Truncate_at_BG_loop */
void GP_Truncate_at_BG_loop_TA_Gradient(
  /* TA_Gradient::GP_Truncate_at_BG_loop::i */ kcg_int i,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Acc */ GradientProfile_t_TrackAtlasTypes *Acc,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Pointer */ kcg_int Pointer,
  /* TA_Gradient::GP_Truncate_at_BG_loop::cont */ kcg_bool *cont,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Profile_out */ GradientProfile_t_TrackAtlasTypes *Profile_out)
{
  /* TA_Gradient::GP_Truncate_at_BG_loop::_L8 */
  static Gradient_section_t_TrackAtlasTypes _L8;
  
  if ((0 <= i + Pointer) & (i + Pointer < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L8,
      &(*Profile_in)[i + Pointer]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L8,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(Profile_out, Acc);
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&(*Profile_out)[i], &_L8);
  }
  *cont = _L8.valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Truncate_at_BG_loop_TA_Gradient.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

