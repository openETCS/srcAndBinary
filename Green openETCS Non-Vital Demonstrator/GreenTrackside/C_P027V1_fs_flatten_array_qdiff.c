/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_fs_flatten_array_qdiff.h"

/* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff */
void C_P027V1_fs_flatten_array_qdiff(
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::i */ kcg_int i,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::Acc */ P027V1_sections_array_flat_qdif *Acc,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::section_arrays */ _2_P027V1_OBU_sectionlist_array *section_arrays,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::flat */ P027V1_sections_array_flat_qdif *flat)
{
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff */
  static kcg_int tmp;
  
  kcg_copy_P027V1_sections_array_(flat, Acc);
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
** C_P027V1_fs_flatten_array_qdiff.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

