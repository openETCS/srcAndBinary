/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "decM39_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::decM39 */
kcg_bool decM39_MoRC_Pck_Coder_Pkg(
  /* MoRC_Pck::Coder_Pkg::decM39::inMessage */ msgFromTrack_T_RCM_MsgTypes_Pkg *inMessage)
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

/* $**************** KCG Version 6.4 (build i21) ****************
** decM39_MoRC_Pck_Coder_Pkg.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

