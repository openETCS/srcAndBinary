/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */
#ifndef _ES_Build_Acknowledgement_TA_Em
#define _ES_Build_Acknowledgement_TA_Em

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_EmergencyStop::ES_Build_Acknowledgement */
extern void ES_Build_Acknowledgement_TA_Eme(
  /* TA_EmergencyStop::ES_Build_Acknowledgement::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::t_train */ T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet0 */ PT0_PositionReport_T_Packet_Tra *packet0,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::receivedMsg16 */ kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::cesAccepted */ kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::updateEOA */ kcg_bool updateEOA,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::message147 */ Radio_TrainTrack_Message_T_TM_t *message147);

#endif /* _ES_Build_Acknowledgement_TA_Em */
/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Build_Acknowledgement_TA_Eme.h
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

