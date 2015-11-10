/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _Triggers_Sheet08A_RBC_Scenario
#define _Triggers_Sheet08A_RBC_Scenario

#include "kcg_types.h"
#include "RadioTrackTrainMessageTri_RBC_S.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::Triggers_Sheet08A::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTri_ /* 3 */ Context_3;
  outC_RadioTrackTrainMessageTri_ /* 2 */ Context_2;
  outC_RadioTrackTrainMessageTri_ /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Triggers_Sheet08A_RBC_Scen;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::Triggers_Sheet08A */
extern void Triggers_Sheet08A_RBC_Scenario_(
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet08A_RBC_Scen *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Triggers_Sheet08A_reset_RBC_Sce(
  outC_Triggers_Sheet08A_RBC_Scen *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Triggers_Sheet08A_init_RBC_Scen(
  outC_Triggers_Sheet08A_RBC_Scen *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Triggers_Sheet08A_RBC_Scenario */
/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet08A_RBC_Scenario_.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

