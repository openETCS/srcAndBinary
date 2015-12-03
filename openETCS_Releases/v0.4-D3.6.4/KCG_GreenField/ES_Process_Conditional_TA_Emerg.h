/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _ES_Process_Conditional_TA_Emer
#define _ES_Process_Conditional_TA_Emer

#include "kcg_types.h"
#include "ES_AcceptOrReject_CES_TA_Emerge.h"
#include "Manage_NID_EM_Store_TA_Emergenc.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::cesAccepted */ cesAccepted;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::updateEOA */ updateEOA;
  L_internal_Type_Obu_BasicTypes_ /* TA_EmergencyStop::ES_Process_Conditional::newEOA */ newEOA;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::cesActive */ cesActive;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::cesRevoked */ cesRevoked;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_EM_Store_T_TA_EmergencyStop /* TA_EmergencyStop::ES_Process_Conditional::store */ store;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ES_Process_Conditional_TA_;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Process_Conditional */
extern void ES_Process_Conditional_TA_Emerg(
  /* TA_EmergencyStop::ES_Process_Conditional::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Process_Conditional::q_scale */ Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_Process_Conditional::d_ref */ D_REF d_ref,
  /* TA_EmergencyStop::ES_Process_Conditional::q_dir */ Q_DIR q_dir,
  /* TA_EmergencyStop::ES_Process_Conditional::d_emergencystop */ D_EMERGENCYSTOP d_emergencystop,
  /* TA_EmergencyStop::ES_Process_Conditional::receivedMsg15 */ kcg_bool receivedMsg15,
  /* TA_EmergencyStop::ES_Process_Conditional::receivedMsg18 */ kcg_bool receivedMsg18,
  /* TA_EmergencyStop::ES_Process_Conditional::TrainPositionIn */ trainPosition_T_TrainPosition_T *TrainPositionIn,
  /* TA_EmergencyStop::ES_Process_Conditional::currentEOA */ L_internal_Type_Obu_BasicTypes_ currentEOA,
  outC_ES_Process_Conditional_TA_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ES_Process_Conditional_reset_TA(
  outC_ES_Process_Conditional_TA_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ES_Process_Conditional_init_TA_(
  outC_ES_Process_Conditional_TA_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ES_Process_Conditional_TA_Emer */
/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Process_Conditional_TA_Emerg.h
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

