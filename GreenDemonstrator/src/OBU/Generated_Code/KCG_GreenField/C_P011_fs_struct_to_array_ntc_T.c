/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_fs_struct_to_array_ntc_T.h"

/* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc */
kcg_int C_P011_fs_struct_to_array_ntc_T(
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc::section */ NID_NTC section)
{
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc::section_arrays */
  static kcg_int section_arrays;
  
  section_arrays = /* 1 */ CAST_NID_NTC_to_int_TM_conversi(section);
  return section_arrays;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_fs_struct_to_array_ntc_T.c
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */
