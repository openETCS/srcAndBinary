/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "showPacketId_Manage_TrackSideInformation_Integration_Pkg.h"

/* Manage_TrackSideInformation_Integration_Pkg::showPacketId */
void showPacketId_Manage_TrackSideInformation_Integration_Pkg(
  /* Manage_TrackSideInformation_Integration_Pkg::showPacketId::inMsg */API_TrackSideInput_T_API_Msg_Pkg *inMsg,
  /* Manage_TrackSideInformation_Integration_Pkg::showPacketId::nid_P1 */NID_PACKET *nid_P1,
  /* Manage_TrackSideInformation_Integration_Pkg::showPacketId::nid_P2 */NID_PACKET *nid_P2)
{
  *nid_P1 = (*inMsg).packets.PacketHeaders[0].nid_packet;
  *nid_P2 = *nid_P1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** showPacketId_Manage_TrackSideInformation_Integration_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

