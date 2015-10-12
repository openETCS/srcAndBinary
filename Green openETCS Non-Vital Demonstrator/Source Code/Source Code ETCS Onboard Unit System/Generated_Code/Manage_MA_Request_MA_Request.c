/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_MA_Request_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void Manage_MA_Request_init_MA_Request(outC_Manage_MA_Request_MA_Request *outC)
{
  static kcg_int i;
  
  outC->triggerMA = kcg_true;
  outC->init = kcg_true;
  outC->exception = kcg_true;
  outC->message_out.present = kcg_true;
  outC->message_out.header.present = kcg_true;
  outC->message_out.header.nid_message = 0;
  outC->message_out.header.t_train = 0.0;
  outC->message_out.header.nid_engine = 0;
  outC->message_out.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->message_out.header.xT_TRAIN = 0.0;
  outC->message_out.header.xNID_EM = 0;
  outC->message_out.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->message_out.header.xNID_TEXTMESSAGE = 0;
  outC->message_out.packets.p0.valid = kcg_true;
  outC->message_out.packets.p0.packet0.NID_PACKET = 0;
  outC->message_out.packets.p0.packet0.L_PACKET = 0;
  outC->message_out.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->message_out.packets.p0.packet0.NID_LRBG = 0;
  outC->message_out.packets.p0.packet0.D_LRBG = 0;
  outC->message_out.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message_out.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->message_out.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->message_out.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->message_out.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message_out.packets.p0.packet0.L_TRAININT = 0;
  outC->message_out.packets.p0.packet0.V_TRAIN = 0;
  outC->message_out.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message_out.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->message_out.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->message_out.packets.p0.packet0.NID_NTC = 0;
  outC->message_out.packets.p1.valid = kcg_true;
  outC->message_out.packets.p1.packet1.NID_PACKET = 0;
  outC->message_out.packets.p1.packet1.L_PACKET = 0;
  outC->message_out.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->message_out.packets.p1.packet1.NID_LRBG = 0;
  outC->message_out.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->message_out.packets.p1.packet1.D_LRBG = 0;
  outC->message_out.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message_out.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->message_out.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->message_out.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->message_out.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message_out.packets.p1.packet1.L_TRAININT = 0;
  outC->message_out.packets.p1.packet1.V_TRAIN = 0;
  outC->message_out.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message_out.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->message_out.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->message_out.packets.p1.packet1.NID_NTC = 0;
  outC->message_out.packets.p3.valid = kcg_true;
  outC->message_out.packets.p3.number = 0;
  outC->message_out.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->message_out.packets.p3.aNID_RADIO[0].telephoneNumber[i] = 0;
  }
  outC->message_out.packets.p4.valid = kcg_true;
  outC->message_out.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->message_out.packets.p5.valid = kcg_true;
  outC->message_out.packets.p5.TrainRunningNumber = 0;
  outC->message_out.packets.p9.valid = kcg_true;
  outC->message_out.packets.p9.transitionInformation = 0;
  outC->message_out.packets.p11.valid = kcg_true;
  outC->message_out.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->message_out.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->message_out.packets.p11.l_train = 0;
  outC->message_out.packets.p11.v_maxtrain = 0;
  outC->message_out.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->message_out.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->message_out.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->message_out.packets.p11.n_axle = 0;
  outC->message_out.packets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 3; i++) {
    outC->message_out.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->message_out.packets.p11.tractionIdentity[i].nid_ctraction = 0;
  }
  outC->message_out.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 3; i++) {
    outC->message_out.packets.p11.nid_ntc[i] = 0;
  }
  /* 1 */ MA_Request_Supervision_init_MA_Request(&outC->_1_Context_1);
  /* 1 */ Receive_MA_RequestParameters_init_MA_Request(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_MA_Request_reset_MA_Request(outC_Manage_MA_Request_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 1 */ MA_Request_Supervision_reset_MA_Request(&outC->_1_Context_1);
  /* 1 */ Receive_MA_RequestParameters_reset_MA_Request(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MA_Request::Manage_MA_Request */
void Manage_MA_Request_MA_Request(
  /* MA_Request::Manage_MA_Request::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MA_Request::Manage_MA_Request::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* MA_Request::Manage_MA_Request::message_in */ ReceivedMessage_T_Common_Types_Pkg *message_in,
  /* MA_Request::Manage_MA_Request::preindicationLocation */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* MA_Request::Manage_MA_Request::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* MA_Request::Manage_MA_Request::MAs */ MovementAuthority_t_TrackAtlasTypes *MAs,
  /* MA_Request::Manage_MA_Request::fromDriver */ Driver2MAR_T_MA_Request *fromDriver,
  /* MA_Request::Manage_MA_Request::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* MA_Request::Manage_MA_Request::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* MA_Request::Manage_MA_Request::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* MA_Request::Manage_MA_Request::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* MA_Request::Manage_MA_Request::t_train */ T_TRAIN t_train,
  /* MA_Request::Manage_MA_Request::ModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  outC_Manage_MA_Request_MA_Request *outC)
{
  /* MA_Request::Manage_MA_Request */
  static kcg_bool tmp1;
  /* MA_Request::Manage_MA_Request */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg tmp;
  /* MA_Request::Manage_MA_Request::_L34 */
  static kcg_bool _L34;
  
  _L34 = (*ModeLevel).level == M_LEVEL_Level_2;
  /* 1 */ Receive_MA_RequestParameters_MA_Request(message_in, &outC->Context_1);
  /* ck__L34 */ if (_L34) {
    /* last_init_ck_triggerMA */ if (outC->init) {
      tmp1 = kcg_false;
    }
    else {
      tmp1 = outC->triggerMA;
    }
    /* 1 */
    MA_Request_Supervision_MA_Request(
      &outC->Context_1.MA_RequestParams,
      outC->Context_1.ma_received,
      tmp1,
      trainPosition,
      systemTime,
      preindicationLocation,
      odometry,
      MAs,
      fromDriver,
      trackDescrDeleted,
      ModeLevel,
      &outC->_1_Context_1);
    outC->exception = outC->_1_Context_1.exception;
    outC->triggerMA = outC->_1_Context_1.triggerMA;
  }
  else {
    outC->triggerMA = kcg_false;
    outC->exception = kcg_false;
  }
  outC->init = kcg_false;
  /* ck_triggerMA */ if (outC->triggerMA) {
    /* 1 */
    Build_MA_request_MA_Request(
      trackDescrDeleted,
      trainProps,
      packet0,
      packet1,
      t_train,
      &tmp);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &tmp,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *) &cPacket132_MA_Request);
  }
  /* 1 */ Send_MA_MA_Request(&tmp, &outC->message_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_MA_Request_MA_Request.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

