/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "iterateASafeData_SDMModelPkg.h"

/* SDMModelPkg::iterateASafeData */
void iterateASafeData_SDMModelPkg(
  /* SDMModelPkg::iterateASafeData::ASafeRows */ ASafeRow_T_CalcBrakingCurves_types *ASafeRows,
  /* SDMModelPkg::iterateASafeData::AGradient */ A_gradient_t_SDM_GradientAcceleration_types *AGradient,
  /* SDMModelPkg::iterateASafeData::ASafeRows_graded */ ASafeRow_T_CalcBrakingCurves_types *ASafeRows_graded)
{
  /* SDMModelPkg::iterateASafeData */ kcg_real acc;
  kcg_int i;
  /* SDMModelPkg::iterateASafeData::_L5 */ A_internal_real_Type_SDM_Types_Pkg _L5;
  
  _L5 = 0.0;
  /* 1 */ for (i = 0; i < 100; i++) {
    acc = _L5;
    /* 1 */
    iterateASafeRow_SDMModelPkg(
      acc,
      (*ASafeRows)[i],
      &(*AGradient)[i],
      &_L5,
      &(*ASafeRows_graded)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** iterateASafeData_SDMModelPkg.c
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

