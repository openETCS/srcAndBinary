/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_speedProfile_to_int_DA.h"

/* DATA::Variables::CAST_DMI_speedProfile_to_int */
void CAST_DMI_speedProfile_to_int_DA(
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::dmi_speedProfile */ DMI_speedProfile_T_DMI_Types_Pk *dmi_speedProfile,
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::dmi_speedProfile_int */ DMI_speedProfile_int_array_T_DA *dmi_speedProfile_int)
{
  static kcg_int i;
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::_L8 */
  static array_int_32 _L8;
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::_L7 */
  static array_int_32 _L7;
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::_L6 */
  static array_int_32 _L6;
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::_L5 */
  static array_int_32 _L5;
  
  /* 1 */ for (i = 0; i < 32; i++) {
    /* 1 */
    CAST_DMI_speedProfileElement_to(
      &(*dmi_speedProfile).speedProfiles[i],
      &_L5[i],
      &_L6[i],
      &_L7[i],
      &_L8[i]);
  }
  (&(&(&(&(*dmi_speedProfile_int)[0])[0])[0])[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_speedProfile).profileChanged);
  kcg_copy_array_int_32(&(*dmi_speedProfile_int)[1], &_L5);
  kcg_copy_array_int_32(&(*dmi_speedProfile_int)[33], &_L6);
  kcg_copy_array_int_32(&(*dmi_speedProfile_int)[65], &_L7);
  kcg_copy_array_int_32(&(*dmi_speedProfile_int)[97], &_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_speedProfile_to_int_DA.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

