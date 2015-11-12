/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitAccWithTargetArc_CalcBrakin.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
void InitAccWithTargetArc_CalcBrakin(
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::EBDfoot */ L_internal_real_Type_SDM_Types_ EBDfoot,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::target */ Target_real_T_TargetManagement_ *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::Output1 */ BCAccumulator_type_CalcBrakingC *Output1)
{
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
  static ParabolaArc_T_CalcBrakingCurves mk_struct;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
  static A_internal_real_Type_SDM_Types_ tmp1;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
  static ParabolaCurve_T_CalcBrakingCurv tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L8 */
  static V_internal_real_Type_SDM_Types_ _L8;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L9 */
  static kcg_int _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L10 */
  static L_internal_real_Type_SDM_Types_ _L10;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L11 */
  static kcg_int _L11;
  
  (*Output1).distance = EBDfoot;
  (*Output1).speed = (*target).speed;
  /* 1 */
  getDistanceStepFromDistance_Cal(
    EBDfoot,
    &(*aSafe).distance_definition,
    &_L10,
    &_L11);
  (*Output1).distanceIndex = _L11;
  /* 1 */
  getSpeedStepFromSpeed_CalcBraki(
    (*target).speed,
    &(*aSafe).speed_definition,
    &_L8,
    &_L9);
  (*Output1).speedIndex = _L9;
  tmp1 = /* 2 */ getAFromAsafeByIndex_CalcBrakin(_L11, _L9, &(*aSafe).data);
  /* 4 */ makeEmptyParabolaCurve_CalcBrak(&tmp);
  mk_struct.distance = EBDfoot;
  mk_struct.speed = (*target).speed;
  mk_struct.acceleration = tmp1;
  /* 1 */ setArc_CalcBrakingCurves_Pkg_in(&mk_struct, &tmp, 0, &(*Output1).BC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InitAccWithTargetArc_CalcBrakin.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

