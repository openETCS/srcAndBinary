/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M129_TM_radio_messages.h"

#ifndef KCG_USER_DEFINED_INIT
void Send_M129_init_TM_radio_messages(outC_Send_M129_TM_radio_messages *outC)
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
void Send_M129_reset_TM_radio_messages(outC_Send_M129_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_radio_messages::Send_M129 */
void Send_M129_TM_radio_messages(
  /* TM_radio_messages::Send_M129::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M129::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M129::Message_129_in */ M_129_T_TM_radio_messages *Message_129_in,
  /* TM_radio_messages::Send_M129::P000 */ P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M129::P001 */ P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M129::P011 */ P011_TM_TrainToTrack *P011,
  /* TM_radio_messages::Send_M129::m_version */ M_VERSION m_version,
  outC_Send_M129_TM_radio_messages *outC)
{
  /* TM_radio_messages::Send_M129 */ M_TrainTrack_Message_T_TM_radio_messages tmp2;
  /* TM_radio_messages::Send_M129 */ M_TrainTrack_compressed_packets_T_TM_radio_messages tmp1;
  /* TM_radio_messages::Send_M129 */ M_TrainTrack_MessageHd_T_TM_radio_messages tmp;
  /* TM_radio_messages::Send_M129::_L94 */ kcg_int _L94;
  /* TM_radio_messages::Send_M129::_L93 */ kcg_bool _L93;
  kcg_int i;
  
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(MessageBus, &_L93, &_L94);
  /* 1 */ if ((*P000).valid) {
    /* 1 */
    C_P000_train_compr_TM_TrainToTrack(
      P000,
      (P000_TrainTrack_int_TM_TrainToTrack *) &(&tmp1[0])[0]);
  }
  else {
    /* 1 */
    C_P001_train_compr_TM_TrainToTrack(
      P001,
      (P001_TrainTrack_int_TM_TrainToTrack *) &(&tmp1[0])[0]);
  }
  /* 1 */
  C_P011_train_compr_TM_TrainToTrack(
    P011,
    (P011_TrainTrack_int_TM_TrainToTrack *) &(&tmp1[0])[17]);
  for (i = 0; i < 8; i++) {
    (&tmp1[42])[i] = 0;
  }
  /* 2 */ C_M129_to_header_TM_RBC_conversions(Message_129_in, &tmp);
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&tmp1, &tmp, &tmp2);
  /* 1 */ BufferMsg_TM_lib_internal(&tmp2, (kcg_bool) !_L93, &outC->Context_1);
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->Context_1.Out,
    _L94,
    MessageBus,
    t_train_global,
    &outC->MessageBus_out,
    &outC->t_train_assigned);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M129_TM_radio_messages.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

