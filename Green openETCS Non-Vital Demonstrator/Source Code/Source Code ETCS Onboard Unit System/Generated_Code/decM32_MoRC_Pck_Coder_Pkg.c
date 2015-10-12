/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "decM32_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::decM32 */
void decM32_MoRC_Pck_Coder_Pkg(
  /* MoRC_Pck::Coder_Pkg::decM32::inMessage */ msgFromTrack_T_RCM_MsgTypes_Pkg *inMessage,
  /* MoRC_Pck::Coder_Pkg::decM32::systemVersionFromTracksideSupported */ kcg_bool systemVersionFromTracksideSupported,
  /* MoRC_Pck::Coder_Pkg::decM32::m32_RBC_or_RIU_System_Version */ m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg *m32_RBC_or_RIU_System_Version)
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

/* $**************** KCG Version 6.4 (build i21) ****************
** decM32_MoRC_Pck_Coder_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

