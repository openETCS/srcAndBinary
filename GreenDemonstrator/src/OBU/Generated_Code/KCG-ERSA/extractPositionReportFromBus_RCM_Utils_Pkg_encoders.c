/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractPositionReportFromBus_RCM_Utils_Pkg_encoders.h"

/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus */
void extractPositionReportFromBus_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::messageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *messageBus,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::found */ kcg_bool *found,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::positionReport */ M_TrainTrack_Message_T_TM_radio_messages *positionReport)
{
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus */ kcg_int acc;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus */ kcg_bool cond_iterw;
  kcg_int i;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L4 */ kcg_int _L4;
  
  _L4 = - 1;
  /* 1 */ for (i = 0; i < 5; i++) {
    acc = _L4;
    /* 1 */
    extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders(
      i,
      acc,
      messageBus,
      &cond_iterw,
      &_L4);
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
  *found = _L4 >= 0;
  if ((0 <= _L4) & (_L4 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      positionReport,
      &(*messageBus)[_L4]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      positionReport,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** extractPositionReportFromBus_RCM_Utils_Pkg_encoders.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

