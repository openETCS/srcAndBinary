/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P005_flatten_sections */
void C_P005_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P005_flatten_sections::MergedSections */ P005_OBU_sectionlist_int_T_TM *MergedSections,
  /* TM_lib_internal::C_P005_flatten_sections::Flattened */ P005_sections_array_flat_T_TM *Flattened)
{
  /* TM_lib_internal::C_P005_flatten_sections */ P005_sections_array_flat_T_TM acc;
  kcg_int i;
  /* TM_lib_internal::C_P005_flatten_sections::_L74 */ P005_OBU_sectionlist_array_T_TM _L74;
  
  for (i = 0; i < 33; i++) {
    /* 2 */
    C_P005_fs_struct_to_array_TM_lib_internal(&(*MergedSections)[i], &_L74[i]);
  }
  kcg_copy_P005_sections_array_flat_T_TM(
    Flattened,
    (P005_sections_array_flat_T_TM *) &DEFAULT_P005_sections_array_flat_TM);
  for (i = 0; i < 231; i++) {
    kcg_copy_P005_sections_array_flat_T_TM(&acc, Flattened);
    /* 2 */ C_P005_fs_flatten_array_TM_lib_internal(i, &acc, &_L74, Flattened);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P005_flatten_sections_TM_lib_internal.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

