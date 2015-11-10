/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027_flatten_sections_qdiff_T.h"

/* TM_lib_internal::C_P027_flatten_sections_qdiff */
void C_P027_flatten_sections_qdiff_T(
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::MergedSections */ P027V1_OBU_sectionlist_int_qdif *MergedSections,
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::Flattened */ P027V1_sections_array_flat_qdif *Flattened)
{
  /* TM_lib_internal::C_P027_flatten_sections_qdiff */
  static P027V1_sections_array_flat_qdif acc;
  static kcg_int i;
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L74 */
  static array_int_2_32 _L74;
  
  for (i = 0; i < 32; i++) {
    /* 1 */ C_P027V1_fs_struct_to_array_qdi(&(*MergedSections)[i], &_L74[i]);
  }
  kcg_copy_P027V1_sections_array_(
    Flattened,
    (P027V1_sections_array_flat_qdif *) &DEFAULT_P027V1_sections_array_q);
  for (i = 0; i < 32; i++) {
    kcg_copy_P027V1_sections_array_(&acc, Flattened);
    /* 1 */ C_P027V1_fs_flatten_array_qdiff(i, &acc, &_L74, Flattened);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027_flatten_sections_qdiff_T.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

