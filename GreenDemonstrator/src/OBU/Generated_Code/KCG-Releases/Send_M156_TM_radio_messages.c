/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M156_TM_radio_messages.h"

#ifndef KCG_USER_DEFINED_INIT
void Send_M156_init_TM_radio_messages(outC_Send_M156_TM_radio_messages *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
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
void Send_M156_reset_TM_radio_messages(outC_Send_M156_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_radio_messages::Send_M156 */
void Send_M156_TM_radio_messages(
  /* TM_radio_messages::Send_M156::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M156::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M156::Message_156_in */ M_156_T_TM_radio_messages *Message_156_in,
  /* TM_radio_messages::Send_M156::m_version */ M_VERSION m_version,
  outC_Send_M156_TM_radio_messages *outC)
{
  /* TM_radio_messages::Send_M156 */
  static M_TrainTrack_Message_T_TM_radio_messages tmp1;
  /* TM_radio_messages::Send_M156 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages tmp;
  /* TM_radio_messages::Send_M156::_L17 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L17;
  /* TM_radio_messages::Send_M156::_L9 */
  static kcg_int _L9;
  /* TM_radio_messages::Send_M156::_L8 */
  static kcg_bool _L8;
  static kcg_int i;
  
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(MessageBus, &_L8, &_L9);
  /* 1 */ C_M156_to_header_TM_RBC_conversions(Message_156_in, &tmp);
  for (i = 0; i < 50; i++) {
    _L17[i] = 0;
  }
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&_L17, &tmp, &tmp1);
  /* 1 */ BufferMsg_TM_lib_internal(&tmp1, (kcg_bool) !_L8, &outC->Context_1);
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->Context_1.Out,
    _L9,
    MessageBus,
    t_train_global,
    &outC->MessageBus_out,
    &outC->t_train_assigned);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M156_TM_radio_messages.c
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */

