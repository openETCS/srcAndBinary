/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray */
void Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::acc */ CompressedPacketData_T_Common_Types_Pkg *acc1,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::addressArray */ CompressedPacketData_T_Common_Types_Pkg *addressArray,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::newPackets */ CompressedPacketData_T_Common_Types_Pkg *newPackets,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::mergPackets */ CompressedPacketData_T_Common_Types_Pkg *mergPackets)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray */ CompressedPacketData_T_Common_Types_Pkg acc;
  kcg_int i;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(mergPackets, acc1);
  for (i = 0; i < 500; i++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&acc, mergPackets);
    /* 1 */
    Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      i,
      &acc,
      addressArray,
      newPackets,
      mergPackets);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

