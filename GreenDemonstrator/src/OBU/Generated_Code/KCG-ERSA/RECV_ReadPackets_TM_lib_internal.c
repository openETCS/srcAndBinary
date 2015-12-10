/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* TM_lib_internal::RECV_ReadPackets */
void RECV_ReadPackets_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPackets::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_lib_internal::RECV_ReadPackets::PacketID */ kcg_int PacketID,
  /* TM_lib_internal::RECV_ReadPackets::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_ReadPackets::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_ReadPackets::Data */ CompressedPacketData_T_Common_Types_Pkg *Data,
  /* TM_lib_internal::RECV_ReadPackets::Metadata */ MetadataElement_T_Common_Types_Pkg *Metadata,
  /* TM_lib_internal::RECV_ReadPackets::received */ kcg_bool *received)
{
  /* TM_lib_internal::RECV_ReadPackets::_L2 */ kcg_int _L2;
  
  /* 1 */
  RECV_LookupPacket_TM_lib_internal(
    PacketID,
    &(*Packets).PacketHeaders,
    F_version,
    F_id,
    received,
    &_L2,
    Metadata);
  /* ck_received */ if (*received) {
    /* 1 */
    RECV_ReadPacketKernel_TM_lib_internal(
      Metadata,
      &(*Packets).PacketData,
      Data);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      Data,
      (CompressedPacketData_T_Common_Types_Pkg *)
        &DEFAULT_CompressedPackets_TM);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_ReadPackets_TM_lib_internal.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

