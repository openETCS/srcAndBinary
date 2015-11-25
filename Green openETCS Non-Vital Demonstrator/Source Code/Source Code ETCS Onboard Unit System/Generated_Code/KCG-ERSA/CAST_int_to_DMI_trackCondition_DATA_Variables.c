/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_trackCondition_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_trackCondition */
void CAST_int_to_DMI_trackCondition_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_trackCondition::dmi_trackCondition_int */ DMI_trackCondition_int_array_T *dmi_trackCondition_int,
  /* DATA::Variables::CAST_int_to_DMI_trackCondition::dmi_trackCondition_ct */ DMI_trackCondition_T_DMI_Types_Pkg *dmi_trackCondition_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_trackCondition */ DMI_trackConditionArray_T_DMI_Types_Pkg tmp;
  kcg_int i;
  
  (*dmi_trackCondition_ct).nIter = (*dmi_trackCondition_int)[0];
  /* 2 */ for (i = 0; i < 32; i++) {
    /* 1 */
    Cast_Int_to_DMI_trackConditionElement_DATA_Variables(
      (*dmi_trackCondition_int)[i + 1],
      (*dmi_trackCondition_int)[i + 33],
      &tmp[i]);
  }
  kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg(
    &(*dmi_trackCondition_ct).trackCondition,
    &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_trackCondition_DATA_Variables.c
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

