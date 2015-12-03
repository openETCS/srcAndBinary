/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage */
kcg_int C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::offset */kcg_int offset,
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::flat */P011_voltage_sections_array_flat_t_TM_TrainToTrack *flat,
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::modulo */kcg_int modulo)
{
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::element */ kcg_int element;
  
  if ((0 <= offset + modulo) & (offset + modulo < 8)) {
    element = (*flat)[offset + modulo];
  }
  else {
    element = 0;
  }
  return element;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-10T18:22:12
*************************************************************$ */

