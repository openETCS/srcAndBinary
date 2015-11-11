/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_TEXT_DATA_Varia.h"

/* DATA::Variables::CAST_int_to_DMI_TEXT */
void CAST_int_to_DMI_TEXT_DATA_Varia(
  /* DATA::Variables::CAST_int_to_DMI_TEXT::dmi_text_int_array_in */ DMI_TEXT_INT_Array_T_DATA *dmi_text_int_array_in,
  /* DATA::Variables::CAST_int_to_DMI_TEXT::dmi_text_string_out */ DMI_TEXT_DMI_Types_Pkg *dmi_text_string_out)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 255; i++) {
    (*dmi_text_string_out)[i] = /* 1 */
      Int_to_Char_Utilities((*dmi_text_int_array_in)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_TEXT_DATA_Varia.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

