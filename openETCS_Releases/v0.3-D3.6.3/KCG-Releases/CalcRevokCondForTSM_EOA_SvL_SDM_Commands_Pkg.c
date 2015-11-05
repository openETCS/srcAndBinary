/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL */
void CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::revokationConds */ TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds)
{
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::FLOI_eq_SBI2 */
  static kcg_bool FLOI_eq_SBI2;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L9 */
  static kcg_bool _L9;
  
  (*revokationConds).r0 = (*speeds).OdoStandStill;
  FLOI_eq_SBI2 = (*speeds).V_est <= (*speeds).V_release;
  (*revokationConds).r1 = FLOI_eq_SBI2;
  _L9 = !FLOI_eq_SBI2 & ((*speeds).V_est <= (*speeds).V_MRSP);
  FLOI_eq_SBI2 = !floiIsSB1;
  (*revokationConds).r2 = _L9 & ((FLOI_eq_SBI2 &
        ((*trainLocations).maxSafeFrontEndPostion <=
          (*locations).d_I_of_V_est)) | (((*locations).d_I_of_V_est >=
          (*trainLocations).estimatedFrontEndPosition) & floiIsSB1));
  (*revokationConds).r3 = _L9 & ((floiIsSB1 &
        ((*trainLocations).estimatedFrontEndPosition <=
          (*locations).d_P_of_V_est)) | (((*locations).d_P_of_V_est >=
          (*trainLocations).maxSafeFrontEndPostion) & FLOI_eq_SBI2));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.c
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

