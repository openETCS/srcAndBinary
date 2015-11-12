/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:52
*************************************************************$ */
#ifndef _CommandTripBraking_SDM_Command
#define _CommandTripBraking_SDM_Command

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Commands_Pkg::CommandTripBraking */
extern EB_command_T_SDM_Commands_Pkg CommandTripBraking_SDM_Commands(
  /* SDM_Commands_Pkg::CommandTripBraking::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CommandTripBraking::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CommandTripBraking::TrainData_int */ trainData_internal_t_SDM_Types_ *TrainData_int);

#endif /* _CommandTripBraking_SDM_Command */
/* $**************** KCG Version 6.4 (build i21) ****************
** CommandTripBraking_SDM_Commands.h
** Generation date: 2015-11-12T17:51:52
*************************************************************$ */

