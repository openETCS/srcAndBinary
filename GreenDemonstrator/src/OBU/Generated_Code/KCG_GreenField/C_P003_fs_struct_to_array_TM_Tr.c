/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_fs_struct_to_array_TM_Tr.h"

/* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array */
kcg_int C_P003_fs_struct_to_array_TM_Tr(
  /* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array::section */ NID_RADIO section)
{
  /* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array::section_arrays */
  static kcg_int section_arrays;
  
  section_arrays = /* 1 */ CAST_Int_to_NID_RADIO_TM_conver(section);
  return section_arrays;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003_fs_struct_to_array_TM_Tr.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

