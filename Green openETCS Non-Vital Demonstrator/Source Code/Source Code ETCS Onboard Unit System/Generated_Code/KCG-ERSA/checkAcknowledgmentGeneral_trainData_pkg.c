/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkAcknowledgmentGeneral_trainData_pkg.h"

/* trainData_pkg::checkAcknowledgmentGeneral */
void checkAcknowledgmentGeneral_trainData_pkg(
  /* trainData_pkg::checkAcknowledgmentGeneral::trackMessages */ ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::checkAcknowledgmentGeneral::ackReceived */ kcg_bool *ackReceived,
  /* trainData_pkg::checkAcknowledgmentGeneral::ackRequested */ kcg_bool *ackRequested)
{
  *ackReceived = (*trackMessages).valid & ((*trackMessages).source ==
      msrc_Euroradio_Common_Types_Pkg) &
    (((*trackMessages).Radio_Common_Header.nid_message ==
        cm24_General_Message_Id_Pkg) |
      ((*trackMessages).Radio_Common_Header.nid_message ==
        cm03_Movement_Authority_Id_Pkg) |
      ((*trackMessages).Radio_Common_Header.nid_message ==
        cm15_Conditional_Emergency_Stop_Id_Pkg)) &
    ((*trackMessages).Radio_Common_Header.m_ack ==
      M_ACK_Acknowledgement_required);
  *ackRequested = *ackReceived;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkAcknowledgmentGeneral_trainData_pkg.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

