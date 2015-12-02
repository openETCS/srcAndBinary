/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_a_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_8_2_3_a_init_TA_MA_Request(outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  outC->exception = kcg_true;
  outC->triggerMA = kcg_true;
  outC->init = kcg_true;
  outC->rem_preindicationLoc = 0;
  /* 1 */ RisingEdge_init_digital(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_8_2_3_a_reset_TA_MA_Request(outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 1 */ RisingEdge_reset_digital(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::op_3_8_2_3_a */
void op_3_8_2_3_a_TA_MA_Request(
  /* TA_MA_Request::op_3_8_2_3_a::t_mar */ T_MAR t_mar,
  /* TA_MA_Request::op_3_8_2_3_a::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* TA_MA_Request::op_3_8_2_3_a::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::op_3_8_2_3_a::preindicationLoc */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLoc,
  outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  /* TA_MA_Request::op_3_8_2_3_a */ L_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* TA_MA_Request::op_3_8_2_3_a::_L20 */ kcg_real _L20;
  
  /* 1 */
  DIV_real_XCP_numeric(
    (kcg_real)
      (preindicationLoc - ((*trainPosition).trainPosition.d_max +
          (*trainPosition).trainPosition.nominal)),
    (kcg_real) (*odometry).speed.v_upper,
    - 1.0,
    &_L20,
    &outC->exception);
  /* last_init_ck_preindicationLoc */ if (outC->init) {
    outC->init = kcg_false;
    tmp = cLocation_TA_MA_Request;
  }
  else {
    tmp = outC->rem_preindicationLoc;
  }
  /* 1 */
  RisingEdge_digital((kcg_bool) (tmp != preindicationLoc), &outC->Context_1);
  outC->triggerMA = !outC->Context_1.RE_Output & ((kcg_real) t_mar >= _L20);
  outC->rem_preindicationLoc = preindicationLoc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_8_2_3_a_TA_MA_Request.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

