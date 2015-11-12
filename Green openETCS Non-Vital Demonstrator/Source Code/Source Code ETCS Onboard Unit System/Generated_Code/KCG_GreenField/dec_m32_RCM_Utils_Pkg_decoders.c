/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_m32_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_m32 */
void dec_m32_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_m32::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_m32::systemVersionFromTracksideSupported */ kcg_bool systemVersionFromTracksideSuppo,
  /* RCM_Utils_Pkg::decoders::dec_m32::m32_RBC_or_RIU_System_Version */ m32_RBC_RIU_SystemVersion_T_RCM *m32_RBC_or_RIU_System_Version)
{
  (*m32_RBC_or_RIU_System_Version).valid = (*msg_in).valid &
    (((*msg_in).source == msrc_Euroradio_Common_Types_Pkg) |
      ((*msg_in).source == msrc_RadioInfillUnit_Common_Typ)) &
    ((*msg_in).Radio_Common_Header.nid_message ==
      cm32_RBC_RIU_System_Version_Id_);
  (*m32_RBC_or_RIU_System_Version).msgSrc = (*msg_in).source;
  (*m32_RBC_or_RIU_System_Version).versionSupported =
    systemVersionFromTracksideSuppo;
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*m32_RBC_or_RIU_System_Version).origin,
    &(*msg_in).sendingRBC);
  (*m32_RBC_or_RIU_System_Version).m_version =
    (*msg_in).Radio_Common_Header.m_version;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dec_m32_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

