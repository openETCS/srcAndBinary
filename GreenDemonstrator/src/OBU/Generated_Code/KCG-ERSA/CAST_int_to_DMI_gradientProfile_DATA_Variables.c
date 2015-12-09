/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_gradientProfile_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_gradientProfile */
void CAST_int_to_DMI_gradientProfile_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::dmi_gradientProfile_int */ DMI_gradientProfile_int_arrayT *dmi_gradientProfile_int,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::dmi_gradientProfile */ DMI_gradientProfile_T_DMI_Types_Pkg *dmi_gradientProfile)
{
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile */ DMI_gradientProfileArray_T_DMI_Types_Pkg tmp;
  kcg_int i;
  
  (*dmi_gradientProfile).profileChanged = /* 1 */
    Int_to_Bool_Utilities((*dmi_gradientProfile_int)[0]);
  /* 2 */ for (i = 0; i < 32; i++) {
    /* 1 */
    CAST_int_to_DMI_gradientProfileElement_DATA_Variables(
      (*dmi_gradientProfile_int)[i + 1],
      (*dmi_gradientProfile_int)[i + 33],
      (*dmi_gradientProfile_int)[i + 65],
      (*dmi_gradientProfile_int)[i + 97],
      &tmp[i]);
  }
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &(*dmi_gradientProfile).gradientProfiles,
    &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_gradientProfile_DATA_Variables.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

