/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P015_flatten_sections */
void C_P015_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P015_flatten_sections::MergedSections */ P015_OBU_sectionlist_int_T_TM *MergedSections,
  /* TM_lib_internal::C_P015_flatten_sections::Flattened */ P015_sections_array_flat_T_TM *Flattened)
{
  /* TM_lib_internal::C_P015_flatten_sections */ P015_sections_array_flat_T_TM acc;
  kcg_int i;
  /* TM_lib_internal::C_P015_flatten_sections::_L74 */ P015_OBU_sectionlist_array_T_TM _L74;
  
  for (i = 0; i < 32; i++) {
    /* 2 */
    C_P015_fs_struct_to_array_TM_lib_internal(&(*MergedSections)[i], &_L74[i]);
  }
  kcg_copy_P015_sections_array_flat_T_TM(
    Flattened,
    (P015_sections_array_flat_T_TM *) &DEFAULT_P015_sections_array_flat_TM);
  for (i = 0; i < 128; i++) {
    kcg_copy_P015_sections_array_flat_T_TM(&acc, Flattened);
    /* 1 */ C_P015_fs_flatten_array_TM_lib_internal(i, &acc, &_L74, Flattened);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P015_flatten_sections_TM_lib_internal.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

