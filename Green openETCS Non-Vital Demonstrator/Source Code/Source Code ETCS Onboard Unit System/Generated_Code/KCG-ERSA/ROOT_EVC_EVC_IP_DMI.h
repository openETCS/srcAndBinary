/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:23
*************************************************************$ */
#ifndef _ROOT_EVC_EVC_IP_DMI_H_
#define _ROOT_EVC_EVC_IP_DMI_H_

#include "kcg_types.h"
#include "EVC.h"
#include "RemoteDMIBus_EnvSim.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* EVC_IP_DMI::ROOT_EVC::EVC_reset */ EVC_reset;
  odometry_T_Obu_BasicTypes_Pkg /* EVC_IP_DMI::ROOT_EVC::API_Odometry */ API_Odometry;
  T_internal_Type_Obu_BasicTypes_Pkg /* EVC_IP_DMI::ROOT_EVC::API_SystemTime */ API_SystemTime;
  API_TrackSideInput_T_API_Msg_Pkg /* EVC_IP_DMI::ROOT_EVC::API_fromTrack */ API_fromTrack;
  TIU_Input_msg_API_TIU_Pkg /* EVC_IP_DMI::ROOT_EVC::API_fromTIU */ API_fromTIU;
  mobileHWStatus_Type_MoRC_Pck /* EVC_IP_DMI::ROOT_EVC::API_mobileHWStatus */ API_mobileHWStatus;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* EVC_IP_DMI::ROOT_EVC::API_persistentData */ API_persistentData;
} inC_ROOT_EVC_EVC_IP_DMI;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EVC_IP_DMI::ROOT_EVC::resetOut */ resetOut;
  M_TrainTrack_Message_T_TM_radio_messages /* EVC_IP_DMI::ROOT_EVC::API_toRBC */ API_toRBC;
  RadioManagement_T_API_RadioCommunication_Pkg /* EVC_IP_DMI::ROOT_EVC::API_RTM_management */ API_RTM_management;
  TIU_Output_msg_API_TIU_Pkg /* EVC_IP_DMI::ROOT_EVC::API_toTIU */ API_toTIU;
  kcg_bool /* EVC_IP_DMI::ROOT_EVC::EVC_ready */ EVC_ready;
  L_internal_Type_Obu_BasicTypes_Pkg /* EVC_IP_DMI::ROOT_EVC::debugTrainPositionNominal */ debugTrainPositionNominal;
  L_internal_Type_Obu_BasicTypes_Pkg /* EVC_IP_DMI::ROOT_EVC::debugTrainPositionDeltaMax */ debugTrainPositionDeltaMax;
  L_internal_Type_Obu_BasicTypes_Pkg /* EVC_IP_DMI::ROOT_EVC::debugTrainPositionDeltaMin */ debugTrainPositionDeltaMin;
  kcg_real /* EVC_IP_DMI::ROOT_EVC::debugPermittedSpeed */ debugPermittedSpeed;
  kcg_real /* EVC_IP_DMI::ROOT_EVC::debugIinterventionSpeed */ debugIinterventionSpeed;
  M_MODE /* EVC_IP_DMI::ROOT_EVC::debugCurrentMode */ debugCurrentMode;
  M_LEVEL /* EVC_IP_DMI::ROOT_EVC::debugCurrentLevel */ debugCurrentLevel;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* EVC_IP_DMI::ROOT_EVC::_L4 */ rem__L4;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RemoteDMIBus_EnvSim /* 1 */ _1_Context_1;
  outC_EVC /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ROOT_EVC_EVC_IP_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_IP_DMI::ROOT_EVC */
extern void ROOT_EVC_EVC_IP_DMI(
  inC_ROOT_EVC_EVC_IP_DMI *inC,
  outC_ROOT_EVC_EVC_IP_DMI *outC);

extern void ROOT_EVC_reset_EVC_IP_DMI(outC_ROOT_EVC_EVC_IP_DMI *outC);

#endif /* _ROOT_EVC_EVC_IP_DMI_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ROOT_EVC_EVC_IP_DMI.h
** Generation date: 2015-11-09T11:52:23
*************************************************************$ */

