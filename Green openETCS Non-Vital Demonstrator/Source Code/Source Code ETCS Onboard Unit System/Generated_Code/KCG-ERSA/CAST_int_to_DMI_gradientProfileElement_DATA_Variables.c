/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_gradientProfileElement_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_gradientProfileElement */
void CAST_int_to_DMI_gradientProfileElement_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::valid */ kcg_int valid,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::begin_section */ kcg_int begin_section,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::end_section */ kcg_int end_section,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::gradiant */ kcg_int gradiant,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::dmi_gradientProfileElemen */ DMI_gradientProfileElement_T_DMI_Types_Pkg *dmi_gradientProfileElemen)
{
  (*dmi_gradientProfileElemen).begin_section = begin_section;
  (*dmi_gradientProfileElemen).end_section = end_section;
  (*dmi_gradientProfileElemen).gradient = gradiant;
  (*dmi_gradientProfileElemen).valid = /* 1 */ Int_to_Bool_Utilities(valid);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_gradientProfileElement_DATA_Variables.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

