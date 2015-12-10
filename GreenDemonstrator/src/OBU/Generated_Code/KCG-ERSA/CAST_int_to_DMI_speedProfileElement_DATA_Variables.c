/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_speedProfileElement_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_speedProfileElement */
void CAST_int_to_DMI_speedProfileElement_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::valid */ kcg_int valid,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::loc_abs */ kcg_int loc_abs,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::loc_lrbg */ kcg_int loc_lrbg,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::mrs */ kcg_int mrs,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::dmi_speedProfileElemen */ DMI_speedProfileElement_T_DMI_Types_Pkg *dmi_speedProfileElemen)
{
  (*dmi_speedProfileElemen).Loc_Abs = loc_abs;
  (*dmi_speedProfileElemen).Loc_LRBG = loc_lrbg;
  (*dmi_speedProfileElemen).MRS = mrs;
  (*dmi_speedProfileElemen).valid = /* 1 */ Int_to_Bool_Utilities(valid);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_speedProfileElement_DATA_Variables.c
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

