/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Decode_Metadata_L2_TM_lib_internal.h"

/* TM_lib_internal::T_Decode_Metadata_L2 */
kcg_int T_Decode_Metadata_L2_TM_lib_internal(
  /* TM_lib_internal::T_Decode_Metadata_L2::Metadata */ kcg_int Metadata,
  /* TM_lib_internal::T_Decode_Metadata_L2::i */ kcg_int i)
{
  /* TM_lib_internal::T_Decode_Metadata_L2::nid_packet */ kcg_int nid_packet;
  
  nid_packet = i + Metadata;
  return nid_packet;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_Decode_Metadata_L2_TM_lib_internal.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

