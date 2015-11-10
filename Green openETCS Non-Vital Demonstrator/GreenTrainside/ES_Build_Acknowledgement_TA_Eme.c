/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Build_Acknowledgement_TA_Eme.h"

/* TA_EmergencyStop::ES_Build_Acknowledgement */
void ES_Build_Acknowledgement_TA_Eme(
  /* TA_EmergencyStop::ES_Build_Acknowledgement::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::t_train */ T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet0 */ PT0_PositionReport_T_Packet_Tra *packet0,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::receivedMsg16 */ kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::cesAccepted */ kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::updateEOA */ kcg_bool updateEOA,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::message147 */ Radio_TrainTrack_Message_T_TM_t *message147)
{
  (*message147).present = kcg_true;
  kcg_copy_PT0_PositionReport_T_P(&(*message147).packets.p0, packet0);
  kcg_copy_PT1_PositionReport_2BG(&(*message147).packets.p1, packet1);
  kcg_copy_PT3_OnboardTelephoneNu(
    &(*message147).packets.p3,
    (PT3_OnboardTelephoneNumbers_T_P *) &cPT3_OBUTelephoneNumber_MA_Requ);
  kcg_copy_PT4_ErrorReporting_T_P(
    &(*message147).packets.p4,
    (PT4_ErrorReporting_T_Packet_Tra *) &cPT4_ErrorReporting_MA_Request);
  kcg_copy_PT5_TrainRunningNumber(
    &(*message147).packets.p5,
    (PT5_TrainRunningNumber_Packet_T *) &cPT5_TrainRunningNumber_MA_Requ);
  kcg_copy_PT9_Level23_Transition(
    &(*message147).packets.p9,
    (PT9_Level23_TransitionInformati *) &cPT9_Level23_MA_Request);
  kcg_copy_PT11_ValidatedTrainDat(
    &(*message147).packets.p11,
    (PT11_ValidatedTrainData_T_Packe *) &cPT11_ValidateTrainData_MA_Requ);
  (*message147).header.t_train = t_train;
  (*message147).header.nid_engine = (*trainProps).nid_engine;
  (*message147).header.xQ_MARQSTREASON = cQ_MARQSREASON_NONE_TA_Emergenc;
  (*message147).header.xT_TRAIN = (*message147).header.t_train;
  (*message147).header.present = kcg_true;
  (*message147).header.nid_message = 147;
  (*message147).header.xNID_EM = nid_em;
  (*message147).header.xNID_TEXTMESSAGE = cNID_TEXTMESSAGE_NONE_TA_Emerge;
  /* 1 */ if (receivedMsg16) {
    (*message147).header.xQ_EMERGENCYSTOP = Q_EMERGENCYSTOP_Unconditional_E;
  }
  else /* 2 */ if (cesAccepted) {
    /* 3 */ if (updateEOA) {
      (*message147).header.xQ_EMERGENCYSTOP = _32_Q_EMERGENCYSTOP_Conditional;
    }
    else {
      (*message147).header.xQ_EMERGENCYSTOP = Q_EMERGENCYSTOP_Conditional_Eme;
    }
  }
  else {
    (*message147).header.xQ_EMERGENCYSTOP = Q_EMERGENCYSTOP_Emergency_stop;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Build_Acknowledgement_TA_Eme.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

