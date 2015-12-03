/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FormularNewSpeed_CalcBrakingCur.h"

/* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed */
void FormularNewSpeed_CalcBrakingCur(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inAcceleration */ A_internal_real_Type_SDM_Types_ inAcceleration,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD0 */ L_internal_real_Type_SDM_Types_ inD0,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD1 */ L_internal_real_Type_SDM_Types_ inD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inBeginSpeed */ V_internal_real_Type_SDM_Types_ inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::outSpeedAtD1 */ V_internal_real_Type_SDM_Types_ *outSpeedAtD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::valid */ kcg_bool *valid)
{
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L10 */
  static kcg_real _L10;
  
  _L10 = 2.0 * inAcceleration * (inD0 - inD1) + /* 1 */
    Square_mathext_V_internal_real_(inBeginSpeed);
  *valid = _L10 > 0.0;
  /* ck_valid */ if (*valid) {
    *outSpeedAtD1 = /* 1 */ SqrtR_mathext(_L10);
  }
  else {
    *outSpeedAtD1 = 0.0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FormularNewSpeed_CalcBrakingCur.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

