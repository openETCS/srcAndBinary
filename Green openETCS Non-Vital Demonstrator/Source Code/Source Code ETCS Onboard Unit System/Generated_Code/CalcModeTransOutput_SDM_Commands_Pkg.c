/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcModeTransOutput_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcModeTransOutput */
void CalcModeTransOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcModeTransOutput::q_level */MA_Level_t_TrackAtlasTypes q_level,
  /* SDM_Commands_Pkg::CalcModeTransOutput::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcModeTransOutput::eoaOverpassed */kcg_bool *eoaOverpassed,
  /* SDM_Commands_Pkg::CalcModeTransOutput::targetSpeedReached */kcg_bool *targetSpeedReached)
{
  static L_internal_real_Type_SDM_Types_Pkg tmp;
  
  *targetSpeedReached = (*speeds).V_est <= (*speeds).V_target;
  switch (q_level) {
    case MA_L1_TrackAtlasTypes :
      tmp = (*trainLocations).d_antenna2frontend;
      break;
    
    default :
      tmp = 0.0;
  }
  *eoaOverpassed = (*locations).d_eoa <= (*trainLocations).d_est_frontendPos -
    tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcModeTransOutput_SDM_Commands_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

