/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_Commands_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void SDM_Commands_init_SDM_Commands_(outC_SDM_Commands_SDM_Commands_ *outC)
{
  outC->targetSpeedReached = kcg_true;
  outC->eoaOverpassed = kcg_true;
  outC->brakeCmd.valid = kcg_true;
  outC->brakeCmd.m_servicebrake_cm = brake_signal_command_not_define;
  outC->brakeCmd.m_emergencybrake_cm = brake_signal_command_not_define;
  outC->sdmCmd.valid = kcg_true;
  outC->sdmCmd.estimatedSpeed = 0;
  outC->sdmCmd.valid_v_est = kcg_true;
  outC->sdmCmd.permittedSpeed = 0;
  outC->sdmCmd.valid_v_permitted = kcg_true;
  outC->sdmCmd.releaseSpeed = 0;
  outC->sdmCmd.valid_v_release = kcg_true;
  outC->sdmCmd.mrdtSpeed = 0;
  outC->sdmCmd.valid_v_mrdt = kcg_true;
  outC->sdmCmd.sbiSpeed = 0;
  outC->sdmCmd.valid_v_sbi = kcg_true;
  outC->sdmCmd.targetDistance = 0;
  outC->sdmCmd.valid_targetDistance = kcg_true;
  outC->sdmCmd.supervisionStatus = Normal_Supervision_SDM_Types_Pk;
  outC->sdmCmd.sdmType = CSM_SDM_Types_Pkg;
  outC->sdmCmd.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pk;
  outC->sdmCmd.triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pk;
  outC->sdmCmd.revokedSB = kcg_true;
  outC->sdmCmd.triggeredSB = kcg_true;
  outC->sdmCmd.revokedEB = kcg_true;
  outC->sdmCmd.triggeredEB = kcg_true;
  outC->sdmCmd.revokedTCO = kcg_true;
  outC->sdmCmd.triggeredTCO = kcg_true;
  outC->sdmCmd.ebCmd = kcg_true;
  outC->sdmToDMI.valid = kcg_true;
  outC->sdmToDMI.targetSpeed = 0;
  outC->sdmToDMI.permittedSpeed = 0;
  outC->sdmToDMI.releaseSpeed = 0;
  outC->sdmToDMI.locationBrakeTarget = 0;
  outC->sdmToDMI.location_brake_curve_starting_p = 0;
  outC->sdmToDMI.interventionSpeed = 0;
  outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->sdmToDMI.distanceIndicationPoint = 0;
  /* 1 */ CalcBrakeCmd_init_SDM_Commands_(&outC->_1_Context_1);
  /* 2 */ MergeMLRequests_init_SDM_Comman(&outC->Context_2);
  /* 1 */ CmdTrainSupervisionStatus_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SDM_Commands_reset_SDM_Commands(outC_SDM_Commands_SDM_Commands_ *outC)
{
  /* 1 */ CalcBrakeCmd_reset_SDM_Commands(&outC->_1_Context_1);
  /* 2 */ MergeMLRequests_reset_SDM_Comma(&outC->Context_2);
  /* 1 */ CmdTrainSupervisionStatus_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::SDM_Commands */
void SDM_Commands_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::SDM_Commands::allTargets */ TargetCollection_T_TargetManage *allTargets,
  /* SDM_Commands_Pkg::SDM_Commands::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::SDM_Commands::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::SDM_Commands::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::SDM_Commands::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::SDM_Commands::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::SDM_Commands::MLrequestSB */ kcg_bool MLrequestSB,
  /* SDM_Commands_Pkg::SDM_Commands::MLrequestEB */ kcg_bool MLrequestEB,
  /* SDM_Commands_Pkg::SDM_Commands::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SDM_Commands_Pkg::SDM_Commands::TrainData_int */ trainData_internal_t_SDM_Types_ *TrainData_int,
  outC_SDM_Commands_SDM_Commands_ *outC)
{
  /* SDM_Commands_Pkg::SDM_Commands::_L11 */
  static SupervisionStatus_T_SDM_Types_P _L11;
  /* SDM_Commands_Pkg::SDM_Commands::_L7 */
  static SDM_Types_T_SDM_Types_Pkg _L7;
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
  static L_internal_Type_Obu_BasicTypes_ _L67;
  /* SDM_Commands_Pkg::SDM_Commands::_L68 */
  static V_odometry_Type_Obu_BasicTypes_ _L68;
  /* SDM_Commands_Pkg::SDM_Commands::_L69 */
  static V_odometry_Type_Obu_BasicTypes_ _L69;
  /* SDM_Commands_Pkg::SDM_Commands::_L70 */
  static V_odometry_Type_Obu_BasicTypes_ _L70;
  /* SDM_Commands_Pkg::SDM_Commands::_L71 */
  static V_odometry_Type_Obu_BasicTypes_ _L71;
  
  outC->sdmCmd.valid = kcg_true;
  /* 1 */
  CmdTrainSupervisionStatus_SDM_C(
    (*allTargets).updatedTargetList,
    speeds,
    locations,
    mrdt,
    trainLocations,
    floiIsSB1,
    TrainData_int,
    &outC->Context_1);
  outC->sdmCmd.revokedSupervisionStatus =
    outC->Context_1.revokedSupervisionStatus;
  outC->sdmCmd.triggeredSupervisionStatus =
    outC->Context_1.triggeredSupervisionStatus;
  outC->sdmCmd.revokedEB = outC->Context_1.revokedEB;
  outC->sdmCmd.triggeredEB = outC->Context_1.triggeredEB;
  outC->sdmCmd.revokedTCO = outC->Context_1.revokedTCO;
  outC->sdmCmd.triggeredTCO = outC->Context_1.triggeredTCO;
  outC->sdmCmd.ebCmd = outC->Context_1.ebCmd | MLrequestEB;
  _L11 = outC->Context_1.supVisStatus;
  outC->sdmCmd.supervisionStatus = _L11;
  _L7 = outC->Context_1.sdmType;
  outC->sdmCmd.sdmType = _L7;
  /* 1 */
  CalcDriverOutput_SDM_Commands_P(
    _L7,
    _L11,
    mrdt,
    speeds,
    locations,
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
  /* 2 */
  MergeMLRequests_SDM_Commands_Pk(
    outC->Context_1.revokedSB,
    MLrequestSB,
    outC->Context_1.triggeredSB,
    &outC->Context_2);
  outC->sdmCmd.revokedSB = outC->Context_2.revokedSB;
  outC->sdmCmd.triggeredSB = outC->Context_2.triggeredSB;
  /* CalcModeTransOutput */
  CalcModeTransOutput_SDM_Command(
    trainLocations,
    locations,
    speeds,
    TrainData_int,
    &outC->eoaOverpassed,
    &outC->targetSpeedReached);
  /* 1 */
  CalcDMI_output_SDM_Commands_Pkg(
    &outC->sdmCmd,
    locations,
    trainLocations,
    &outC->sdmToDMI);
  /* 1 */
  CalcBrakeCmd_SDM_Commands_Pkg(
    &outC->sdmCmd,
    speeds,
    NationalValues,
    TrainData_int,
    &outC->_1_Context_1);
  kcg_copy_Brake_command_T_TIU_Ty(
    &outC->brakeCmd,
    &outC->_1_Context_1.brakeCmd);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SDM_Commands_SDM_Commands_Pkg.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

