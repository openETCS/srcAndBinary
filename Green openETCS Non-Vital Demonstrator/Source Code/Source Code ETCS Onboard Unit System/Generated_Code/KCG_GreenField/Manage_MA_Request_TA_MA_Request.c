/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_MA_Request_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void Manage_MA_Request_init_TA_MA_Re(outC_Manage_MA_Request_TA_MA_Re *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->triggerMA = kcg_true;
  outC->init = kcg_true;
  for (i1 = 0; i1 < 5; i1++) {
    outC->bus_out[i1].Message.valid = kcg_true;
    outC->bus_out[i1].Message.nid_message = 0;
    outC->bus_out[i1].Message.l_message = 0;
    outC->bus_out[i1].Message.t_train = 0;
    outC->bus_out[i1].Message.nid_engine = 0;
    outC->bus_out[i1].Message.field1 = 0;
    outC->bus_out[i1].Message.field2 = 0;
    outC->bus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->bus_out[i1].OptionalPackets[i] = 0;
    }
  }
  /* 1 */ Build_MA_request_init_TA_MA_Req(&outC->_2_Context_1);
  /* 1 */ MA_Request_Supervision_init_TA_(&outC->_1_Context_1);
  /* 1 */ Receive_MA_RequestParameters_in(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_MA_Request_reset_TA_MA_R(outC_Manage_MA_Request_TA_MA_Re *outC)
{
  outC->init = kcg_true;
  /* 1 */ Build_MA_request_reset_TA_MA_Re(&outC->_2_Context_1);
  /* 1 */ MA_Request_Supervision_reset_TA(&outC->_1_Context_1);
  /* 1 */ Receive_MA_RequestParameters_re(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::Manage_MA_Request */
void Manage_MA_Request_TA_MA_Request(
  /* TA_MA_Request::Manage_MA_Request::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* TA_MA_Request::Manage_MA_Request::systemTime */ T_internal_Type_Obu_BasicTypes_ systemTime,
  /* TA_MA_Request::Manage_MA_Request::message_in */ ReceivedMessage_T_Common_Types_ *message_in,
  /* TA_MA_Request::Manage_MA_Request::preindicationLocation */ L_internal_Type_Obu_BasicTypes_ preindicationLocation,
  /* TA_MA_Request::Manage_MA_Request::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::Manage_MA_Request::MAs */ MovementAuthority_t_TrackAtlasT *MAs,
  /* TA_MA_Request::Manage_MA_Request::fromDriver */ Driver2MAR_T_TA_MA_Request *fromDriver,
  /* TA_MA_Request::Manage_MA_Request::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* TA_MA_Request::Manage_MA_Request::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* TA_MA_Request::Manage_MA_Request::packet0 */ PT0_PositionReport_T_Packet_Tra *packet0,
  /* TA_MA_Request::Manage_MA_Request::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1,
  /* TA_MA_Request::Manage_MA_Request::t_train */ T_TRAIN t_train,
  /* TA_MA_Request::Manage_MA_Request::bus_in */ M_TrainTrackMessageBus_t_TM_Tra *bus_in,
  /* TA_MA_Request::Manage_MA_Request::modeLevel */ T_Mode_Level_Level_And_Mode_Typ *modeLevel,
  outC_Manage_MA_Request_TA_MA_Re *outC)
{
  /* TA_MA_Request::Manage_MA_Request */
  static kcg_bool tmp;
  
  /* 1 */ Receive_MA_RequestParameters_TA(message_in, &outC->Context_1);
  /* last_init_ck_triggerMA */ if (outC->init) {
    outC->init = kcg_false;
    tmp = kcg_false;
  }
  else {
    tmp = outC->triggerMA;
  }
  /* 1 */
  MA_Request_Supervision_TA_MA_Re(
    &outC->Context_1.MA_RequestParams,
    outC->Context_1.ma_received,
    tmp,
    trainPosition,
    systemTime,
    preindicationLocation,
    odometry,
    MAs,
    fromDriver,
    trackDescrDeleted,
    modeLevel,
    &outC->_1_Context_1);
  outC->triggerMA = outC->_1_Context_1.triggerMA;
  /* ck_triggerMA */ if (outC->triggerMA) {
    /* 1 */
    Build_MA_request_TA_MA_Request(
      trackDescrDeleted,
      trainProps,
      packet0,
      packet1,
      t_train,
      bus_in,
      &outC->_2_Context_1);
    kcg_copy_M_TrainTrackMessageBus(
      &outC->bus_out,
      &outC->_2_Context_1.bus_out);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus(&outC->bus_out, bus_in);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_MA_Request_TA_MA_Request.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

