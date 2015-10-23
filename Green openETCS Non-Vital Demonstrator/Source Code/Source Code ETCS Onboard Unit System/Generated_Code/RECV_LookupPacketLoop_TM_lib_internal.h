/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */
#ifndef _RECV_LookupPacketLoop_TM_lib_internal_H_
#define _RECV_LookupPacketLoop_TM_lib_internal_H_

#include "kcg_types.h"
#include "T_Filter_Metadata_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_lib_internal::RECV_LookupPacketLoop */
extern void RECV_LookupPacketLoop_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacketLoop::Index */ kcg_int Index,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderInit */ MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* TM_lib_internal::RECV_LookupPacketLoop::Message_in */ MetadataElement_T_Common_Types_Pkg *Message_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::ID_in */ kcg_int ID_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacketLoop::Cont */ kcg_bool *Cont,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderFound */ MetadataElement_T_Common_Types_Pkg *HeaderFound);

#endif /* _RECV_LookupPacketLoop_TM_lib_internal_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_LookupPacketLoop_TM_lib_internal.h
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

