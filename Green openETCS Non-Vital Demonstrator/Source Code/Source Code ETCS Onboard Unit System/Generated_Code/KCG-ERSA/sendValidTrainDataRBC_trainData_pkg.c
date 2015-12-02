/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendValidTrainDataRBC_trainData_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void sendValidTrainDataRBC_init_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
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
  /* 1 */ Send_M129_init_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendValidTrainDataRBC_reset_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
{
  /* 1 */ Send_M129_reset_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::sendValidTrainDataRBC */
void sendValidTrainDataRBC_trainData_pkg(
  /* trainData_pkg::sendValidTrainDataRBC::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* trainData_pkg::sendValidTrainDataRBC::evc_t_train */ T_TRAIN evc_t_train,
  /* trainData_pkg::sendValidTrainDataRBC::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::sendValidTrainDataRBC::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendValidTrainDataRBC::p0_positionReport */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::p1_positionReport */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* trainData_pkg::sendValidTrainDataRBC::inVersion */ M_VERSION inVersion,
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
{
  /* trainData_pkg::sendValidTrainDataRBC */ M_129_T_TM_radio_messages tmp3;
  /* trainData_pkg::sendValidTrainDataRBC */ P000_TM_TrainToTrack tmp2;
  /* trainData_pkg::sendValidTrainDataRBC */ P001_TM_TrainToTrack tmp1;
  /* trainData_pkg::sendValidTrainDataRBC */ P011_TM_TrainToTrack tmp;
  
  /* 1 */ headerMsg129_ng_trainData_pkg(nidEngine, evc_t_train, &tmp3);
  /* 1 */ nextGen_P00_radioOutput_Pkg(p0_positionReport, &tmp2);
  /* 1 */ nextGen_P01_radioOutput_Pkg(p1_positionReport, &tmp1);
  /* 1 */ packet_11_trainData_pkg(trainData, &tmp);
  /* 1 */
  Send_M129_TM_radio_messages(
    evc_t_train,
    MessageBus,
    &tmp3,
    &tmp2,
    &tmp1,
    &tmp,
    inVersion,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->outMessageBus,
    &outC->Context_1.MessageBus_out);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->updatedStatus,
    actualStatus);
  outC->updatedStatus.timeStampValidateToRBC = evc_t_train;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = outC->Context_1.t_train_assigned;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendValidTrainDataRBC_trainData_pkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

