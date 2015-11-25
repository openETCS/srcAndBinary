/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_request_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_MA_request_init_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC)
{
  kcg_int i1;
  kcg_int i;
  
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
  /* 1 */ Send_M132_init_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_MA_request_reset_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC)
{
  /* 1 */ Send_M132_reset_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::Build_MA_request */
void Build_MA_request_TA_MA_Request(
  /* TA_MA_Request::Build_MA_request::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* TA_MA_Request::Build_MA_request::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_MA_Request::Build_MA_request::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_MA_Request::Build_MA_request::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_MA_Request::Build_MA_request::t_train */ T_TRAIN t_train,
  /* TA_MA_Request::Build_MA_request::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Build_MA_request_TA_MA_Request *outC)
{
  /* TA_MA_Request::Build_MA_request */ M_132_T_TM_radio_messages mk_struct;
  /* TA_MA_Request::Build_MA_request */ Q_MARQSTREASON tmp2;
  /* TA_MA_Request::Build_MA_request */ P000_TM_TrainToTrack tmp1;
  /* TA_MA_Request::Build_MA_request */ P001_TM_TrainToTrack tmp;
  
  /* 1 */ if (trackDescrDeleted) {
    tmp2 = Q_MARQSTREASON_Track_description_deleted;
  }
  else {
    tmp2 = Q_MARQSTREASON_Start_selected_by_driver;
  }
  /* 1 */ C_legacy_P000_TM_conversions_TrainToTrack(packet0, &tmp1);
  /* 1 */ C_legacy_P001_TM_conversions_TrainToTrack(packet1, &tmp);
  mk_struct.valid = kcg_true;
  mk_struct.nid_message = 132;
  mk_struct.l_message = 0;
  mk_struct.t_train = 0;
  mk_struct.nid_engine = (*trainProps).nid_engine;
  mk_struct.q_marqstreason = tmp2;
  /* 1 */
  Send_M132_TM_radio_messages(
    t_train,
    bus_in,
    &mk_struct,
    &tmp1,
    &tmp,
    (P009_TM_TrainToTrack *) &DEFAULT_P009_TA_MA_Request,
    cM_version_TA_MA_Request,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->Context_1.MessageBus_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MA_request_TA_MA_Request.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

