/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_154_UtrechtAmsterdamScen_RBC_S.h"

#ifndef KCG_USER_DEFINED_INIT
void _154_UtrechtAmsterdamScen_init_(outC__154_UtrechtAmsterdamScen_ *outC)
{
  outC->outTriggerId = 0;
  /* 1 */ RadioTrackTrainMessageTri_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _154_UtrechtAmsterdamScen_reset(outC__154_UtrechtAmsterdamScen_ *outC)
{
  /* 1 */ RadioTrackTrainMessageTri_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel */
void _154_UtrechtAmsterdamScen_RBC_S(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inRBCTime */ T_TRAIN inRBCTime,
  outC__154_UtrechtAmsterdamScen_ *outC)
{
  /* 1 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    0,
    0.0,
    0.0,
    - 1,
    0.0,
    &outC->Context_1);
  outC->outTriggerId = outC->Context_1.outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _154_UtrechtAmsterdamScen_RBC_S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

