/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Filter_Messages_TA_Emergency.h"

/* TA_EmergencyStop::ES_Filter_Messages */
void ES_Filter_Messages_TA_Emergency(
  /* TA_EmergencyStop::ES_Filter_Messages::messageIn */ ReceivedMessage_T_Common_Types_ *messageIn,
  /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg15 */ kcg_bool *receivedMsg15,
  /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg16 */ kcg_bool *receivedMsg16,
  /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg18 */ kcg_bool *receivedMsg18)
{
  /* TA_EmergencyStop::ES_Filter_Messages::isValidRadioMsg */
  static kcg_bool isValidRadioMsg;
  
  isValidRadioMsg = (*messageIn).valid & ((*messageIn).source ==
      msrc_Euroradio_Common_Types_Pkg);
  *receivedMsg16 = isValidRadioMsg &
    ((*messageIn).Radio_Common_Header.nid_message ==
      cm16_Unconditional_Emergency_St);
  *receivedMsg18 = isValidRadioMsg &
    ((*messageIn).Radio_Common_Header.nid_message ==
      cm18_Revocation_of_Emergency_St);
  *receivedMsg15 = isValidRadioMsg &
    ((*messageIn).Radio_Common_Header.nid_message ==
      cm15_Conditional_Emergency_Stop);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Filter_Messages_TA_Emergency.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

