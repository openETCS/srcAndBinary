/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_unflatten_sections_volta.h"

/* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage */
void C_P011_unflatten_sections_volta(
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::P011 */ P011_voltage_sections_array_fla *P011,
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::sections */ P011_voltage_list_TM_TrainToTra *sections)
{
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::_L7 */
  static kcg_int _L7;
  
  /* 1 */ for (i = 0; i < 4; i++) {
    /* 1 */
    C_P011_us_array_voltage_TM_Trai(
      i,
      DIM_voltage_list_TM_TrainToTrac,
      P011,
      &cond_iterw,
      &(*sections)[i]);
    _L7 = i + 1;
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = _L7; i < 4; i++) {
    kcg_copy_P011_voltage_TM_TrainT(
      &(*sections)[i],
      (P011_voltage_TM_TrainToTrack *) &DEFAULT_P011_voltage_section_TM);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_unflatten_sections_volta.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

