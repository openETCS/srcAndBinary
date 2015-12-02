/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M146_TM_radio_messages.h"

#ifndef KCG_USER_DEFINED_INIT
void Send_M146_init_TM_radio_messages(outC_Send_M146_TM_radio_messages *outC)
{
  kcg_int i1;
  kcg_int i;
  
  outC->t_train_assigned = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->MessageBus_out[i1].Message.valid = kcg_true;
    outC->MessageBus_out[i1].Message.nid_message = 0;
    outC->MessageBus_out[i1].Message.l_message = 0;
    outC->MessageBus_out[i1].Message.t_train = 0;
    outC->MessageBus_out[i1].Message.nid_engine = 0;
    outC->MessageBus_out[i1].Message.field1 = 0;
    outC->MessageBus_out[i1].Message.field2 = 0;
    outC->MessageBus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->MessageBus_out[i1].OptionalPackets[i] = 0;
    }
  }
  /* 1 */ BufferMsg_init_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_M146_reset_TM_radio_messages(outC_Send_M146_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_radio_messages::Send_M146 */
void Send_M146_TM_radio_messages(
  /* TM_radio_messages::Send_M146::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M146::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M146::Message_146_in */ M_146_T_TM_radio_messages *Message_146_in,
  /* TM_radio_messages::Send_M146::m_version */ M_VERSION m_version,
  outC_Send_M146_TM_radio_messages *outC)
{
  /* TM_radio_messages::Send_M146 */ M_TrainTrack_Message_T_TM_radio_messages tmp1;
  /* TM_radio_messages::Send_M146 */ M_TrainTrack_MessageHd_T_TM_radio_messages tmp;
  /* TM_radio_messages::Send_M146::_L8 */ M_TrainTrack_compressed_packets_T_TM_radio_messages _L8;
  /* TM_radio_messages::Send_M146::_L12 */ kcg_int _L12;
  /* TM_radio_messages::Send_M146::_L11 */ kcg_bool _L11;
  kcg_int i;
  
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(MessageBus, &_L11, &_L12);
  /* 1 */ C_M146_to_header_TM_RBC_conversions(Message_146_in, &tmp);
  for (i = 0; i < 50; i++) {
    _L8[i] = 0;
  }
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&_L8, &tmp, &tmp1);
  /* 1 */ BufferMsg_TM_lib_internal(&tmp1, (kcg_bool) !_L11, &outC->Context_1);
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->Context_1.Out,
    _L12,
    MessageBus,
    t_train_global,
    &outC->MessageBus_out,
    &outC->t_train_assigned);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M146_TM_radio_messages.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

