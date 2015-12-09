/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacket_TM_lib_internal.h"

/* TM_lib_internal::RECV_LookupPacket */
void RECV_LookupPacket_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacket::Message_ID */ kcg_int Message_ID,
  /* TM_lib_internal::RECV_LookupPacket::HeadersIN */ Metadata_T_Common_Types_Pkg *HeadersIN,
  /* TM_lib_internal::RECV_LookupPacket::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacket::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacket::Found */ kcg_bool *Found,
  /* TM_lib_internal::RECV_LookupPacket::Index */ kcg_int *Index,
  /* TM_lib_internal::RECV_LookupPacket::HeaderFound */ MetadataElement_T_Common_Types_Pkg *HeaderFound)
{
  /* TM_lib_internal::RECV_LookupPacket */ MetadataElement_T_Common_Types_Pkg acc;
  /* TM_lib_internal::RECV_LookupPacket */ kcg_bool cond_iterw;
  kcg_int i;
  /* TM_lib_internal::RECV_LookupPacket::_L4 */ kcg_int _L4;
  /* TM_lib_internal::RECV_LookupPacket::_L23 */ MetadataElement_T_Common_Types_Pkg _L23;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_L23,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  for (i = 0; i < 30; i++) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&acc, &_L23);
    /* 1 */
    RECV_LookupPacketLoop_TM_lib_internal(
      i,
      &acc,
      &(*HeadersIN)[i],
      Message_ID,
      F_version,
      F_id,
      &cond_iterw,
      &_L23);
    _L4 = i + 1;
    if (!cond_iterw) {
      break;
    }
  }
  *Found = _L23.valid & /* 1 */
    T_Filter_Metadata_TM_lib_internal(
      _L23.nid_packet,
      Message_ID,
      F_version,
      F_id);
  /* 1 */ if (*Found) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(HeaderFound, &_L23);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      HeaderFound,
      (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  }
  *Index = _L4 - 1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_LookupPacket_TM_lib_internal.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

