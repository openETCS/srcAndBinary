/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_gradientProfile_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_gradientProfile_to_int */
void CAST_DMI_gradientProfile_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::dmi_gradientProfile */ DMI_gradientProfile_T_DMI_Types_Pkg *dmi_gradientProfile,
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::DMI_gradientProfile_int */ DMI_gradientProfile_int_arrayT *DMI_gradientProfile_int)
{
  kcg_int i;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L9 */ array_int_32 _L9;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L8 */ array_int_32 _L8;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L7 */ array_int_32 _L7;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L6 */ array_int_32 _L6;
  
  /* 1 */ for (i = 0; i < 32; i++) {
    /* 1 */
    CAST_DMI_gradientProfileElement_to_int_DATA_Variables(
      &(*dmi_gradientProfile).gradientProfiles[i],
      &_L6[i],
      &_L7[i],
      &_L8[i],
      &_L9[i]);
  }
  (&(&(&(&(*DMI_gradientProfile_int)[0])[0])[0])[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_gradientProfile).profileChanged);
  kcg_copy_array_int_32(&(*DMI_gradientProfile_int)[1], &_L6);
  kcg_copy_array_int_32(&(*DMI_gradientProfile_int)[33], &_L7);
  kcg_copy_array_int_32(&(*DMI_gradientProfile_int)[65], &_L8);
  kcg_copy_array_int_32(&(*DMI_gradientProfile_int)[97], &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_gradientProfile_to_int_DATA_Variables.c
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

