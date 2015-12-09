/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P080_extract_el_section_TM_lib_internal.h"

/* TM_lib_internal::C_P080_extract_el_section */
kcg_int C_P080_extract_el_section_TM_lib_internal(
  /* TM_lib_internal::C_P080_extract_el_section::offset */ kcg_int offset,
  /* TM_lib_internal::C_P080_extract_el_section::flat */ P080_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P080_extract_el_section::modulo */ kcg_int modulo)
{
  /* TM_lib_internal::C_P080_extract_el_section::element */ kcg_int element;
  
  if ((0 <= offset + modulo) & (offset + modulo < 198)) {
    element = (*flat)[offset + modulo];
  }
  else {
    element = 0;
  }
  return element;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P080_extract_el_section_TM_lib_internal.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

