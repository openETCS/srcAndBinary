/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_extract_el_section_TM_lib_internal.h"

/* TM_lib_internal::C_P027V1_extract_el_section */
kcg_int C_P027V1_extract_el_section_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_extract_el_section::offset */ kcg_int offset,
  /* TM_lib_internal::C_P027V1_extract_el_section::flat */ P027V1_sections_array_flat_qdiff_T_TM_baseline2 *flat,
  /* TM_lib_internal::C_P027V1_extract_el_section::modulo */ kcg_int modulo)
{
  /* TM_lib_internal::C_P027V1_extract_el_section::element */ kcg_int element;
  
  if ((0 <= offset + modulo) & (offset + modulo < 64)) {
    element = (*flat)[offset + modulo];
  }
  else {
    element = 0;
  }
  return element;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_extract_el_section_TM_lib_internal.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

