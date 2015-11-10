/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_us_array_voltage_TM_Trai.h"

/* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage */
void C_P011_us_array_voltage_TM_Trai(
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::i */ kcg_int i,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::n_iter_int */ kcg_int n_iter_int,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::flat */ P011_voltage_sections_array_fla *flat,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::cont */ kcg_bool *cont,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::sections */ P011_voltage_TM_TrainToTrack *sections)
{
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L16 */
  static kcg_int _L16;
  
  _L16 = i * DIM_voltage_list_TM_TrainToTrac;
  (*sections).m_voltage = /* 1 */
    CAST_Int_to_M_VOLTAGE_TM_conver(
      /* 2 */ C_P011_extract_el_section_volta(_L16, flat, 0));
  (*sections).nid_ctraction = /* 1 */
    CAST_Int_to_NID_CTRACTION_TM_co(
      /* 1 */ C_P011_extract_el_section_volta(_L16, flat, 1));
  *cont = n_iter_int > i;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_us_array_voltage_TM_Trai.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

