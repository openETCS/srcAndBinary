/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "bypassGeneralMessage_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::bypassGeneralMessage */
void bypassGeneralMessage_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::bypassGeneralMessage::Message */ReceivedMessage_T_Common_Types_Pkg *Message,
  /* xdebugSupport_Pkg::bypassGeneralMessage::outputMessageForInformationFilter */ReceivedMessage_T_Common_Types_Pkg *outputMessageForInformationFilter,
  /* xdebugSupport_Pkg::bypassGeneralMessage::outputMessageByPass */ReceivedMessage_T_Common_Types_Pkg *outputMessageByPass)
{
  static kcg_int tmp;
  /* xdebugSupport_Pkg::bypassGeneralMessage::byPass */
  static kcg_bool byPass;
  
  if ((*Message).valid) {
    tmp = /* 1 */ countPacketsMsg_xdebugSupport_Pkg(Message);
  }
  else {
    tmp = 0;
  }
  byPass = (tmp <= 0) & (*Message).valid & ((*Message).source ==
      msrc_Euroradio_Common_Types_Pkg) &
    ((*Message).Radio_Common_Header.nid_message ==
      cm24_General_Message_Id_Pkg) & ((*Message).Radio_Common_Header.m_ack !=
      M_ACK_Acknowledgement_required);
  if (byPass) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      outputMessageForInformationFilter,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(outputMessageByPass, Message);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      outputMessageForInformationFilter,
      Message);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      outputMessageByPass,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** bypassGeneralMessage_xdebugSupport_Pkg.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

