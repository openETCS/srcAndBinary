/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_loop_TA_Export.h"

/* TA_Export::GradientProfile_to_DMI_loop */
void GradientProfile_to_DMI_loop_TA_Export(
  /* TA_Export::GradientProfile_to_DMI_loop::Gradient_section_in */ Gradient_section_t_TrackAtlasTypes *Gradient_section_in,
  /* TA_Export::GradientProfile_to_DMI_loop::EoA */ L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* TA_Export::GradientProfile_to_DMI_loop::Gradiient_section_for_DMI_out */ GradientProfile_for_DMI_section_t_TrackAtlasTypes *Gradiient_section_for_DMI_out)
{
  /* TA_Export::GradientProfile_to_DMI_loop */ L_internal_Type_Obu_BasicTypes_Pkg tmp1;
  /* TA_Export::GradientProfile_to_DMI_loop */ kcg_int tmp;
  /* TA_Export::GradientProfile_to_DMI_loop::_L28 */ kcg_int _L28;
  /* TA_Export::GradientProfile_to_DMI_loop::_L50 */ kcg_bool _L50;
  
  _L28 = (*Gradient_section_in).Loc_Absolute +
    (*Gradient_section_in).L_Gradient;
  _L50 = (EoA > (*Gradient_section_in).Loc_Absolute) &
    (*Gradient_section_in).valid;
  (*Gradiient_section_for_DMI_out).valid = _L50;
  /* 9 */ if (_L50) {
    (*Gradiient_section_for_DMI_out).begin_section =
      (*Gradient_section_in).Loc_Absolute;
    /* 5 */ if (_L28 > EoA) {
      tmp1 = EoA;
    }
    else {
      tmp1 = _L28;
    }
    /* 3 */ if ((*Gradient_section_in).Gradient == 255) {
      tmp = 0;
    }
    else {
      tmp = (*Gradient_section_in).Gradient;
    }
  }
  else {
    (*Gradiient_section_for_DMI_out).begin_section = ZERO_TA_Export;
    tmp1 = ZERO_TA_Export;
    tmp = ZERO_TA_Export;
  }
  (*Gradiient_section_for_DMI_out).end_section = tmp1;
  (*Gradiient_section_for_DMI_out).gradient = tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GradientProfile_to_DMI_loop_TA_Export.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

