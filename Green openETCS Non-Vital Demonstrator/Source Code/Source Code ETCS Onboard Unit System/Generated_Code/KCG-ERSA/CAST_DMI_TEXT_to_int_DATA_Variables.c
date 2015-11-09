/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_TEXT_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_TEXT_to_int */
void CAST_DMI_TEXT_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_TEXT_to_int::dmi_text_string_in */DMI_TEXT_DMI_Types_Pkg *dmi_text_string_in,
  /* DATA::Variables::CAST_DMI_TEXT_to_int::dmi_text_int_array_out */DMI_TEXT_INT_Array_T_DATA *dmi_text_int_array_out)
{
  static kcg_int i;
  
  for (i = 0; i < 255; i++) {
    (*dmi_text_int_array_out)[i] = /* 1 */
      Char_to_Int_Utilities((*dmi_text_string_in)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_TEXT_to_int_DATA_Variables.c
** Generation date: 2015-11-09T11:52:23
*************************************************************$ */
