/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */
#ifndef _ROOT_EVC_ERSA_EVC_Testrunner_H_
#define _ROOT_EVC_ERSA_EVC_Testrunner_H_

#include "kcg_types.h"
#include "Write_int_to_EVC_to_DMI_Messages.h"
#include "Write_DMI_to_EVC_to_int_Messages.h"
#include "EVC.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* ERSA_EVC_Testrunner::ROOT_EVC::EVC_reset */ EVC_reset;
  odometry_T_Obu_BasicTypes_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_Odometry */ API_Odometry;
  T_internal_Type_Obu_BasicTypes_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_SystemTime */ API_SystemTime;
  API_TrackSideInput_T_API_Msg_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_fromTrack */ API_fromTrack;
  TIU_Input_msg_API_TIU_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_fromTIU */ API_fromTIU;
  mobileHWStatus_Type_MoRC_Pck /* ERSA_EVC_Testrunner::ROOT_EVC::API_mobileHWStatus */ API_mobileHWStatus;
  DMI_to_EVC_Message_T_API_DMI_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_fromDMI */ API_fromDMI;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_persistentData */ API_persistentData;
} inC_ROOT_EVC_ERSA_EVC_Testrunner;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ERSA_EVC_Testrunner::ROOT_EVC::resetOut */ resetOut;
  M_TrainTrack_Message_T_TM_radio_messages /* ERSA_EVC_Testrunner::ROOT_EVC::API_toRBC */ API_toRBC;
  RadioManagement_T_API_RadioCommunication_Pkg /* ERSA_EVC_Testrunner::ROOT_EVC::API_RTM_management */ API_RTM_management;
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
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EVC /* 1 */ Context_1;
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
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

