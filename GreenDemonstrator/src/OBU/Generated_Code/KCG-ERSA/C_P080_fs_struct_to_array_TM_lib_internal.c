/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P080_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P080_fs_struct_to_array */
void C_P080_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P080_fs_struct_to_array::section */ P080_section_int_T_TM *section,
  /* TM_lib_internal::C_P080_fs_struct_to_array::section_arrays */ P080_section_array_T_TM *section_arrays)
{
  (*section_arrays)[0] = (*section).D_MAMODE;
  (*section_arrays)[1] = (*section).M_MAMODE;
  (*section_arrays)[2] = (*section).V_MAMODE;
  (*section_arrays)[3] = (*section).L_MAMODE;
  (*section_arrays)[4] = (*section).L_ACKMAMODE;
  (*section_arrays)[5] = (*section).Q_MAMODE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P080_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

