/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineValidFlags_InformationFilter_Pkg_SecondFilter.h"

/* InformationFilter_Pkg::SecondFilter::DetermineValidFlags */
void DetermineValidFlags_InformationFilter_Pkg_SecondFilter(
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::filterPacket */ MetadataElement_T_Common_Types_Pkg *filterPacket,
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::bufferPacket */ MetadataElement_T_Common_Types_Pkg *bufferPacket,
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::packet */ MetadataElement_T_Common_Types_Pkg *packet)
{
  (*packet).nid_packet = (*filterPacket).nid_packet;
  (*packet).q_dir = (*filterPacket).q_dir;
  (*packet).valid = (*filterPacket).valid | (*bufferPacket).valid;
  (*packet).startAddress = (*filterPacket).startAddress;
  (*packet).endAddress = (*filterPacket).endAddress;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DetermineValidFlags_InformationFilter_Pkg_SecondFilter.c
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

