/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectRadioOutput_radioOutput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void collectRadioOutput_init_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  kcg_int i;
  
  outC->RTMisActive = kcg_true;
  outC->init = kcg_true;
  outC->outMN = 0;
  outC->outRadio = 0;
  outC->API_RTM_management.valid = kcg_true;
  outC->API_RTM_management.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->API_RTM_management.networkID = 0;
  outC->toRBC.Message.valid = kcg_true;
  outC->toRBC.Message.nid_message = 0;
  outC->toRBC.Message.l_message = 0;
  outC->toRBC.Message.t_train = 0;
  outC->toRBC.Message.nid_engine = 0;
  outC->toRBC.Message.field1 = 0;
  outC->toRBC.Message.field2 = 0;
  outC->toRBC.Message.field3 = 0;
  for (i = 0; i < 50; i++) {
    outC->toRBC.OptionalPackets[i] = 0;
  }
  /* 1 */ BufferOutput_init_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ mapCMDToRTM_init_radioOutput_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void collectRadioOutput_reset_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ BufferOutput_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ mapCMDToRTM_reset_radioOutput_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* radioOutput_Pkg::collectRadioOutput */
void collectRadioOutput_radioOutput_Pkg(
  /* radioOutput_Pkg::collectRadioOutput::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* radioOutput_Pkg::collectRadioOutput::insafeSessionEstablished */ kcg_bool insafeSessionEstablished,
  /* radioOutput_Pkg::collectRadioOutput::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* radioOutput_Pkg::collectRadioOutput::mobileRadioStatus */ morcStatus_T_RCM_Session_Types_Pkg *mobileRadioStatus,
  /* radioOutput_Pkg::collectRadioOutput::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::collectRadioOutput::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  /* radioOutput_Pkg::collectRadioOutput::inVersion */ M_VERSION inVersion,
  /* radioOutput_Pkg::collectRadioOutput::inT_TRAIN */ T_TRAIN inT_TRAIN,
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  /* 1 */
  mapCMDToRTM_radioOutput_Pkg(
    mobileConnectionCMD,
    mobileRegistrationCMD,
    &outC->Context_1);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_RTM_management,
    &outC->Context_1.toRTM);
  outC->outRadio = outC->Context_1.outRadio;
  outC->outMN = outC->Context_1.outMN;
  /* 1 */ if ((*mobileRadioStatus).session.valid) {
    outC->RTMisActive = (*mobileRadioStatus).session.phase !=
      sp_terminated_RCM_Session_Types_Pkg;
  }
  else /* last_init_ck_RTMisActive */ if (outC->init) {
    outC->RTMisActive = kcg_false;
  }
  outC->init = kcg_false;
  /* 1 */
  BufferOutput_TM_lib_internal(
    MessageBus,
    outC->RTMisActive,
    &outC->_1_Context_1);
  /* 1 */
  patchMsgFlow_RadioSupport_Pkg(
    &outC->_1_Context_1.Out,
    insafeSessionEstablished,
    inModeAndLevel,
    &outC->toRBC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** collectRadioOutput_radioOutput_Pkg.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

