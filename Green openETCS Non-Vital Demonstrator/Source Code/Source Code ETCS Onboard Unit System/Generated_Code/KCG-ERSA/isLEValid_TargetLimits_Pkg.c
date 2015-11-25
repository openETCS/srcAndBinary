/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isLEValid_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::isLEValid */
kcg_bool isLEValid_TargetLimits_Pkg(
  /* TargetLimits_Pkg::isLEValid::valid1 */ kcg_bool valid1,
  /* TargetLimits_Pkg::isLEValid::i1 */ kcg_real i1,
  /* TargetLimits_Pkg::isLEValid::valid2 */ kcg_bool valid2,
  /* TargetLimits_Pkg::isLEValid::i2 */ kcg_real i2)
{
  /* TargetLimits_Pkg::isLEValid::result */ kcg_bool result;
  
  result = valid1 & ((i1 <= i2) | !valid2);
  return result;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** isLEValid_TargetLimits_Pkg.c
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */

