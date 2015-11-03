/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P005_us_array */
void C_P005_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P005_us_array::i */ kcg_int i,
  /* TM_lib_internal::C_P005_us_array::n_iter_int */ kcg_int n_iter_int,
  /* TM_lib_internal::C_P005_us_array::flat */ P005_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P005_us_array::cont */ kcg_bool *cont,
  /* TM_lib_internal::C_P005_us_array::sections */ P005_section_enum_T_TM *sections)
{
  /* TM_lib_internal::C_P005_us_array::_L16 */
  static kcg_int _L16;
  
  (*sections).valid = kcg_true;
  _L16 = i * DIM_P005_n_sections_TM_lib_inte;
  (*sections).d_link = /* 1 */
    CAST_Int_to_D_LINK_TM_conversio(
      /* 1 */ C_P005_extract_el_section_TM_li(_L16, flat, 0));
  (*sections).q_newcountry = /* 1 */
    CAST_Int_to_Q_NEWCOUNTRY_TM_con(
      /* 2 */ C_P005_extract_el_section_TM_li(_L16, flat, 1));
  (*sections).nid_c = /* 1 */
    CAST_Int_to_NID_C_TM_conversion(
      /* 3 */ C_P005_extract_el_section_TM_li(_L16, flat, 2));
  (*sections).nid_bg = /* 1 */
    CAST_Int_to_NID_BG_TM_conversio(
      /* 4 */ C_P005_extract_el_section_TM_li(_L16, flat, 3));
  (*sections).q_linkorientation = /* 1 */
    CAST_Int_to_Q_LINKORIENTATION_T(
      /* 5 */ C_P005_extract_el_section_TM_li(_L16, flat, 4));
  (*sections).q_linkreaction = /* 1 */
    CAST_Int_to_Q_LINKREACTION_TM_c(
      /* 6 */ C_P005_extract_el_section_TM_li(_L16, flat, 5));
  (*sections).q_locacc = /* 1 */
    CAST_Int_to_Q_LOCACC_TM_convers(
      /* 7 */ C_P005_extract_el_section_TM_li(_L16, flat, 6));
  *cont = n_iter_int > i;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P005_us_array_TM_lib_internal.c
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

