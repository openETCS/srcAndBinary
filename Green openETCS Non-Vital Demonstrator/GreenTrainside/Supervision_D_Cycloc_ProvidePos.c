/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_D_Cycloc_ProvidePos.h"

/* ProvidePositionReport_Pkg::Supervision_D_Cycloc */
kcg_bool Supervision_D_Cycloc_ProvidePos(
  /* ProvidePositionReport_Pkg::Supervision_D_Cycloc::dcycloc */ D_CYCLOC dcycloc)
{
  /* ProvidePositionReport_Pkg::Supervision_D_Cycloc::trigger */
  static kcg_bool trigger;
  
  trigger = kcg_false;
  return trigger;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_D_Cycloc_ProvidePos.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

