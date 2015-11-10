/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet07_RBC_Scenario_P.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet07_init_RBC_Scena(outC_Triggers_Sheet07_RBC_Scena *outC)
{
  outC->outTriggerId = 0;
  /* 5 */ RadioTrackTrainMessageTri_init_(&outC->Context_5);
  /* 4 */ RadioTrackTrainMessageTri_init_(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_init_(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_init_(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet07_reset_RBC_Scen(outC_Triggers_Sheet07_RBC_Scena *outC)
{
  /* 5 */ RadioTrackTrainMessageTri_reset(&outC->Context_5);
  /* 4 */ RadioTrackTrainMessageTri_reset(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_reset(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_reset(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::Triggers_Sheet07 */
void Triggers_Sheet07_RBC_Scenario_P(
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet07_RBC_Scena *outC)
{
  /* 2 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    371,
    19.1,
    29.1,
    371000241,
    0.0,
    &outC->Context_2);
  /* 3 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    371,
    100.2,
    110.2,
    371001052,
    0.0,
    &outC->Context_3);
  /* 4 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_3.outTriggerId,
    inRBCTime,
    371,
    158.4,
    168.4,
    371001634,
    0.0,
    &outC->Context_4);
  /* 5 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_4.outTriggerId,
    inRBCTime,
    372,
    54.4,
    64.4,
    372000594,
    0.0,
    &outC->Context_5);
  outC->outTriggerId = outC->Context_5.outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet07_RBC_Scenario_P.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

