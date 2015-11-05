/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_extract_el_section_TM_lib_internal.h"

/* TM_lib_internal::C_P046_extract_el_section */
kcg_int C_P046_extract_el_section_TM_lib_internal(
  /* TM_lib_internal::C_P046_extract_el_section::offset */ kcg_int offset,
  /* TM_lib_internal::C_P046_extract_el_section::flat */ P046_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P046_extract_el_section::modulo */ kcg_int modulo)
{
  /* TM_lib_internal::C_P046_extract_el_section::element */
  static kcg_int element;
  
  if ((0 <= offset + modulo) & (offset + modulo < 66)) {
    element = (*flat)[offset + modulo];
  }
  else {
    element = 0;
  }
  return element;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P046_extract_el_section_TM_lib_internal.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

