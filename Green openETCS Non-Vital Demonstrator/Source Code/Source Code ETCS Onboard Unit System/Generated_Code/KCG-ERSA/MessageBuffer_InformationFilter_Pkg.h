/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */
#ifndef _MessageBuffer_InformationFilter_Pkg_H_
#define _MessageBuffer_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "FIFO_InformationFilter_Pkg_Common_3.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::outMessageValid */ outMessageValid;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::MessageBuffer::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FIFO_InformationFilter_Pkg_Common_3 /* 3 */ Context_3;
  outC_FIFO_InformationFilter_Pkg_Common_3 /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MessageBuffer_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::MessageBuffer */
extern void MessageBuffer_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromTrain */ReceivedMessage_T_Common_Types_Pkg *inMessageFromTrain,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBuffer */ReceivedMessage_T_Common_Types_Pkg *_2_inMessageFromLevelTransitionBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBufferValid */kcg_bool inMessageFromLevelTransitionBufferValid,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBuffer */ReceivedMessage_T_Common_Types_Pkg *_1_inMessageFromRBCTransitionBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBufferValid */kcg_bool inMessageFromRBCTransitionBufferValid,
  outC_MessageBuffer_InformationFilter_Pkg *outC);

extern void MessageBuffer_reset_InformationFilter_Pkg(
  outC_MessageBuffer_InformationFilter_Pkg *outC);

#endif /* _MessageBuffer_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MessageBuffer_InformationFilter_Pkg.h
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */

