/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitilizeAccForEBDFootCalc_Calc.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc */
void InitilizeAccForEBDFootCalc_Calc(
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::target */ Target_real_T_TargetManagement_ *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::BCACCForEBDFoot */ BCAccumulator_type_CalcBrakingC *BCACCForEBDFoot)
{
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L9 */
  static L_internal_real_Type_SDM_Types_ _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L11 */
  static V_internal_real_Type_SDM_Types_ _L11;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L15 */
  static kcg_real _L15;
  
  (*BCACCForEBDFoot).distance = (*target).distance;
  /* 3 */
  getDistanceStepFromDistance_Cal(
    (*target).distance,
    &(*aSafe).distance_definition,
    &_L9,
    &(*BCACCForEBDFoot).distanceIndex);
  _L15 = /* 2 */ dV_ebi_for_V_SDM_Types_Pkg((*target).speed) + (*target).speed;
  (*BCACCForEBDFoot).speed = _L15;
  /* 3 */
  getSpeedStepFromSpeed_CalcBraki(
    _L15,
    &(*aSafe).speed_definition,
    &_L11,
    &(*BCACCForEBDFoot).speedIndex);
  /* 2 */ makeEmptyParabolaCurve_CalcBrak(&(*BCACCForEBDFoot).BC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InitilizeAccForEBDFootCalc_Calc.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

