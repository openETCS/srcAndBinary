/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_fs_struct_to_array_TM_li.h"

/* TM_lib_internal::C_P058_fs_struct_to_array */
void C_P058_fs_struct_to_array_TM_li(
  /* TM_lib_internal::C_P058_fs_struct_to_array::section */ P058_section_int_T_TM *section,
  /* TM_lib_internal::C_P058_fs_struct_to_array::section_arrays */ P058_section_array_T_TM *section_arrays)
{
  (*section_arrays)[0] = (*section).D_LOC;
  (*section_arrays)[1] = (*section).Q_LGTLOC;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P058_fs_struct_to_array_TM_li.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

