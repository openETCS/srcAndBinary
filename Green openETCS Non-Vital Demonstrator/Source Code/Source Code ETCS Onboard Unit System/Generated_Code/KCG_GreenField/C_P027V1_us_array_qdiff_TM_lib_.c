/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_us_array_qdiff_TM_lib_.h"

/* TM_lib_internal::C_P027V1_us_array_qdiff */
void C_P027V1_us_array_qdiff_TM_lib_(
  /* TM_lib_internal::C_P027V1_us_array_qdiff::i */ kcg_int i,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::n_iter_int */ kcg_int n_iter_int,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::flat */ P027V1_sections_array_flat_qdif *flat,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::cont */ kcg_bool *cont,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::sections */ P027V1_section_enum_qdiff_T_TM_ *sections)
{
  /* TM_lib_internal::C_P027V1_us_array_qdiff::_L16 */
  static kcg_int _L16;
  
  (*sections).valid = kcg_true;
  _L16 = i * DIM_P027V1_n_sections_qdiff_TM_;
  (*sections).nc_diff = /* 1 */
    CAST_Int_to_NC_DIFF_TM_conversi(
      /* 1 */ C_P027V1_extract_el_section_TM_(_L16, flat, 0));
  (*sections).v_diff = /* 1 */
    CAST_Int_to_V_DIFF_TM_conversio(
      /* 2 */ C_P027V1_extract_el_section_TM_(_L16, flat, 1));
  *cont = n_iter_int > i;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_us_array_qdiff_TM_lib_.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

