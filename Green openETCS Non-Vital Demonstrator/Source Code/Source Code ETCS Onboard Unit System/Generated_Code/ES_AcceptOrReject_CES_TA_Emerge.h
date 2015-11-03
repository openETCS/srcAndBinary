/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _ES_AcceptOrReject_CES_TA_Emerg
#define _ES_AcceptOrReject_CES_TA_Emerg

#include "kcg_types.h"
#include "ES_Normalize_D_EMERGENCYSTOP_TA.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_EmergencyStop::ES_AcceptOrReject_CES */
extern void ES_AcceptOrReject_CES_TA_Emerge(
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_scale */ Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_ref */ D_REF d_ref,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_dir */ Q_DIR q_dir,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_emergencystop */ D_EMERGENCYSTOP d_emergencystop,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::TrainPositionIn */ trainPosition_T_TrainPosition_T *TrainPositionIn,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::currentEOA */ L_internal_Type_Obu_BasicTypes_ currentEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::updateEOA */ kcg_bool *updateEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::newEOA */ L_internal_Type_Obu_BasicTypes_ *newEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::cesAccepted */ kcg_bool *cesAccepted);

#endif /* _ES_AcceptOrReject_CES_TA_Emerg */
/* $**************** KCG Version 6.4 (build i21) ****************
** ES_AcceptOrReject_CES_TA_Emerge.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

