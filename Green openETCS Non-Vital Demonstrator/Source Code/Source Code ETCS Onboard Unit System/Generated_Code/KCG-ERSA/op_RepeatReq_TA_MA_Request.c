/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_RepeatReq_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void op_RepeatReq_init_TA_MA_Request(outC_op_RepeatReq_TA_MA_Request *outC)
{
  outC->trigger = kcg_true;
  outC->exception = kcg_true;
  outC->init = kcg_true;
  outC->lastSystemTime = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_RepeatReq_reset_TA_MA_Request(outC_op_RepeatReq_TA_MA_Request *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::op_RepeatReq */
void op_RepeatReq_TA_MA_Request(
  /* TA_MA_Request::op_RepeatReq::tcycreq */ T_CYCLOC tcycreq,
  /* TA_MA_Request::op_RepeatReq::setRepeater */ kcg_bool setRepeater,
  /* TA_MA_Request::op_RepeatReq::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_TA_MA_Request *outC)
{
  /* TA_MA_Request::op_RepeatReq::_L21 */ T_internal_Type_Obu_BasicTypes_Pkg _L21;
  
  outC->exception = kcg_false;
  /* last_init_ck_lastSystemTime */ if (outC->init) {
    outC->init = kcg_false;
    _L21 = 0;
  }
  else {
    _L21 = outC->lastSystemTime;
  }
  outC->trigger = systemTime - _L21 >= cCycleTime_TA_MA_Request * tcycreq;
  /* 1 */ if (outC->trigger | setRepeater) {
    outC->lastSystemTime = systemTime;
  }
  else {
    outC->lastSystemTime = _L21;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_RepeatReq_TA_MA_Request.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

