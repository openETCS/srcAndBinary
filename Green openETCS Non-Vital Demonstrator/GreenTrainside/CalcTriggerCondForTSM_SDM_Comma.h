/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */
#ifndef _CalcTriggerCondForTSM_SDM_Comm
#define _CalcTriggerCondForTSM_SDM_Comm

#include "kcg_types.h"
#include "TSM_EstSpeedCond_EOA_SvL_SDM_Co.h"
#include "TSM_EstSpeedCond_MRSP_LOA_SDM_C.h"
#include "TSM_PositionCond_SDM_Commands_P.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Commands_Pkg::CalcTriggerCondForTSM */
extern void CalcTriggerCondForTSM_SDM_Comma(
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::triggerConds */ TSM_triggerCond_T_SDM_Commands_ *triggerConds);

#endif /* _CalcTriggerCondForTSM_SDM_Comm */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcTriggerCondForTSM_SDM_Comma.h
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */

