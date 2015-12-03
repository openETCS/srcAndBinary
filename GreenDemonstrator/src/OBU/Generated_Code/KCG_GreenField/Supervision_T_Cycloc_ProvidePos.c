/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_T_Cycloc_ProvidePos.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervision_T_Cycloc_init_Provi(outC_Supervision_T_Cycloc_Provi *outC)
{
  outC->trigger = kcg_true;
  outC->init = kcg_true;
  outC->_L5 = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervision_T_Cycloc_reset_Prov(outC_Supervision_T_Cycloc_Provi *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervision_T_Cycloc */
void Supervision_T_Cycloc_ProvidePos(
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::tcycloc */ T_CYCLOC tcycloc,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::systemTime */ SystemTime_T_ProvidePositionRep systemTime,
  outC_Supervision_T_Cycloc_Provi *outC)
{
  /* 1 */ if (present) {
    outC->_L5 = systemTime;
  }
  else /* 2_fby_1_init_4 */ if (outC->init) {
    outC->_L5 = 0;
  }
  outC->init = kcg_false;
  outC->trigger = ((systemTime - outC->_L5) % tcycloc == 0) & (255 != tcycloc);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_T_Cycloc_ProvidePos.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

