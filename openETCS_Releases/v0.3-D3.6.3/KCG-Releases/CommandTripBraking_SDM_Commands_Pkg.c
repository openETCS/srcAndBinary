/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CommandTripBraking_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CommandTripBraking */
EB_command_T_SDM_Commands_Pkg CommandTripBraking_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CommandTripBraking::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CommandTripBraking::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CommandTripBraking::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int)
{
  /* SDM_Commands_Pkg::CommandTripBraking::eb */
  static EB_command_T_SDM_Commands_Pkg eb;
  
  eb = !(*trainLocations).trainPositionIsUnknown & (*trainLocations).valid &
    ((*trainLocations).minSafeFrontEndPosition -
      (*TrainData_int).offsetAntennaL1 > (*mrdt).distance) &
    ((EoA_TargetManagement_types == (*mrdt).targetType) | ((*mrdt).targetType ==
        SvL_TargetManagement_types));
  return eb;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CommandTripBraking_SDM_Commands_Pkg.c
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

