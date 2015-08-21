/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */
#ifndef _CalcTriggerCondForTSM_SDM_Commands_Pkg_H_
#define _CalcTriggerCondForTSM_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg.h"
#include "TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg.h"
#include "TSM_PositionCond_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */


/* SDM_Commands_Pkg::CalcTriggerCondForTSM */
extern void CalcTriggerCondForTSM_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::mrdt */Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::floiIsSB1 */kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::triggerConds */TSM_triggerCond_T_SDM_Commands_Pkg *triggerConds);

#endif /* _CalcTriggerCondForTSM_SDM_Commands_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcTriggerCondForTSM_SDM_Commands_Pkg.h
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */

