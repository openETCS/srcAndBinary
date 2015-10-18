/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P003V1_us_array */
void C_P003V1_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P003V1_us_array::i */ kcg_int i,
  /* TM_lib_internal::C_P003V1_us_array::n_iter_int */ kcg_int n_iter_int,
  /* TM_lib_internal::C_P003V1_us_array::flat */ P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  /* TM_lib_internal::C_P003V1_us_array::cont */ kcg_bool *cont,
  /* TM_lib_internal::C_P003V1_us_array::sections */ P003V1_section_enum_T_TM_baseline2 *sections)
{
  (*sections).valid = kcg_true;
  (*sections).nid_c = /* 2 */
    CAST_Int_to_NID_C_TM_conversions(
      /* 2 */ C_P003V1_extract_el_section_TM_lib_internal(i, flat));
  *cont = n_iter_int > i;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_us_array_TM_lib_internal.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

