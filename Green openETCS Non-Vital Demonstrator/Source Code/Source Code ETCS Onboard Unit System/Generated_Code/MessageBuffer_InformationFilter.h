/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _MessageBuffer_InformationFilte
#define _MessageBuffer_InformationFilte

#include "kcg_types.h"
#include "FIFO_InformationFilter_Pkg_Comm.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::outMessageValid */ outMessageValid;
  ReceivedMessage_T_Common_Types_ /* InformationFilter_Pkg::MessageBuffer::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FIFO_InformationFilter_Pkg /* 2 */ Context_2;
  outC_FIFO_InformationFilter_Pkg /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MessageBuffer_InformationF;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::MessageBuffer */
extern void MessageBuffer_InformationFilter(
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromTrain */ ReceivedMessage_T_Common_Types_ *inMessageFromTrain,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBuffer */ ReceivedMessage_T_Common_Types_ *_2_inMessageFromLevelTransition,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBufferValid */ kcg_bool inMessageFromLevelTransitionBuf,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBuffer */ ReceivedMessage_T_Common_Types_ *_1_inMessageFromRBCTransitionBu,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBufferValid */ kcg_bool inMessageFromRBCTransitionBuffe,
  outC_MessageBuffer_InformationF *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MessageBuffer_reset_Information(
  outC_MessageBuffer_InformationF *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MessageBuffer_init_InformationF(
  outC_MessageBuffer_InformationF *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MessageBuffer_InformationFilte */
/* $**************** KCG Version 6.4 (build i21) ****************
** MessageBuffer_InformationFilter.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

