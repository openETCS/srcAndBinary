/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */
#ifndef _CalcModeTransOutput_SDM_Commands_Pkg_H_
#define _CalcModeTransOutput_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* SDM_Commands_Pkg::CalcModeTransOutput */
extern void CalcModeTransOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcModeTransOutput::q_level */MA_Level_t_TrackAtlasTypes q_level,
  /* SDM_Commands_Pkg::CalcModeTransOutput::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcModeTransOutput::eoaOverpassed */kcg_bool *eoaOverpassed,
  /* SDM_Commands_Pkg::CalcModeTransOutput::targetSpeedReached */kcg_bool *targetSpeedReached);

#endif /* _CalcModeTransOutput_SDM_Commands_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcModeTransOutput_SDM_Commands_Pkg.h
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */

