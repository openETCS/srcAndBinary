/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list */
void C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::P003V1_onboard */ P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::nid_c1 */ NID_C *nid_c1,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::n_iter_out */ N_ITER *n_iter_out,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::nid_c_list */ P003_OBU_nid_c_sectionlist_enum_T_TM *nid_c_list)
{
  *n_iter_out = (*P003V1_onboard).n_iter;
  *nid_c1 = (*P003V1_onboard).SECTIONS[0].nid_c;
  kcg_copy_array_99441(
    &(*nid_c_list)[0],
    (array_99441 *) &(*P003V1_onboard).SECTIONS[1]);
  kcg_copy_P003_OBU_nid_c_section_enum_T_TM(
    &(&(*nid_c_list)[31])[0],
    (P003_OBU_nid_c_section_enum_T_TM *)
      &DEFAULT_P003V1_OBU_section_TM_baseline2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

