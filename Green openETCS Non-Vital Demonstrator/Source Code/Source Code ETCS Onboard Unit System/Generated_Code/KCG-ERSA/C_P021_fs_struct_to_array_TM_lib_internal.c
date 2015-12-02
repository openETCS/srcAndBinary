/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P021_fs_struct_to_array */
void C_P021_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P021_fs_struct_to_array::section */ P021_section_int_T_TM *section,
  /* TM_lib_internal::C_P021_fs_struct_to_array::section_arrays */ P021_section_array_T_TM *section_arrays)
{
  (*section_arrays)[0] = (*section).D_GRADIENT;
  (*section_arrays)[1] = (*section).Q_GDIR;
  (*section_arrays)[2] = (*section).G_A;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

