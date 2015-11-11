/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_AcceptOrReject_CES_TA_Emerge.h"

/* TA_EmergencyStop::ES_AcceptOrReject_CES */
void ES_AcceptOrReject_CES_TA_Emerge(
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_scale */ Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_ref */ D_REF d_ref,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_dir */ Q_DIR q_dir,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_emergencystop */ D_EMERGENCYSTOP d_emergencystop,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::TrainPositionIn */ trainPosition_T_TrainPosition_T *TrainPositionIn,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::currentEOA */ L_internal_Type_Obu_BasicTypes_ currentEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::updateEOA */ kcg_bool *updateEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::newEOA */ L_internal_Type_Obu_BasicTypes_ *newEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::cesAccepted */ kcg_bool *cesAccepted)
{
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L8 */
  static L_internal_Type_Obu_BasicTypes_ _L8;
  
  _L8 = /* 1 */ ES_Normalize_D_EMERGENCYSTOP_TA(q_scale, d_emergencystop);
  *cesAccepted = (*TrainPositionIn).minSafeFrontEndPosition < _L8;
  *updateEOA = *cesAccepted & (_L8 < currentEOA);
  /* 1 */ if (*updateEOA) {
    *newEOA = _L8;
  }
  else {
    *newEOA = cEOA_NONE_TA_EmergencyStop;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_AcceptOrReject_CES_TA_Emerge.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

