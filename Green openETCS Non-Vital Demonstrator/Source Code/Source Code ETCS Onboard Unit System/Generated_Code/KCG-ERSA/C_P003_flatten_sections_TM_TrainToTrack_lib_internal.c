/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_flatten_sections_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P003_flatten_sections */
void C_P003_flatten_sections_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P003_flatten_sections::MergedSections */P003_nid_radio_list_t_TM_TrainToTrack *MergedSections,
  /* TM_TrainToTrack_lib_internal::C_P003_flatten_sections::Flattened */P003_nid_radio_list_int_t_TM_TrainToTrack *Flattened)
{
  static kcg_int i;
  
  for (i = 0; i < 5; i++) {
    (*Flattened)[i] = /* 1 */
      C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal(
        (*MergedSections)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003_flatten_sections_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

