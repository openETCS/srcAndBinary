/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void SpeedSupervision_Integration_init_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  outC->EOA_overpassed = kcg_true;
  outC->Target_Speed_Reached = kcg_true;
  outC->brakeCmd.valid = kcg_true;
  outC->brakeCmd.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
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
  outC->sdmCommands.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCommands.sdmType = CSM_SDM_Types_Pkg;
  outC->sdmCommands.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCommands.triggeredSupervisionStatus =
    Normal_Supervision_SDM_Types_Pkg;
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
  outC->sdmToDMI.location_brake_curve_starting_point = 0;
  outC->sdmToDMI.interventionSpeed = 0;
  outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->sdmToDMI.distanceIndicationPoint = 0;
  /* 1 */ ProbeSDM_init_EnvSim(&outC->_4_Context_1);
  /* 1 */ SDM_Commands_init_SDM_Commands_Pkg(&outC->_3_Context_1);
  /* 1 */
  CalcBrakingCurves_integration_init_CalcBrakingCurves_Pkg(&outC->_2_Context_1);
  /* 1 */ AGradient_init_SDM_GradientAcceleration_Pkg(&outC->_1_Context_1);
  /* 2 */ TargetManagement_init_TargetManagement_pkg(&outC->Context_2);
  /* 1 */ SDM_InputWrapper_init_SDM_Input_Wrappers(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  /* 1 */ ProbeSDM_reset_EnvSim(&outC->_4_Context_1);
  /* 1 */ SDM_Commands_reset_SDM_Commands_Pkg(&outC->_3_Context_1);
  /* 1 */
  CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
    &outC->_2_Context_1);
  /* 1 */ AGradient_reset_SDM_GradientAcceleration_Pkg(&outC->_1_Context_1);
  /* 2 */ TargetManagement_reset_TargetManagement_pkg(&outC->Context_2);
  /* 1 */ SDM_InputWrapper_reset_SDM_Input_Wrappers(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */
void SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::TrainPosition */ trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::dataFromTrackAtlas */ DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Service_brake_requested_by_modes_and_levels */ kcg_bool Service_brake_requested_by_modes_and_levels,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Emergency_brake_requested_by_modes_and_levels */ kcg_bool Emergency_brake_requested_by_modes_and_levels,
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */ ASafe_T_CalcBrakingCurves_types tmp1;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */ ASafe_T_CalcBrakingCurves_types tmp;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::targetCollection */ TargetCollection_T_TargetManagement_types targetCollection;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Trainlocations_internal */ TrainLocations_real_T_SDM_Types_Pkg Trainlocations_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MRSP_internal */ MRSP_internal_T_TargetManagement_types MRSP_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MA_internal */ MA_section_real_T_TargetManagement_types MA_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainData_extras */ trainData_internal_t_SDM_Types_Pkg trainData_extras;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::T_b */ t_Brake_t_SDMModelPkg T_b;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::CurveCollection */ CurveCollection_T_CalcBrakingCurves_types CurveCollection;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L114 */ kcg_bool _L114;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L112 */ SDM_Locations_T_SDM_Types_Pkg _L112;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L111 */ Speeds_T_SDM_Types_Pkg _L111;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L187 */ ASafe_T_CalcBrakingCurves_types _L187;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L190 */ A_gradient_t_SDM_GradientAcceleration_types _L190;
  
  trainData_extras.isSB_CmdAvailable = kcg_true;
  trainData_extras.isTCOAvailable = kcg_true;
  trainData_extras.T_traction_cut_off = 800;
  /* 1 */
  SDM_InputWrapper_SDM_Input_Wrappers(
    TrainPosition,
    trainProps,
    dataFromTrackAtlas,
    &outC->Context_1);
  trainData_extras.offsetAntennaL1 = outC->Context_1.offsetAntennaL1;
  kcg_copy_MRSP_internal_T_TargetManagement_types(
    &MRSP_internal,
    &outC->Context_1.mrsp_out);
  kcg_copy_MA_section_real_T_TargetManagement_types(
    &MA_internal,
    &outC->Context_1.ma_out);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(
    &Trainlocations_internal,
    &outC->Context_1.trainLocations);
  /* 2 */
  TargetManagement_TargetManagement_pkg(
    &MRSP_internal,
    outC->Context_1.mrsp_update_out,
    &MA_internal,
    outC->Context_1.ma_update_out,
    &Trainlocations_internal,
    &outC->Context_2);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &targetCollection,
    &outC->Context_2.targetCollection);
  /* 1 */
  ABrakeFactory_SDMModelPkg(trainData, NationalValues, &T_b, &tmp, &_L187);
  /* 1 */
  AGradient_SDM_GradientAcceleration_Pkg(
    &Trainlocations_internal,
    &outC->Context_1.gp_out,
    outC->Context_1.gp_update_out,
    trainData,
    &targetCollection,
    &outC->_1_Context_1);
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(
    &_L190,
    &outC->_1_Context_1.A_gradient);
  /* 3 */ addGradient_SDMModelPkg(&tmp, &_L190, &tmp1);
  /* 1 */ addGradient_SDMModelPkg(&_L187, &_L190, &tmp);
  /* 1 */
  CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
    &Trainlocations_internal,
    &targetCollection,
    &tmp1,
    &tmp,
    &outC->_2_Context_1);
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(
    &CurveCollection,
    &outC->_2_Context_1.curveCollection);
  switch ((*NationalValues).q_nvsbfbperm) {
    case Q_NVSBFBPERM_Yes :
      trainData_extras.isSB_FBAvailable = kcg_true;
      break;
    
    default :
      trainData_extras.isSB_FBAvailable = kcg_false;
  }
  /* 4 */
  SDMLimitLocations_TargetLimits_Pkg(
    &MRSP_internal,
    odometry,
    &Trainlocations_internal,
    &targetCollection,
    &CurveCollection,
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
    Service_brake_requested_by_modes_and_levels,
    (kcg_bool)
      (Emergency_brake_requested_by_modes_and_levels | /* 1 */
        SimpleValidityCheck_SDM_Input_Wrappers(
          NationalValues,
          odometry,
          TrainPosition,
          trainData,
          dataFromTrackAtlas)),
    NationalValues,
    &trainData_extras,
    &outC->_3_Context_1);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->sdmToDMI,
    &outC->_3_Context_1.sdmToDMI);
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(
    &outC->sdmCommands,
    &outC->_3_Context_1.sdmCmd);
  outC->Target_Speed_Reached = outC->_3_Context_1.targetSpeedReached;
  outC->EOA_overpassed = outC->_3_Context_1.eoaOverpassed;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->brakeCmd,
    &outC->_3_Context_1.brakeCmd);
  /* 1 */
  ProbeSDM_EnvSim(
    &targetCollection,
    &CurveCollection,
    &outC->target,
    &outC->_4_Context_1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

