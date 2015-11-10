/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet14_RBC_Scenario_P.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet14_init_RBC_Scena(outC_Triggers_Sheet14_RBC_Scena *outC)
{
  outC->outTriggerId = 0;
  /* 4 */ RadioTrackTrainMessageTri_init_(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_init_(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_init_(&outC->Context_2);
  /* 1 */ RadioTrackTrainMessageTri_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet14_reset_RBC_Scen(outC_Triggers_Sheet14_RBC_Scena *outC)
{
  /* 4 */ RadioTrackTrainMessageTri_reset(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_reset(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_reset(&outC->Context_2);
  /* 1 */ RadioTrackTrainMessageTri_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::Triggers_Sheet14 */
void Triggers_Sheet14_RBC_Scenario_P(
  /* RBC_Scenario_Pkg::Triggers_Sheet14::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet14::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet14::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet14::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet14_RBC_Scena *outC)
{
  /* 1 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    427,
    42.5,
    52.5,
    427000475,
    0.0,
    &outC->Context_1);
  /* 2 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_1.outTriggerId,
    inRBCTime,
    428,
    177.0,
    187.0,
    428001820,
    0.0,
    &outC->Context_2);
  /* 3 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    431,
    405.2,
    415.2,
    431004102,
    0.0,
    &outC->Context_3);
  /* 4 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_3.outTriggerId,
    inRBCTime,
    432,
    35.9,
    45.9,
    432000409,
    0.0,
    &outC->Context_4);
  outC->outTriggerId = outC->Context_4.outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet14_RBC_Scenario_P.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

