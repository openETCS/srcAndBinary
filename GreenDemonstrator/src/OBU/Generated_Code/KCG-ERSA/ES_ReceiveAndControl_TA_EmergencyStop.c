/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_ReceiveAndControl_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_ReceiveAndControl */
void ES_ReceiveAndControl_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_ReceiveAndControl::messageIn */ ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg15 */ kcg_bool *receivedMsg15,
  /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg16 */ kcg_bool *receivedMsg16,
  /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg18 */ kcg_bool *receivedMsg18,
  /* TA_EmergencyStop::ES_ReceiveAndControl::sendMsg147 */ kcg_bool *sendMsg147)
{
  /* 1 */
  ES_Filter_Messages_TA_EmergencyStop(
    messageIn,
    receivedMsg15,
    receivedMsg16,
    receivedMsg18);
  *sendMsg147 = *receivedMsg15 | *receivedMsg16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_ReceiveAndControl_TA_EmergencyStop.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

