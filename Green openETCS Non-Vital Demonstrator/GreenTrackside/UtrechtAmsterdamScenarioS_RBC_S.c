/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UtrechtAmsterdamScenarioS_RBC_S.h"

#ifndef KCG_USER_DEFINED_INIT
void UtrechtAmsterdamScenarioS_init_(outC_UtrechtAmsterdamScenarioS_ *outC)
{
  outC->outTriggerId = 0;
  /* 15 */ RadioTrackTrainMessageTri_init_(&outC->Context_15);
  /* 14 */ RadioTrackTrainMessageTri_init_(&outC->Context_14);
  /* 13 */ RadioTrackTrainMessageTri_init_(&outC->Context_13);
  /* 12 */ RadioTrackTrainMessageTri_init_(&outC->Context_12);
  /* 11 */ RadioTrackTrainMessageTri_init_(&outC->Context_11);
  /* 6 */ RadioTrackTrainMessageTri_init_(&outC->Context_6);
  /* 17 */ RadioTrackTrainMessageTri_init_(&outC->Context_17);
  /* 5 */ RadioTrackTrainMessageTri_init_(&outC->Context_5);
  /* 4 */ RadioTrackTrainMessageTri_init_(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_init_(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_init_(&outC->Context_2);
  /* 1 */ RadioTrackTrainMessageTri_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void UtrechtAmsterdamScenarioS_reset(outC_UtrechtAmsterdamScenarioS_ *outC)
{
  /* 15 */ RadioTrackTrainMessageTri_reset(&outC->Context_15);
  /* 14 */ RadioTrackTrainMessageTri_reset(&outC->Context_14);
  /* 13 */ RadioTrackTrainMessageTri_reset(&outC->Context_13);
  /* 12 */ RadioTrackTrainMessageTri_reset(&outC->Context_12);
  /* 11 */ RadioTrackTrainMessageTri_reset(&outC->Context_11);
  /* 6 */ RadioTrackTrainMessageTri_reset(&outC->Context_6);
  /* 17 */ RadioTrackTrainMessageTri_reset(&outC->Context_17);
  /* 5 */ RadioTrackTrainMessageTri_reset(&outC->Context_5);
  /* 4 */ RadioTrackTrainMessageTri_reset(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_reset(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_reset(&outC->Context_2);
  /* 1 */ RadioTrackTrainMessageTri_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer */
void UtrechtAmsterdamScenarioS_RBC_S(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inRBCTime */ T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioS_ *outC)
{
  /* 1 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    354,
    270.3,
    280.3,
    354002753,
    0.0,
    &outC->Context_1);
  /* 2 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_1.outTriggerId,
    inRBCTime,
    351,
    49.9,
    59.9,
    351000549,
    0.0,
    &outC->Context_2);
  /* 3 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    355,
    84.4,
    94.4,
    355000894,
    0.0,
    &outC->Context_3);
  /* 4 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_3.outTriggerId,
    inRBCTime,
    356,
    43.5,
    53.5,
    356000485,
    0.0,
    &outC->Context_4);
  /* 5 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_4.outTriggerId,
    inRBCTime,
    358,
    118.1,
    128.1,
    358001231,
    0.0,
    &outC->Context_5);
  /* 17 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_5.outTriggerId,
    inRBCTime,
    360,
    244.2,
    254.2,
    360002492,
    0.0,
    &outC->Context_17);
  /* 6 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_17.outTriggerId,
    inRBCTime,
    362,
    119.9,
    129.9,
    362001249,
    0.0,
    &outC->Context_6);
  /* 11 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_6.outTriggerId,
    inRBCTime,
    362,
    228.1,
    233.1,
    362002306,
    0.0,
    &outC->Context_11);
  /* 12 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_11.outTriggerId,
    inRBCTime,
    362,
    236.4,
    241.4,
    362002389,
    0.0,
    &outC->Context_12);
  /* 13 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_12.outTriggerId,
    inRBCTime,
    364,
    86.1,
    96.1,
    364000911,
    0.0,
    &outC->Context_13);
  /* 14 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_13.outTriggerId,
    inRBCTime,
    369,
    226.3,
    237.3,
    369002313,
    0.0,
    &outC->Context_14);
  /* 15 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_14.outTriggerId,
    inRBCTime,
    341,
    129.4,
    139.4,
    341001344,
    0.0,
    &outC->Context_15);
  outC->outTriggerId = outC->Context_15.outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** UtrechtAmsterdamScenarioS_RBC_S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

