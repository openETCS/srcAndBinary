/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcModeTransOutput_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcModeTransOutput */
void CalcModeTransOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcModeTransOutput::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcModeTransOutput::eoaOverpassed */ kcg_bool *eoaOverpassed,
  /* SDM_Commands_Pkg::CalcModeTransOutput::targetSpeedReached */ kcg_bool *targetSpeedReached)
{
  *eoaOverpassed = (*locations).d_eoa <= (*trainLocations).d_est_frontendPos -
    (*trainLocations).d_cond_L1_antenna2frontend;
  *targetSpeedReached = (*speeds).V_est <= (*speeds).V_target;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcModeTransOutput_SDM_Commands_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

