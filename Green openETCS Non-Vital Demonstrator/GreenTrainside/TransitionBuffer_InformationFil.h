/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */
#ifndef _TransitionBuffer_InformationFi
#define _TransitionBuffer_InformationFi

#include "kcg_types.h"
#include "count_down_digital.h"
#include "FIFO_InformationFilter_Pkg_Comm.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_ /* InformationFilter_Pkg::Common::TransitionBuffer::outMessage */ outMessage;
  kcg_bool /* InformationFilter_Pkg::Common::TransitionBuffer::outMessageAvailable */ outMessageAvailable;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* InformationFilter_Pkg::Common::TransitionBuffer::_L10 */ _L10;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_count_down_digital /* 1 */ _1_Context_1;
  outC_FIFO_InformationFilter_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TransitionBuffer_Informati;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::Common::TransitionBuffer */
extern void TransitionBuffer_InformationFil(
  /* InformationFilter_Pkg::Common::TransitionBuffer::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inStoreMessage */ kcg_bool inStoreMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inFlushMessages */ kcg_bool inFlushMessages,
  outC_TransitionBuffer_Informati *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TransitionBuffer_reset_Informat(
  outC_TransitionBuffer_Informati *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TransitionBuffer_init_Informati(
  outC_TransitionBuffer_Informati *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TransitionBuffer_InformationFi */
/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_InformationFil.h
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */

