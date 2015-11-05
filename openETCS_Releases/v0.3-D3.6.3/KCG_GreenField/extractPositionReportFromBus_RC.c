/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractPositionReportFromBus_RC.h"

/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus */
void extractPositionReportFromBus_RC(
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::messageBus */ M_TrainTrackMessageBus_t_TM_Tra *messageBus,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::found */ kcg_bool *found,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::positionReport */ M_TrainTrack_Message_T_TM_radio *positionReport)
{
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus */
  static kcg_int acc;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L4 */
  static kcg_int _L4;
  
  _L4 = - 1;
  /* 1 */ for (i = 0; i < 5; i++) {
    acc = _L4;
    /* 1 */
    extractPositionReportFromBus_it(i, acc, messageBus, &cond_iterw, &_L4);
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
  *found = _L4 >= 0;
  if ((0 <= _L4) & (_L4 < 5)) {
    kcg_copy_M_TrainTrack_Message_T(positionReport, &(*messageBus)[_L4]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T(
      positionReport,
      (M_TrainTrack_Message_T_TM_radio *) &DEFAULT_TrainToTrackMessage_TM_);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** extractPositionReportFromBus_RC.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

