/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "bypassGeneralMessage_xdebugSupp.h"

/* xdebugSupport_Pkg::bypassGeneralMessage */
void bypassGeneralMessage_xdebugSupp(
  /* xdebugSupport_Pkg::bypassGeneralMessage::Message */ ReceivedMessage_T_Common_Types_ *Message,
  /* xdebugSupport_Pkg::bypassGeneralMessage::outputMessageForInformationFilter */ ReceivedMessage_T_Common_Types_ *outputMessageForInformationFilt,
  /* xdebugSupport_Pkg::bypassGeneralMessage::outputMessageByPass */ ReceivedMessage_T_Common_Types_ *outputMessageByPass)
{
  /* xdebugSupport_Pkg::bypassGeneralMessage */
  static kcg_int tmp;
  /* xdebugSupport_Pkg::bypassGeneralMessage::byPass */
  static kcg_bool byPass;
  
  /* ck__L5 */ if ((*Message).valid) {
    tmp = /* 1 */ countPacketsMsg_xdebugSupport_P(Message);
  }
  else {
    tmp = 0;
  }
  byPass = (tmp <= 0) & (*Message).valid & ((*Message).source ==
      msrc_Euroradio_Common_Types_Pkg) &
    ((*Message).Radio_Common_Header.nid_message ==
      cm24_General_Message_Id_Pkg) & ((*Message).Radio_Common_Header.m_ack !=
      M_ACK_Acknowledgement_required);
  /* ck_byPass */ if (byPass) {
    kcg_copy_ReceivedMessage_T_Comm(
      outputMessageForInformationFilt,
      (ReceivedMessage_T_Common_Types_ *) &cDefaultRM_Common_Types_Pkg);
    kcg_copy_ReceivedMessage_T_Comm(outputMessageByPass, Message);
  }
  else {
    kcg_copy_ReceivedMessage_T_Comm(outputMessageForInformationFilt, Message);
    kcg_copy_ReceivedMessage_T_Comm(
      outputMessageByPass,
      (ReceivedMessage_T_Common_Types_ *) &cDefaultRM_Common_Types_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** bypassGeneralMessage_xdebugSupp.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

