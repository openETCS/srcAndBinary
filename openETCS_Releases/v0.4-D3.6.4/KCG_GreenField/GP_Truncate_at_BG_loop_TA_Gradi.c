/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Truncate_at_BG_loop_TA_Gradi.h"

/* TA_Gradient_new::GP_Truncate_at_BG_loop */
void GP_Truncate_at_BG_loop_TA_Gradi(
  /* TA_Gradient_new::GP_Truncate_at_BG_loop::i */ kcg_int i,
  /* TA_Gradient_new::GP_Truncate_at_BG_loop::Acc */ GradientProfile_t_TrackAtlasTyp *Acc,
  /* TA_Gradient_new::GP_Truncate_at_BG_loop::Profile_in */ GradientProfile_t_TrackAtlasTyp *Profile_in,
  /* TA_Gradient_new::GP_Truncate_at_BG_loop::Pointer */ kcg_int Pointer,
  /* TA_Gradient_new::GP_Truncate_at_BG_loop::cont */ kcg_bool *cont,
  /* TA_Gradient_new::GP_Truncate_at_BG_loop::Profile_out */ GradientProfile_t_TrackAtlasTyp *Profile_out)
{
  /* TA_Gradient_new::GP_Truncate_at_BG_loop::_L8 */
  static Gradient_section_t_TrackAtlasTy _L8;
  
  if ((0 <= i + Pointer) & (i + Pointer < 50)) {
    kcg_copy_Gradient_section_t_Tra(&_L8, &(*Profile_in)[i + Pointer]);
  }
  else {
    kcg_copy_Gradient_section_t_Tra(
      &_L8,
      (Gradient_section_t_TrackAtlasTy *) &DEFAULT_GP_Section_TA_Gradient_);
  }
  kcg_copy_GradientProfile_t_Trac(Profile_out, Acc);
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_Tra(&(*Profile_out)[i], &_L8);
  }
  *cont = _L8.valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Truncate_at_BG_loop_TA_Gradi.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

