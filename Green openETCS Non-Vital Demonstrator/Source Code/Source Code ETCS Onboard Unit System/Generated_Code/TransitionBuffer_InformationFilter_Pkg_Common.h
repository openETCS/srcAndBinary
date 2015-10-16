/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */
#ifndef _TransitionBuffer_InformationFilter_Pkg_Common_H_
#define _TransitionBuffer_InformationFilter_Pkg_Common_H_

#include "kcg_types.h"
#include "count_down_digital.h"
#include "FIFO_InformationFilter_Pkg_Common_3.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::TransitionBuffer::outMessage */ outMessage;
  kcg_bool /* InformationFilter_Pkg::Common::TransitionBuffer::outMessageAvailable */ outMessageAvailable;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* InformationFilter_Pkg::Common::TransitionBuffer::_L10 */ _L10;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_count_down_digital /* 1 */ _1_Context_1;
  outC_FIFO_InformationFilter_Pkg_Common_3 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TransitionBuffer_InformationFilter_Pkg_Common;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::Common::TransitionBuffer */
extern void TransitionBuffer_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::TransitionBuffer::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inStoreMessage */ kcg_bool inStoreMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inFlushMessages */ kcg_bool inFlushMessages,
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TransitionBuffer_reset_InformationFilter_Pkg_Common(
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TransitionBuffer_init_InformationFilter_Pkg_Common(
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TransitionBuffer_InformationFilter_Pkg_Common_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_InformationFilter_Pkg_Common.h
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */

