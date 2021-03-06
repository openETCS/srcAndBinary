/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P080_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P080_flatten_sections */
void C_P080_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P080_flatten_sections::MergedSections */ P080_OBU_sectionlist_int_T_TM *MergedSections,
  /* TM_lib_internal::C_P080_flatten_sections::Flattened */ P080_sections_array_flat_T_TM *Flattened)
{
  /* TM_lib_internal::C_P080_flatten_sections */ P080_sections_array_flat_T_TM acc;
  kcg_int i;
  /* TM_lib_internal::C_P080_flatten_sections::_L74 */ P080_OBU_sectionlist_array_T_TM _L74;
  
  /* 2 */ for (i = 0; i < 33; i++) {
    /* 1 */
    C_P080_fs_struct_to_array_TM_lib_internal(&(*MergedSections)[i], &_L74[i]);
  }
  kcg_copy_P080_sections_array_flat_T_TM(
    Flattened,
    (P080_sections_array_flat_T_TM *) &DEFAULT_P080_sections_array_flat_TM);
  /* 1 */ for (i = 0; i < 231; i++) {
    kcg_copy_P080_sections_array_flat_T_TM(&acc, Flattened);
    /* 1 */ C_P080_fs_flatten_array_TM_lib_internal(i, &acc, &_L74, Flattened);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P080_flatten_sections_TM_lib_internal.c
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

