/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_findBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_findBG */
void op_findBG_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_findBG::acc */kcg_bool acc,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG */positionedBG_T_TrainPosition_Types_Pck *Input_BG,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG_IDToCheck */NID_BG Input_BG_IDToCheck,
  /* ProvidePositionReport_Pkg::op_findBG::cond */kcg_bool *cond,
  /* ProvidePositionReport_Pkg::op_findBG::fd */kcg_bool *fd)
{
  *cond = (*Input_BG).valid & ((*Input_BG).nid_bg != Input_BG_IDToCheck);
  *fd = acc | !*cond;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_findBG_ProvidePositionReport_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

