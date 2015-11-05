/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _collectRadioOutput_radioOutput
#define _collectRadioOutput_radioOutput

#include "kcg_types.h"
#include "patchMsgFlow_RadioSupport_Pkg.h"
#include "BufferOutput_TM_lib_internal.h"
#include "mapCMDToRTM_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio /* radioOutput_Pkg::collectRadioOutput::toRBC */ toRBC;
  RadioManagement_T_API_RadioComm /* radioOutput_Pkg::collectRadioOutput::API_RTM_management */ API_RTM_management;
  NID_RADIO /* radioOutput_Pkg::collectRadioOutput::outRadio */ outRadio;
  NID_MN /* radioOutput_Pkg::collectRadioOutput::outMN */ outMN;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* radioOutput_Pkg::collectRadioOutput::RTMisActive */ RTMisActive;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BufferOutput_TM_lib_intern /* 1 */ _1_Context_1;
  outC_mapCMDToRTM_radioOutput_Pk /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_collectRadioOutput_radioOu;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::collectRadioOutput */
extern void collectRadioOutput_radioOutput_(
  /* radioOutput_Pkg::collectRadioOutput::MessageBus */ M_TrainTrackMessageBus_t_TM_Tra *MessageBus,
  /* radioOutput_Pkg::collectRadioOutput::insafeSessionEstablished */ kcg_bool insafeSessionEstablished,
  /* radioOutput_Pkg::collectRadioOutput::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Typ *inModeAndLevel,
  /* radioOutput_Pkg::collectRadioOutput::mobileHWStatus */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatus,
  /* radioOutput_Pkg::collectRadioOutput::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types *mobileConnectionCMD,
  /* radioOutput_Pkg::collectRadioOutput::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Typ *mobileRegistrationCMD,
  /* radioOutput_Pkg::collectRadioOutput::inVersion */ M_VERSION inVersion,
  /* radioOutput_Pkg::collectRadioOutput::inT_TRAIN */ T_TRAIN inT_TRAIN,
  outC_collectRadioOutput_radioOu *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void collectRadioOutput_reset_radioO(
  outC_collectRadioOutput_radioOu *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void collectRadioOutput_init_radioOu(
  outC_collectRadioOutput_radioOu *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _collectRadioOutput_radioOutput */
/* $**************** KCG Version 6.4 (build i21) ****************
** collectRadioOutput_radioOutput_.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

