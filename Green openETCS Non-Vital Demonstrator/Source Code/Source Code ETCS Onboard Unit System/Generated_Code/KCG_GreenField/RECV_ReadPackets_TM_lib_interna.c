/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPackets_TM_lib_interna.h"

/* TM_lib_internal::RECV_ReadPackets */
void RECV_ReadPackets_TM_lib_interna(
  /* TM_lib_internal::RECV_ReadPackets::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* TM_lib_internal::RECV_ReadPackets::PacketID */ kcg_int PacketID,
  /* TM_lib_internal::RECV_ReadPackets::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_ReadPackets::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_ReadPackets::Data */ CompressedPacketData_T_Common_T *Data,
  /* TM_lib_internal::RECV_ReadPackets::Metadata */ MetadataElement_T_Common_Types_ *Metadata,
  /* TM_lib_internal::RECV_ReadPackets::received */ kcg_bool *received)
{
  /* TM_lib_internal::RECV_ReadPackets::_L2 */
  static kcg_int _L2;
  
  /* 1 */
  RECV_LookupPacket_TM_lib_intern(
    PacketID,
    &(*Packets).PacketHeaders,
    F_version,
    F_id,
    received,
    &_L2,
    Metadata);
  /* ck_received */ if (*received) {
    /* 1 */
    RECV_ReadPacketKernel_TM_lib_in(Metadata, &(*Packets).PacketData, Data);
  }
  else {
    kcg_copy_CompressedPacketData_T(
      Data,
      (CompressedPacketData_T_Common_T *) &DEFAULT_CompressedPackets_TM);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_ReadPackets_TM_lib_interna.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

