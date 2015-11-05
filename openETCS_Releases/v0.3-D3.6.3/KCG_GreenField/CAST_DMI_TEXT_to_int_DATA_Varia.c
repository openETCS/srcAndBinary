/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_TEXT_to_int_DATA_Varia.h"

/* DATA::Variables::CAST_DMI_TEXT_to_int */
void CAST_DMI_TEXT_to_int_DATA_Varia(
  /* DATA::Variables::CAST_DMI_TEXT_to_int::dmi_text_string_in */ DMI_TEXT_DMI_Types_Pkg *dmi_text_string_in,
  /* DATA::Variables::CAST_DMI_TEXT_to_int::dmi_text_int_array_out */ DMI_TEXT_INT_Array_T_DATA *dmi_text_int_array_out)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 255; i++) {
    (*dmi_text_int_array_out)[i] = /* 1 */
      Char_to_Int_Utilities((*dmi_text_string_in)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_TEXT_to_int_DATA_Varia.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

