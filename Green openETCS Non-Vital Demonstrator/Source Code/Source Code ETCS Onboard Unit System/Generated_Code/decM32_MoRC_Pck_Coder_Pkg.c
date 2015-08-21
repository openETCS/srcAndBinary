/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "decM32_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::decM32 */
void decM32_MoRC_Pck_Coder_Pkg(
  /* MoRC_Pck::Coder_Pkg::decM32::inMessage */genMessage_T_MoRC_Pck *inMessage,
  /* MoRC_Pck::Coder_Pkg::decM32::systemVersionFromTracksideSupported */kcg_bool systemVersionFromTracksideSupported,
  /* MoRC_Pck::Coder_Pkg::decM32::m32_RBC_or_RIU_System_Version */m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg *m32_RBC_or_RIU_System_Version)
{
  (*m32_RBC_or_RIU_System_Version).valid = (*inMessage).valid &
    (((*inMessage).source == msrc_Euroradio_Common_Types_Pkg) |
      ((*inMessage).source == msrc_RadioInfillUnit_Common_Types_Pkg)) &
    ((*inMessage).Radio_Common_Header.nid_message ==
      cNID_MESSAGE_RBC_RIU_SystemVersion_MoRC_Pck);
  (*m32_RBC_or_RIU_System_Version).version =
    (*inMessage).Radio_Common_Header.m_version;
  (*m32_RBC_or_RIU_System_Version).systemVersionFromTracksideSupported =
    systemVersionFromTracksideSupported;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** decM32_MoRC_Pck_Coder_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

