/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage */
void C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::P011 */P011_voltage_sections_array_flat_t_TM_TrainToTrack *P011,
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::sections */P011_voltage_list_TM_TrainToTrack *sections)
{
  kcg_bool tmp;
  kcg_int i;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::_L7 */ kcg_int _L7;
  
  for (i = 0; i < 4; i++) {
    /* 1 */
    C_P011_us_array_voltage_TM_TrainToTrack_lib_internal(
      i,
      DIM_voltage_list_TM_TrainToTrack,
      P011,
      &tmp,
      &(*sections)[i]);
    _L7 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L7; i < 4; i++) {
    kcg_copy_P011_voltage_TM_TrainToTrack(
      &(*sections)[i],
      (P011_voltage_TM_TrainToTrack *)
        &DEFAULT_P011_voltage_section_TM_TrainToTrack);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-10T18:22:12
*************************************************************$ */

