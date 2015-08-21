/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_OutputWrapper_SDM_OutputWrapper.h"

/* SDM_OutputWrapper::SDM_OutputWrapper */
void SDM_OutputWrapper_SDM_OutputWrapper(
  /* SDM_OutputWrapper::SDM_OutputWrapper::in_sdmCmd */SDM_Commands_real_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_OutputWrapper::SDM_OutputWrapper::targetSpeedReachedIn */kcg_bool targetSpeedReachedIn,
  /* SDM_OutputWrapper::SDM_OutputWrapper::eoaOverpassedIn */kcg_bool eoaOverpassedIn,
  /* SDM_OutputWrapper::SDM_OutputWrapper::limits_locations */SDM_Locations_T_SDM_Types_Pkg *limits_locations,
  /* SDM_OutputWrapper::SDM_OutputWrapper::in_target */Target_real_T_TargetManagement_types *in_target,
  /* SDM_OutputWrapper::SDM_OutputWrapper::inbrakeCmd */Brake_command_T_TIU_Types_Pkg *inbrakeCmd,
  /* SDM_OutputWrapper::SDM_OutputWrapper::sdmToDMI */speedSupervisionForDMI_T_DMI_Types_Pkg *sdmToDMI,
  /* SDM_OutputWrapper::SDM_OutputWrapper::out_target */Target_T_TargetManagement_types *out_target,
  /* SDM_OutputWrapper::SDM_OutputWrapper::sdmCommands */SDM_Commands_T_SDM_Types_Pkg *sdmCommands,
  /* SDM_OutputWrapper::SDM_OutputWrapper::brakeCmd */Brake_command_T_TIU_Types_Pkg *brakeCmd,
  /* SDM_OutputWrapper::SDM_OutputWrapper::EOA_overpassed */kcg_bool *EOA_overpassed,
  /* SDM_OutputWrapper::SDM_OutputWrapper::Target_Speed_Reached */kcg_bool *Target_Speed_Reached)
{
  /* SDM_OutputWrapper::SDM_OutputWrapper::_L12 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L12;
  
  (*out_target).valid = (*in_target).targetType !=
    invalid_TargetManagement_types;
  (*sdmCommands).valid = (*in_sdmCmd).valid;
  (*sdmCommands).valid_v_est = (*in_sdmCmd).valid_v_est;
  (*sdmCommands).valid_v_permitted = (*in_sdmCmd).valid_v_permitted;
  (*sdmCommands).valid_v_release = (*in_sdmCmd).valid_v_release;
  (*sdmCommands).valid_v_mrdt = (*in_sdmCmd).valid_v_mrdt;
  (*sdmCommands).valid_v_sbi = (*in_sdmCmd).valid_v_sbi;
  (*sdmCommands).valid_targetDistance = (*in_sdmCmd).valid_targetDistance;
  (*sdmCommands).supervisionStatus = (*in_sdmCmd).supervisionStatus;
  (*sdmCommands).sdmType = (*in_sdmCmd).sdmType;
  (*sdmCommands).revokedSupervisionStatus =
    (*in_sdmCmd).revokedSupervisionStatus;
  (*sdmCommands).triggeredSupervisionStatus =
    (*in_sdmCmd).triggeredSupervisionStatus;
  (*sdmCommands).revokedSB = (*in_sdmCmd).revokedSB;
  (*sdmCommands).triggeredSB = (*in_sdmCmd).triggeredSB;
  (*sdmCommands).revokedEB = (*in_sdmCmd).revokedEB;
  (*sdmCommands).triggeredEB = (*in_sdmCmd).triggeredEB;
  (*sdmCommands).revokedTCO = (*in_sdmCmd).revokedTCO;
  (*sdmCommands).triggeredTCO = (*in_sdmCmd).triggeredTCO;
  (*sdmCommands).ebCmd = (*in_sdmCmd).ebCmd;
  *Target_Speed_Reached = targetSpeedReachedIn;
  *EOA_overpassed = eoaOverpassedIn;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(brakeCmd, inbrakeCmd);
  /* 1 */
  CalcDMI_output_SDM_OutputWrapper(in_sdmCmd, limits_locations, sdmToDMI);
  (*sdmCommands).estimatedSpeed = /* 2 */
    TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).estimatedSpeed);
  (*sdmCommands).permittedSpeed = /* 3 */
    TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).permittedSpeed);
  (*sdmCommands).releaseSpeed = /* 4 */
    TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).releaseSpeed);
  (*sdmCommands).mrdtSpeed = /* 5 */
    TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).mrdtSpeed);
  (*sdmCommands).sbiSpeed = /* 6 */
    TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).sbiSpeed);
  (*sdmCommands).targetDistance = /* 2 */
    TransformL_realToL_int_SDM_Types_Pkg((*in_sdmCmd).targetDistance);
  _L12 = /* 1 */ TransformV_realToV_int_SDM_Types_Pkg((*in_target).speed);
  (*out_target).speed = _L12;
  if ((_L12 > 0) & (EoA_TargetManagement_types == (*in_target).targetType)) {
    (*out_target).targetType = LoA_TargetManagement_types;
  }
  else {
    (*out_target).targetType = (*in_target).targetType;
  }
  (*out_target).distance = /* 1 */
    TransformL_realToL_int_SDM_Types_Pkg((*in_target).distance);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SDM_OutputWrapper_SDM_OutputWrapper.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

