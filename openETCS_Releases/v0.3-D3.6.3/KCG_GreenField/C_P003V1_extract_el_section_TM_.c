/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_extract_el_section_TM_.h"

/* TM_lib_internal::C_P003V1_extract_el_section */
kcg_int C_P003V1_extract_el_section_TM_(
  /* TM_lib_internal::C_P003V1_extract_el_section::offset */ kcg_int offset,
  /* TM_lib_internal::C_P003V1_extract_el_section::flat */ P003V1_OBU_sectionlist_int_T_TM *flat)
{
  /* TM_lib_internal::C_P003V1_extract_el_section::element */
  static kcg_int element;
  
  if ((0 <= offset) & (offset < 32)) {
    element = (*flat)[offset];
  }
  else {
    element = 0;
  }
  return element;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_extract_el_section_TM_.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

