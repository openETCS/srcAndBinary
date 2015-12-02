/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "flagsForLevelChange_InformationFilter_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void flagsForLevelChange_init_InformationFilter_Pkg(
  outC_flagsForLevelChange_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
  outC->IF_toML.P12_received = kcg_true;
  outC->IF_toML.P15_received = kcg_true;
  outC->IF_toML.P21_received = kcg_true;
  outC->IF_toML.P27_received = kcg_true;
  outC->outFilterEvents.pendingL1Transition = kcg_true;
  outC->outFilterEvents.pendingL12L3Transition = kcg_true;
  outC->outFilterEvents.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->outFilterEvents.emergencyStopAccepted = kcg_true;
  outC->outFilterEvents.lastAckTextMessageId = 0;
  outC->outFilterEvents.pendingNTCTransition = kcg_true;
  outC->outFilterEvents.SPPAndGradientOnBoard = kcg_true;
  outC->outFilterEvents.MACoverNotFullLength = kcg_true;
  /* 1 */ flagsFromMessages_init_InformationFilter_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void flagsForLevelChange_reset_InformationFilter_Pkg(
  outC_flagsForLevelChange_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ flagsFromMessages_reset_InformationFilter_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::flagsForLevelChange */
void flagsForLevelChange_InformationFilter_Pkg(
  /* InformationFilter_Pkg::flagsForLevelChange::ModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* InformationFilter_Pkg::flagsForLevelChange::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* InformationFilter_Pkg::flagsForLevelChange::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_flagsForLevelChange_InformationFilter_Pkg *outC)
{
  /* InformationFilter_Pkg::flagsForLevelChange::_L161 */ kcg_bool _L161;
  /* InformationFilter_Pkg::flagsForLevelChange::_L167 */ kcg_bool _L167;
  
  _L167 = (*ModeLevel).newLevel | ((*ModeLevel).newMode & ((*ModeLevel).Mode ==
        M_MODE_Trip));
  _L161 = (*actualMessage).valid | _L167;
  /* ck__L161 */ if (_L161) {
    /* 1 */
    flagsFromMessages_InformationFilter_Pkg(
      _L167,
      actualMessage,
      inFilterEvents,
      &outC->Context_1);
    kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
      &outC->IF_toML,
      &outC->Context_1.IF_toML);
    kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
      &outC->outFilterEvents,
      &outC->Context_1.outFilterEvents);
  }
  else if (outC->init) {
    kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
      &outC->IF_toML,
      (T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *)
        &cNoFlagsForML_InformationFilter_Pkg);
    kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
      &outC->outFilterEvents,
      (filterRelatedEvents_T_Common_Types_Pkg *)
        &cEmptyEvents_InformationFilter_Pkg);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** flagsForLevelChange_InformationFilter_Pkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

