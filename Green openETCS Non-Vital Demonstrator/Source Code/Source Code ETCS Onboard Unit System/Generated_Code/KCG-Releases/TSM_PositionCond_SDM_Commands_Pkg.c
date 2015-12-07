/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TSM_PositionCond_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::TSM_PositionCond */
void TSM_PositionCond_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::TSM_PositionCond::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::TSM_PositionCond::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::TSM_PositionCond::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::TSM_PositionCond::triggerConds */ TSM_triggerCond_T_SDM_Commands_Pkg *triggerConds)
{
  /* SDM_Commands_Pkg::TSM_PositionCond::FLOI_eq_SBI2 */
  static kcg_bool FLOI_eq_SBI2;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L59 */
  static kcg_bool _L59;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L62 */
  static kcg_bool _L62;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L73 */
  static kcg_bool _L73;
  
  (*triggerConds).t14 = kcg_true;
  FLOI_eq_SBI2 = !floiIsSB1;
  (*triggerConds).t6 = (FLOI_eq_SBI2 &
      ((*trainLocations).maxSafeFrontEndPostion > (*locations).d_I_of_V_MRSP) &
      ((*trainLocations).maxSafeFrontEndPostion <= (*locations).d_W_of_V_est)) |
    (((*locations).d_I_of_V_MRSP <
        (*trainLocations).estimatedFrontEndPosition) &
      ((*locations).d_W_of_V_est >=
        (*trainLocations).estimatedFrontEndPosition) & floiIsSB1);
  (*triggerConds).t7 = (floiIsSB1 &
      ((*trainLocations).estimatedFrontEndPosition >
        (*locations).d_W_of_V_est)) | (((*locations).d_W_of_V_est <
        (*trainLocations).maxSafeFrontEndPostion) & FLOI_eq_SBI2);
  _L73 = (*trainLocations).maxSafeFrontEndPostion <= (*locations).d_I_of_V_est;
  _L62 = (*locations).d_I_of_V_est >=
    (*trainLocations).estimatedFrontEndPosition;
  _L59 = (FLOI_eq_SBI2 & _L73) | (_L62 & floiIsSB1);
  (*triggerConds).t5 = _L59;
  (*triggerConds).t8 = (*triggerConds).t5;
  (*triggerConds).t1 = kcg_true;
  (*triggerConds).t2 = _L59;
  (*triggerConds).t3 = (FLOI_eq_SBI2 & !_L73) | (!_L62 & floiIsSB1);
  (*triggerConds).t4 = (floiIsSB1 &
      ((*trainLocations).estimatedFrontEndPosition >
        (*locations).d_P_of_V_est)) | (((*locations).d_P_of_V_est <
        (*trainLocations).maxSafeFrontEndPostion) & FLOI_eq_SBI2);
  _L59 = (*trainLocations).maxSafeFrontEndPostion <=
    (*locations).d_FLOI_of_V_est;
  _L62 = (*locations).d_FLOI_of_V_est >=
    (*trainLocations).estimatedFrontEndPosition;
  (*triggerConds).t9 = (FLOI_eq_SBI2 &
      ((*trainLocations).maxSafeFrontEndPostion > (*locations).d_I_of_V_MRSP) &
      _L59) | (((*locations).d_I_of_V_MRSP <
        (*trainLocations).estimatedFrontEndPosition) & _L62 & floiIsSB1);
  (*triggerConds).t10 = (FLOI_eq_SBI2 & !_L59) | (!_L62 & floiIsSB1);
  _L73 = (*trainLocations).maxSafeFrontEndPostion <= (*locations).d_I_of_V_MRSP;
  (*triggerConds).t11 = _L73;
  _L59 = (*trainLocations).maxSafeFrontEndPostion <=
    (*locations).d_EBI_of_V_est;
  (*triggerConds).t12 = !_L73 & _L59;
  (*triggerConds).t13 = !_L59;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TSM_PositionCond_SDM_Commands_Pkg.c
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

