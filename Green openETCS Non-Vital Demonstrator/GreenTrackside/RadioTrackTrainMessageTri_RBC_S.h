/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _RadioTrackTrainMessageTri_RBC_
#define _RadioTrackTrainMessageTri_RBC_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::valid */ valid;
  kcg_bool /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::setReferenceTime */ setReferenceTime;
  T_TRAIN /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::referenceTime */ referenceTime;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RadioTrackTrainMessageTri_;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger */
extern void RadioTrackTrainMessageTri_RBC_S(
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inRBCTime */ T_TRAIN inRBCTime,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inLRBGTrigger */ NID_LRBG inLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inMinDistanceToLRBGTrigger */ kcg_real inMinDistanceToLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inMaxDistanceToLRBGTrigger */ kcg_real inMaxDistanceToLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inTriggerIdHidden */ kcg_int inTriggerIdHidden,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inActivatorTimeout */ kcg_real inActivatorTimeout,
  outC_RadioTrackTrainMessageTri_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrackTrainMessageTri_reset(
  outC_RadioTrackTrainMessageTri_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainMessageTri_init_(
  outC_RadioTrackTrainMessageTri_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RadioTrackTrainMessageTri_RBC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageTri_RBC_S.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

