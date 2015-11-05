/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SpeedSupervision_Integration_Sp.h"

#ifndef KCG_USER_DEFINED_INIT
void SpeedSupervision_Integration_in(outC_SpeedSupervision_Integrati *outC)
{
  outC->EOA_overpassed = kcg_true;
  outC->Target_Speed_Reached = kcg_true;
  outC->brakeCmd.valid = kcg_true;
  outC->brakeCmd.m_servicebrake_cm = brake_signal_command_not_define;
  outC->brakeCmd.m_emergencybrake_cm = brake_signal_command_not_define;
  outC->sdmCommands.valid = kcg_true;
  outC->sdmCommands.estimatedSpeed = 0;
  outC->sdmCommands.valid_v_est = kcg_true;
  outC->sdmCommands.permittedSpeed = 0;
  outC->sdmCommands.valid_v_permitted = kcg_true;
  outC->sdmCommands.releaseSpeed = 0;
  outC->sdmCommands.valid_v_release = kcg_true;
  outC->sdmCommands.mrdtSpeed = 0;
  outC->sdmCommands.valid_v_mrdt = kcg_true;
  outC->sdmCommands.sbiSpeed = 0;
  outC->sdmCommands.valid_v_sbi = kcg_true;
  outC->sdmCommands.targetDistance = 0;
  outC->sdmCommands.valid_targetDistance = kcg_true;
  outC->sdmCommands.supervisionStatus = Normal_Supervision_SDM_Types_Pk;
  outC->sdmCommands.sdmType = CSM_SDM_Types_Pkg;
  outC->sdmCommands.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pk;
  outC->sdmCommands.triggeredSupervisionStatus =
    Normal_Supervision_SDM_Types_Pk;
  outC->sdmCommands.revokedSB = kcg_true;
  outC->sdmCommands.triggeredSB = kcg_true;
  outC->sdmCommands.revokedEB = kcg_true;
  outC->sdmCommands.triggeredEB = kcg_true;
  outC->sdmCommands.revokedTCO = kcg_true;
  outC->sdmCommands.triggeredTCO = kcg_true;
  outC->sdmCommands.ebCmd = kcg_true;
  outC->target.targetType = EoA_TargetManagement_types;
  outC->target.distance = 0;
  outC->target.speed = 0;
  outC->target.valid = kcg_true;
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
  /* 1 */ SDM_Commands_init_SDM_Commands_(&outC->_3_Context_1);
  /* 1 */ CalcBrakingCurves_integration_i(&outC->_2_Context_1);
  /* 1 */ AGradient_init_SDM_GradientAcce(&outC->_1_Context_1);
  /* 2 */ TargetManagement_init_TargetMan(&outC->Context_2);
  /* 1 */ SDM_InputWrapper_init_SDM_Input(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SpeedSupervision_Integration_re(outC_SpeedSupervision_Integrati *outC)
{
  /* 1 */ SDM_Commands_reset_SDM_Commands(&outC->_3_Context_1);
  /* 1 */ CalcBrakingCurves_integration_r(&outC->_2_Context_1);
  /* 1 */ AGradient_reset_SDM_GradientAcc(&outC->_1_Context_1);
  /* 2 */ TargetManagement_reset_TargetMa(&outC->Context_2);
  /* 1 */ SDM_InputWrapper_reset_SDM_Inpu(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */
void SpeedSupervision_Integration_Sp(
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::TrainPosition */ trainPosition_T_TrainPosition_T *TrainPosition,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::dataFromTrackAtlas */ DataForSupervision_nextGen_t_Tr *dataFromTrackAtlas,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Service_brake_requested_by_modes_and_levels */ kcg_bool Service_brake_requested_by_mode,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Emergency_brake_requested_by_modes_and_levels */ kcg_bool Emergency_brake_requested_by_mo,
  outC_SpeedSupervision_Integrati *outC)
{
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */
  static ASafe_T_CalcBrakingCurves_types tmp1;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */
  static ASafe_T_CalcBrakingCurves_types tmp;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::targetCollection */
  static TargetCollection_T_TargetManage targetCollection;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Trainlocations_internal */
  static TrainLocations_real_T_SDM_Types Trainlocations_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MRSP_internal */
  static MRSP_internal_T_TargetManagemen MRSP_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MA_internal */
  static MA_section_real_T_TargetManagem MA_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainData_extras */
  static trainData_internal_t_SDM_Types_ trainData_extras;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::T_b */
  static t_Brake_t_SDMModelPkg T_b;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L114 */
  static kcg_bool _L114;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L112 */
  static SDM_Locations_T_SDM_Types_Pkg _L112;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L111 */
  static Speeds_T_SDM_Types_Pkg _L111;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L187 */
  static ASafe_T_CalcBrakingCurves_types _L187;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L190 */
  static A_gradient_t_SDM_GradientAccele _L190;
  
  trainData_extras.isSB_CmdAvailable = kcg_true;
  trainData_extras.isTCOAvailable = kcg_true;
  trainData_extras.T_traction_cut_off = 800;
  /* 1 */
  SDM_InputWrapper_SDM_Input_Wrap(
    TrainPosition,
    trainProps,
    dataFromTrackAtlas,
    &outC->Context_1);
  trainData_extras.offsetAntennaL1 = outC->Context_1.offsetAntennaL1;
  kcg_copy_MRSP_internal_T_Target(&MRSP_internal, &outC->Context_1.mrsp_out);
  kcg_copy_MA_section_real_T_Targ(&MA_internal, &outC->Context_1.ma_out);
  kcg_copy_TrainLocations_real_T_(
    &Trainlocations_internal,
    &outC->Context_1.trainLocations);
  /* 2 */
  TargetManagement_TargetManageme(
    &MRSP_internal,
    outC->Context_1.mrsp_update_out,
    &MA_internal,
    outC->Context_1.ma_update_out,
    &Trainlocations_internal,
    &outC->Context_2);
  kcg_copy_TargetCollection_T_Tar(
    &targetCollection,
    &outC->Context_2.targetCollection);
  /* 1 */
  ABrakeFactory_SDMModelPkg(trainData, NationalValues, &T_b, &tmp, &_L187);
  /* 1 */
  AGradient_SDM_GradientAccelerat(
    &Trainlocations_internal,
    &outC->Context_1.gp_out,
    outC->Context_1.gp_update_out,
    trainData,
    &targetCollection,
    &outC->_1_Context_1);
  kcg_copy_A_gradient_t_SDM_Gradi(&_L190, &outC->_1_Context_1.A_gradient);
  switch ((*NationalValues).q_nvsbfbperm) {
    case Q_NVSBFBPERM_Yes :
      trainData_extras.isSB_FBAvailable = kcg_true;
      break;
    
    default :
      trainData_extras.isSB_FBAvailable = kcg_false;
  }
  /* 3 */ addGradient_SDMModelPkg(&tmp, &_L190, &tmp1);
  /* 1 */ addGradient_SDMModelPkg(&_L187, &_L190, &tmp);
  /* 1 */
  CalcBrakingCurves_integration_C(
    &Trainlocations_internal,
    &targetCollection,
    &tmp1,
    &tmp,
    &outC->_2_Context_1);
  /* 4 */
  SDMLimitLocations_TargetLimits_(
    &MRSP_internal,
    odometry,
    &Trainlocations_internal,
    &targetCollection,
    &outC->_2_Context_1.curveCollection,
    &MA_internal,
    &T_b,
    NationalValues,
    &trainData_extras,
    &_L111,
    &_L112,
    &outC->target,
    &_L114);
  /* 1 */
  SDM_Commands_SDM_Commands_Pkg(
    &targetCollection,
    TrainPosition,
    &_L111,
    &_L112,
    &outC->target,
    _L114,
    Service_brake_requested_by_mode,
    (kcg_bool)
      (Emergency_brake_requested_by_mo | /* 1 */
        SimpleValidityCheck_SDM_Input_W(
          NationalValues,
          odometry,
          TrainPosition,
          trainData,
          dataFromTrackAtlas)),
    NationalValues,
    &trainData_extras,
    &outC->_3_Context_1);
  kcg_copy_speedSupervisionForDMI(
    &outC->sdmToDMI,
    &outC->_3_Context_1.sdmToDMI);
  kcg_copy_SDM_Commands_T_SDM_Typ(
    &outC->sdmCommands,
    &outC->_3_Context_1.sdmCmd);
  outC->Target_Speed_Reached = outC->_3_Context_1.targetSpeedReached;
  outC->EOA_overpassed = outC->_3_Context_1.eoaOverpassed;
  kcg_copy_Brake_command_T_TIU_Ty(
    &outC->brakeCmd,
    &outC->_3_Context_1.brakeCmd);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SpeedSupervision_Integration_Sp.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

