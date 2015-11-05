/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_TA_Expor.h"

/* TA_Export::GradientProfile_to_DMI */
void GradientProfile_to_DMI_TA_Expor(
  /* TA_Export::GradientProfile_to_DMI::Gradient_Profile_in */ GradientProfile_t_TrackAtlasTyp *Gradient_Profile_in,
  /* TA_Export::GradientProfile_to_DMI::Gradient_Profile_for_DMI_out */ GradientProfile_for_DMI_t_Track *Gradient_Profile_for_DMI_out)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 50; i++) {
    /* 1 */
    GradientProfile_to_DMI_loop_TA_(
      &(*Gradient_Profile_in)[i],
      &(*Gradient_Profile_for_DMI_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GradientProfile_to_DMI_TA_Expor.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

