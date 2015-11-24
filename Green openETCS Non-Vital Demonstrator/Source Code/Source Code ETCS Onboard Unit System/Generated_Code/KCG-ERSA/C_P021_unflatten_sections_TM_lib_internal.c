/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_unflatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P021_unflatten_sections */
void C_P021_unflatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P021_unflatten_sections::nid_packet_ok */ kcg_bool nid_packet_ok,
  /* TM_lib_internal::C_P021_unflatten_sections::n_iter */ kcg_int n_iter,
  /* TM_lib_internal::C_P021_unflatten_sections::flat */ P021_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P021_unflatten_sections::sections */ P021_OBU_sectionlist_enum_T_TM *sections)
{
  /* TM_lib_internal::C_P021_unflatten_sections */ kcg_bool cond_iterw;
  kcg_int i;
  /* TM_lib_internal::C_P021_unflatten_sections::_L7 */ kcg_int _L7;
  
  if (nid_packet_ok) {
    for (i = 0; i < 33; i++) {
      /* 1 */
      C_P021_us_array_TM_lib_internal(
        i,
        n_iter,
        flat,
        &cond_iterw,
        &(*sections)[i]);
      _L7 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L7 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L7; i < 33; i++) {
    kcg_copy_P021_section_enum_T_TM(
      &(*sections)[i],
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_unflatten_sections_TM_lib_internal.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

