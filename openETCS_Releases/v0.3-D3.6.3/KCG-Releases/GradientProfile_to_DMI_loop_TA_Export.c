/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_loop_TA_Export.h"

/* TA_Export::GradientProfile_to_DMI_loop */
void GradientProfile_to_DMI_loop_TA_Export(
  /* TA_Export::GradientProfile_to_DMI_loop::Gradient_section_in */ Gradient_section_t_TrackAtlasTypes *Gradient_section_in,
  /* TA_Export::GradientProfile_to_DMI_loop::Gradiient_section_for_DMI_out */ GradientProfile_for_DMI_section_t_TrackAtlasTypes *Gradiient_section_for_DMI_out)
{
  (*Gradiient_section_for_DMI_out).valid = (*Gradient_section_in).valid;
  (*Gradiient_section_for_DMI_out).begin_section =
    (*Gradient_section_in).Loc_Absolute;
  (*Gradiient_section_for_DMI_out).end_section =
    (*Gradient_section_in).Loc_Absolute + (*Gradient_section_in).L_Gradient;
  /* 3 */ if ((*Gradient_section_in).Gradient == 255) {
    (*Gradiient_section_for_DMI_out).gradient = 0;
  }
  else {
    (*Gradiient_section_for_DMI_out).gradient = (*Gradient_section_in).Gradient;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GradientProfile_to_DMI_loop_TA_Export.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

