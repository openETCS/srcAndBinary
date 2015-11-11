/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_GetLRBGfromBGs_ProvidePositi.h"

/* ProvidePositionReport_Pkg::op_GetLRBGfromBGs */
void op_GetLRBGfromBGs_ProvidePositi(
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::lrbg */ positionedBG_T_TrainPosition_Ty *lrbg)
{
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs */
  static kcg_bool acc;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L3 */
  static kcg_int _L3;
  
  *found = kcg_false;
  for (i = 0; i < 41; i++) {
    acc = *found;
    /* 1 */
    op_findBG_ProvidePositionReport(
      acc,
      &(*posBGs)[i],
      (*trainPos).LRBG.nid_bg,
      &cond_iterw,
      found);
    _L3 = i + 1;
    if (!cond_iterw) {
      break;
    }
  }
  if ((0 <= _L3 - 1) & (_L3 - 1 < 41)) {
    kcg_copy_positionedBG_T_TrainPo(lrbg, &(*posBGs)[_L3 - 1]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      lrbg,
      (positionedBG_T_TrainPosition_Ty *) &cPassedBG_ProvidePositionReport);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_GetLRBGfromBGs_ProvidePositi.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

