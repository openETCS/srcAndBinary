/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_gradientProfileElement_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_gradientProfileElement_to_int */
void CAST_DMI_gradientProfileElement_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::dmi_gradientProfileElement */ DMI_gradientProfileElement_T_DMI_Types_Pkg *dmi_gradientProfileElement,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::valid */ kcg_int *valid,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::start_section */ kcg_int *start_section,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::end_section */ kcg_int *end_section,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::gradiant */ kcg_int *gradiant)
{
  *gradiant = (*dmi_gradientProfileElement).gradient;
  *end_section = (*dmi_gradientProfileElement).end_section;
  *start_section = (*dmi_gradientProfileElement).begin_section;
  *valid = /* 1 */ Bool_to_Int_Utilities((*dmi_gradientProfileElement).valid);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_gradientProfileElement_to_int_DATA_Variables.c
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

