/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef __155_UtrechtAmsterdamScen_RBC_
#define __155_UtrechtAmsterdamScen_RBC_

#include "kcg_types.h"
#include "_154_UtrechtAmsterdamScen_RBC_S.h"
#include "UtrechtAmsterdamScenarioS_RBC_S.h"
#include "Triggers_Sheet07_RBC_Scenario_P.h"
#include "Triggers_Sheet08A_RBC_Scenario_.h"
#include "Triggers_Sheet08B_RBC_Scenario_.h"
#include "Triggers_Sheet09_RBC_Scenario_P.h"
#include "Triggers_Sheet11_RBC_Scenario_P.h"
#include "Triggers_Sheet12_RBC_Scenario_P.h"
#include "Triggers_Sheet13_RBC_Scenario_P.h"
#include "Triggers_Sheet14_RBC_Scenario_P.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Triggers_Sheet14_RBC_Scena /* 1 */ _8_Context_1;
  outC_Triggers_Sheet13_RBC_Scena /* 1 */ _7_Context_1;
  outC_Triggers_Sheet12_RBC_Scena /* 1 */ _6_Context_1;
  outC_Triggers_Sheet11_RBC_Scena /* 1 */ _5_Context_1;
  outC_Triggers_Sheet09_RBC_Scena /* 1 */ _4_Context_1;
  outC_Triggers_Sheet08B_RBC_Scen /* 2 */ Context_2;
  outC_Triggers_Sheet08A_RBC_Scen /* 1 */ _3_Context_1;
  outC_Triggers_Sheet07_RBC_Scena /* 1 */ _2_Context_1;
  outC_UtrechtAmsterdamScenarioS_ /* 1 */ _1_Context_1;
  outC__154_UtrechtAmsterdamScen_ /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC__155_UtrechtAmsterdamScen_;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages */
extern void _155_UtrechtAmsterdamScen_RBC_S(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inRBCTime */ T_TRAIN inRBCTime,
  outC__155_UtrechtAmsterdamScen_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _155_UtrechtAmsterdamScen_reset(
  outC__155_UtrechtAmsterdamScen_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _155_UtrechtAmsterdamScen_init_(
  outC__155_UtrechtAmsterdamScen_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* __155_UtrechtAmsterdamScen_RBC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** _155_UtrechtAmsterdamScen_RBC_S.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

