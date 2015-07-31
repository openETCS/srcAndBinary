/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_Commands_SDM_Commands_Pkg.h"

void SDM_Commands_reset_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  /* 1 */ CmdTrainSupervisionStatus_reset_SDM_Commands_Pkg(&outC->Context_1);
}

/* SDM_Commands_Pkg::SDM_Commands */
void SDM_Commands_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::SDM_Commands::allTargets */TargetCollection_T_TargetManagement_types *allTargets,
  /* SDM_Commands_Pkg::SDM_Commands::odometry */Odometry_real_T_SDM_Types_Pkg *odometry,
  /* SDM_Commands_Pkg::SDM_Commands::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::SDM_Commands::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::SDM_Commands::noSupervisedReleaseSpeed */kcg_bool noSupervisedReleaseSpeed,
  /* SDM_Commands_Pkg::SDM_Commands::q_level */MA_Level_t_TrackAtlasTypes q_level,
  /* SDM_Commands_Pkg::SDM_Commands::mrdt */Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::SDM_Commands::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::SDM_Commands::floiIsSB1 */kcg_bool floiIsSB1,
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::SDM_Commands::_L27 */
  static kcg_bool _L27;
  /* SDM_Commands_Pkg::SDM_Commands::_L26 */
  static kcg_bool _L26;
  /* SDM_Commands_Pkg::SDM_Commands::_L25 */
  static kcg_bool _L25;
  /* SDM_Commands_Pkg::SDM_Commands::_L24 */
  static kcg_bool _L24;
  /* SDM_Commands_Pkg::SDM_Commands::_L23 */
  static kcg_bool _L23;
  /* SDM_Commands_Pkg::SDM_Commands::_L22 */
  static kcg_bool _L22;
  /* SDM_Commands_Pkg::SDM_Commands::_L67 */
  static L_internal_real_Type_SDM_Types_Pkg _L67;
  /* SDM_Commands_Pkg::SDM_Commands::_L68 */
  static V_internal_real_Type_SDM_Types_Pkg _L68;
  /* SDM_Commands_Pkg::SDM_Commands::_L69 */
  static V_internal_real_Type_SDM_Types_Pkg _L69;
  /* SDM_Commands_Pkg::SDM_Commands::_L70 */
  static V_internal_real_Type_SDM_Types_Pkg _L70;
  /* SDM_Commands_Pkg::SDM_Commands::_L71 */
  static V_internal_real_Type_SDM_Types_Pkg _L71;
  
  outC->sdmCmd.valid = kcg_true;
  /* CalcModeTransOutput */
  CalcModeTransOutput_SDM_Commands_Pkg(
    q_level,
    trainLocations,
    locations,
    speeds,
    &outC->eoaOverpassed,
    &outC->targetSpeedReached);
  /* 1 */
  CmdTrainSupervisionStatus_SDM_Commands_Pkg(
    (*allTargets).updatedTargetList,
    (*odometry).motionState,
    speeds,
    locations,
    mrdt,
    noSupervisedReleaseSpeed,
    trainLocations,
    q_level,
    floiIsSB1,
    &outC->Context_1);
  outC->sdmCmd.supervisionStatus = outC->Context_1.supVisStatus;
  outC->sdmCmd.sdmType = outC->Context_1.sdmType;
  outC->sdmCmd.revokedSupervisionStatus =
    outC->Context_1.revokedSupervisionStatus;
  outC->sdmCmd.triggeredSupervisionStatus =
    outC->Context_1.triggeredSupervisionStatus;
  outC->sdmCmd.revokedSB = outC->Context_1.revokedSB;
  outC->sdmCmd.triggeredSB = outC->Context_1.triggeredSB;
  outC->sdmCmd.revokedEB = outC->Context_1.revokedEB;
  outC->sdmCmd.triggeredEB = outC->Context_1.triggeredEB;
  outC->sdmCmd.revokedTCO = outC->Context_1.revokedTCO;
  outC->sdmCmd.triggeredTCO = outC->Context_1.triggeredTCO;
  outC->sdmCmd.ebCmd = outC->Context_1.ebCmd;
  /* 1 */
  CalcDriverOutput_SDM_Commands_Pkg(
    outC->Context_1.sdmType,
    outC->Context_1.supVisStatus,
    mrdt,
    speeds,
    locations,
    trainLocations,
    &outC->sdmCmd.estimatedSpeed,
    &_L22,
    &_L71,
    &_L23,
    &_L70,
    &_L25,
    &_L69,
    &_L26,
    &_L68,
    &_L24,
    &_L67,
    &_L27);
  outC->sdmCmd.valid_v_est = _L22;
  outC->sdmCmd.permittedSpeed = _L71;
  outC->sdmCmd.valid_v_permitted = _L23;
  outC->sdmCmd.releaseSpeed = _L70;
  outC->sdmCmd.valid_v_release = _L25;
  outC->sdmCmd.mrdtSpeed = _L69;
  outC->sdmCmd.valid_v_mrdt = _L26;
  outC->sdmCmd.sbiSpeed = _L68;
  outC->sdmCmd.valid_v_sbi = _L24;
  outC->sdmCmd.targetDistance = _L67;
  outC->sdmCmd.valid_targetDistance = _L27;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SDM_Commands_SDM_Commands_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

