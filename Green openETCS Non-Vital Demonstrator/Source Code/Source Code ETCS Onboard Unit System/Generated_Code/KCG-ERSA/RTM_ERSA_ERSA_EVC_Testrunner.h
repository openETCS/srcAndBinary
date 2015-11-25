/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */
#ifndef _RTM_ERSA_ERSA_EVC_Testrunner_H_
#define _RTM_ERSA_ERSA_EVC_Testrunner_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* ERSA_EVC_Testrunner::RTM_ERSA::TrackMessage */ TrackMessage;
  mobileHWStatus_Type_MoRC_Pck /* ERSA_EVC_Testrunner::RTM_ERSA::mobileHWStatus */ mobileHWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init2;
  kcg_bool init;
  kcg_bool init3;
  /* ----------------------- local memories  ------------------------- */
  struct_119976 /* ERSA_EVC_Testrunner::RTM_ERSA */ _1_fby_RTM_ERSA_ERSA_EVC_Testrunner;
  struct_119976 /* ERSA_EVC_Testrunner::RTM_ERSA */ fby_RTM_ERSA_ERSA_EVC_Testrunner;
  SSM_ST_GSM_R_MobileManagement /* ERSA_EVC_Testrunner::RTM_ERSA::GSM_R_MobileManagement */ GSM_R_MobileManagement_state_nxt;
  kcg_bool /* ERSA_EVC_Testrunner::RTM_ERSA::registrationFinished */ registrationFinished;
  kcg_bool /* ERSA_EVC_Testrunner::RTM_ERSA::connectionEstablished */ connectionEstablished;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RTM_ERSA_ERSA_EVC_Testrunner;

/* ===========  node initialization and cycle functions  =========== */
/* ERSA_EVC_Testrunner::RTM_ERSA */
extern void RTM_ERSA_ERSA_EVC_Testrunner(
  /* ERSA_EVC_Testrunner::RTM_ERSA::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* ERSA_EVC_Testrunner::RTM_ERSA::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* ERSA_EVC_Testrunner::RTM_ERSA::RadioHeader */ Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioHeader,
  /* ERSA_EVC_Testrunner::RTM_ERSA::RadioManagementMessage */ RadioManagement_T_API_RadioCommunication_Pkg *RadioManagementMessage,
  outC_RTM_ERSA_ERSA_EVC_Testrunner *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RTM_ERSA_reset_ERSA_EVC_Testrunner(
  outC_RTM_ERSA_ERSA_EVC_Testrunner *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RTM_ERSA_init_ERSA_EVC_Testrunner(
  outC_RTM_ERSA_ERSA_EVC_Testrunner *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RTM_ERSA_ERSA_EVC_Testrunner_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RTM_ERSA_ERSA_EVC_Testrunner.h
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

