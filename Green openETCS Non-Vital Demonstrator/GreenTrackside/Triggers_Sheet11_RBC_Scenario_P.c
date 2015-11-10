/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet11_RBC_Scenario_P.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet11_init_RBC_Scena(outC_Triggers_Sheet11_RBC_Scena *outC)
{
  outC->outTriggerId = 0;
  /* 10 */ RadioTrackTrainMessageTri_init_(&outC->Context_10);
  /* 9 */ RadioTrackTrainMessageTri_init_(&outC->Context_9);
  /* 8 */ RadioTrackTrainMessageTri_init_(&outC->Context_8);
  /* 7 */ RadioTrackTrainMessageTri_init_(&outC->Context_7);
  /* 6 */ RadioTrackTrainMessageTri_init_(&outC->Context_6);
  /* 5 */ RadioTrackTrainMessageTri_init_(&outC->Context_5);
  /* 4 */ RadioTrackTrainMessageTri_init_(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_init_(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_init_(&outC->Context_2);
  /* 1 */ RadioTrackTrainMessageTri_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet11_reset_RBC_Scen(outC_Triggers_Sheet11_RBC_Scena *outC)
{
  /* 10 */ RadioTrackTrainMessageTri_reset(&outC->Context_10);
  /* 9 */ RadioTrackTrainMessageTri_reset(&outC->Context_9);
  /* 8 */ RadioTrackTrainMessageTri_reset(&outC->Context_8);
  /* 7 */ RadioTrackTrainMessageTri_reset(&outC->Context_7);
  /* 6 */ RadioTrackTrainMessageTri_reset(&outC->Context_6);
  /* 5 */ RadioTrackTrainMessageTri_reset(&outC->Context_5);
  /* 4 */ RadioTrackTrainMessageTri_reset(&outC->Context_4);
  /* 3 */ RadioTrackTrainMessageTri_reset(&outC->Context_3);
  /* 2 */ RadioTrackTrainMessageTri_reset(&outC->Context_2);
  /* 1 */ RadioTrackTrainMessageTri_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::Triggers_Sheet11 */
void Triggers_Sheet11_RBC_Scenario_P(
  /* RBC_Scenario_Pkg::Triggers_Sheet11::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet11::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet11::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet11::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet11_RBC_Scena *outC)
{
  /* 1 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    397,
    164.2,
    174.2,
    397001692,
    0.0,
    &outC->Context_1);
  /* 2 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_1.outTriggerId,
    inRBCTime,
    397,
    377.0,
    387.0,
    397003820,
    0.0,
    &outC->Context_2);
  /* 3 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    400,
    101.0,
    111.0,
    400001060,
    0.0,
    &outC->Context_3);
  /* 4 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_3.outTriggerId,
    inRBCTime,
    400,
    366.2,
    376.2,
    400003712,
    0.0,
    &outC->Context_4);
  /* 5 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_4.outTriggerId,
    inRBCTime,
    401,
    177.7,
    187.7,
    401001827,
    0.0,
    &outC->Context_5);
  /* 6 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_5.outTriggerId,
    inRBCTime,
    402,
    58.3,
    68.3,
    402000633,
    0.0,
    &outC->Context_6);
  /* 7 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_6.outTriggerId,
    inRBCTime,
    404,
    179.4,
    189.4,
    404001844,
    0.0,
    &outC->Context_7);
  /* 8 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_7.outTriggerId,
    inRBCTime,
    405,
    37.2,
    47.2,
    405000422,
    0.0,
    &outC->Context_8);
  /* 9 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_8.outTriggerId,
    inRBCTime,
    407,
    162.3,
    172.3,
    407001673,
    0.0,
    &outC->Context_9);
  /* 10 */
  RadioTrackTrainMessageTri_RBC_S(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_9.outTriggerId,
    inRBCTime,
    408,
    45.9,
    55.9,
    408000509,
    0.0,
    &outC->Context_10);
  outC->outTriggerId = outC->Context_10.outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet11_RBC_Scenario_P.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

