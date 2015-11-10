/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertGradient_section_SDM_Inp.h"

/* SDM_Input_Wrappers::ConvertGradient_section */
void ConvertGradient_section_SDM_Inp(
  /* SDM_Input_Wrappers::ConvertGradient_section::Gradient_section_ext */ Gradient_section_t_TrackAtlasTy *Gradient_section_ext,
  /* SDM_Input_Wrappers::ConvertGradient_section::Gradient_section_int */ Gradient_section_real_t_SDM_Gra *Gradient_section_int)
{
  (*Gradient_section_int).gradient = (kcg_real)
      (*Gradient_section_ext).Gradient;
  (*Gradient_section_int).valid = (*Gradient_section_ext).valid;
  (*Gradient_section_int).location = /* 1 */
    TransformL_intToL_real_SDM_Type((*Gradient_section_ext).Loc_Absolute);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertGradient_section_SDM_Inp.c
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

