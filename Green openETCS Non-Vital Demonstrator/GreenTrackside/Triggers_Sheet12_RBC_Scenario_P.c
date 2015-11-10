/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet12_RBC_Scenario_P.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet12_init_RBC_Scena(outC_Triggers_Sheet12_RBC_Scena *outC)
{
  outC->outTriggerId = 0;
  /* 4 */ RadioTrackTrainMessageTri_init_(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_init_(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_init_(&outC->Context_2);
  /* 1 */ RadioTrackTrainMessageTri_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet12_reset_RBC_Scen(outC_Triggers_Sheet12_RBC_Scena *outC)
{
  /* 4 */ RadioTrackTrainMessageTri_reset(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_reset(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_reset(&outC->Context_2);
  /* 1 */ RadioTrackTrainMessageTri_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::Triggers_Sheet12 */
void Triggers_Sheet12_RBC_Scenario_P(
  /* RBC_Scenario_Pkg::Triggers_Sheet12::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet12::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet12::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet12::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet12_RBC_Scena *outC)
{
  /* 1 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    417,
    47.4,
    57.4,
    417000524,
    0.0,
    &outC->Context_1);
  /* 2 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_1.outTriggerId,
    inRBCTime,
    418,
    199.0,
    209.0,
    418002040,
    0.0,
    &outC->Context_2);
  /* 3 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    419,
    48.5,
    58.5,
    419000535,
    0.0,
    &outC->Context_3);
  /* 4 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_3.outTriggerId,
    inRBCTime,
    476,
    246.4,
    256.4,
    476002514,
    0.0,
    &outC->Context_4);
  outC->outTriggerId = outC->Context_4.outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet12_RBC_Scenario_P.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

