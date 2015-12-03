/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Request_Supervision_TA_MA_Re.h"

#ifndef KCG_USER_DEFINED_INIT
void MA_Request_Supervision_init_TA_(outC_MA_Request_Supervision_TA_ *outC)
{
  outC->triggerMA = kcg_true;
  outC->exception = kcg_true;
  outC->pendingReq = kcg_true;
  outC->init = kcg_true;
  outC->SM1_state_nxt = SSM_st_init_SM1;
  /* 2 */ RisingEdge_init_digital(&outC->Context_2);
  /* 1 */ RisingEdge_init_digital(&outC->_1_Context_1);
  /* 1 */ op_RepeatReq_init_TA_MA_Request(&outC->Context_1);
  /* op_3_8_2_3_a */
  op_3_8_2_3_a_init_TA_MA_Request(&outC->Context_op_3_8_2_3_a);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MA_Request_Supervision_reset_TA(outC_MA_Request_Supervision_TA_ *outC)
{
  outC->init = kcg_true;
  /* 2 */ RisingEdge_reset_digital(&outC->Context_2);
  /* 1 */ RisingEdge_reset_digital(&outC->_1_Context_1);
  /* 1 */ op_RepeatReq_reset_TA_MA_Reques(&outC->Context_1);
  /* op_3_8_2_3_a */
  op_3_8_2_3_a_reset_TA_MA_Reques(&outC->Context_op_3_8_2_3_a);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::MA_Request_Supervision */
void MA_Request_Supervision_TA_MA_Re(
  /* TA_MA_Request::MA_Request_Supervision::ma_RequestParams */ P57_MovementAuthorityRequestPar *ma_RequestParams,
  /* TA_MA_Request::MA_Request_Supervision::ma_received */ kcg_bool ma_received,
  /* TA_MA_Request::MA_Request_Supervision::in_triggerMA */ kcg_bool in_triggerMA,
  /* TA_MA_Request::MA_Request_Supervision::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* TA_MA_Request::MA_Request_Supervision::systemTime */ T_internal_Type_Obu_BasicTypes_ systemTime,
  /* TA_MA_Request::MA_Request_Supervision::preindicationLocation */ L_internal_Type_Obu_BasicTypes_ preindicationLocation,
  /* TA_MA_Request::MA_Request_Supervision::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::MA_Request_Supervision::MAs */ MovementAuthority_t_TrackAtlasT *MAs,
  /* TA_MA_Request::MA_Request_Supervision::fromDriver */ Driver2MAR_T_TA_MA_Request *fromDriver,
  /* TA_MA_Request::MA_Request_Supervision::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* TA_MA_Request::MA_Request_Supervision::modeLevel */ T_Mode_Level_Level_And_Mode_Typ *modeLevel,
  outC_MA_Request_Supervision_TA_ *outC)
{
  /* TA_MA_Request::MA_Request_Supervision */
  static kcg_bool tmp1;
  /* TA_MA_Request::MA_Request_Supervision */
  static kcg_bool tmp;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _168_SSM_ST_SM1 SM1_state_sel;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _168_SSM_ST_SM1 SM1_state_act;
  /* TA_MA_Request::MA_Request_Supervision::_L81 */
  static kcg_bool _L81;
  
  _L81 = 255 != (*ma_RequestParams).t_mar;
  /* 1 */
  op_RepeatReq_TA_MA_Request(
    (*ma_RequestParams).t_cycrqst,
    in_triggerMA,
    systemTime,
    &outC->Context_1);
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = SSM_st_init_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_init_SM1 :
      SM1_state_act = SSM_st_NoReqPending_SM1;
      break;
    case SSM_st_NoReqPending_SM1 :
      if (in_triggerMA) {
        SM1_state_act = SSM_st_ReqPending_SM1;
      }
      else {
        SM1_state_act = SSM_st_NoReqPending_SM1;
      }
      break;
    case SSM_st_ReqPending_SM1 :
      if (ma_received) {
        SM1_state_act = SSM_st_NoReqPending_SM1;
      }
      else {
        SM1_state_act = SSM_st_ReqPending_SM1;
      }
      break;
    
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_init_SM1 :
      /* last_init_ck_pendingReq */ if (outC->init) {
        outC->pendingReq = kcg_false;
      }
      outC->SM1_state_nxt = SSM_st_init_SM1;
      break;
    case SSM_st_NoReqPending_SM1 :
      outC->pendingReq = kcg_false;
      outC->SM1_state_nxt = SSM_st_NoReqPending_SM1;
      break;
    case SSM_st_ReqPending_SM1 :
      outC->pendingReq = kcg_true;
      outC->SM1_state_nxt = SSM_st_ReqPending_SM1;
      break;
    
  }
  outC->init = kcg_false;
  /* ck__L80 */ if (_L81) {
    /* op_3_8_2_3_a */
    op_3_8_2_3_a_TA_MA_Request(
      (*ma_RequestParams).t_mar,
      trainPosition,
      odometry,
      preindicationLocation,
      &outC->Context_op_3_8_2_3_a);
    tmp = outC->Context_op_3_8_2_3_a.exception;
    tmp1 = outC->Context_op_3_8_2_3_a.triggerMA;
  }
  else {
    tmp = kcg_false;
    tmp1 = kcg_false;
  }
  outC->exception = tmp | outC->Context_1.exception;
  _L81 = 1023 != (*ma_RequestParams).t_timeoutrqst;
  /* 1 */ RisingEdge_digital(tmp1, &outC->_1_Context_1);
  /* ck__L81 */ if (_L81) {
    tmp = /* op_3_8_2_3_b */
      op_3_8_2_3_b_TA_MA_Request((*ma_RequestParams).t_timeoutrqst, MAs);
  }
  else {
    tmp = kcg_false;
  }
  /* 2 */ RisingEdge_digital(tmp, &outC->Context_2);
  outC->triggerMA = (((*modeLevel).level == M_LEVEL_Level_2) |
      ((*modeLevel).level == M_LEVEL_Level_3)) & (outC->_1_Context_1.RE_Output |
      outC->Context_2.RE_Output | (outC->pendingReq & (255 !=
          (*ma_RequestParams).t_cycrqst) & ((*ma_RequestParams).t_cycrqst !=
          0) & outC->Context_1.trigger) | trackDescrDeleted |
      (*fromDriver).trackAheadFree | (*fromDriver).driverSelectsStart);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Request_Supervision_TA_MA_Re.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

