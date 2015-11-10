/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _UtrechtAmsterdamScenarioS_RBC_
#define _UtrechtAmsterdamScenarioS_RBC_

#include "kcg_types.h"
#include "RadioTrackTrainMessageTri_RBC_S.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTri_ /* 15 */ Context_15;
  outC_RadioTrackTrainMessageTri_ /* 14 */ Context_14;
  outC_RadioTrackTrainMessageTri_ /* 13 */ Context_13;
  outC_RadioTrackTrainMessageTri_ /* 12 */ Context_12;
  outC_RadioTrackTrainMessageTri_ /* 11 */ Context_11;
  outC_RadioTrackTrainMessageTri_ /* 6 */ Context_6;
  outC_RadioTrackTrainMessageTri_ /* 17 */ Context_17;
  outC_RadioTrackTrainMessageTri_ /* 5 */ Context_5;
  outC_RadioTrackTrainMessageTri_ /* 4 */ Context_4;
  outC_RadioTrackTrainMessageTri_ /* 3 */ Context_3;
  outC_RadioTrackTrainMessageTri_ /* 2 */ Context_2;
  outC_RadioTrackTrainMessageTri_ /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_UtrechtAmsterdamScenarioS_;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer */
extern void UtrechtAmsterdamScenarioS_RBC_S(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inRBCTime */ T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioS_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void UtrechtAmsterdamScenarioS_reset(
  outC_UtrechtAmsterdamScenarioS_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void UtrechtAmsterdamScenarioS_init_(
  outC_UtrechtAmsterdamScenarioS_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _UtrechtAmsterdamScenarioS_RBC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** UtrechtAmsterdamScenarioS_RBC_S.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

