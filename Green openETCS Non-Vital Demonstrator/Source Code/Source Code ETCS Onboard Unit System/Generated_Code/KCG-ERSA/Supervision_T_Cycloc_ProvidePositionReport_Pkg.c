/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_T_Cycloc_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervision_T_Cycloc_init_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->trigger = kcg_true;
  outC->init = kcg_true;
  outC->lastTime = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervision_T_Cycloc */
void Supervision_T_Cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::tcycloc */ T_CYCLOC tcycloc,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L27 */ T_internal_Type_Obu_BasicTypes_Pkg _L27;
  
  /* last_init_ck_lastTime */ if (outC->init) {
    outC->init = kcg_false;
    _L27 = 0;
  }
  else {
    _L27 = outC->lastTime;
  }
  outC->trigger = (tcycloc > 0) & (tcycloc < 255) & (systemTime - _L27 >=
      tcycloc * cTimeToElapse_ProvidePositionReport_Pkg);
  /* 1 */ if (outC->trigger) {
    outC->lastTime = systemTime;
  }
  else {
    outC->lastTime = _L27;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_T_Cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

