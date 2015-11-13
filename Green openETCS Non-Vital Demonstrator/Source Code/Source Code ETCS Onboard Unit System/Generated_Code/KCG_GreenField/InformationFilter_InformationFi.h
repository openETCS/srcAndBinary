/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _InformationFilter_InformationF
#define _InformationFilter_InformationF

#include "kcg_types.h"
#include "FirstFilter_InformationFilter_P.h"
#include "SecondFilter_InformationFilter_.h"
#include "ThirdFilter_InformationFilter_P.h"
#include "MessageBuffer_InformationFilter.h"
#include "LevelTransitionEffective_Inform.h"
#include "RbcTransitionEffective_Informat.h"
#include "TransitionBuffer_InformationFil.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::InformationFilter::outAcceptedMessage */ outAcceptedMessage;
  ReceivedMessage_T_Common_Types_ /* InformationFilter_Pkg::InformationFilter::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L38 */ _L38;
  ReceivedMessage_T_Common_Types_ /* InformationFilter_Pkg::InformationFilter::_L37 */ _L37;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L40 */ _L40;
  ReceivedMessage_T_Common_Types_ /* InformationFilter_Pkg::InformationFilter::_L39 */ _L39;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransitionBuffer_Informati /* 2 */ Context_2;
  outC_RbcTransitionEffective_Inf /* 1 */ _3_Context_1;
  outC_TransitionBuffer_Informati /* 1 */ _2_Context_1;
  outC_LevelTransitionEffective_I /* 1 */ _1_Context_1;
  outC_MessageBuffer_InformationF /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_InformationFilter_Informat;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::InformationFilter */
extern void InformationFilter_InformationFi(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inModus */ M_MODE inModus,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */ kcg_bool inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */ kcg_bool inTrainDataValid,
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
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

