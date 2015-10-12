/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CommandTripBraking_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CommandTripBraking */
EB_command_T_SDM_Commands_Pkg CommandTripBraking_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CommandTripBraking::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CommandTripBraking::mrdt */ Target_T_TargetManagement_types *mrdt)
{
  /* SDM_Commands_Pkg::CommandTripBraking::eb */
  static EB_command_T_SDM_Commands_Pkg eb;
  
  eb = (*trainLocations).trainPositionIsValid & (/* 1 */
      TransformL_realToL_int_SDM_Types_Pkg(
        (*trainLocations).d_minSafeFrontEndPos -
        (*trainLocations).d_cond_L1_antenna2frontend) > (*mrdt).distance) &
    ((EoA_TargetManagement_types == (*mrdt).targetType) | ((*mrdt).targetType ==
        SvL_TargetManagement_types));
  return eb;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CommandTripBraking_SDM_Commands_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

