/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_T_Cycloc_ProvidePositionReport_Pkg.h"

void Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::Supervision_T_Cycloc */
void Supervision_T_Cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::present */kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::tcycloc */T_CYCLOC tcycloc,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::systemTime */SystemTime_T_ProvidePositionReport_Pkg systemTime,
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  if (present) {
    outC->_L5 = systemTime;
  }
  else if (outC->init) {
    outC->_L5 = 0;
  }
  outC->init = kcg_false;
  outC->trigger = ((systemTime - outC->_L5) % tcycloc == 0) & (255 != tcycloc);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Supervision_T_Cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

