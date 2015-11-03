/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_ExtractMsgParams_TA_Emergenc.h"

/* TA_EmergencyStop::ES_ExtractMsgParams */
void ES_ExtractMsgParams_TA_Emergenc(
  /* TA_EmergencyStop::ES_ExtractMsgParams::messageIn */ ReceivedMessage_T_Common_Types_ *messageIn,
  /* TA_EmergencyStop::ES_ExtractMsgParams::receivedESMsg */ kcg_bool receivedESMsg,
  /* TA_EmergencyStop::ES_ExtractMsgParams::nid_em */ NID_EM *nid_em,
  /* TA_EmergencyStop::ES_ExtractMsgParams::q_scale */ Q_SCALE *q_scale,
  /* TA_EmergencyStop::ES_ExtractMsgParams::d_ref */ D_REF *d_ref,
  /* TA_EmergencyStop::ES_ExtractMsgParams::q_dir */ Q_DIR *q_dir,
  /* TA_EmergencyStop::ES_ExtractMsgParams::d_emergencystop */ D_EMERGENCYSTOP *d_emergencystop)
{
  /* 1 */ if (receivedESMsg) {
    *nid_em = (*messageIn).Radio_Common_Header.nid_em;
  }
  else {
    *nid_em = cNID_EM_NONE_TA_EmergencyStop;
  }
  *q_scale = (*messageIn).Radio_Common_Header.q_scale;
  *d_ref = (*messageIn).Radio_Common_Header.d_ref;
  *q_dir = (*messageIn).Radio_Common_Header.q_dir;
  *d_emergencystop = (*messageIn).Radio_Common_Header.d_emergencystop;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_ExtractMsgParams_TA_Emergenc.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

