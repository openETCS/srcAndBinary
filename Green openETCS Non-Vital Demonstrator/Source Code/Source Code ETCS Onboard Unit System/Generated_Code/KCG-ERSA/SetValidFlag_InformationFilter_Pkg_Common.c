/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SetValidFlag_InformationFilter_Pkg_Common.h"

/* InformationFilter_Pkg::Common::SetValidFlag */
void SetValidFlag_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::SetValidFlag::inValidFlag */ kcg_bool inValidFlag,
  /* InformationFilter_Pkg::Common::SetValidFlag::inPacket */ MetadataElement_T_Common_Types_Pkg *inPacket,
  /* InformationFilter_Pkg::Common::SetValidFlag::outPacket */ MetadataElement_T_Common_Types_Pkg *outPacket)
{
  (*outPacket).nid_packet = (*inPacket).nid_packet;
  (*outPacket).q_dir = (*inPacket).q_dir;
  (*outPacket).valid = (*inPacket).valid & inValidFlag;
  (*outPacket).startAddress = (*inPacket).startAddress;
  (*outPacket).endAddress = (*inPacket).endAddress;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SetValidFlag_InformationFilter_Pkg_Common.c
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

