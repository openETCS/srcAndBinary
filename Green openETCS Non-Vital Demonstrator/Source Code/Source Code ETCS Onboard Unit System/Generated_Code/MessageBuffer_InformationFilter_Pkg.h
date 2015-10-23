/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */
#ifndef _MessageBuffer_InformationFilter_Pkg_H_
#define _MessageBuffer_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "FIFO_InformationFilter_Pkg_Common_3.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::outMessageValid */ outMessageValid;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::MessageBuffer::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FIFO_InformationFilter_Pkg_Common_3 /* 2 */ Context_2;
  outC_FIFO_InformationFilter_Pkg_Common_3 /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MessageBuffer_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::MessageBuffer */
extern void MessageBuffer_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromTrain */ ReceivedMessage_T_Common_Types_Pkg *inMessageFromTrain,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBuffer */ ReceivedMessage_T_Common_Types_Pkg *inMessageFromLevelTransitionBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBufferValid */ kcg_bool inMessageFromLevelTransitionBufferValid,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBuffer */ ReceivedMessage_T_Common_Types_Pkg *inMessageFromRBCTransitionBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBufferValid */ kcg_bool inMessageFromRBCTransitionBufferValid,
  outC_MessageBuffer_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MessageBuffer_reset_InformationFilter_Pkg(
  outC_MessageBuffer_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MessageBuffer_init_InformationFilter_Pkg(
  outC_MessageBuffer_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MessageBuffer_InformationFilter_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MessageBuffer_InformationFilter_Pkg.h
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

