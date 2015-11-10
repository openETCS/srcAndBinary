/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacketKernel_TM_lib_in.h"

/* TM_lib_internal::RECV_ReadPacketKernel */
void RECV_ReadPacketKernel_TM_lib_in(
  /* TM_lib_internal::RECV_ReadPacketKernel::Header */ MetadataElement_T_Common_Types_ *Header,
  /* TM_lib_internal::RECV_ReadPacketKernel::PacketData */ CompressedPacketData_T_Common_T *PacketData,
  /* TM_lib_internal::RECV_ReadPacketKernel::PacketOut */ CompressedPacketData_T_Common_T *PacketOut)
{
  /* TM_lib_internal::RECV_ReadPacketKernel */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L22 */
  static kcg_int _L22;
  
  for (i = 0; i < 500; i++) {
    /* 1 */
    RECV_ReadPacketKernelLoop_TM_li(
      i,
      PacketData,
      (*Header).startAddress,
      (*Header).endAddress,
      &cond_iterw,
      &(*PacketOut)[i]);
    _L22 = i + 1;
    if (!cond_iterw) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L22; i < 500; i++) {
    (*PacketOut)[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_ReadPacketKernel_TM_lib_in.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

