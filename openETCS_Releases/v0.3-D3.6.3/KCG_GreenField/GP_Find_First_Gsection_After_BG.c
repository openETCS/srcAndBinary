/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Find_First_Gsection_After_BG.h"

/* TA_Gradient::GP_Find_First_Gsection_After_BG_loop */
void GP_Find_First_Gsection_After_BG(
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::i */ kcg_int i,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::Acc */ kcg_int Acc,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::Profile_in */ GradientProfile_t_TrackAtlasTyp *Profile_in,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::cont */ kcg_bool *cont,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::Pointer */ kcg_int *Pointer)
{
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop */
  static Gradient_section_t_TrackAtlasTy tmp;
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L13 */
  static kcg_int _L13;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_Tra(&tmp, &(*Profile_in)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_Tra(
      &tmp,
      (Gradient_section_t_TrackAtlasTy *) &DEFAULT_GP_Section_TA_Gradient);
  }
  *cont = tmp.Loc_LRBG < 0;
  _L13 = i - 1;
  /* 1 */ if (_L13 < 0) {
    *Pointer = 0;
  }
  else {
    *Pointer = _L13;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Find_First_Gsection_After_BG.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

