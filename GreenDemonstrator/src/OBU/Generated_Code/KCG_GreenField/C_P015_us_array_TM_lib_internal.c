/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P015_us_array */
void C_P015_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P015_us_array::i */ kcg_int i,
  /* TM_lib_internal::C_P015_us_array::n_iter_int */ kcg_int n_iter_int,
  /* TM_lib_internal::C_P015_us_array::flat */ P015_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P015_us_array::cont */ kcg_bool *cont,
  /* TM_lib_internal::C_P015_us_array::sections */ P015_section_enum_T_TM *sections)
{
  /* TM_lib_internal::C_P015_us_array::_L16 */
  static kcg_int _L16;
  
  (*sections).valid = kcg_true;
  _L16 = i * DIM_P015_n_sections_TM_lib_inte;
  (*sections).l_section = /* 1 */
    CAST_Int_to_L_SECTION_TM_conver(
      /* 1 */ C_P015_extract_el_section_TM_li(_L16, flat, 0));
  (*sections).q_sectiontimer = /* 1 */
    CAST_Int_to_Q_SECTIONTIMER_TM_c(
      /* 2 */ C_P015_extract_el_section_TM_li(_L16, flat, 1));
  (*sections).t_sectiontimer = /* 1 */
    CAST_Int_to_T_SECTIONTIMER_TM_c(
      /* 3 */ C_P015_extract_el_section_TM_li(_L16, flat, 2));
  (*sections).d_sectiontimerstoploc = /* 2 */
    CAST_Int_to_D_SECTIONTIMERSTOPL(
      /* 4 */ C_P015_extract_el_section_TM_li(_L16, flat, 3));
  *cont = n_iter_int > i;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P015_us_array_TM_lib_internal.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

