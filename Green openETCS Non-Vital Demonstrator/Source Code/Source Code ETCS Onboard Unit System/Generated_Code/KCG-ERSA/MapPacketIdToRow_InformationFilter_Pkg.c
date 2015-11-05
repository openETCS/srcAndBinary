/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapPacketIdToRow_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::MapPacketIdToRow */
kcg_int MapPacketIdToRow_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapPacketIdToRow::inPacketId */ kcg_int inPacketId)
{
  /* InformationFilter_Pkg::MapPacketIdToRow::outRow */
  static kcg_int outRow;
  
  outRow = inPacketId;
  return outRow;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MapPacketIdToRow_InformationFilter_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

