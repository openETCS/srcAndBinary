/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_DOUBTUNDER_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_DOUBTUNDER */
L_DOUBTUNDER op_DOUBTUNDER_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_DOUBTUNDER::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos)
{
  /* ProvidePositionReport_Pkg::op_DOUBTUNDER::_L11 */
  static kcg_int _L11;
  /* ProvidePositionReport_Pkg::op_DOUBTUNDER::l_doubtunder */
  static L_DOUBTUNDER l_doubtunder;
  
  _L11 = (*trainPos).maxSafeFrontEndPostion -
    (*trainPos).estimatedFrontEndPosition;
  /* 2 */ if (0 <= _L11) {
    l_doubtunder = _L11;
  }
  else {
    l_doubtunder = - _L11;
  }
  return l_doubtunder;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_DOUBTUNDER_ProvidePositionReport_Pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

