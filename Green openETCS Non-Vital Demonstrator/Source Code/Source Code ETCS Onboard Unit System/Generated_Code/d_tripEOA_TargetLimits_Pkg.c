/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_tripEOA_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_tripEOA */
L_internal_real_Type_SDM_Types_Pkg d_tripEOA_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_tripEOA::D_EOA */L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* TargetLimits_Pkg::d_tripEOA::q_MaLevel */MA_Level_t_TrackAtlasTypes q_MaLevel,
  /* TargetLimits_Pkg::d_tripEOA::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations)
{
  static kcg_real tmp1;
  static kcg_real tmp;
  /* TargetLimits_Pkg::d_tripEOA::_L10 */
  static kcg_real _L10;
  /* TargetLimits_Pkg::d_tripEOA::_L12 */
  static kcg_real _L12;
  /* TargetLimits_Pkg::d_tripEOA::_L29 */
  static kcg_real _L29;
  /* TargetLimits_Pkg::d_tripEOA::D_tripEOA */
  static L_internal_real_Type_SDM_Types_Pkg D_tripEOA;
  
  _L12 = D_EOA - (*trainLocations).d_LRBG;
  if (0. <= _L12) {
    _L29 = _L12;
  }
  else {
    _L29 = - _L12;
  }
  _L12 = (*trainLocations).d_accLRBG + (*trainLocations).d_accLRBG + 10.0 +
    0.1 * _L29;
  _L10 = (*trainLocations).d_maxSafeFrontEndPos -
    (*trainLocations).d_minSafeFrontEndPos;
  switch (q_MaLevel) {
    case MA_L23_TrackAtlasTypes :
      tmp1 = 0.0;
      break;
    
    default :
      tmp1 = (*trainLocations).d_antenna2frontend;
  }
  if (_L10 >= _L12) {
    tmp = _L10;
  }
  else {
    tmp = _L12;
  }
  D_tripEOA = tmp1 + tmp + _L29;
  return D_tripEOA;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** d_tripEOA_TargetLimits_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

