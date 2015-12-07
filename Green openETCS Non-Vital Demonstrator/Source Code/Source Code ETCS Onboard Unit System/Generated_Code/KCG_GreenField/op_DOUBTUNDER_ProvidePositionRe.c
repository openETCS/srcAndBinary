/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_DOUBTUNDER_ProvidePositionRe.h"

/* ProvidePositionReport_Pkg::op_DOUBTUNDER */
L_DOUBTUNDER op_DOUBTUNDER_ProvidePositionRe(
  /* ProvidePositionReport_Pkg::op_DOUBTUNDER::trainPos */ trainPosition_T_TrainPosition_T *trainPos)
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
** op_DOUBTUNDER_ProvidePositionRe.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

