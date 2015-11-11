/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _CalcRevokationCondForTSM_SDM_C
#define _CalcRevokationCondForTSM_SDM_C

#include "kcg_types.h"
#include "CalcRevokCondForTSM_EOA_SvL_SDM.h"
#include "CalcRevokCondForTSM_MRSP_LOA_SD.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Commands_Pkg::CalcRevokationCondForTSM */
extern void CalcRevokationCondForTSM_SDM_Co(
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::revokationConds */ TSM_revokeCond_T_SDM_Commands_P *revokationConds);

#endif /* _CalcRevokationCondForTSM_SDM_C */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcRevokationCondForTSM_SDM_Co.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

