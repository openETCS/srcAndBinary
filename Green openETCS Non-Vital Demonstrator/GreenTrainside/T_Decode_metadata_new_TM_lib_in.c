/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Decode_metadata_new_TM_lib_in.h"

/* TM_lib_internal::T_Decode_metadata_new */
void T_Decode_metadata_new_TM_lib_in(
  /* TM_lib_internal::T_Decode_metadata_new::Metadata_in */ kcg_int Metadata_in,
  /* TM_lib_internal::T_Decode_metadata_new::nid_packet */ kcg_int *nid_packet,
  /* TM_lib_internal::T_Decode_metadata_new::id */ kcg_int *id,
  /* TM_lib_internal::T_Decode_metadata_new::m_version */ kcg_int *m_version)
{
  /* TM_lib_internal::T_Decode_metadata_new::_L5 */
  static kcg_int _L5;
  
  *nid_packet = Metadata_in / DIM_offset_metadata_nid_packet_;
  _L5 = Metadata_in % DIM_offset_metadata_q_dir_TM_li;
  *m_version = _L5 / DIM_offset_metadata_m_version_T;
  *id = _L5 % DIM_offset_metadata_m_version_T / DIM_offset_metadata_id_TM_lib_i;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_Decode_metadata_new_TM_lib_in.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

