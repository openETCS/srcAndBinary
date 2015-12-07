/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _InformationFilter_InformationF
#define _InformationFilter_InformationF

#include "kcg_types.h"
#include "FilterSequence_InformationFilte.h"
#include "TransitionBuffer_InformationFil.h"
#include "flagsForLevelChange_Information.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_ /* InformationFilter_Pkg::InformationFilter::outMessage */ outMessage;
  T_Data_From_Track_MASSPGradient /* InformationFilter_Pkg::InformationFilter::IF_toML */ IF_toML;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _191_SSM_ST_SM1 /* InformationFilter_Pkg::InformationFilter::SM1 */ SM1_state_nxt;
  ReceivedMessage_T_Common_Types_ /* InformationFilter_Pkg::InformationFilter::bufferMsg */ bufferMsg;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::storeInBuffer */ storeInBuffer;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::bufferHasPriority */ bufferHasPriority;
  kcg_int /* InformationFilter_Pkg::InformationFilter::currBuffersize */ currBuffersize;
  ReceivedMessage_T_Common_Types_ /* InformationFilter_Pkg::InformationFilter::_L108 */ _L108;
  kcg_int /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */ rem_inSupervisingDevice;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_flagsForLevelChange_Inform /* 1 */ _1_Context_1;
  outC_TransitionBuffer_Informati /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_InformationFilter_Informat;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::InformationFilter */
extern void InformationFilter_InformationFi(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inModeLevel */ T_Mode_Level_Level_And_Mode_Typ *inModeLevel,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */ kcg_bool inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */ kcg_bool inTrainDataValid,
  /* InformationFilter_Pkg::InformationFilter::inMorcStatus */ morcStatus_T_RCM_Session_Types_ *inMorcStatus,
  outC_InformationFilter_Informat *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InformationFilter_reset_Informa(
  outC_InformationFilter_Informat *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InformationFilter_init_Informat(
  outC_InformationFilter_Informat *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _InformationFilter_InformationF */
/* $**************** KCG Version 6.4 (build i21) ****************
** InformationFilter_InformationFi.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

