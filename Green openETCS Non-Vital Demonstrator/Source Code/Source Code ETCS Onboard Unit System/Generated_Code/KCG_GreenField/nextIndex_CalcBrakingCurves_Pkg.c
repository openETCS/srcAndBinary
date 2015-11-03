/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextIndex_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::internalOperators::nextIndex */
kcg_int nextIndex_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::upwards */ kcg_bool upwards,
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::currentIndex */ kcg_int currentIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::limit */ kcg_int limit)
{
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L6 */
  static kcg_int _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L16 */
  static kcg_int _L16;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L21 */
  static kcg_int _L21;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::nextIndex */
  static kcg_int nextIndex;
  
  _L21 = limit - 1;
  _L16 = 1 + currentIndex;
  _L6 = currentIndex - 1;
  /* 1 */ if (upwards) {
    /* 1 */ if (_L21 <= _L16) {
      nextIndex = _L21;
    }
    else {
      nextIndex = _L16;
    }
  }
  else /* 2 */ if (_L6 >= 0) {
    nextIndex = _L6;
  }
  else {
    nextIndex = 0;
  }
  return nextIndex;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextIndex_CalcBrakingCurves_Pkg.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

