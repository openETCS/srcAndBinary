/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */
#ifndef _CommandTripBraking_SDM_Commands_Pkg_H_
#define _CommandTripBraking_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Commands_Pkg::CommandTripBraking */
extern EB_command_T_SDM_Commands_Pkg CommandTripBraking_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CommandTripBraking::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CommandTripBraking::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CommandTripBraking::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int);

#endif /* _CommandTripBraking_SDM_Commands_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CommandTripBraking_SDM_Commands_Pkg.h
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */

