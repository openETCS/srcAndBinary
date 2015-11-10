/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet09_RBC_Scenario_P.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet09_init_RBC_Scena(outC_Triggers_Sheet09_RBC_Scena *outC)
{
  outC->outTriggerId = 0;
  /* 5 */ RadioTrackTrainMessageTri_init_(&outC->Context_5);
  /* 4 */ RadioTrackTrainMessageTri_init_(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_init_(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_init_(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet09_reset_RBC_Scen(outC_Triggers_Sheet09_RBC_Scena *outC)
{
  /* 5 */ RadioTrackTrainMessageTri_reset(&outC->Context_5);
  /* 4 */ RadioTrackTrainMessageTri_reset(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_reset(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_reset(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::Triggers_Sheet09 */
void Triggers_Sheet09_RBC_Scenario_P(
  /* RBC_Scenario_Pkg::Triggers_Sheet09::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet09::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet09::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet09::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet09_RBC_Scena *outC)
{
  /* 2 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    390,
    62.4,
    72.4,
    390000674,
    0.0,
    &outC->Context_2);
  /* 3 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    391,
    366.4,
    376.4,
    391003714,
    0.0,
    &outC->Context_3);
  /* 4 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_3.outTriggerId,
    inRBCTime,
    393,
    59.8,
    69.8,
    393000648,
    0.0,
    &outC->Context_4);
  /* 5 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_4.outTriggerId,
    inRBCTime,
    396,
    72.7,
    82.7,
    396000777,
    0.0,
    &outC->Context_5);
  outC->outTriggerId = outC->Context_5.outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet09_RBC_Scenario_P.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

