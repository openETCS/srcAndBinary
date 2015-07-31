/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _SDM_OutputWrapper_SDM_OutputWrapper_H_
#define _SDM_OutputWrapper_SDM_OutputWrapper_H_

#include "kcg_types.h"
#include "TransformL_realToL_int_SDM_Types_Pkg.h"
#include "TransformV_realToV_int_SDM_Types_Pkg.h"
#include "CalcDMI_output_SDM_OutputWrapper.h"

/* =====================  no input structure  ====================== */


/* SDM_OutputWrapper::SDM_OutputWrapper */
extern void SDM_OutputWrapper_SDM_OutputWrapper(
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
  /* SDM_OutputWrapper::SDM_OutputWrapper::Target_Speed_Reached */kcg_bool *Target_Speed_Reached);

#endif /* _SDM_OutputWrapper_SDM_OutputWrapper_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SDM_OutputWrapper_SDM_OutputWrapper.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

