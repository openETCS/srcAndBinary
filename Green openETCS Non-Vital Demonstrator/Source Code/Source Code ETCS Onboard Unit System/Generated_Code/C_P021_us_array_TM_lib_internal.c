/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P021_us_array */
void C_P021_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P021_us_array::i */ kcg_int i,
  /* TM_lib_internal::C_P021_us_array::n_iter_int */ kcg_int n_iter_int,
  /* TM_lib_internal::C_P021_us_array::flat */ P021_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P021_us_array::cont */ kcg_bool *cont,
  /* TM_lib_internal::C_P021_us_array::sections */ P021_section_enum_T_TM *sections)
{
  /* TM_lib_internal::C_P021_us_array::_L16 */
  static kcg_int _L16;
  
  (*sections).valid = kcg_true;
  _L16 = i * DIM_P021_n_sections_TM_lib_internal;
  (*sections).d_gradient = /* 1 */
    CAST_Int_to_D_GRADIENT_TM_conversions(
      /* 1 */ C_P021_extract_el_section_TM_lib_internal(_L16, flat, 0));
  (*sections).q_gdir = /* 1 */
    CAST_Int_to_Q_GDIR_TM_conversions(
      /* 2 */ C_P021_extract_el_section_TM_lib_internal(_L16, flat, 1));
  (*sections).g_a = /* 1 */
    CAST_Int_to_G_A_TM_conversions(
      /* 3 */ C_P021_extract_el_section_TM_lib_internal(_L16, flat, 2));
  *cont = n_iter_int > i;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_us_array_TM_lib_internal.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

