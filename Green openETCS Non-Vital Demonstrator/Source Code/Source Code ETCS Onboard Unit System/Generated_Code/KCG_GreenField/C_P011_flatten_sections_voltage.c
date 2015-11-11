/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_flatten_sections_voltage.h"

/* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage */
void C_P011_flatten_sections_voltage(
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::MergedSections */ P011_voltage_list_TM_TrainToTra *MergedSections,
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::Flattened */ P011_voltage_sections_array_fla *Flattened)
{
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage */
  static P011_voltage_sections_array_fla acc;
  static kcg_int i;
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::_L74 */
  static P011_voltage_sectionlist_array_ _L74;
  
  /* 2 */ for (i = 0; i < 4; i++) {
    /* 1 */ C_P011_fs_struct_to_array_volta(&(*MergedSections)[i], &_L74[i]);
  }
  kcg_copy_P011_voltage_sections_(
    Flattened,
    (P011_voltage_sections_array_fla *) &DEFAULT_P011_voltage_sections_a);
  /* 1 */ for (i = 0; i < 8; i++) {
    kcg_copy_P011_voltage_sections_(&acc, Flattened);
    /* 1 */ C_P011_fs_flatten_array_voltage(i, &acc, &_L74, Flattened);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_flatten_sections_voltage.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

