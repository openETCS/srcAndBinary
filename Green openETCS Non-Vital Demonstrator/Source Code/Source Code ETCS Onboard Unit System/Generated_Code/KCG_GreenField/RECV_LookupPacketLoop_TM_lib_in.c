/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacketLoop_TM_lib_in.h"

/* TM_lib_internal::RECV_LookupPacketLoop */
void RECV_LookupPacketLoop_TM_lib_in(
  /* TM_lib_internal::RECV_LookupPacketLoop::Index */ kcg_int Index,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderInit */ MetadataElement_T_Common_Types_ *HeaderInit,
  /* TM_lib_internal::RECV_LookupPacketLoop::Message_in */ MetadataElement_T_Common_Types_ *Message_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::ID_in */ kcg_int ID_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacketLoop::Cont */ kcg_bool *Cont,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderFound */ MetadataElement_T_Common_Types_ *HeaderFound)
{
  kcg_copy_MetadataElement_T_Comm(HeaderFound, Message_in);
  *Cont = !/* 1 */
    T_Filter_Metadata_TM_lib_intern(
      ID_in,
      (*Message_in).nid_packet,
      F_version,
      F_id);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_LookupPacketLoop_TM_lib_in.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

