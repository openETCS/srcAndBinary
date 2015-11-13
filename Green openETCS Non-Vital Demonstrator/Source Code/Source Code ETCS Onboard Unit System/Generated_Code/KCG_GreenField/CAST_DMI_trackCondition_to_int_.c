/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_trackCondition_to_int_.h"

/* DATA::Variables::CAST_DMI_trackCondition_to_int */
void CAST_DMI_trackCondition_to_int_(
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::dmi_trackCondition_ct */ DMI_trackCondition_T_DMI_Types_ *dmi_trackCondition_ct,
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::dmi_trackCondition_int */ DMI_trackCondition_int_array_T *dmi_trackCondition_int)
{
  static kcg_int i;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::_L9 */
  static array_int_32 _L9;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::_L8 */
  static array_int_32 _L8;
  
  (&(&(*dmi_trackCondition_int)[0])[0])[0] = (*dmi_trackCondition_ct).nIter;
  /* 1 */ for (i = 0; i < 32; i++) {
    /* 1 */
    CAST_DMI_trackConditionElement_(
      &(*dmi_trackCondition_ct).trackCondition[i],
      &_L8[i],
      &_L9[i]);
  }
  kcg_copy_array_int_32(&(*dmi_trackCondition_int)[1], &_L8);
  kcg_copy_array_int_32(&(*dmi_trackCondition_int)[33], &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_trackCondition_to_int_.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

