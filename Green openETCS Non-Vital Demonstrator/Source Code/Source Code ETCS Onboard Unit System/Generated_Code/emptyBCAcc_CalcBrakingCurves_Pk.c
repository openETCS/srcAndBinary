/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "emptyBCAcc_CalcBrakingCurves_Pk.h"

/* CalcBrakingCurves_Pkg::emptyBCAcc */
void emptyBCAcc_CalcBrakingCurves_Pk(
  /* CalcBrakingCurves_Pkg::emptyBCAcc::Output1 */ BCAccumulator_type_CalcBrakingC *Output1)
{
  (*Output1).distance = 0.0;
  (*Output1).speed = 0.0;
  (*Output1).distanceIndex = 0;
  (*Output1).speedIndex = 0;
  /* 2 */ makeEmptyParabolaCurve_CalcBrak(&(*Output1).BC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** emptyBCAcc_CalcBrakingCurves_Pk.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

