/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckModeExceptions_Information.h"

/* InformationFilter_Pkg::CheckModeExceptions */
kcg_bool CheckModeExceptions_Information(
  /* InformationFilter_Pkg::CheckModeExceptions::inAction */ ModeDecisionTableActionKind_Dat inAction)
{
  /* InformationFilter_Pkg::CheckModeExceptions::outAccept */
  static kcg_bool outAccept;
  
  switch (inAction) {
    case MD_Invalid_DataDictionary_Pkg :
      outAccept = kcg_false;
      break;
    case MD_Accept_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_Reject_DataDictionary_Pkg :
      outAccept = kcg_false;
      break;
    case MD_NotRelevant_DataDictionary_P :
      outAccept = kcg_false;
      break;
    case MD_01IfFollowingExitTRMode_Data :
      outAccept = kcg_true;
      break;
    case MD_02IfCabActive_DataDictionary :
      outAccept = kcg_true;
      break;
    case MD_03StoreRBCIDAndPhone_DataDic :
      outAccept = kcg_true;
      break;
    case MD_04IfValidTrainDataStored_Dat :
      outAccept = kcg_true;
      break;
    case MD_05OnlyLevelTransitionAnnounc :
      outAccept = kcg_true;
      break;
    case MD_06RejectIfOverrideActive_Dat :
      outAccept = kcg_true;
      break;
    case MD_07AcceptImmediateAndConditio :
      outAccept = kcg_true;
      break;
    case MD_08NullDistanceRBCTransition_ :
      outAccept = kcg_true;
      break;
    case MD_09MaxSafeFrontWithinSupervis :
      outAccept = kcg_true;
      break;
    case MD_0204Accept_DataDictionary_Pk :
      outAccept = kcg_true;
      break;
    case MD_0105Accept_DataDictionary_Pk :
      outAccept = kcg_true;
      break;
    
  }
  return outAccept;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckModeExceptions_Information.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

