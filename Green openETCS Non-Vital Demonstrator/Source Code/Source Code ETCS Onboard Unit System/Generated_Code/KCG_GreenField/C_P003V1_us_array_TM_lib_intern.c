/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_us_array_TM_lib_intern.h"

/* TM_lib_internal::C_P003V1_us_array */
void C_P003V1_us_array_TM_lib_intern(
  /* TM_lib_internal::C_P003V1_us_array::i */ kcg_int i,
  /* TM_lib_internal::C_P003V1_us_array::n_iter_int */ kcg_int n_iter_int,
  /* TM_lib_internal::C_P003V1_us_array::flat */ P003V1_OBU_sectionlist_int_T_TM *flat,
  /* TM_lib_internal::C_P003V1_us_array::cont */ kcg_bool *cont,
  /* TM_lib_internal::C_P003V1_us_array::sections */ P003V1_section_enum_T_TM_baseli *sections)
{
  (*sections).valid = kcg_true;
  (*sections).nid_c = /* 2 */
    CAST_Int_to_NID_C_TM_conversion(
      /* 2 */ C_P003V1_extract_el_section_TM_(i, flat));
  *cont = n_iter_int > i;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_us_array_TM_lib_intern.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

