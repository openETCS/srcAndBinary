/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _CalcModeTransOutput_SDM_Comman
#define _CalcModeTransOutput_SDM_Comman

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Commands_Pkg::CalcModeTransOutput */
extern void CalcModeTransOutput_SDM_Command(
  /* SDM_Commands_Pkg::CalcModeTransOutput::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcModeTransOutput::TrainData_int */ trainData_internal_t_SDM_Types_ *TrainData_int,
  /* SDM_Commands_Pkg::CalcModeTransOutput::eoaOverpassed */ kcg_bool *eoaOverpassed,
  /* SDM_Commands_Pkg::CalcModeTransOutput::targetSpeedReached */ kcg_bool *targetSpeedReached);

#endif /* _CalcModeTransOutput_SDM_Comman */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcModeTransOutput_SDM_Command.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

