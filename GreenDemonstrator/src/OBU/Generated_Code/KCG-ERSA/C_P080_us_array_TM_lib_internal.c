/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P080_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P080_us_array */
void C_P080_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P080_us_array::i */ kcg_int i,
  /* TM_lib_internal::C_P080_us_array::n_iter_int */ kcg_int n_iter_int,
  /* TM_lib_internal::C_P080_us_array::flat */ P080_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P080_us_array::cont */ kcg_bool *cont,
  /* TM_lib_internal::C_P080_us_array::sections */ P080_section_enum_T_TM *sections)
{
  /* TM_lib_internal::C_P080_us_array::_L16 */ kcg_int _L16;
  
  (*sections).valid = kcg_true;
  _L16 = i * DIM_P080_n_sections_TM_lib_internal;
  (*sections).d_mamode = /* 1 */
    CAST_Int_to_D_MAMODE_TM_conversions(
      /* 1 */ C_P080_extract_el_section_TM_lib_internal(_L16, flat, 0));
  (*sections).m_mamode = /* 1 */
    CAST_Int_to_M_MAMODE_TM_conversions(
      /* 2 */ C_P080_extract_el_section_TM_lib_internal(_L16, flat, 1));
  (*sections).v_mamode = /* 1 */
    CAST_Int_to_NID_C_TM_conversions(
      /* 3 */ C_P080_extract_el_section_TM_lib_internal(_L16, flat, 2));
  (*sections).l_mamode = /* 1 */
    CAST_Int_to_L_MAMODE_TM_conversions(
      /* 4 */ C_P080_extract_el_section_TM_lib_internal(_L16, flat, 3));
  (*sections).l_ackmamode = /* 1 */
    CAST_Int_to_L_ACKMAMODE_TM_conversions(
      /* 5 */ C_P080_extract_el_section_TM_lib_internal(_L16, flat, 4));
  (*sections).q_mamode = /* 2 */
    CAST_Int_to_Q_MAMODE_TM_conversions(
      /* 6 */ C_P080_extract_el_section_TM_lib_internal(_L16, flat, 5));
  *cont = n_iter_int > i;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P080_us_array_TM_lib_internal.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

