/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SetValidFlag_InformationFilter_.h"

/* InformationFilter_Pkg::Common::SetValidFlag */
void SetValidFlag_InformationFilter_(
  /* InformationFilter_Pkg::Common::SetValidFlag::inValidFlag */ kcg_bool inValidFlag,
  /* InformationFilter_Pkg::Common::SetValidFlag::inPacket */ MetadataElement_T_Common_Types_ *inPacket,
  /* InformationFilter_Pkg::Common::SetValidFlag::outPacket */ MetadataElement_T_Common_Types_ *outPacket)
{
  (*outPacket).nid_packet = (*inPacket).nid_packet;
  (*outPacket).q_dir = (*inPacket).q_dir;
  (*outPacket).valid = (*inPacket).valid & inValidFlag;
  (*outPacket).startAddress = (*inPacket).startAddress;
  (*outPacket).endAddress = (*inPacket).endAddress;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SetValidFlag_InformationFilter_.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

