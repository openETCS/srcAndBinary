/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckLevelExceptions_Informatio.h"

/* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions */
void CheckLevelExceptions_Informatio(
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inAction */ LevelDecisionTableActionKind_Da inAction,
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
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e01m */
  static kcg_bool e01m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e01b */
  static kcg_bool e01b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e02m */
  static kcg_bool e02m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e02b */
  static kcg_bool e02b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e03m */
  static kcg_bool e03m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e03b */
  static kcg_bool e03b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e05m */
  static kcg_bool e05m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e05b */
  static kcg_bool e05b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e06m */
  static kcg_bool e06m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e06b */
  static kcg_bool e06b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e07m */
  static kcg_bool e07m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e07b */
  static kcg_bool e07b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e09m */
  static kcg_bool e09m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e09b */
  static kcg_bool e09b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e11m */
  static kcg_bool e11m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e11b */
  static kcg_bool e11b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e12m */
  static kcg_bool e12m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e12b */
  static kcg_bool e12b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e04b */
  static kcg_bool e04b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e04m */
  static kcg_bool e04m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e13m */
  static kcg_bool e13m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e13b */
  static kcg_bool e13b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e0102m */
  static kcg_bool e0102m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e0102b */
  static kcg_bool e0102b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e030405m */
  static kcg_bool e030405m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e030405b */
  static kcg_bool e030405b;
  
  /* 2 */ Exception01StoreOnboardIfPendin(inPendingL1Transition, &e01m, &e01b);
  /* 2 */
  Exception02StoreOnboardIfPendin(inPendingL2L3Transition, &e02m, &e02b);
  /* 2 */
  Exception03RejectIfPendingAckOf(inPendingAckOfTrainData, &e03m, &e03b);
  /* 1 */
  Exception04RejectIfSPPAndGradie(
    inSPPAndGradientOnBoard,
    MACoverNotFullLength,
    &e04m,
    &e04b);
  /* 2 */ Exception05RejectIfEmergencySto(inEmergencyBrakeActive, &e05m, &e05b);
  /* 2 */ Exception06StoreOnboardIfPendin(inPendingNTCTransition, &e06m, &e06b);
  /* 1 */ Exception07RejectIfNoPendingNTC(inPendingNTCTransition, &e07m, &e07b);
  /* 1 */ Exception09RejectIfNoL2L3Transi(kcg_false, &e09m, &e09b);
  /* 1 */
  Exception11RejectIfPendingTrans(
    kcg_false,
    inPendingL1Transition,
    inPendingL2L3Transition,
    &e11m,
    &e11b);
  /* 1 */
  Exception12RejectIfTextMessageA(0, inLastAckTextMessageId, &e12m, &e12b);
  /* 1 */ Exception13RejectIfNotWithImmed(kcg_false, &e13m, &e13b);
  /* 1 */
  Exception0102StoreOnboardIfPend(
    inPendingL1Transition,
    inPendingL2L3Transition,
    &e0102m,
    &e0102b);
  /* 1 */
  Exception030405Reject_Informati(
    inPendingAckOfTrainData,
    inSPPAndGradientOnBoard,
    MACoverNotFullLength,
    inEmergencyBrakeActive,
    &e030405m,
    &e030405b);
  switch (inAction) {
    case LD_030405Reject_DataDictionary_ :
      *outAccept = e030405m;
      *outStoreInTransitionBuffer = e030405b;
      break;
    case LD_0102StoreIfPendingLevelTrans :
      *outAccept = e0102m;
      *outStoreInTransitionBuffer = e0102b;
      break;
    case LD_13RejectIfNotTogetherWithImm :
      *outAccept = e13m;
      *outStoreInTransitionBuffer = e13b;
      break;
    case LD_12RejectIfSameMessageWithDri :
      *outAccept = e12m;
      *outStoreInTransitionBuffer = e12b;
      break;
    case LD_11LevelTransitionOrderInSame :
      *outAccept = e11m;
      *outStoreInTransitionBuffer = e11b;
      break;
    case LD_10ReferredLRBGWithDifferentP :
      *outStoreInTransitionBuffer = kcg_false;
      *outAccept = kcg_false;
      break;
    case LD_09RejectIfNoL2L3TransitionSt :
      *outAccept = e09m;
      *outStoreInTransitionBuffer = e09b;
      break;
    case LD_08InhibitionOfRevocableTSR_D :
      *outStoreInTransitionBuffer = kcg_false;
      *outAccept = kcg_false;
      break;
    case LD_07RejectIfNoPendingNTCTransi :
      *outAccept = e07m;
      *outStoreInTransitionBuffer = e07b;
      break;
    case LD_06StoreIfPendingNTCTransitio :
      *outAccept = e06m;
      *outStoreInTransitionBuffer = e06b;
      break;
    case LD_05RejectIfEmergencyBrakeActi :
      *outAccept = e05m;
      *outStoreInTransitionBuffer = e05b;
      break;
    case LD_04RejectIfSPPAndGradientOnBo :
      *outAccept = e04m;
      *outStoreInTransitionBuffer = e04b;
      break;
    case LD_03RejectIfPendingAckOfTrainD :
      *outAccept = e03m;
      *outStoreInTransitionBuffer = e03b;
      break;
    case LD_02StoreIfPendingL2L3Transiti :
      *outAccept = e02m;
      *outStoreInTransitionBuffer = e02b;
      break;
    case LD_01StoreIfPendingL1Transition :
      *outAccept = e01m;
      *outStoreInTransitionBuffer = e01b;
      break;
    case LD_NotRelevant_DataDictionary_P :
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
** CheckLevelExceptions_Informatio.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

