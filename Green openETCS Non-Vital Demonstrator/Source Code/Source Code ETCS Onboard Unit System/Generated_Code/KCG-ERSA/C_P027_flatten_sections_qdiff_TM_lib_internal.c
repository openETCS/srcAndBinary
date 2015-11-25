/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027_flatten_sections_qdiff_TM_lib_internal.h"

/* TM_lib_internal::C_P027_flatten_sections_qdiff */
void C_P027_flatten_sections_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::MergedSections */ P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 *MergedSections,
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::Flattened */ P027V1_sections_array_flat_qdiff_T_TM_baseline2 *Flattened)
{
  /* TM_lib_internal::C_P027_flatten_sections_qdiff */ P027V1_sections_array_flat_qdiff_T_TM_baseline2 acc;
  kcg_int i;
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L74 */ array_int_2_32 _L74;
  
  for (i = 0; i < 32; i++) {
    /* 1 */
    C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal(
      &(*MergedSections)[i],
      &_L74[i]);
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    Flattened,
    (P027V1_sections_array_flat_qdiff_T_TM_baseline2 *)
      &DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2);
  for (i = 0; i < 32; i++) {
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&acc, Flattened);
    /* 1 */
    C_P027V1_fs_flatten_array_qdiff_TM_lib_internal(i, &acc, &_L74, Flattened);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027_flatten_sections_qdiff_TM_lib_internal.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

