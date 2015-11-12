/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _RECV_ReadPackets_TM_lib_intern
#define _RECV_ReadPackets_TM_lib_intern

#include "kcg_types.h"
#include "RECV_LookupPacket_TM_lib_intern.h"
#include "RECV_ReadPacketKernel_TM_lib_in.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_lib_internal::RECV_ReadPackets */
extern void RECV_ReadPackets_TM_lib_interna(
  /* TM_lib_internal::RECV_ReadPackets::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* TM_lib_internal::RECV_ReadPackets::PacketID */ kcg_int PacketID,
  /* TM_lib_internal::RECV_ReadPackets::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_ReadPackets::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_ReadPackets::Data */ CompressedPacketData_T_Common_T *Data,
  /* TM_lib_internal::RECV_ReadPackets::Metadata */ MetadataElement_T_Common_Types_ *Metadata,
  /* TM_lib_internal::RECV_ReadPackets::received */ kcg_bool *received);

#endif /* _RECV_ReadPackets_TM_lib_intern */
/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_ReadPackets_TM_lib_interna.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

