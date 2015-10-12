/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _RECV_ReadPackets_TM_lib_internal_H_
#define _RECV_ReadPackets_TM_lib_internal_H_

#include "kcg_types.h"
#include "RECV_LookupPacket_TM_lib_internal.h"
#include "RECV_ReadPacketKernel_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_lib_internal::RECV_ReadPackets */
extern void RECV_ReadPackets_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPackets::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_lib_internal::RECV_ReadPackets::PacketID */ kcg_int PacketID,
  /* TM_lib_internal::RECV_ReadPackets::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_ReadPackets::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_ReadPackets::Data */ CompressedPacketData_T_Common_Types_Pkg *Data,
  /* TM_lib_internal::RECV_ReadPackets::Metadata */ MetadataElement_T_Common_Types_Pkg *Metadata,
  /* TM_lib_internal::RECV_ReadPackets::received */ kcg_bool *received);

#endif /* _RECV_ReadPackets_TM_lib_internal_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_ReadPackets_TM_lib_internal.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

