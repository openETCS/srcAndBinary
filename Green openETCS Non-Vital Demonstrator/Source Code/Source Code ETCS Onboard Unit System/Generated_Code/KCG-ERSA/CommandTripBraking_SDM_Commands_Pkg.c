/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CommandTripBraking_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CommandTripBraking */
EB_command_T_SDM_Commands_Pkg CommandTripBraking_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CommandTripBraking::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CommandTripBraking::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CommandTripBraking::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int)
{
  /* SDM_Commands_Pkg::CommandTripBraking::_L44 */ L_internal_Type_Obu_BasicTypes_Pkg _L44;
  /* SDM_Commands_Pkg::CommandTripBraking::eb */ EB_command_T_SDM_Commands_Pkg eb;
  
  /* 1 */ if ((*locations).d_eoa <= (*locations).d_svl) {
    _L44 = (*locations).d_eoa;
  }
  else {
    _L44 = (*locations).d_svl;
  }
  eb = ((*trainLocations).minSafeFrontEndPosition -
      (*TrainData_int).offsetAntennaL1 > _L44) & (_L44 > 0);
  return eb;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CommandTripBraking_SDM_Commands_Pkg.c
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */

