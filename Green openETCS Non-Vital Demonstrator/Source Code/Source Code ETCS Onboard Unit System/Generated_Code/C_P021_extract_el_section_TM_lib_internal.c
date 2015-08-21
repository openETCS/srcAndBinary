/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_extract_el_section_TM_lib_internal.h"

/* TM_lib_internal::C_P021_extract_el_section */
kcg_int C_P021_extract_el_section_TM_lib_internal(
  /* TM_lib_internal::C_P021_extract_el_section::offset */kcg_int offset,
  /* TM_lib_internal::C_P021_extract_el_section::flat */P021_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P021_extract_el_section::modulo */kcg_int modulo)
{
  /* TM_lib_internal::C_P021_extract_el_section::element */
  static kcg_int element;
  
  if ((0 <= offset + modulo) & (offset + modulo < 99)) {
    element = (*flat)[offset + modulo];
  }
  else {
    element = 0;
  }
  return element;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_extract_el_section_TM_lib_internal.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

