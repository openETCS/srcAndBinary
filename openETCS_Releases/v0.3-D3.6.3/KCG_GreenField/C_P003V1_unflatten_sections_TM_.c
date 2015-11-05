/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_unflatten_sections_TM_.h"

/* TM_lib_internal::C_P003V1_unflatten_sections */
void C_P003V1_unflatten_sections_TM_(
  /* TM_lib_internal::C_P003V1_unflatten_sections::nid_packet_ok */ kcg_bool nid_packet_ok,
  /* TM_lib_internal::C_P003V1_unflatten_sections::n_iter */ kcg_int n_iter,
  /* TM_lib_internal::C_P003V1_unflatten_sections::flat */ P003V1_OBU_sectionlist_int_T_TM *flat,
  /* TM_lib_internal::C_P003V1_unflatten_sections::sections */ P003V1_sectionlist_enum_T_TM_ba *sections)
{
  /* TM_lib_internal::C_P003V1_unflatten_sections */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TM_lib_internal::C_P003V1_unflatten_sections::_L7 */
  static kcg_int _L7;
  
  /* 1 */ if (nid_packet_ok) {
    /* 1 */ for (i = 0; i < 32; i++) {
      /* 1 */
      C_P003V1_us_array_TM_lib_intern(
        i,
        n_iter,
        flat,
        &cond_iterw,
        &(*sections)[i]);
      _L7 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L7 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = _L7; i < 32; i++) {
    kcg_copy_P003V1_section_enum_T_(
      &(*sections)[i],
      (P003V1_section_enum_T_TM_baseli *) &DEFAULT_P003V1_OBU_section_TM_b);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_unflatten_sections_TM_.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

