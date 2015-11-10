/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_fs_struct_to_array_qdi.h"

/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff */
void C_P027V1_fs_struct_to_array_qdi(
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::section */ P027V1_section_int_qdiff_T_TM_b *section,
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::section_arrays */ P027V1_section_array_qdiff_T_TM *section_arrays)
{
  (*section_arrays)[0] = (*section).NC_DIFF;
  (*section_arrays)[1] = (*section).V_DIFF;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_fs_struct_to_array_qdi.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

