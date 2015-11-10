/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_fs_struct_to_array_TM_li.h"

/* TM_lib_internal::C_P005_fs_struct_to_array */
void C_P005_fs_struct_to_array_TM_li(
  /* TM_lib_internal::C_P005_fs_struct_to_array::section */ P005_section_int_T_TM *section,
  /* TM_lib_internal::C_P005_fs_struct_to_array::section_arrays */ P005_section_array_T_TM *section_arrays)
{
  (*section_arrays)[0] = (*section).D_LINK;
  (*section_arrays)[1] = (*section).Q_NEWCOUNTRY;
  (*section_arrays)[2] = (*section).NID_C;
  (*section_arrays)[3] = (*section).NID_BG;
  (*section_arrays)[4] = (*section).Q_LINKORIENTATION;
  (*section_arrays)[5] = (*section).Q_LINKREACTION;
  (*section_arrays)[6] = (*section).Q_LOCACC;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P005_fs_struct_to_array_TM_li.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

