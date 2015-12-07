/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CommandTripBraking_SDM_Commands.h"

/* SDM_Commands_Pkg::CommandTripBraking */
EB_command_T_SDM_Commands_Pkg CommandTripBraking_SDM_Commands(
  /* SDM_Commands_Pkg::CommandTripBraking::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CommandTripBraking::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CommandTripBraking::TrainData_int */ trainData_internal_t_SDM_Types_ *TrainData_int)
{
  /* SDM_Commands_Pkg::CommandTripBraking::_L44 */
  static L_internal_Type_Obu_BasicTypes_ _L44;
  /* SDM_Commands_Pkg::CommandTripBraking::eb */
  static EB_command_T_SDM_Commands_Pkg eb;
  
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
** CommandTripBraking_SDM_Commands.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

