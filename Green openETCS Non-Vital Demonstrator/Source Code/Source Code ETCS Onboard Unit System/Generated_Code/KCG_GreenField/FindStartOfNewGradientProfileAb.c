/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewGradientProfileAb.h"

/* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP */
void FindStartOfNewGradientProfileAb(
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::i */ kcg_int i,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::Acc */ kcg_int Acc,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::distance_in */ L_internal_Type_Obu_BasicTypes_ distance_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::Profile_in */ GradientProfile_t_TrackAtlasTyp *Profile_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::cont */ kcg_bool *cont,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::relevant_section */ kcg_int *relevant_section)
{
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP */
  static G_internal_Type_Obu_BasicTypes_ tmp;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L4 */
  static Gradient_section_t_TrackAtlasTy _L4;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_Tra(&_L4, &(*Profile_in)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_Tra(
      &_L4,
      (Gradient_section_t_TrackAtlasTy *) &DEFAULT_GradientSection_TrackAt);
  }
  /* 2 */ if (0 <= _L4.Gradient) {
    tmp = _L4.Gradient;
  }
  else {
    tmp = - _L4.Gradient;
  }
  *cont = !((i > 0) & (0 == _L4.Loc_Absolute)) & (_L4.Loc_Absolute <
      distance_in) & (tmp != 255);
  *relevant_section = i + 0;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FindStartOfNewGradientProfileAb.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

