/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetIterator_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetIterator */
void TargetIterator_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetIterator::index */kcg_int index,
  /* TargetLimits_Pkg::TargetIterator::Akku_in */TargetIteratorAkku_TargetLimits_Pkg *Akku_in,
  /* TargetLimits_Pkg::TargetIterator::target */Target_real_T_TargetManagement_types *target,
  /* TargetLimits_Pkg::TargetIterator::targetCurve */ParabolaCurve_T_CalcBrakingCurves_types *targetCurve,
  /* TargetLimits_Pkg::TargetIterator::trainData_int */trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::TargetIterator::odometry */Odometry_real_T_SDM_Types_Pkg *odometry,
  /* TargetLimits_Pkg::TargetIterator::T_b */t_Brake_t_SDMConversionModelPkg *T_b,
  /* TargetLimits_Pkg::TargetIterator::goOn */kcg_bool *goOn,
  /* TargetLimits_Pkg::TargetIterator::Akku_out */TargetIteratorAkku_TargetLimits_Pkg *Akku_out)
{
  static kcg_bool tmp;
  /* TargetLimits_Pkg::TargetIterator::_L2 */
  static L_internal_real_Type_SDM_Types_Pkg _L2;
  /* TargetLimits_Pkg::TargetIterator::_L1 */
  static kcg_bool _L1;
  /* TargetLimits_Pkg::TargetIterator::_L74 */
  static bec_t_TargetLimits_Pkg _L74;
  /* TargetLimits_Pkg::TargetIterator::_L73 */
  static T_trac_t_TargetLimits_Pkg _L73;
  /* TargetLimits_Pkg::TargetIterator::_L72 */
  static V_internal_real_Type_SDM_Types_Pkg _L72;
  /* TargetLimits_Pkg::TargetIterator::_L71 */
  static V_internal_real_Type_SDM_Types_Pkg _L71;
  
  *goOn = invalid_TargetManagement_types != (*target).targetType;
  /* 1 */
  surplusTractionDeltas_TargetLimits_Pkg(
    trainData_int,
    odometry,
    T_b,
    (*target).speed,
    &(*Akku_in).T,
    &_L74,
    &_L71,
    &_L73,
    &_L72);
  if (*goOn) {
    /* 1 */
    d_SBI2_TargetLimits_Pkg(targetCurve, &_L74, _L71, &_L73, &_L1, &_L2);
  }
  else {
    _L1 = kcg_false;
    _L2 = - 1.0;
  }
  tmp = /* 1 */
    isLEValid_TargetLimits_Pkg(
      _L1,
      _L2,
      (kcg_bool) ((*Akku_in).ttype != invalid_TargetManagement_types),
      (*Akku_in).SBI2);
  if (tmp) {
    (*Akku_out).SBI2 = _L2;
    (*Akku_out).index = index;
    kcg_copy_bec_t_TargetLimits_Pkg(&(*Akku_out).bec, &_L74);
    (*Akku_out).V_est = _L71;
    kcg_copy_T_trac_t_TargetLimits_Pkg(&(*Akku_out).T, &_L73);
    (*Akku_out).V_ura = _L72;
    if (_L1) {
      (*Akku_out).ttype = (*target).targetType;
    }
    else {
      (*Akku_out).ttype = invalid_TargetManagement_types;
    }
  }
  else {
    kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(Akku_out, Akku_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TargetIterator_TargetLimits_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

