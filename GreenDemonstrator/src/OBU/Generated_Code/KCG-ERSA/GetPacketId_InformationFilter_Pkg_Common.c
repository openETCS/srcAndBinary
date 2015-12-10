/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"

/* InformationFilter_Pkg::Common::GetPacketId */
kcg_int GetPacketId_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::GetPacketId::inPacket */ MetadataElement_T_Common_Types_Pkg *inPacket)
{
  /* InformationFilter_Pkg::Common::GetPacketId::outPacketId */ kcg_int outPacketId;
  
  /* 1 */ if ((*inPacket).valid) {
    outPacketId = /* 1 */
      T_extract_nid_packet_from_metadata_selector_TM((*inPacket).nid_packet);
  }
  else {
    outPacketId = 255;
  }
  return outPacketId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GetPacketId_InformationFilter_Pkg_Common.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

