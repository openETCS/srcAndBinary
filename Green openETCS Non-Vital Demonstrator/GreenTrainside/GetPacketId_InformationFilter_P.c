/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetPacketId_InformationFilter_P.h"

/* InformationFilter_Pkg::Common::GetPacketId */
kcg_int GetPacketId_InformationFilter_P(
  /* InformationFilter_Pkg::Common::GetPacketId::inPacket */ MetadataElement_T_Common_Types_ *inPacket)
{
  /* InformationFilter_Pkg::Common::GetPacketId::outPacketId */
  static kcg_int outPacketId;
  
  outPacketId = /* 1 */ T_extract_nid_packet_from_metad((*inPacket).nid_packet);
  return outPacketId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GetPacketId_InformationFilter_P.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

