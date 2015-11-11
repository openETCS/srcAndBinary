/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */
#ifndef _sendAcknowledgementRBC_trainDa
#define _sendAcknowledgementRBC_trainDa

#include "kcg_types.h"
#include "headerMsg146_ng_trainData_pkg.h"
#include "Send_M146_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainDataStatus_T_trainData_Typ /* trainData_pkg::sendAcknowledgementRBC::updatedStatus */ updatedStatus;
  M_TrainTrackMessageBus_t_TM_Tra /* trainData_pkg::sendAcknowledgementRBC::outMessageBus */ outMessageBus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M146_TM_radio_message /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_sendAcknowledgementRBC_tra;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::sendAcknowledgementRBC */
extern void sendAcknowledgementRBC_trainDat(
  /* trainData_pkg::sendAcknowledgementRBC::EVC_t_train */ T_TRAIN EVC_t_train,
  /* trainData_pkg::sendAcknowledgementRBC::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::sendAcknowledgementRBC::RBC_timeStamp */ T_TRAIN RBC_timeStamp,
  /* trainData_pkg::sendAcknowledgementRBC::actualStatus */ trainDataStatus_T_trainData_Typ *actualStatus,
  /* trainData_pkg::sendAcknowledgementRBC::MessageBus */ M_TrainTrackMessageBus_t_TM_Tra *MessageBus,
  /* trainData_pkg::sendAcknowledgementRBC::inVersion */ M_VERSION inVersion,
  outC_sendAcknowledgementRBC_tra *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendAcknowledgementRBC_reset_tr(
  outC_sendAcknowledgementRBC_tra *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendAcknowledgementRBC_init_tra(
  outC_sendAcknowledgementRBC_tra *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _sendAcknowledgementRBC_trainDa */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendAcknowledgementRBC_trainDat.h
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

