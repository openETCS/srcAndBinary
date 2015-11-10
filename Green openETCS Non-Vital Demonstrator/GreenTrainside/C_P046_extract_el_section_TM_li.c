/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_extract_el_section_TM_li.h"

/* TM_lib_internal::C_P046_extract_el_section */
kcg_int C_P046_extract_el_section_TM_li(
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
** C_P046_extract_el_section_TM_li.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

