/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Build_AcknowledgementNew_TA_.h"

/* TA_EmergencyStop::ES_Build_AcknowledgementNew */
void ES_Build_AcknowledgementNew_TA_(
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::t_train */ T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::receivedMsg16 */ kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::cesAccepted */ kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::updateEOA */ kcg_bool updateEOA,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::m147 */ M_147_T_TM_radio_messages *m147)
{
  (*m147).valid = kcg_true;
  (*m147).nid_message = 147;
  (*m147).l_message = 0;
  (*m147).t_train = t_train;
  (*m147).nid_engine = (*trainProps).nid_engine;
  (*m147).nid_em = nid_em;
  /* 1 */ if (receivedMsg16) {
    (*m147).q_emergencystop = Q_EMERGENCYSTOP_Unconditional_E;
  }
  else /* 2 */ if (cesAccepted) {
    /* 3 */ if (updateEOA) {
      (*m147).q_emergencystop = _32_Q_EMERGENCYSTOP_Conditional;
    }
    else {
      (*m147).q_emergencystop = Q_EMERGENCYSTOP_Conditional_Eme;
    }
  }
  else {
    (*m147).q_emergencystop = Q_EMERGENCYSTOP_Emergency_stop;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Build_AcknowledgementNew_TA_.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

