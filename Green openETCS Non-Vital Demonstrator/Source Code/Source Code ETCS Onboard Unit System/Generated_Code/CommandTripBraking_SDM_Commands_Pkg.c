/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CommandTripBraking_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CommandTripBraking */
EB_command_T_SDM_Commands_Pkg CommandTripBraking_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CommandTripBraking::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CommandTripBraking::mrdt */Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CommandTripBraking::q_level */MA_Level_t_TrackAtlasTypes q_level)
{
  static L_internal_real_Type_SDM_Types_Pkg tmp;
  /* SDM_Commands_Pkg::CommandTripBraking::eb */
  static EB_command_T_SDM_Commands_Pkg eb;
  
  switch (q_level) {
    case MA_L1_TrackAtlasTypes :
      tmp = (*trainLocations).d_antenna2frontend;
      break;
    
    default :
      tmp = 0.0;
  }
  eb = (*trainLocations).trainPositionIsValid &
    ((*trainLocations).d_minSafeFrontEndPos - tmp > (*mrdt).distance) &
    ((EoA_TargetManagement_types == (*mrdt).targetType) | ((*mrdt).targetType ==
        SvL_TargetManagement_types));
  return eb;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CommandTripBraking_SDM_Commands_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

