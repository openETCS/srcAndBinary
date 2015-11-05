/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_TEXT_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_TEXT_to_int */
void CAST_DMI_TEXT_to_int_DATA_Variables(
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
** CAST_DMI_TEXT_to_int_DATA_Variables.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

