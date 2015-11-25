/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_fs_flatten_array_qdiff_TM_lib_internal.h"

/* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff */
void C_P027V1_fs_flatten_array_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::i */ kcg_int i,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::Acc */ P027V1_sections_array_flat_qdiff_T_TM_baseline2 *Acc,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::section_arrays */ P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 *section_arrays,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::flat */ P027V1_sections_array_flat_qdiff_T_TM_baseline2 *flat)
{
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff */ kcg_int tmp;
  
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(flat, Acc);
  if ((0 <= i / 2) & (i / 2 < 32) & ((0 <= i % 2) & (i % 2 < 2))) {
    tmp = (*section_arrays)[i / 2][i % 2];
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 64)) {
    (*flat)[i] = tmp;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_fs_flatten_array_qdiff_TM_lib_internal.c
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

