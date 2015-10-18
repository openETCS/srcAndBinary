/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage */
void C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::MergedSections */ P011_voltage_list_TM_TrainToTrack *MergedSections,
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::Flattened */ P011_voltage_sections_array_flat_t_TM_TrainToTrack *Flattened)
{
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage */
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack acc;
  static kcg_int i;
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::_L74 */
  static P011_voltage_sectionlist_array_T_TM_TrainToTrack _L74;
  
  /* 2 */ for (i = 0; i < 4; i++) {
    /* 1 */
    C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal(
      &(*MergedSections)[i],
      &_L74[i]);
  }
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
    Flattened,
    (P011_voltage_sections_array_flat_t_TM_TrainToTrack *)
      &DEFAULT_P011_voltage_sections_array_flat_TM_TrainToTrack);
  /* 1 */ for (i = 0; i < 8; i++) {
    kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
      &acc,
      Flattened);
    /* 1 */
    C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal(
      i,
      &acc,
      &_L74,
      Flattened);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

