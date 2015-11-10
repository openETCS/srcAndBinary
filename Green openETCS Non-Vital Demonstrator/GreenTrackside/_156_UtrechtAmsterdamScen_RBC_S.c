/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_156_UtrechtAmsterdamScen_RBC_S.h"

#ifndef KCG_USER_DEFINED_INIT
void _156_UtrechtAmsterdamScen_init_(outC__156_UtrechtAmsterdamScen_ *outC)
{
  outC->outTriggerId = 0;
  /* 1 */ _155_UtrechtAmsterdamScen_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _156_UtrechtAmsterdamScen_reset(outC__156_UtrechtAmsterdamScen_ *outC)
{
  /* 1 */ _155_UtrechtAmsterdamScen_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper */
void _156_UtrechtAmsterdamScen_RBC_S(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::inClock */ Clock_T *inClock,
  outC__156_UtrechtAmsterdamScen_ *outC)
{
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::_L8 */
  static PosData_T _L8;
  
  /* 1 */ SessionManagement__GetPosData_R(inSessionManagement, &_L8);
  /* 1 */
  _155_UtrechtAmsterdamScen_RBC_S(
    /* 1 */ PosData__Get_NID_LRBG_RBC_Sessi(&_L8),
    /* 1 */
    LRBGDistanceToMeterConverter__C(
      /* 1 */ PosData__Get_D_LRBG_RBC_Session(&_L8),
      /* 1 */ PosData__Get_Q_SCALE_RBC_Sessio(&_L8)),
    /* 1 */ Clock__GetSeconds_RBC_Time_Pkg(inClock),
    &outC->Context_1);
  outC->outTriggerId = outC->Context_1.outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _156_UtrechtAmsterdamScen_RBC_S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

