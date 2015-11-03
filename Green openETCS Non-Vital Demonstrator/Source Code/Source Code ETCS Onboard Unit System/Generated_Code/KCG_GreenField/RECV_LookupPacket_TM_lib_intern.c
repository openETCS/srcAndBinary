/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacket_TM_lib_intern.h"

/* TM_lib_internal::RECV_LookupPacket */
void RECV_LookupPacket_TM_lib_intern(
  /* TM_lib_internal::RECV_LookupPacket::Message_ID */ kcg_int Message_ID,
  /* TM_lib_internal::RECV_LookupPacket::HeadersIN */ Metadata_T_Common_Types_Pkg *HeadersIN,
  /* TM_lib_internal::RECV_LookupPacket::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacket::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacket::Found */ kcg_bool *Found,
  /* TM_lib_internal::RECV_LookupPacket::Index */ kcg_int *Index,
  /* TM_lib_internal::RECV_LookupPacket::HeaderFound */ MetadataElement_T_Common_Types_ *HeaderFound)
{
  /* TM_lib_internal::RECV_LookupPacket */
  static MetadataElement_T_Common_Types_ acc;
  /* TM_lib_internal::RECV_LookupPacket */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TM_lib_internal::RECV_LookupPacket::_L4 */
  static kcg_int _L4;
  /* TM_lib_internal::RECV_LookupPacket::_L23 */
  static MetadataElement_T_Common_Types_ _L23;
  
  kcg_copy_MetadataElement_T_Comm(
    &_L23,
    (MetadataElement_T_Common_Types_ *) &DEFAULT_PHeader_TM);
  for (i = 0; i < 30; i++) {
    kcg_copy_MetadataElement_T_Comm(&acc, &_L23);
    /* 1 */
    RECV_LookupPacketLoop_TM_lib_in(
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
  *Found = /* 1 */
    T_Filter_Metadata_TM_lib_intern(
      _L23.nid_packet,
      Message_ID,
      F_version,
      F_id);
  /* 1 */ if (*Found) {
    kcg_copy_MetadataElement_T_Comm(HeaderFound, &_L23);
  }
  else {
    kcg_copy_MetadataElement_T_Comm(
      HeaderFound,
      (MetadataElement_T_Common_Types_ *) &DEFAULT_PHeader_TM);
  }
  *Index = _L4 - 1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_LookupPacket_TM_lib_intern.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

