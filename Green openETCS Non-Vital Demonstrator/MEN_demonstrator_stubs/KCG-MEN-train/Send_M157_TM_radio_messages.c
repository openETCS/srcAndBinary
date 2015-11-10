/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M157_TM_radio_messages.h"

void Send_M157_reset_TM_radio_messages(outC_Send_M157_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_radio_messages::Send_M157 */
void Send_M157_TM_radio_messages(
  /* TM_radio_messages::Send_M157::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M157::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M157::m_version */M_VERSION _3_m_version,
  /* TM_radio_messages::Send_M157::P000 */P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M157::P001 */P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M157::P004 */P004_TM_TrainToTrack *P004,
  /* TM_radio_messages::Send_M157::P005 */P005_TM_TrainToTrack *P005,
  /* TM_radio_messages::Send_M157::P044 */P044_TM_TrainToTrack *P044,
  /* TM_radio_messages::Send_M157::Message_157_in */M_157_T_TM_radio_messages *Message_157_in,
  outC_Send_M157_TM_radio_messages *outC)
{
  M_TrainTrack_Message_T_TM_radio_messages tmp2;
  array_int_50 tmp1;
  M_TrainTrack_MessageHd_T_TM_radio_messages tmp;
  /* TM_radio_messages::Send_M157::_L35 */ array_int_2 _L35;
  /* TM_radio_messages::Send_M157::_L53 */ kcg_int _L53;
  /* TM_radio_messages::Send_M157::_L52 */ kcg_bool _L52;
  /* TM_radio_messages::Send_M157::_L56 */ kcg_int _L56;
  
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(MessageBus, &_L52, &_L53);
  for (_L56 = 0; _L56 < 2; _L56++) {
    _L35[_L56] = 0;
  }
  if ((*P000).valid) {
    /* 2 */
    C_P000_train_compr_TM_TrainToTrack(
      P000,
      (P000_TrainTrack_int_TM_TrainToTrack *) &(&(&(&tmp1[0])[0])[0])[0]);
  }
  else {
    /* 2 */
    C_P001_train_compr_TM_TrainToTrack(
      P001,
      (P001_TrainTrack_int_TM_TrainToTrack *) &(&(&(&tmp1[0])[0])[0])[0]);
  }
  /* 1 */
  C_P004_train_compr_TM_TrainToTrack(
    P004,
    (P004_TrainTrack_int_TM_TrainToTrack *) &(&(&(&tmp1[0])[0])[0])[17]);
  /* 1 */
  C_P005_train_compr_TM_TrainToTrack(
    P005,
    (P005_TrainTrack_int_TM_TrainToTrack *) &(&(&tmp1[0])[0])[20]);
  /* 1 */
  C_P044_train_compr_TM_TrainToTrack(
    P044,
    (P044_TrainTrack_int_TM_TrainToTrack *) &(&tmp1[0])[23]);
  kcg_copy_array_int_2(&tmp1[48], &_L35);
  /* 2 */ C_M157_to_header_TM_RBC_conversions(Message_157_in, &tmp);
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&tmp1, &tmp, &tmp2);
  /* 1 */ BufferMsg_TM_lib_internal(&tmp2, (kcg_bool) !_L52, &outC->Context_1);
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->Context_1.Out,
    _L53,
    MessageBus,
    t_train_global,
    &outC->MessageBus_out,
    &_L56);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M157_TM_radio_messages.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

