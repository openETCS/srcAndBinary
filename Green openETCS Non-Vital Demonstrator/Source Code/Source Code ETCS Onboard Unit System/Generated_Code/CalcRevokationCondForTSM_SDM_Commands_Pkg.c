/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokationCondForTSM_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRevokationCondForTSM */
void CalcRevokationCondForTSM_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::mrdt */Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::noSupervisedReleaseSpeed */kcg_bool noSupervisedReleaseSpeed,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::TrainAtStandstill */odoMotionState_T_Obu_BasicTypes_Pkg TrainAtStandstill,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::floiIsSB1 */kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::revokationConds */TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds)
{
  if ((EoA_TargetManagement_types == (*mrdt).targetType) |
    ((*mrdt).targetType == SvL_TargetManagement_types)) {
    /* 1 */
    CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(
      TrainAtStandstill,
      locations,
      speeds,
      noSupervisedReleaseSpeed,
      trainLocations,
      floiIsSB1,
      revokationConds);
  }
  else {
    /* 1 */
    CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg(
      TrainAtStandstill,
      locations,
      speeds,
      trainLocations,
      floiIsSB1,
      revokationConds);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcRevokationCondForTSM_SDM_Commands_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

