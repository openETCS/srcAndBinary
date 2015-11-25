/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P041_us_array */
void C_P041_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P041_us_array::i */ kcg_int i,
  /* TM_lib_internal::C_P041_us_array::n_iter_int */ kcg_int n_iter_int,
  /* TM_lib_internal::C_P041_us_array::flat */ P041_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P041_us_array::cont */ kcg_bool *cont,
  /* TM_lib_internal::C_P041_us_array::sections */ P041_section_enum_T_TM *sections)
{
  /* TM_lib_internal::C_P041_us_array::_L16 */ kcg_int _L16;
  
  (*sections).valid = kcg_true;
  _L16 = i * DIM_P041_n_sections_TM_lib_internal;
  (*sections).m_leveltr = /* 1 */
    CAST_Int_to_M_LEVELTR_TM_conversions(
      /* 3 */ C_P041_extract_el_section_TM_lib_internal(_L16, flat, 0));
  (*sections).nid_ntc = /* 1 */
    CAST_Int_to_NID_NTC_TM_conversions(
      /* 2 */ C_P041_extract_el_section_TM_lib_internal(_L16, flat, 1));
  (*sections).l_ackleveltr = /* 1 */
    CAST_Int_to_L_ACKLEVELTR_TM_conversions(
      /* 1 */ C_P041_extract_el_section_TM_lib_internal(_L16, flat, 2));
  *cont = n_iter_int > i;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P041_us_array_TM_lib_internal.c
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

