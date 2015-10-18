/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGenRadioOutput_radioOutput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void nextGenRadioOutput_init_radioOutput_Pkg(
  outC_nextGenRadioOutput_radioOutput_Pkg *outC)
{
  static kcg_int i;
  
  outC->RTMisActive = kcg_true;
  outC->init = kcg_true;
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
  /* 1 */ BufferOutput_init_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nextGenRadioOutput_reset_radioOutput_Pkg(
  outC_nextGenRadioOutput_radioOutput_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ BufferOutput_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* radioOutput_Pkg::nextGenRadioOutput */
void nextGenRadioOutput_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGenRadioOutput::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* radioOutput_Pkg::nextGenRadioOutput::cmdsToMobile */ mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::nextGenRadioOutput::insafeSessionEstablished */ kcg_bool insafeSessionEstablished,
  /* radioOutput_Pkg::nextGenRadioOutput::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* radioOutput_Pkg::nextGenRadioOutput::mobileHWStatus */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatus,
  /* radioOutput_Pkg::nextGenRadioOutput::inVersion */ M_VERSION inVersion,
  /* radioOutput_Pkg::nextGenRadioOutput::inT_TRAIN */ T_TRAIN inT_TRAIN,
  outC_nextGenRadioOutput_radioOutput_Pkg *outC)
{
  /* 1 */ mapToRTM_radioOutput_Pkg(cmdsToMobile, &outC->API_RTM_management);
  /* 1 */ if ((*mobileHWStatus).valid) {
    outC->RTMisActive = (*mobileHWStatus).connectionStatus !=
      mhwc_notRegistered_MoRC_Pck;
  }
  else /* last_init_ck_RTMisActive */ if (outC->init) {
    outC->RTMisActive = kcg_false;
  }
  outC->init = kcg_false;
  /* 1 */
  BufferOutput_TM_lib_internal(MessageBus, outC->RTMisActive, &outC->Context_1);
  /* 1 */
  patchMsgFlow_RadioSupport_Pkg(
    &outC->Context_1.Out,
    insafeSessionEstablished,
    inModeAndLevel,
    &outC->toRBC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGenRadioOutput_radioOutput_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

