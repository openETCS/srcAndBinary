/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkAcknowledgmentGeneral_trai.h"

/* trainData_pkg::checkAcknowledgmentGeneral */
void checkAcknowledgmentGeneral_trai(
  /* trainData_pkg::checkAcknowledgmentGeneral::trackMessages */ ReceivedMessage_T_Common_Types_ *trackMessages,
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
        cm15_Conditional_Emergency_Stop)) &
    ((*trackMessages).Radio_Common_Header.m_ack ==
      M_ACK_Acknowledgement_required);
  *ackRequested = *ackReceived;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkAcknowledgmentGeneral_trai.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

