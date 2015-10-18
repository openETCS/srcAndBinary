/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectLEValid_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::selectLEValid */
void selectLEValid_TargetLimits_Pkg(
  /* TargetLimits_Pkg::selectLEValid::valid1 */ kcg_bool valid1,
  /* TargetLimits_Pkg::selectLEValid::i1 */ kcg_real i1,
  /* TargetLimits_Pkg::selectLEValid::valid2 */ kcg_bool valid2,
  /* TargetLimits_Pkg::selectLEValid::i2 */ kcg_real i2,
  /* TargetLimits_Pkg::selectLEValid::isUpper */ kcg_bool *isUpper,
  /* TargetLimits_Pkg::selectLEValid::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::selectLEValid::o */ kcg_real *o)
{
  *isUpper = /* 1 */ isLEValid_TargetLimits_Pkg(valid1, i1, valid2, i2);
  /* 1 */ if (*isUpper) {
    *o = i1;
    *valid = valid1;
  }
  else {
    *o = i2;
    *valid = valid2;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** selectLEValid_TargetLimits_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

