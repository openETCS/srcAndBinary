/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:53
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
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

