/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */
#ifndef _MoRC_Main_MoRC_Pck_H_
#define _MoRC_Main_MoRC_Pck_H_

#include "kcg_types.h"
#include "genMsgToRBC_MoRC_Pck_Coder_Pkg.h"
#include "decM32_MoRC_Pck_Coder_Pkg.h"
#include "decM38_MoRC_Pck_Coder_Pkg.h"
#include "decM39_MoRC_Pck_Coder_Pkg.h"
#include "decP42_MoRC_Pck_Coder_Pkg.h"
#include "decP45_MoRC_Pck_Coder_Pkg.h"
#include "managementOfRadioCommunication_MoRC_Pck.h"
#include "Send_M154_TM_radio_messages.h"
#include "Send_M159_TM_radio_messages.h"
#include "Send_M156_TM_radio_messages.h"
#include "Send_M155_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::MoRC_Main::ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession */ ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession;
  kcg_bool /* MoRC_Pck::MoRC_Main::sendAPositionReport */ sendAPositionReport;
  mobileHWCmd_Type_MoRC_Pck /* MoRC_Pck::MoRC_Main::cmdsToMobile */ cmdsToMobile;
  kcg_bool /* MoRC_Pck::MoRC_Main::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* MoRC_Pck::MoRC_Main::currentRadioNetworkID */ currentRadioNetworkID;
  kcg_bool /* MoRC_Pck::MoRC_Main::orderTheRegistrationOfItsConnectedMobiles */ orderTheRegistrationOfItsConnectedMobiles;
  kcg_bool /* MoRC_Pck::MoRC_Main::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  kcg_bool /* MoRC_Pck::MoRC_Main::InformTheDriverThatNoConnectionWasSetup */ InformTheDriverThatNoConnectionWasSetup;
  safeRadioConnectionStatusValid_Type_MoRC_Pck /* MoRC_Pck::MoRC_Main::safeRadioConnectionStatus_toDriver */ safeRadioConnectionStatus_toDriver;
  mobileSWStatus_Type_MoRC_Pck /* MoRC_Pck::MoRC_Main::mobileSWStatus */ mobileSWStatus;
  kcg_bool /* MoRC_Pck::MoRC_Main::requestTheSetupOfASafeRadioConnection */ requestTheSetupOfASafeRadioConnection;
  kcg_bool /* MoRC_Pck::MoRC_Main::requestReleaseOfSafeRadioConnectionWithTrackside */ requestReleaseOfSafeRadioConnectionWithTrackside;
  kcg_bool /* MoRC_Pck::MoRC_Main::sessionSuccessfullyEstablished */ sessionSuccessfullyEstablished;
  sessionStatus_Type_Radio_Types_Pkg /* MoRC_Pck::MoRC_Main::sessionStatus */ sessionStatus;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MoRC_Pck::MoRC_Main::MessageToRBC */ MessageToRBC;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* MoRC_Pck::MoRC_Main::msgBus_out */ msgBus_out;
  kcg_bool /* MoRC_Pck::MoRC_Main::ready */ ready;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M155_TM_radio_messages /* 1 */ _3_Context_1;
  outC_Send_M156_TM_radio_messages /* 1 */ _2_Context_1;
  outC_Send_M159_TM_radio_messages /* 1 */ _1_Context_1;
  outC_Send_M154_TM_radio_messages /* 1 */ Context_1;
  outC_managementOfRadioCommunication_MoRC_Pck /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MoRC_Main_MoRC_Pck;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::MoRC_Main */
extern void MoRC_Main_MoRC_Pck(
  /* MoRC_Pck::MoRC_Main::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::MoRC_Main::mode */ M_MODE mode,
  /* MoRC_Pck::MoRC_Main::level */ M_LEVEL level,
  /* MoRC_Pck::MoRC_Main::obuEventsAndPhases */ obuEventsAndPhases_T_MoRC_Pck *obuEventsAndPhases,
  /* MoRC_Pck::MoRC_Main::radioNetworkIDs */ radioNetWorkIDs_T_MoRC_Pck *radioNetworkIDs,
  /* MoRC_Pck::MoRC_Main::statusOfMobile */ mobileHWStatus_Type_MoRC_Pck *statusOfMobile,
  /* MoRC_Pck::MoRC_Main::inMessage_new */ msgFromTrack_T_RCM_MsgTypes_Pkg *inMessage_new,
  /* MoRC_Pck::MoRC_Main::t_train */ T_TRAIN t_train,
  /* MoRC_Pck::MoRC_Main::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MoRC_Pck::MoRC_Main::msgBus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBus_in,
  /* MoRC_Pck::MoRC_Main::connectionStatusTimerInterval */ time_Type_MoRC_Pck connectionStatusTimerInterval,
  /* MoRC_Pck::MoRC_Main::nid_engine */ NID_ENGINE nid_engine,
  /* MoRC_Pck::MoRC_Main::onboardPhoneNumbers */ PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *onboardPhoneNumbers,
  /* MoRC_Pck::MoRC_Main::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* MoRC_Pck::MoRC_Main::m_version */ M_VERSION m_version,
  outC_MoRC_Main_MoRC_Pck *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MoRC_Main_reset_MoRC_Pck(outC_MoRC_Main_MoRC_Pck *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MoRC_Main_init_MoRC_Pck(outC_MoRC_Main_MoRC_Pck *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MoRC_Main_MoRC_Pck_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MoRC_Main_MoRC_Pck.h
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */

