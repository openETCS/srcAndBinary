/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:15:59
*************************************************************$ */
#ifndef _CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg_H_
#define _CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL */
extern void CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::revokationConds */ TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds);

#endif /* _CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.h
** Generation date: 2015-12-10T15:15:59
*************************************************************$ */

