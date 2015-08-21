/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h"

void SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  /* 1 */ CalcBrakeCmd_reset_SDM_OutputWrapper(&outC->Context_1);
  /* 1 */ SDM_Commands_reset_SDM_Commands_Pkg(&outC->_1_Context_1);
  /* 1 */
  CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
    &outC->_2_Context_1);
  /* 2 */ TargetManagement_reset_TargetManagement_pkg(&outC->Context_2);
}

/* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */
void SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::TrainPosition */trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::dataFromTrackAtlas */DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Service_brake_requested_by_modes_and_levels */kcg_bool Service_brake_requested_by_modes_and_levels,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Emergency_brake_requested_by_modes_and_levels */kcg_bool Emergency_brake_requested_by_modes_and_levels,
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  static struct__81954 tmp;
  static t_Brake_t_SDMConversionModelPkg tmp1;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::odometry_internal */
  static Odometry_real_T_SDM_Types_Pkg odometry_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Trainlocations_internal */
  static TrainLocations_real_T_SDM_Types_Pkg Trainlocations_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MRSP_internal */
  static MRSP_internal_T_TargetManagement_types MRSP_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L3 */
  static SDM_Commands_real_T_SDM_Types_Pkg _L3;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L55 */
  static MA_section_real_T_TargetManagement_types _L55;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L66 */
  static kcg_bool _L66;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L65 */
  static kcg_bool _L65;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L114 */
  static Speeds_T_SDM_Types_Pkg _L114;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L113 */
  static kcg_bool _L113;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L112 */
  static Target_real_T_TargetManagement_types _L112;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L111 */
  static SDM_Locations_T_SDM_Types_Pkg _L111;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L125 */
  static kcg_bool _L125;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L124 */
  static kcg_bool _L124;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L123 */
  static kcg_bool _L123;
  
  /* 1 */
  SDM_InputWrapper_SDM_Input_Wrappers(
    TrainPosition,
    odometry,
    trainProps,
    dataFromTrackAtlas,
    &MRSP_internal,
    &_L65,
    &_L55,
    &_L66,
    &_L113,
    &odometry_internal,
    &Trainlocations_internal);
  /* 2 */
  TargetManagement_TargetManagement_pkg(
    &MRSP_internal,
    _L65,
    &_L55,
    _L66,
    &Trainlocations_internal,
    &outC->Context_2);
  /* 1 */
  CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
    (ASafe_T_CalcBrakingCurves_types *) &TestcaseA_safe_CalcBrakingCurves_Pkg,
    &Trainlocations_internal,
    &outC->Context_2.targetCollection,
    &outC->_2_Context_1);
  /* 1 */ brakeBuildUp_SDMConversionModelPkg(trainData, NationalValues, &tmp1);
  tmp.isSB_FBAvailable = kcg_false;
  tmp.isSB_CmdAvailable = kcg_false;
  tmp.isTCOAvailable = kcg_false;
  tmp.T_traction_cut_off = 0.0;
  /* 4 */
  SDMLimitLocations_TargetLimits_Pkg(
    &MRSP_internal,
    &odometry_internal,
    &Trainlocations_internal,
    &outC->Context_2.targetCollection,
    &outC->_2_Context_1.curveCollection,
    &_L55,
    &tmp1,
    &tmp,
    NationalValues,
    &_L111,
    &_L112,
    &_L113,
    &_L114);
  /* 1 */
  SDM_Commands_SDM_Commands_Pkg(
    &outC->Context_2.targetCollection,
    &odometry_internal,
    &_L114,
    &_L111,
    kcg_true,
    _L55.level,
    &_L112,
    &Trainlocations_internal,
    _L113,
    &outC->_1_Context_1);
  kcg_copy_SDM_Commands_real_T_SDM_Types_Pkg(&_L3, &outC->_1_Context_1.sdmCmd);
  _L65 = outC->_1_Context_1.targetSpeedReached;
  _L66 = outC->_1_Context_1.eoaOverpassed;
  /* 1 */
  IncorporateAbsenceOfSB_SDM_OutputWrapper(
    &_L3,
    &odometry_internal,
    NationalValues,
    kcg_false,
    &_L113,
    &_L123,
    &_L124,
    &_L125);
  /* 1 */
  CalcBrakeCmd_SDM_OutputWrapper(_L113, _L123, _L124, _L125, &outC->Context_1);
  /* 1 */
  SDM_OutputWrapper_SDM_OutputWrapper(
    &_L3,
    _L65,
    _L66,
    &_L111,
    &_L112,
    &outC->Context_1.brakeCmd,
    &outC->sdmToDMI,
    &outC->target,
    &outC->sdmCommands,
    &outC->brakeCmd,
    &outC->EOA_overpassed,
    &outC->Target_Speed_Reached);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

