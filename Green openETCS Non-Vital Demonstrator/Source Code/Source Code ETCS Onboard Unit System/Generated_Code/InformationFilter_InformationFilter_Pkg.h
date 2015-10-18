/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */
#ifndef _InformationFilter_InformationFilter_Pkg_H_
#define _InformationFilter_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "FirstFilter_InformationFilter_Pkg_FirstFilter.h"
#include "SecondFilter_InformationFilter_Pkg_SecondFilter.h"
#include "ThirdFilter_InformationFilter_Pkg_ThirdFilter.h"
#include "MessageBuffer_InformationFilter_Pkg.h"
#include "LevelTransitionEffective_InformationFilter_Pkg.h"
#include "RbcTransitionEffective_InformationFilter_Pkg.h"
#include "TransitionBuffer_InformationFilter_Pkg_Common.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::InformationFilter::outAcceptedMessage */ outAcceptedMessage;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L38 */ _L38;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L37 */ _L37;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L40 */ _L40;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L39 */ _L39;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransitionBuffer_InformationFilter_Pkg_Common /* 2 */ Context_2;
  outC_RbcTransitionEffective_InformationFilter_Pkg /* 1 */ _3_Context_1;
  outC_TransitionBuffer_InformationFilter_Pkg_Common /* 1 */ _2_Context_1;
  outC_LevelTransitionEffective_InformationFilter_Pkg /* 1 */ _1_Context_1;
  outC_MessageBuffer_InformationFilter_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_InformationFilter_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::InformationFilter */
extern void InformationFilter_InformationFilter_Pkg(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inModus */ M_MODE inModus,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */ kcg_bool inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */ kcg_bool inTrainDataValid,
  outC_InformationFilter_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InformationFilter_init_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _InformationFilter_InformationFilter_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** InformationFilter_InformationFilter_Pkg.h
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */

