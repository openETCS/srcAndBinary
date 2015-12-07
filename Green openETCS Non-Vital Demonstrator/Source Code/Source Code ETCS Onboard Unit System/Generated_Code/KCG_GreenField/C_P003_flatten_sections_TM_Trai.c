/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_flatten_sections_TM_Trai.h"

/* TM_TrainToTrack_lib_internal::C_P003_flatten_sections */
void C_P003_flatten_sections_TM_Trai(
  /* TM_TrainToTrack_lib_internal::C_P003_flatten_sections::MergedSections */ P003_nid_radio_list_t_TM_TrainT *MergedSections,
  /* TM_TrainToTrack_lib_internal::C_P003_flatten_sections::Flattened */ P003_nid_radio_list_int_t_TM_Tr *Flattened)
{
  static kcg_int i;
  
  /* 2 */ for (i = 0; i < 5; i++) {
    (*Flattened)[i] = /* 1 */
      C_P003_fs_struct_to_array_TM_Tr((*MergedSections)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003_flatten_sections_TM_Trai.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

