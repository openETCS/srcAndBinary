/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendAcknowledgementRBC_trainData_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void sendAcknowledgementRBC_init_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  kcg_int i1;
  kcg_int i;
  
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
  /* 1 */ Send_M146_init_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendAcknowledgementRBC_reset_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  /* 1 */ Send_M146_reset_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::sendAcknowledgementRBC */
void sendAcknowledgementRBC_trainData_pkg(
  /* trainData_pkg::sendAcknowledgementRBC::EVC_t_train */ T_TRAIN EVC_t_train,
  /* trainData_pkg::sendAcknowledgementRBC::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::sendAcknowledgementRBC::RBC_timeStamp */ T_TRAIN RBC_timeStamp,
  /* trainData_pkg::sendAcknowledgementRBC::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendAcknowledgementRBC::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* trainData_pkg::sendAcknowledgementRBC::inVersion */ M_VERSION inVersion,
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  /* trainData_pkg::sendAcknowledgementRBC */ M_146_T_TM_radio_messages tmp;
  
  /* 2 */
  headerMsg146_ng_trainData_pkg(nidEngine, EVC_t_train, RBC_timeStamp, &tmp);
  /* 1 */
  Send_M146_TM_radio_messages(
    EVC_t_train,
    MessageBus,
    &tmp,
    inVersion,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->outMessageBus,
    &outC->Context_1.MessageBus_out);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->updatedStatus,
    actualStatus);
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendAcknowledgementRBC_trainData_pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

