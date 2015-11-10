/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2PacketsList_CheckBGConsist.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList */
void Merg2PacketsList_CheckBGConsist(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::ind */ kcg_int ind,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::acc */ CompressedPacketData_T_Common_T *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::lastvalidAddress */ CompressedPacketData_T_Common_T *lastvalidAddress,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::compressedPacketIn */ CompressedPacketData_T_Common_T *compressedPacketIn,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::mergedPackets */ CompressedPacketData_T_Common_T *mergedPackets)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList */
  static kcg_int tmp;
  
  /* 1 */ if (ind < (*lastvalidAddress)[0]) {
    kcg_copy_CompressedPacketData_T(mergedPackets, acc);
  }
  else {
    kcg_copy_CompressedPacketData_T(mergedPackets, acc);
    if ((0 <= ind - (*lastvalidAddress)[0]) & (ind - (*lastvalidAddress)[0] <
        500)) {
      tmp = (*compressedPacketIn)[ind - (*lastvalidAddress)[0]];
    }
    else {
      tmp = 0;
    }
    if ((0 <= ind) & (ind < 500)) {
      (*mergedPackets)[ind] = tmp;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merg2PacketsList_CheckBGConsist.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

