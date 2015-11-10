/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef __154_UtrechtAmsterdamScen_RBC_
#define __154_UtrechtAmsterdamScen_RBC_

#include "kcg_types.h"
#include "RadioTrackTrainMessageTri_RBC_S.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTri_ /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC__154_UtrechtAmsterdamScen_;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel */
extern void _154_UtrechtAmsterdamScen_RBC_S(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inRBCTime */ T_TRAIN inRBCTime,
  outC__154_UtrechtAmsterdamScen_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _154_UtrechtAmsterdamScen_reset(
  outC__154_UtrechtAmsterdamScen_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _154_UtrechtAmsterdamScen_init_(
  outC__154_UtrechtAmsterdamScen_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* __154_UtrechtAmsterdamScen_RBC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** _154_UtrechtAmsterdamScen_RBC_S.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

