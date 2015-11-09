/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */
#ifndef _ES_Build_AcknowledgementNew_TA_EmergencyStop_H_
#define _ES_Build_AcknowledgementNew_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* TA_EmergencyStop::ES_Build_AcknowledgementNew */
extern void ES_Build_AcknowledgementNew_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::t_train */T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::receivedMsg16 */kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::cesAccepted */kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::updateEOA */kcg_bool updateEOA,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::m147 */M_147_T_TM_radio_messages *m147);

#endif /* _ES_Build_AcknowledgementNew_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Build_AcknowledgementNew_TA_EmergencyStop.h
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */

