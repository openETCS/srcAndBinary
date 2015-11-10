/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapPacketIdToRow_InformationFil.h"

/* InformationFilter_Pkg::MapPacketIdToRow */
kcg_int MapPacketIdToRow_InformationFil(
  /* InformationFilter_Pkg::MapPacketIdToRow::inPacketId */ kcg_int inPacketId)
{
  /* InformationFilter_Pkg::MapPacketIdToRow::outRow */
  static kcg_int outRow;
  
  outRow = inPacketId;
  return outRow;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MapPacketIdToRow_InformationFil.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

