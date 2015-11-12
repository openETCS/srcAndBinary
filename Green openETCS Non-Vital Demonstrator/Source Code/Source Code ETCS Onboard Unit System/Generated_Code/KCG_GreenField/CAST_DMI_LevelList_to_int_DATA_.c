/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_LevelList_to_int_DATA_.h"

/* DATA::Variables::CAST_DMI_LevelList_to_int */
void CAST_DMI_LevelList_to_int_DATA_(
  /* DATA::Variables::CAST_DMI_LevelList_to_int::dmi_LevelList */ DMI_LevelList_T_DMI_Types_Pkg *dmi_LevelList,
  /* DATA::Variables::CAST_DMI_LevelList_to_int::dmi_LevelList_int */ DMI_LevelList_int_array_T_DATA *dmi_LevelList_int)
{
  static kcg_int i;
  /* DATA::Variables::CAST_DMI_LevelList_to_int::_L6 */
  static array_int_32 _L6;
  /* DATA::Variables::CAST_DMI_LevelList_to_int::_L8 */
  static array_int_32 _L8;
  
  (&(&(*dmi_LevelList_int)[0])[0])[0] = (*dmi_LevelList).number;
  /* 1 */ for (i = 0; i < 32; i++) {
    /* 1 */
    CAST_DMI_level_to_int_DATA_Vari(
      &(*dmi_LevelList).levelList[i],
      &_L6[i],
      &_L8[i]);
  }
  kcg_copy_array_int_32(&(*dmi_LevelList_int)[1], &_L6);
  kcg_copy_array_int_32(&(*dmi_LevelList_int)[33], &_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_LevelList_to_int_DATA_.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

