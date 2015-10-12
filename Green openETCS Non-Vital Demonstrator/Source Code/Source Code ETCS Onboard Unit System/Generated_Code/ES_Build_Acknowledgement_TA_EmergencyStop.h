/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _ES_Build_Acknowledgement_TA_EmergencyStop_H_
#define _ES_Build_Acknowledgement_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_EmergencyStop::ES_Build_Acknowledgement */
extern void ES_Build_Acknowledgement_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Build_Acknowledgement::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::t_train */ T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::receivedMsg16 */ kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::cesAccepted */ kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::updateEOA */ kcg_bool updateEOA,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::message147 */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *message147);

#endif /* _ES_Build_Acknowledgement_TA_EmergencyStop_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Build_Acknowledgement_TA_EmergencyStop.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

