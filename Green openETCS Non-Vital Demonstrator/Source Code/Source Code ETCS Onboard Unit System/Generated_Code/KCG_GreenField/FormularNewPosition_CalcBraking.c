/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FormularNewPosition_CalcBraking.h"

/* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition */
L_internal_real_Type_SDM_Types_ FormularNewPosition_CalcBraking(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inBeginDistance */ L_internal_real_Type_SDM_Types_ inBeginDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inEndSpeed */ V_internal_real_Type_SDM_Types_ inEndSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inBeginSpeed */ V_internal_real_Type_SDM_Types_ inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inAcceleration */ A_internal_real_Type_SDM_Types_ inAcceleration)
{
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition */
  static kcg_real tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L20 */
  static kcg_bool _L20;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::outD1 */
  static L_internal_real_Type_SDM_Types_ outD1;
  
  _L20 = inAcceleration != 0.0;
  /* ck__L20 */ if (_L20) {
    tmp = (/* 2 */ Square_mathext_V_internal_real_(inEndSpeed) - /* 1 */
        Square_mathext_V_internal_real_(inBeginSpeed)) / (2.0 * inAcceleration);
  }
  else {
    tmp = 0.0;
  }
  outD1 = inBeginDistance - tmp;
  return outD1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FormularNewPosition_CalcBraking.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

