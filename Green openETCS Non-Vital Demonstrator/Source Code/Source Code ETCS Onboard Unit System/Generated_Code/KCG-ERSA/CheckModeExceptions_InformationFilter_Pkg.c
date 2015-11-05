/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckModeExceptions_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::CheckModeExceptions */
kcg_bool CheckModeExceptions_InformationFilter_Pkg(
  /* InformationFilter_Pkg::CheckModeExceptions::inAction */ ModeDecisionTableActionKind_DataDictionary_Pkg inAction)
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
    case MD_NotRelevant_DataDictionary_Pkg :
      outAccept = kcg_false;
      break;
    case MD_01IfFollowingExitTRMode_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_02IfCabActive_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_03StoreRBCIDAndPhone_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_04IfValidTrainDataStored_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_05OnlyLevelTransitionAnnouncements_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_06RejectIfOverrideActive_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_07AcceptImmediateAndConditionalLevelTransitionOrder_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_08NullDistanceRBCTransition_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_09MaxSafeFrontWithinSupervision_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_0204Accept_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_0105Accept_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    
  }
  return outAccept;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckModeExceptions_InformationFilter_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

