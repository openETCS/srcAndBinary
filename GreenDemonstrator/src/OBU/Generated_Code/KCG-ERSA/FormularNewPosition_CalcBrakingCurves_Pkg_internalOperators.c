/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition */
L_internal_real_Type_SDM_Types_Pkg FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inBeginDistance */ L_internal_real_Type_SDM_Types_Pkg inBeginDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inEndSpeed */ V_internal_real_Type_SDM_Types_Pkg inEndSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inBeginSpeed */ V_internal_real_Type_SDM_Types_Pkg inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inAcceleration */ A_internal_real_Type_SDM_Types_Pkg inAcceleration)
{
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition */ kcg_real tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L20 */ kcg_bool _L20;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::outD1 */ L_internal_real_Type_SDM_Types_Pkg outD1;
  
  _L20 = inAcceleration != 0.0;
  /* ck__L20 */ if (_L20) {
    tmp = (/* 2 */ Square_mathext_V_internal_real_Type(inEndSpeed) - /* 1 */
        Square_mathext_V_internal_real_Type(inBeginSpeed)) / (2.0 *
        inAcceleration);
  }
  else {
    tmp = 0.0;
  }
  outD1 = inBeginDistance - tmp;
  return outD1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

