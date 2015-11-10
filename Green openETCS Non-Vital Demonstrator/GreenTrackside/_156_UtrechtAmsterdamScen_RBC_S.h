/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef __156_UtrechtAmsterdamScen_RBC_
#define __156_UtrechtAmsterdamScen_RBC_

#include "kcg_types.h"
#include "SessionManagement__GetPosData_R.h"
#include "PosData__Get_D_LRBG_RBC_Session.h"
#include "PosData__Get_NID_LRBG_RBC_Sessi.h"
#include "PosData__Get_Q_SCALE_RBC_Sessio.h"
#include "LRBGDistanceToMeterConverter__C.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"
#include "_155_UtrechtAmsterdamScen_RBC_S.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__155_UtrechtAmsterdamScen_ /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC__156_UtrechtAmsterdamScen_;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper */
extern void _156_UtrechtAmsterdamScen_RBC_S(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::inClock */ Clock_T *inClock,
  outC__156_UtrechtAmsterdamScen_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _156_UtrechtAmsterdamScen_reset(
  outC__156_UtrechtAmsterdamScen_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _156_UtrechtAmsterdamScen_init_(
  outC__156_UtrechtAmsterdamScen_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* __156_UtrechtAmsterdamScen_RBC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** _156_UtrechtAmsterdamScen_RBC_S.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

