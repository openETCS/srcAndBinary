/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions */
void CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inAction */ LevelDecisionTableActionKind_DataDictionary_Pkg inAction,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inEmergencyBrakeActive */ kcg_bool inEmergencyBrakeActive,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::MACoverNotFullLength */ kcg_bool MACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outAccept */ kcg_bool *outAccept,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e01m */ kcg_bool e01m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e01b */ kcg_bool e01b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e02m */ kcg_bool e02m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e02b */ kcg_bool e02b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e03m */ kcg_bool e03m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e03b */ kcg_bool e03b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e05m */ kcg_bool e05m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e05b */ kcg_bool e05b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e06m */ kcg_bool e06m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e06b */ kcg_bool e06b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e07m */ kcg_bool e07m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e07b */ kcg_bool e07b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e09m */ kcg_bool e09m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e09b */ kcg_bool e09b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e11m */ kcg_bool e11m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e11b */ kcg_bool e11b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e12m */ kcg_bool e12m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e12b */ kcg_bool e12b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e04b */ kcg_bool e04b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e04m */ kcg_bool e04m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e13m */ kcg_bool e13m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e13b */ kcg_bool e13b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e0102m */ kcg_bool e0102m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e0102b */ kcg_bool e0102b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e030405m */ kcg_bool e030405m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e030405b */ kcg_bool e030405b;
  
  /* 2 */
  Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter(
    inPendingL1Transition,
    &e01m,
    &e01b);
  /* 2 */
  Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter(
    inPendingL2L3Transition,
    &e02m,
    &e02b);
  /* 2 */
  Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter(
    inPendingAckOfTrainData,
    &e03m,
    &e03b);
  /* 1 */
  Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter(
    inSPPAndGradientOnBoard,
    MACoverNotFullLength,
    &e04m,
    &e04b);
  /* 2 */
  Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter(
    inEmergencyBrakeActive,
    &e05m,
    &e05b);
  /* 2 */
  Exception06StoreOnboardIfPendingNTCTransition_InformationFilter_Pkg_FirstFilter(
    inPendingNTCTransition,
    &e06m,
    &e06b);
  /* 1 */
  Exception07RejectIfNoPendingNTCTransition_InformationFilter_Pkg_FirstFilter(
    inPendingNTCTransition,
    &e07m,
    &e07b);
  /* 1 */
  Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter(
    kcg_false,
    &e09m,
    &e09b);
  /* 1 */
  Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter(
    kcg_false,
    inPendingL1Transition,
    inPendingL2L3Transition,
    &e11m,
    &e11b);
  /* 1 */
  Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter(
    0,
    inLastAckTextMessageId,
    &e12m,
    &e12b);
  /* 1 */
  Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter(
    kcg_false,
    &e13m,
    &e13b);
  /* 1 */
  Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter(
    inPendingL1Transition,
    inPendingL2L3Transition,
    &e0102m,
    &e0102b);
  /* 1 */
  Exception030405Reject_InformationFilter_Pkg_FirstFilter(
    inPendingAckOfTrainData,
    inSPPAndGradientOnBoard,
    MACoverNotFullLength,
    inEmergencyBrakeActive,
    &e030405m,
    &e030405b);
  switch (inAction) {
    case LD_030405Reject_DataDictionary_Pkg :
      *outAccept = e030405m;
      *outStoreInTransitionBuffer = e030405b;
      break;
    case LD_0102StoreIfPendingLevelTransition_DataDictionary_Pkg :
      *outAccept = e0102m;
      *outStoreInTransitionBuffer = e0102b;
      break;
    case LD_13RejectIfNotTogetherWithImmediateLevelTransitionOrder_DataDictionary_Pkg :
      *outAccept = e13m;
      *outStoreInTransitionBuffer = e13b;
      break;
    case LD_12RejectIfSameMessageWithDriverAck_DataDictionary_Pkg :
      *outAccept = e12m;
      *outStoreInTransitionBuffer = e12b;
      break;
    case LD_11LevelTransitionOrderInSameMessage_DataDictionary_Pkg :
      *outAccept = e11m;
      *outStoreInTransitionBuffer = e11b;
      break;
    case LD_10ReferredLRBGWithDifferentPreviousLRBG_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = kcg_false;
      *outAccept = kcg_false;
      break;
    case LD_09RejectIfNoL2L3TransitionStored_DataDictionary_Pkg :
      *outAccept = e09m;
      *outStoreInTransitionBuffer = e09b;
      break;
    case LD_08InhibitionOfRevocableTSR_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = kcg_false;
      *outAccept = kcg_false;
      break;
    case LD_07RejectIfNoPendingNTCTransition_DataDictionary_Pkg :
      *outAccept = e07m;
      *outStoreInTransitionBuffer = e07b;
      break;
    case LD_06StoreIfPendingNTCTransition_DataDictionary_Pkg :
      *outAccept = e06m;
      *outStoreInTransitionBuffer = e06b;
      break;
    case LD_05RejectIfEmergencyBrakeActive_DataDictionary_Pkg :
      *outAccept = e05m;
      *outStoreInTransitionBuffer = e05b;
      break;
    case LD_04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_DataDictionary_Pkg :
      *outAccept = e04m;
      *outStoreInTransitionBuffer = e04b;
      break;
    case LD_03RejectIfPendingAckOfTrainData_DataDictionary_Pkg :
      *outAccept = e03m;
      *outStoreInTransitionBuffer = e03b;
      break;
    case LD_02StoreIfPendingL2L3Transition_DataDictionary_Pkg :
      *outAccept = e02m;
      *outStoreInTransitionBuffer = e02b;
      break;
    case LD_01StoreIfPendingL1Transition_DataDictionary_Pkg :
      *outAccept = e01m;
      *outStoreInTransitionBuffer = e01b;
      break;
    case LD_NotRelevant_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = kcg_false;
      *outAccept = kcg_false;
      break;
    case LD_Reject_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = kcg_false;
      *outAccept = kcg_false;
      break;
    case LD_Accept_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = kcg_false;
      *outAccept = kcg_true;
      break;
    case LD_Invalid_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = kcg_false;
      *outAccept = kcg_false;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

