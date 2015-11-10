/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_extract_el_section_volta.h"

/* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage */
kcg_int C_P011_extract_el_section_volta(
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::offset */ kcg_int offset,
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::flat */ P011_voltage_sections_array_fla *flat,
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::modulo */ kcg_int modulo)
{
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::element */
  static kcg_int element;
  
  if ((0 <= offset + modulo) & (offset + modulo < 8)) {
    element = (*flat)[offset + modulo];
  }
  else {
    element = 0;
  }
  return element;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_extract_el_section_volta.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

