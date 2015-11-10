/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageTri_RBC_S.h"

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessageTri_init_(outC_RadioTrackTrainMessageTri_ *outC)
{
  outC->valid = kcg_true;
  outC->setReferenceTime = kcg_true;
  outC->init = kcg_true;
  outC->referenceTime = 0;
  outC->outTriggerId = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainMessageTri_reset(outC_RadioTrackTrainMessageTri_ *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger */
void RadioTrackTrainMessageTri_RBC_S(
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inRBCTime */ T_TRAIN inRBCTime,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inLRBGTrigger */ NID_LRBG inLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inMinDistanceToLRBGTrigger */ kcg_real inMinDistanceToLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inMaxDistanceToLRBGTrigger */ kcg_real inMaxDistanceToLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inTriggerIdHidden */ kcg_int inTriggerIdHidden,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inActivatorTimeout */ kcg_real inActivatorTimeout,
  outC_RadioTrackTrainMessageTri_ *outC)
{
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1::then::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock1;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::referenceTime */
  static T_TRAIN last_referenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::setReferenceTime */
  static kcg_bool last_setReferenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::valid */
  static kcg_bool last_valid;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::activatorTimeout */
  static T_TRAIN activatorTimeout;
  
  /* last_init_ck_referenceTime */ if (outC->init) {
    last_valid = kcg_true;
    last_setReferenceTime = kcg_true;
    outC->init = kcg_false;
    last_referenceTime = 0;
  }
  else {
    last_valid = outC->valid;
    last_setReferenceTime = outC->setReferenceTime;
    last_referenceTime = outC->referenceTime;
  }
  IfBlock1_clock = (inLRBG == inLRBGTrigger) & (inMinDistanceToLRBGTrigger >=
      0.0) & (inMaxDistanceToLRBGTrigger >= 0.0) & (inMaxDistanceToLRBGTrigger >
      inMinDistanceToLRBGTrigger) & (inDistanceToLRBG >=
      inMinDistanceToLRBGTrigger) & (inDistanceToLRBG <
      inMaxDistanceToLRBGTrigger) & last_valid;
  activatorTimeout = (kcg_int) inActivatorTimeout;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* ck_IfBlock2 */ if (last_setReferenceTime) {
      outC->referenceTime = inRBCTime;
      outC->setReferenceTime = kcg_false;
    }
    else {
      outC->referenceTime = last_referenceTime;
      outC->setReferenceTime = last_setReferenceTime;
    }
    IfBlock3_clock_IfBlock1 = (activatorTimeout <= 0) | ((activatorTimeout >
          0) & (inRBCTime - outC->referenceTime >= activatorTimeout));
    /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1) {
      outC->valid = kcg_false;
      outC->outTriggerId = inTriggerIdHidden;
    }
    else {
      outC->outTriggerId = inTriggerId;
      outC->valid = last_valid;
    }
  }
  else {
    outC->outTriggerId = inTriggerId;
    outC->valid = last_valid;
    outC->setReferenceTime = last_setReferenceTime;
    outC->referenceTime = last_referenceTime;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageTri_RBC_S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

