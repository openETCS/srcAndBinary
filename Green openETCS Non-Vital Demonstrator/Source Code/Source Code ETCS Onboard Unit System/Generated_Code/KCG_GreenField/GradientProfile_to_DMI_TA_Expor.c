/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_TA_Expor.h"

/* TA_Export::GradientProfile_to_DMI */
void GradientProfile_to_DMI_TA_Expor(
  /* TA_Export::GradientProfile_to_DMI::EoA */ L_internal_Type_Obu_BasicTypes_ EoA,
  /* TA_Export::GradientProfile_to_DMI::Gradient_Profile_in */ GradientProfile_t_TrackAtlasTyp *Gradient_Profile_in,
  /* TA_Export::GradientProfile_to_DMI::Gradient_Profile_for_DMI_out */ GradientProfile_for_DMI_t_Track *Gradient_Profile_for_DMI_out)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 50; i++) {
    /* 1 */
    GradientProfile_to_DMI_loop_TA_(
      &(*Gradient_Profile_in)[i],
      EoA,
      &(*Gradient_Profile_for_DMI_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GradientProfile_to_DMI_TA_Expor.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

