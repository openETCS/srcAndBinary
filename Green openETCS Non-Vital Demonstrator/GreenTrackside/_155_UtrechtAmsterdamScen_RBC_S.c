/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_155_UtrechtAmsterdamScen_RBC_S.h"

#ifndef KCG_USER_DEFINED_INIT
void _155_UtrechtAmsterdamScen_init_(outC__155_UtrechtAmsterdamScen_ *outC)
{
  outC->outTriggerId = 0;
  /* 1 */ Triggers_Sheet14_init_RBC_Scena(&outC->_8_Context_1);
  /* 1 */ Triggers_Sheet13_init_RBC_Scena(&outC->_7_Context_1);
  /* 1 */ Triggers_Sheet12_init_RBC_Scena(&outC->_6_Context_1);
  /* 1 */ Triggers_Sheet11_init_RBC_Scena(&outC->_5_Context_1);
  /* 1 */ Triggers_Sheet09_init_RBC_Scena(&outC->_4_Context_1);
  /* 2 */ Triggers_Sheet08B_init_RBC_Scen(&outC->Context_2);
  /* 1 */ Triggers_Sheet08A_init_RBC_Scen(&outC->_3_Context_1);
  /* 1 */ Triggers_Sheet07_init_RBC_Scena(&outC->_2_Context_1);
  /* 1 */ UtrechtAmsterdamScenarioS_init_(&outC->_1_Context_1);
  /* 1 */ _154_UtrechtAmsterdamScen_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _155_UtrechtAmsterdamScen_reset(outC__155_UtrechtAmsterdamScen_ *outC)
{
  /* 1 */ Triggers_Sheet14_reset_RBC_Scen(&outC->_8_Context_1);
  /* 1 */ Triggers_Sheet13_reset_RBC_Scen(&outC->_7_Context_1);
  /* 1 */ Triggers_Sheet12_reset_RBC_Scen(&outC->_6_Context_1);
  /* 1 */ Triggers_Sheet11_reset_RBC_Scen(&outC->_5_Context_1);
  /* 1 */ Triggers_Sheet09_reset_RBC_Scen(&outC->_4_Context_1);
  /* 2 */ Triggers_Sheet08B_reset_RBC_Sce(&outC->Context_2);
  /* 1 */ Triggers_Sheet08A_reset_RBC_Sce(&outC->_3_Context_1);
  /* 1 */ Triggers_Sheet07_reset_RBC_Scen(&outC->_2_Context_1);
  /* 1 */ UtrechtAmsterdamScenarioS_reset(&outC->_1_Context_1);
  /* 1 */ _154_UtrechtAmsterdamScen_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages */
void _155_UtrechtAmsterdamScen_RBC_S(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inRBCTime */ T_TRAIN inRBCTime,
  outC__155_UtrechtAmsterdamScen_ *outC)
{
  /* 1 */
  _154_UtrechtAmsterdamScen_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    - 1,
    inRBCTime,
    &outC->Context_1);
  /* 1 */
  UtrechtAmsterdamScenarioS_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_1.outTriggerId,
    inRBCTime,
    &outC->_1_Context_1);
  /* 1 */
  Triggers_Sheet07_RBC_Scenario_P(
    inLRBG,
    inDistanceToLRBG,
    outC->_1_Context_1.outTriggerId,
    inRBCTime,
    &outC->_2_Context_1);
  /* 1 */
  Triggers_Sheet08A_RBC_Scenario_(
    inLRBG,
    inDistanceToLRBG,
    outC->_2_Context_1.outTriggerId,
    inRBCTime,
    &outC->_3_Context_1);
  /* 2 */
  Triggers_Sheet08B_RBC_Scenario_(
    inLRBG,
    inDistanceToLRBG,
    outC->_3_Context_1.outTriggerId,
    inRBCTime,
    &outC->Context_2);
  /* 1 */
  Triggers_Sheet09_RBC_Scenario_P(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    &outC->_4_Context_1);
  /* 1 */
  Triggers_Sheet11_RBC_Scenario_P(
    inLRBG,
    inDistanceToLRBG,
    outC->_4_Context_1.outTriggerId,
    inRBCTime,
    &outC->_5_Context_1);
  /* 1 */
  Triggers_Sheet12_RBC_Scenario_P(
    inLRBG,
    inDistanceToLRBG,
    outC->_5_Context_1.outTriggerId,
    inRBCTime,
    &outC->_6_Context_1);
  /* 1 */
  Triggers_Sheet13_RBC_Scenario_P(
    inLRBG,
    inDistanceToLRBG,
    outC->_6_Context_1.outTriggerId,
    inRBCTime,
    &outC->_7_Context_1);
  /* 1 */
  Triggers_Sheet14_RBC_Scenario_P(
    inLRBG,
    inDistanceToLRBG,
    outC->_7_Context_1.outTriggerId,
    inRBCTime,
    &outC->_8_Context_1);
  outC->outTriggerId = outC->_8_Context_1.outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _155_UtrechtAmsterdamScen_RBC_S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

