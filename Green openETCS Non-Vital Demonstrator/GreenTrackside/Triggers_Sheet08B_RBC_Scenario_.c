/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet08B_RBC_Scenario_.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet08B_init_RBC_Scen(outC_Triggers_Sheet08B_RBC_Scen *outC)
{
  outC->outTriggerId = 0;
  /* 6 */ RadioTrackTrainMessageTri_init_(&outC->Context_6);
  /* 5 */ RadioTrackTrainMessageTri_init_(&outC->Context_5);
  /* 4 */ RadioTrackTrainMessageTri_init_(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_init_(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet08B_reset_RBC_Sce(outC_Triggers_Sheet08B_RBC_Scen *outC)
{
  /* 6 */ RadioTrackTrainMessageTri_reset(&outC->Context_6);
  /* 5 */ RadioTrackTrainMessageTri_reset(&outC->Context_5);
  /* 4 */ RadioTrackTrainMessageTri_reset(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_reset(&outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::Triggers_Sheet08B */
void Triggers_Sheet08B_RBC_Scenario_(
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet08B_RBC_Scen *outC)
{
  /* 3 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    380,
    186.8,
    196.8,
    380001918,
    0.0,
    &outC->Context_3);
  /* 4 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_3.outTriggerId,
    inRBCTime,
    383,
    100.4,
    110.4,
    383001054,
    0.0,
    &outC->Context_4);
  /* 5 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_4.outTriggerId,
    inRBCTime,
    385,
    96.1,
    106.1,
    385001011,
    0.0,
    &outC->Context_5);
  /* 6 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_5.outTriggerId,
    inRBCTime,
    387,
    297.7,
    307.7,
    387003027,
    0.0,
    &outC->Context_6);
  outC->outTriggerId = outC->Context_6.outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet08B_RBC_Scenario_.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

