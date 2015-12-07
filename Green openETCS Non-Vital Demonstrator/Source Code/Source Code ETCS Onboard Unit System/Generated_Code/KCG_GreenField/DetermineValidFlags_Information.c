/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineValidFlags_Information.h"

/* InformationFilter_Pkg::SecondFilter::DetermineValidFlags */
void DetermineValidFlags_Information(
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::filterPacket */ MetadataElement_T_Common_Types_ *filterPacket,
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::bufferPacket */ MetadataElement_T_Common_Types_ *bufferPacket,
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::packet */ MetadataElement_T_Common_Types_ *packet)
{
  (*packet).nid_packet = (*filterPacket).nid_packet;
  (*packet).q_dir = (*filterPacket).q_dir;
  (*packet).valid = (*filterPacket).valid | (*bufferPacket).valid;
  (*packet).startAddress = (*filterPacket).startAddress;
  (*packet).endAddress = (*filterPacket).endAddress;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DetermineValidFlags_Information.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

