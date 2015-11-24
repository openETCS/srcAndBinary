/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacketKernelLoop_TM_lib_internal.h"

/* TM_lib_internal::RECV_ReadPacketKernelLoop */
void RECV_ReadPacketKernelLoop_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::Index */ kcg_int Index,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::AddressStart */ kcg_int AddressStart,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::AddressEnd */ kcg_int AddressEnd,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::Cont */ kcg_bool *Cont,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::PacketOut */ kcg_int *PacketOut)
{
  *Cont = Index + 1 <= AddressEnd - AddressStart;
  if ((0 <= AddressStart + Index) & (AddressStart + Index < 500)) {
    *PacketOut = (*PacketData)[AddressStart + Index];
  }
  else {
    *PacketOut = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_ReadPacketKernelLoop_TM_lib_internal.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

