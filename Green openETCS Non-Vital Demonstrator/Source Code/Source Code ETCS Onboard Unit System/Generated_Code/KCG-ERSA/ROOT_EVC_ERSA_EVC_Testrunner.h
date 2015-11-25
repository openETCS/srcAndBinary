/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:10
*************************************************************$ */
#ifndef _ROOT_EVC_ERSA_EVC_Testrunner_H_
#define _ROOT_EVC_ERSA_EVC_Testrunner_H_

#include "kcg_types.h"
#include "Write_int_to_EVC_to_DMI_Messages.h"
#include "Write_DMI_to_EVC_to_int_Messages.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"
#include "API_Frontend_balises_prelim_TM_API.h"
#include "API_Frontend_radio_prelim_TM_API.h"
#include "BTM_Toolbox_TrainModules.h"
#include "EVC.h"
#include "RTM_ERSA_ERSA_EVC_Testrunner.h"
#include "RemoteDMIBus_EnvSim.h"
#include "EVC_InputBuffer_Toolbox_Functions.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* ERSA_EVC_Testrunner::ROOT_EVC::EVC_reset */ EVC_reset;
  odometry_T_Obu_BasicTypes_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_Odometry */ API_Odometry;
  T_internal_Type_Obu_BasicTypes_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_SystemTime */ API_SystemTime;
  TIU_Input_msg_API_TIU_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_fromTIU */ API_fromTIU;
  DMI_to_EVC_Message_T_API_DMI_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_fromDMI */ API_fromDMI;
  BaliseTelegramHeader_int_T_TM /* ERSA_EVC_Testrunner::ROOT_EVC::Balise_telegram_header */ Balise_telegram_header;
  M_TrackTrain_Radio_T_TM_radio_messages /* ERSA_EVC_Testrunner::ROOT_EVC::Radio_message_header */ Radio_message_header;
  Packets_T_ERSA_EVC_Testrunner /* ERSA_EVC_Testrunner::ROOT_EVC::PacketStructure */ PacketStructure;
  CompressedPackets_T_Common_Types_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::CompressedPackets */ CompressedPackets;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_persistentData */ API_persistentData;
} inC_ROOT_EVC_ERSA_EVC_Testrunner;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ERSA_EVC_Testrunner::ROOT_EVC::resetOut */ resetOut;
  M_TrainTrack_Message_T_TM_radio_messages /* ERSA_EVC_Testrunner::ROOT_EVC::API_toRBC */ API_toRBC;
  TIU_Output_msg_API_TIU_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_toTIU */ API_toTIU;
  kcg_bool /* ERSA_EVC_Testrunner::ROOT_EVC::EVC_ready */ EVC_ready;
  L_internal_Type_Obu_BasicTypes_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::debugTrainPositionNominal */ debugTrainPositionNominal;
  L_internal_Type_Obu_BasicTypes_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::debugTrainPositionDeltaMax */ debugTrainPositionDeltaMax;
  L_internal_Type_Obu_BasicTypes_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::debugTrainPositionDeltaMin */ debugTrainPositionDeltaMin;
  kcg_real /* ERSA_EVC_Testrunner::ROOT_EVC::debugPermittedSpeed */ debugPermittedSpeed;
  kcg_real /* ERSA_EVC_Testrunner::ROOT_EVC::debugIinterventionSpeed */ debugIinterventionSpeed;
  M_MODE /* ERSA_EVC_Testrunner::ROOT_EVC::debugCurrentMode */ debugCurrentMode;
  M_LEVEL /* ERSA_EVC_Testrunner::ROOT_EVC::debugCurrentLevel */ debugCurrentLevel;
  EVC_to_DMI_Message_T_API_DMI_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_toDMI */ API_toDMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  RadioManagement_T_API_RadioCommunication_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_RTM_management */ API_RTM_management;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::TCP_fromDMI */ TCP_fromDMI;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RemoteDMIBus_EnvSim /* 1 */ _3_Context_1;
  outC_EVC /* 1 */ _2_Context_1;
  outC_EVC_InputBuffer_Toolbox_Functions /* 1 */ _1_Context_1;
  outC_RTM_ERSA_ERSA_EVC_Testrunner /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ROOT_EVC_ERSA_EVC_Testrunner;

/* ===========  node initialization and cycle functions  =========== */
/* ERSA_EVC_Testrunner::ROOT_EVC */
extern void ROOT_EVC_ERSA_EVC_Testrunner(
  inC_ROOT_EVC_ERSA_EVC_Testrunner *inC,
  outC_ROOT_EVC_ERSA_EVC_Testrunner *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ROOT_EVC_reset_ERSA_EVC_Testrunner(
  outC_ROOT_EVC_ERSA_EVC_Testrunner *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ROOT_EVC_init_ERSA_EVC_Testrunner(
  outC_ROOT_EVC_ERSA_EVC_Testrunner *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ROOT_EVC_ERSA_EVC_Testrunner_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ROOT_EVC_ERSA_EVC_Testrunner.h
** Generation date: 2015-11-25T14:46:10
*************************************************************$ */

