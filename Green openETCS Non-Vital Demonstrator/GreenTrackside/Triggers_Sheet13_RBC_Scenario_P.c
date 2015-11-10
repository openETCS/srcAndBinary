/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet13_RBC_Scenario_P.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet13_init_RBC_Scena(outC_Triggers_Sheet13_RBC_Scena *outC)
{
  outC->outTriggerId = 0;
  /* 3 */ RadioTrackTrainMessageTri_init_(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_init_(&outC->Context_2);
  /* 1 */ RadioTrackTrainMessageTri_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet13_reset_RBC_Scen(outC_Triggers_Sheet13_RBC_Scena *outC)
{
  /* 3 */ RadioTrackTrainMessageTri_reset(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_reset(&outC->Context_2);
  /* 1 */ RadioTrackTrainMessageTri_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::Triggers_Sheet13 */
void Triggers_Sheet13_RBC_Scenario_P(
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet13_RBC_Scena *outC)
{
  /* 1 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    420,
    164.4,
    174.4,
    420001694,
    0.0,
    &outC->Context_1);
  /* 2 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_1.outTriggerId,
    inRBCTime,
    421,
    45.0,
    55.0,
    421000500,
    0.0,
    &outC->Context_2);
  /* 3 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    422,
    187.7,
    197.7,
    422001927,
    0.0,
    &outC->Context_3);
  outC->outTriggerId = outC->Context_3.outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet13_RBC_Scenario_P.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

