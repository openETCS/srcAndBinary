/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_LRBG_ProvidePositionReport_P.h"

/* ProvidePositionReport_Pkg::op_LRBG */
kcg_int op_LRBG_ProvidePositionReport_P(
  /* ProvidePositionReport_Pkg::op_LRBG::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::op_LRBG::trainPos */ trainPosition_T_TrainPosition_T *trainPos)
{
  /* ProvidePositionReport_Pkg::op_LRBG::_L31 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L31;
  /* ProvidePositionReport_Pkg::op_LRBG::_L39 */
  static positionedBG_T_TrainPosition_Ty _L39;
  /* ProvidePositionReport_Pkg::op_LRBG::_L38 */
  static kcg_bool _L38;
  /* ProvidePositionReport_Pkg::op_LRBG::d_lrbg */
  static kcg_int d_lrbg;
  
  /* op_GetLRBGfromBGs */
  op_GetLRBGfromBGs_ProvidePositi(posBGs, trainPos, &_L38, &_L39);
  /* 1 */
  sub_2_distances_BasicLocationFu(
    &(*trainPos).trainPosition,
    &_L39.location,
    &_L31);
  /* 5 */ if ((*trainPos).valid & !(*trainPos).trainPositionIsUnknown & _L38) {
    /* 2 */ if (0 <= _L31.nominal) {
      d_lrbg = _L31.nominal;
    }
    else {
      d_lrbg = - _L31.nominal;
    }
  }
  else {
    d_lrbg = 32767;
  }
  return d_lrbg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_LRBG_ProvidePositionReport_P.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

