/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectRadioOutput_radioOutput_.h"

#ifndef KCG_USER_DEFINED_INIT
void collectRadioOutput_init_radioOu(outC_collectRadioOutput_radioOu *outC)
{
  static kcg_int i;
  
  outC->RTMisActive = kcg_true;
  outC->init = kcg_true;
  outC->outMN = 0;
  outC->outRadio = 0;
  outC->API_RTM_management.valid = kcg_true;
  outC->API_RTM_management.cmd = cmdr_not_relevant_API_RadioComm;
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
  /* 1 */ BufferOutput_init_TM_lib_intern(&outC->_1_Context_1);
  /* 1 */ mapCMDToRTM_init_radioOutput_Pk(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void collectRadioOutput_reset_radioO(outC_collectRadioOutput_radioOu *outC)
{
  outC->init = kcg_true;
  /* 1 */ BufferOutput_reset_TM_lib_inter(&outC->_1_Context_1);
  /* 1 */ mapCMDToRTM_reset_radioOutput_P(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* radioOutput_Pkg::collectRadioOutput */
void collectRadioOutput_radioOutput_(
  /* radioOutput_Pkg::collectRadioOutput::MessageBus */ M_TrainTrackMessageBus_t_TM_Tra *MessageBus,
  /* radioOutput_Pkg::collectRadioOutput::insafeSessionEstablished */ kcg_bool insafeSessionEstablished,
  /* radioOutput_Pkg::collectRadioOutput::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Typ *inModeAndLevel,
  /* radioOutput_Pkg::collectRadioOutput::mobileHWStatus */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatus,
  /* radioOutput_Pkg::collectRadioOutput::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types *mobileConnectionCMD,
  /* radioOutput_Pkg::collectRadioOutput::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Typ *mobileRegistrationCMD,
  /* radioOutput_Pkg::collectRadioOutput::inVersion */ M_VERSION inVersion,
  /* radioOutput_Pkg::collectRadioOutput::inT_TRAIN */ T_TRAIN inT_TRAIN,
  outC_collectRadioOutput_radioOu *outC)
{
  /* 1 */
  mapCMDToRTM_radioOutput_Pkg(
    mobileConnectionCMD,
    mobileRegistrationCMD,
    &outC->Context_1);
  kcg_copy_RadioManagement_T_API_(
    &outC->API_RTM_management,
    &outC->Context_1.toRTM);
  outC->outRadio = outC->Context_1.outRadio;
  outC->outMN = outC->Context_1.outMN;
  /* 1 */ if ((*mobileHWStatus).valid) {
    outC->RTMisActive = (*mobileHWStatus).connectionStatus !=
      mhwc_notRegistered_MoRC_Pck;
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
** collectRadioOutput_radioOutput_.c
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

