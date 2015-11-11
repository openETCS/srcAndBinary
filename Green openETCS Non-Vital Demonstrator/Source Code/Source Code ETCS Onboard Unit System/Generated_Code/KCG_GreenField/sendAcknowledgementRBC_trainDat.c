/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendAcknowledgementRBC_trainDat.h"

#ifndef KCG_USER_DEFINED_INIT
void sendAcknowledgementRBC_init_tra(outC_sendAcknowledgementRBC_tra *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->outMessageBus[i1].Message.valid = kcg_true;
    outC->outMessageBus[i1].Message.nid_message = 0;
    outC->outMessageBus[i1].Message.l_message = 0;
    outC->outMessageBus[i1].Message.t_train = 0;
    outC->outMessageBus[i1].Message.nid_engine = 0;
    outC->outMessageBus[i1].Message.field1 = 0;
    outC->outMessageBus[i1].Message.field2 = 0;
    outC->outMessageBus[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->outMessageBus[i1].OptionalPackets[i] = 0;
    }
  }
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = 0;
  /* 1 */ Send_M146_init_TM_radio_message(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendAcknowledgementRBC_reset_tr(outC_sendAcknowledgementRBC_tra *outC)
{
  /* 1 */ Send_M146_reset_TM_radio_messag(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::sendAcknowledgementRBC */
void sendAcknowledgementRBC_trainDat(
  /* trainData_pkg::sendAcknowledgementRBC::EVC_t_train */ T_TRAIN EVC_t_train,
  /* trainData_pkg::sendAcknowledgementRBC::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::sendAcknowledgementRBC::RBC_timeStamp */ T_TRAIN RBC_timeStamp,
  /* trainData_pkg::sendAcknowledgementRBC::actualStatus */ trainDataStatus_T_trainData_Typ *actualStatus,
  /* trainData_pkg::sendAcknowledgementRBC::MessageBus */ M_TrainTrackMessageBus_t_TM_Tra *MessageBus,
  /* trainData_pkg::sendAcknowledgementRBC::inVersion */ M_VERSION inVersion,
  outC_sendAcknowledgementRBC_tra *outC)
{
  /* trainData_pkg::sendAcknowledgementRBC */
  static M_146_T_TM_radio_messages tmp;
  
  /* 2 */
  headerMsg146_ng_trainData_pkg(nidEngine, EVC_t_train, RBC_timeStamp, &tmp);
  /* 1 */
  Send_M146_TM_radio_messages(
    EVC_t_train,
    MessageBus,
    &tmp,
    inVersion,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus(
    &outC->outMessageBus,
    &outC->Context_1.MessageBus_out);
  kcg_copy_trainDataStatus_T_trai(&outC->updatedStatus, actualStatus);
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendAcknowledgementRBC_trainDat.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

