/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "decM39_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::decM39 */
kcg_bool decM39_MoRC_Pck_Coder_Pkg(
  /* MoRC_Pck::Coder_Pkg::decM39::inMessage */genMessage_T_MoRC_Pck *inMessage)
{
  /* MoRC_Pck::Coder_Pkg::decM39::m39_acknowledgementOfTerminationOfACommunicationSession */
  static kcg_bool m39_acknowledgementOfTerminationOfACommunicationSession;
  
  m39_acknowledgementOfTerminationOfACommunicationSession = (*inMessage).valid &
    (((*inMessage).source == msrc_Euroradio_Common_Types_Pkg) |
      ((*inMessage).source == msrc_RadioInfillUnit_Common_Types_Pkg)) &
    ((*inMessage).Radio_Common_Header.nid_message ==
      cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg);
  return m39_acknowledgementOfTerminationOfACommunicationSession;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** decM39_MoRC_Pck_Coder_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

