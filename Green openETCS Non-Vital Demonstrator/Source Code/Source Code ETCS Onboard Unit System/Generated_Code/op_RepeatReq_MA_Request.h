/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _op_RepeatReq_MA_Request_H_
#define _op_RepeatReq_MA_Request_H_

#include "kcg_types.h"
#include "MOD_XCP_numeric.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MA_Request::op_RepeatReq::trigger */ trigger;
  kcg_bool /* MA_Request::op_RepeatReq::exception */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::op_RepeatReq::_L6 */ _L6;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_RepeatReq_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::op_RepeatReq */
extern void op_RepeatReq_MA_Request(
  /* MA_Request::op_RepeatReq::tcycreq */T_CYCLOC tcycreq,
  /* MA_Request::op_RepeatReq::setRepeater */kcg_bool setRepeater,
  /* MA_Request::op_RepeatReq::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_MA_Request *outC);

extern void op_RepeatReq_reset_MA_Request(outC_op_RepeatReq_MA_Request *outC);

#endif /* _op_RepeatReq_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_RepeatReq_MA_Request.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

