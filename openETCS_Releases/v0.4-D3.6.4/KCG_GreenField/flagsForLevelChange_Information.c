/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "flagsForLevelChange_Information.h"

#ifndef KCG_USER_DEFINED_INIT
void flagsForLevelChange_init_Inform(outC_flagsForLevelChange_Inform *outC)
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
  /* 1 */ flagsFromMessages_init_Informat(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void flagsForLevelChange_reset_Infor(outC_flagsForLevelChange_Inform *outC)
{
  outC->init = kcg_true;
  /* 1 */ flagsFromMessages_reset_Informa(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::flagsForLevelChange */
void flagsForLevelChange_Information(
  /* InformationFilter_Pkg::flagsForLevelChange::ModeLevel */ T_Mode_Level_Level_And_Mode_Typ *ModeLevel,
  /* InformationFilter_Pkg::flagsForLevelChange::actualMessage */ ReceivedMessage_T_Common_Types_ *actualMessage,
  /* InformationFilter_Pkg::flagsForLevelChange::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  outC_flagsForLevelChange_Inform *outC)
{
  /* InformationFilter_Pkg::flagsForLevelChange::_L161 */
  static kcg_bool _L161;
  /* InformationFilter_Pkg::flagsForLevelChange::_L167 */
  static kcg_bool _L167;
  
  _L167 = (*ModeLevel).newLevel | ((*ModeLevel).newMode & ((*ModeLevel).Mode ==
        M_MODE_Trip));
  _L161 = (*actualMessage).valid | _L167;
  /* ck__L161 */ if (_L161) {
    /* 1 */
    flagsFromMessages_InformationFi(
      _L167,
      actualMessage,
      inFilterEvents,
      &outC->Context_1);
    kcg_copy_T_Data_From_Track_MASS(&outC->IF_toML, &outC->Context_1.IF_toML);
    kcg_copy_filterRelatedEvents_T_(
      &outC->outFilterEvents,
      &outC->Context_1.outFilterEvents);
  }
  else if (outC->init) {
    kcg_copy_T_Data_From_Track_MASS(
      &outC->IF_toML,
      (T_Data_From_Track_MASSPGradient *) &cNoFlagsForML_InformationFilter);
    kcg_copy_filterRelatedEvents_T_(
      &outC->outFilterEvents,
      (filterRelatedEvents_T_Common_Ty *) &cEmptyEvents_InformationFilter_);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** flagsForLevelChange_Information.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

