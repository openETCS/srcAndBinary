/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_RepeatReq_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void op_RepeatReq_init_MA_Request(outC_op_RepeatReq_MA_Request *outC)
{
  outC->trigger = kcg_true;
  outC->exception = kcg_true;
  outC->init = kcg_true;
  outC->_L6 = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_RepeatReq_reset_MA_Request(outC_op_RepeatReq_MA_Request *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MA_Request::op_RepeatReq */
void op_RepeatReq_MA_Request(
  /* MA_Request::op_RepeatReq::tcycreq */ T_CYCLOC tcycreq,
  /* MA_Request::op_RepeatReq::setRepeater */ kcg_bool setRepeater,
  /* MA_Request::op_RepeatReq::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_MA_Request *outC)
{
  /* MA_Request::op_RepeatReq::_L13 */
  static kcg_int _L13;
  
  /* 1 */ if (setRepeater) {
    outC->_L6 = systemTime;
  }
  else /* 1_fby_1_init_4 */ if (outC->init) {
    outC->_L6 = 0;
  }
  outC->init = kcg_false;
  /* 1 */
  MOD_XCP_numeric(
    systemTime - outC->_L6,
    tcycreq,
    - 1,
    &_L13,
    &outC->exception);
  outC->trigger = _L13 == 0;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_RepeatReq_MA_Request.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

