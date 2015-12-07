/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkGeneralMessage_trainData_p.h"

#ifndef KCG_USER_DEFINED_INIT
void checkGeneralMessage_init_trainD(outC_checkGeneralMessage_trainD *outC)
{
  outC->genMessageReceived = kcg_true;
  outC->ackRequested = kcg_true;
  outC->init = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkGeneralMessage_reset_train(outC_checkGeneralMessage_trainD *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::checkGeneralMessage */
void checkGeneralMessage_trainData_p(
  /* trainData_pkg::checkGeneralMessage::trackMessages */ ReceivedMessage_T_Common_Types_ *trackMessages,
  outC_checkGeneralMessage_trainD *outC)
{
  /* trainData_pkg::checkGeneralMessage */
  static kcg_bool tmp;
  /* trainData_pkg::checkGeneralMessage::_L16 */
  static kcg_bool _L16;
  
  _L16 = (*trackMessages).valid & ((*trackMessages).source ==
      msrc_Euroradio_Common_Types_Pkg) &
    ((*trackMessages).Radio_Common_Header.nid_message ==
      cm24_General_Message_Id_Pkg);
  /* 1 */ if (_L16) {
    outC->ackRequested = (*trackMessages).Radio_Common_Header.m_ack ==
      M_ACK_Acknowledgement_required;
  }
  else {
    outC->ackRequested = kcg_false;
  }
  /* last_init_ck_GeneralMsgReceived */ if (outC->init) {
    outC->init = kcg_false;
    tmp = kcg_false;
  }
  else {
    tmp = outC->genMessageReceived;
  }
  outC->genMessageReceived = tmp | _L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkGeneralMessage_trainData_p.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

