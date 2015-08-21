/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_RepeatReq_MA_Request.h"

void op_RepeatReq_reset_MA_Request(outC_op_RepeatReq_MA_Request *outC)
{
  outC->init = kcg_true;
}

/* MA_Request::op_RepeatReq */
void op_RepeatReq_MA_Request(
  /* MA_Request::op_RepeatReq::tcycreq */T_CYCLOC tcycreq,
  /* MA_Request::op_RepeatReq::setRepeater */kcg_bool setRepeater,
  /* MA_Request::op_RepeatReq::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_MA_Request *outC)
{
  /* MA_Request::op_RepeatReq::_L13 */
  static kcg_int _L13;
  
  if (setRepeater) {
    outC->_L6 = systemTime;
  }
  else if (outC->init) {
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_RepeatReq_MA_Request.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

