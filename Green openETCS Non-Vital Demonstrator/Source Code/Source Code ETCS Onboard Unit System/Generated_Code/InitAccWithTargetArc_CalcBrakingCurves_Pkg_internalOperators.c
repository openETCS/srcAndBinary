/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
void InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::EBDfoot */ L_internal_real_Type_SDM_Types_Pkg EBDfoot,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::target */ Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::Output1 */ BCAccumulator_type_CalcBrakingCurves_Pkg *Output1)
{
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
  static ParabolaArc_T_CalcBrakingCurves_types mk_struct;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
  static A_internal_real_Type_SDM_Types_Pkg tmp1;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
  static ParabolaCurve_T_CalcBrakingCurves_types tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L8 */
  static V_internal_real_Type_SDM_Types_Pkg _L8;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L9 */
  static kcg_int _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L10 */
  static L_internal_real_Type_SDM_Types_Pkg _L10;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L11 */
  static kcg_int _L11;
  
  (*Output1).distance = EBDfoot;
  (*Output1).speed = (*target).speed;
  /* 1 */
  getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
    EBDfoot,
    &(*aSafe).distance_definition,
    &_L10,
    &_L11);
  (*Output1).distanceIndex = _L11;
  /* 1 */
  getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
    (*target).speed,
    &(*aSafe).speed_definition,
    &_L8,
    &_L9);
  (*Output1).speedIndex = _L9;
  tmp1 = /* 2 */
    getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
      _L11,
      _L9,
      &(*aSafe).data);
  /* 4 */ makeEmptyParabolaCurve_CalcBrakingCurves_types(&tmp);
  mk_struct.distance = EBDfoot;
  mk_struct.speed = (*target).speed;
  mk_struct.acceleration = tmp1;
  /* 1 */
  setArc_CalcBrakingCurves_Pkg_internalOperators(
    &mk_struct,
    &tmp,
    0,
    &(*Output1).BC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

