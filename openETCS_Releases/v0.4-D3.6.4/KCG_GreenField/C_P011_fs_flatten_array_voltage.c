/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_fs_flatten_array_voltage.h"

/* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage */
void C_P011_fs_flatten_array_voltage(
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::i */ kcg_int i,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::Acc */ P011_voltage_sections_array_fla *Acc,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::section_arrays */ P011_voltage_sectionlist_array_ *section_arrays,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::flat */ P011_voltage_sections_array_fla *flat)
{
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage */
  static kcg_int tmp;
  
  kcg_copy_P011_voltage_sections_(flat, Acc);
  if ((0 <= i / 2) & (i / 2 < 4) & ((0 <= i % 2) & (i % 2 < 2))) {
    tmp = (*section_arrays)[i / 2][i % 2];
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 8)) {
    (*flat)[i] = tmp;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_fs_flatten_array_voltage.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

