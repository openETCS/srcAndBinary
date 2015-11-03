/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _CalcRevokCondForTSM_MRSP_LOA_S
#define _CalcRevokCondForTSM_MRSP_LOA_S

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA */
extern void CalcRevokCondForTSM_MRSP_LOA_SD(
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::revokationConds */ TSM_revokeCond_T_SDM_Commands_P *revokationConds);

#endif /* _CalcRevokCondForTSM_MRSP_LOA_S */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcRevokCondForTSM_MRSP_LOA_SD.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

