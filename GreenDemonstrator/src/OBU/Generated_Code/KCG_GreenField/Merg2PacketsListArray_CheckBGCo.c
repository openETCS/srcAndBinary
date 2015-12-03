/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2PacketsListArray_CheckBGCo.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray */
void Merg2PacketsListArray_CheckBGCo(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::acc */ CompressedPacketData_T_Common_T *acc1,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::addressArray */ CompressedPacketData_T_Common_T *addressArray,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::newPackets */ CompressedPacketData_T_Common_T *newPackets,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::mergPackets */ CompressedPacketData_T_Common_T *mergPackets)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray */
  static CompressedPacketData_T_Common_T acc;
  static kcg_int i;
  
  kcg_copy_CompressedPacketData_T(mergPackets, acc1);
  for (i = 0; i < 500; i++) {
    kcg_copy_CompressedPacketData_T(&acc, mergPackets);
    /* 1 */
    Merg2PacketsList_CheckBGConsist(
      i,
      &acc,
      addressArray,
      newPackets,
      mergPackets);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merg2PacketsListArray_CheckBGCo.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

