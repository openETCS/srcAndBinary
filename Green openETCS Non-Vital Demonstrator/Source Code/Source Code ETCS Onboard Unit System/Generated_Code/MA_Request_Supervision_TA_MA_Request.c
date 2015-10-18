/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Request_Supervision_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void MA_Request_Supervision_init_TA_MA_Request(
  outC_MA_Request_Supervision_TA_MA_Request *outC)
{
  outC->triggerMA = kcg_true;
  outC->exception = kcg_true;
  outC->pendingReq = kcg_true;
  outC->init = kcg_true;
  outC->SM1_state_nxt = SSM_st_init_SM1;
  /* 1 */ op_RepeatReq_init_TA_MA_Request(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MA_Request_Supervision_reset_TA_MA_Request(
  outC_MA_Request_Supervision_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 1 */ op_RepeatReq_reset_TA_MA_Request(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::MA_Request_Supervision */
void MA_Request_Supervision_TA_MA_Request(
  /* TA_MA_Request::MA_Request_Supervision::ma_RequestParams */ P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *ma_RequestParams,
  /* TA_MA_Request::MA_Request_Supervision::ma_received */ kcg_bool ma_received,
  /* TA_MA_Request::MA_Request_Supervision::in_triggerMA */ kcg_bool in_triggerMA,
  /* TA_MA_Request::MA_Request_Supervision::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* TA_MA_Request::MA_Request_Supervision::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* TA_MA_Request::MA_Request_Supervision::preindicationLocation */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TA_MA_Request::MA_Request_Supervision::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::MA_Request_Supervision::MAs */ MovementAuthority_t_TrackAtlasTypes *MAs,
  /* TA_MA_Request::MA_Request_Supervision::fromDriver */ Driver2MAR_T_TA_MA_Request *fromDriver,
  /* TA_MA_Request::MA_Request_Supervision::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  outC_MA_Request_Supervision_TA_MA_Request *outC)
{
  /* TA_MA_Request::MA_Request_Supervision */
  static kcg_bool tmp3;
  /* TA_MA_Request::MA_Request_Supervision */
  static kcg_bool tmp2;
  /* TA_MA_Request::MA_Request_Supervision */
  static kcg_bool tmp1;
  /* TA_MA_Request::MA_Request_Supervision */
  static kcg_bool tmp;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static SSM_ST_SM1 SM1_state_sel;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static SSM_ST_SM1 SM1_state_act;
  /* TA_MA_Request::MA_Request_Supervision::_L42 */
  static kcg_bool _L42;
  
  _L42 = 255 == (*ma_RequestParams).t_mar;
  tmp1 = 1023 == (*ma_RequestParams).t_timeoutrqst;
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
    case SSM_st_ReqPending_SM1 :
      outC->pendingReq = kcg_true;
      outC->SM1_state_nxt = SSM_st_ReqPending_SM1;
      break;
    case SSM_st_NoReqPending_SM1 :
      outC->pendingReq = kcg_false;
      outC->SM1_state_nxt = SSM_st_NoReqPending_SM1;
      break;
    case SSM_st_init_SM1 :
      /* last_init_ck_pendingReq */ if (outC->init) {
        outC->pendingReq = kcg_false;
      }
      outC->SM1_state_nxt = SSM_st_init_SM1;
      break;
    
  }
  outC->init = kcg_false;
  /* 1 */
  op_RepeatReq_TA_MA_Request(
    (*ma_RequestParams).t_cycrqst,
    in_triggerMA,
    systemTime,
    &outC->Context_1);
  /* ck__L37 */ if (tmp1) {
    tmp2 = /* op_3_8_2_3_b */
      op_3_8_2_3_b_TA_MA_Request((*ma_RequestParams).t_timeoutrqst, MAs);
  }
  else {
    tmp2 = kcg_false;
  }
  /* 2 */ if (outC->pendingReq & (255 == (*ma_RequestParams).t_cycrqst)) {
    tmp1 = kcg_false;
  }
  else {
    tmp1 = outC->Context_1.trigger;
  }
  /* ck__L42 */ if (_L42) {
    /* op_3_8_2_3_a */
    op_3_8_2_3_a_TA_MA_Request(
      (*ma_RequestParams).t_mar,
      trainPosition,
      preindicationLocation,
      odometry,
      &tmp3,
      &tmp);
  }
  else {
    tmp3 = kcg_false;
    tmp = kcg_false;
  }
  outC->triggerMA = tmp3 | tmp2 | tmp1 | trackDescrDeleted |
    (*fromDriver).trackAheadFree | (*fromDriver).driverSelectsStart;
  outC->exception = tmp | outC->Context_1.exception;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Request_Supervision_TA_MA_Request.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

