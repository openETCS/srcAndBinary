/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_findBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_findBG */
void op_findBG_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_findBG::acc */ kcg_bool acc,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG */ positionedBG_T_TrainPosition_Types_Pck *Input_BG,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG_IDToCheck */ NID_BG Input_BG_IDToCheck,
  /* ProvidePositionReport_Pkg::op_findBG::cond */ kcg_bool *cond,
  /* ProvidePositionReport_Pkg::op_findBG::fd */ kcg_bool *fd)
{
  *cond = (*Input_BG).valid & ((*Input_BG).nid_bg != Input_BG_IDToCheck);
  *fd = acc | !*cond;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_findBG_ProvidePositionReport_Pkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

