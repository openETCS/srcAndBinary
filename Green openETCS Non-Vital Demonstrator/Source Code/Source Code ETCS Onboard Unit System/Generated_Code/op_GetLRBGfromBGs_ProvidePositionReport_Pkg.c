/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_GetLRBGfromBGs */
void op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::found */kcg_bool *found,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::lrbg */positionedBG_T_TrainPosition_Types_Pck *lrbg)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L3 */
  static kcg_int _L3;
  
  *found = kcg_false;
  for (i = 0; i < 8; i++) {
    tmp1 = *found;
    /* 1 */
    op_findBG_ProvidePositionReport_Pkg(
      tmp1,
      &(*posBGs)[i],
      (*trainPos).LRBG.nid_bg,
      &tmp,
      found);
    _L3 = i + 1;
    if (!tmp) {
      break;
    }
  }
  if ((0 <= _L3 - 1) & (_L3 - 1 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(lrbg, &(*posBGs)[_L3 - 1]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      lrbg,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cPassedBG_ProvidePositionReport_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_GetLRBGfromBGs_ProvidePositionReport_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

