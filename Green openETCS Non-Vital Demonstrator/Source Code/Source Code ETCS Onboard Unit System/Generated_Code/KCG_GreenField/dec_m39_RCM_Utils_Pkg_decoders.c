/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_m39_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_m39 */
void dec_m39_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_m39::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_m39::m39_acknowledgementOfTerminationOfACommunicationSession */ m39_AckOfTerminationOfACommunic *m39_acknowledgementOfTerminatio)
{
  (*m39_acknowledgementOfTerminatio).valid = (*msg_in).valid &
    (((*msg_in).source == msrc_Euroradio_Common_Types_Pkg) |
      ((*msg_in).source == msrc_RadioInfillUnit_Common_Typ)) &
    ((*msg_in).Radio_Common_Header.nid_message ==
      cm39_Acknowledgement_of_termina);
  (*m39_acknowledgementOfTerminatio).msgSrc = (*msg_in).source;
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*m39_acknowledgementOfTerminatio).origin,
    &(*msg_in).sendingRBC);
  (*m39_acknowledgementOfTerminatio).lrbg =
    (*msg_in).Radio_Common_Header.nid_lrbg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dec_m39_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

