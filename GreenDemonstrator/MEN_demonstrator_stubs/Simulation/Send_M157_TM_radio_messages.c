/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M157_TM_radio_messages.h"

void Send_M157_reset_TM_radio_messages(outC_Send_M157_TM_radio_messages *outC)
{
  /* 1 */ MergeMessageToBus_reset_TM_TrainTrack_Bus(&outC->_8_Context_1);
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->_7_Context_1);
  /* 1 */ CheckSpace_reset_TM_TrainTrack_Bus(&outC->_6_Context_1);
  /* 1 */ Merge_PacketsToMessage_reset_TM_TrainToTrack(&outC->_5_Context_1);
  /* 2 */ C_M157_to_header_reset_TM_RBC_conversions(&outC->_4_Context_2);
  /* 1 */ C_P044_train_compr_reset_TM_TrainToTrack(&outC->_3_Context_1);
  /* 1 */ C_P005_train_compr_reset_TM_TrainToTrack(&outC->_2_Context_1);
  /* 1 */ C_P004_train_compr_reset_TM_TrainToTrack(&outC->Context_1);
  /* 2 */ C_P001_train_compr_reset_TM_TrainToTrack(&outC->_1_Context_2);
  /* 2 */ C_P000_train_compr_reset_TM_TrainToTrack(&outC->Context_2);
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
  kcg_int i;
  M_VERSION noname;
  kcg_bool _1_noname;
  kcg_int _2_noname;
  
  kcg_copy_P000_TM_TrainToTrack(&outC->_L31, P000);
  outC->_L33 = outC->_L31.valid;
  /* 2 */ C_P000_train_compr_TM_TrainToTrack(&outC->_L31, &outC->Context_2);
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
    &outC->_L32,
    &outC->Context_2.P000_int);
  kcg_copy_P001_TM_TrainToTrack(&outC->_L27, P001);
  /* 2 */ C_P001_train_compr_TM_TrainToTrack(&outC->_L27, &outC->_1_Context_2);
  kcg_copy_P001_TrainTrack_int_TM_TrainToTrack(
    &outC->_L42,
    &outC->_1_Context_2.P001_int);
  if (outC->_L33) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L37, &outC->_L32);
  }
  else {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L37, &outC->_L42);
  }
  kcg_copy_P004_TM_TrainToTrack(&outC->_L9, P004);
  /* 1 */ C_P004_train_compr_TM_TrainToTrack(&outC->_L9, &outC->Context_1);
  kcg_copy_P004_TrainTrack_int_TM_TrainToTrack(
    &outC->_L15,
    &outC->Context_1.P004_int);
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L39[0], &outC->_L37);
  kcg_copy_P004_TrainTrack_int_TM_TrainToTrack(&outC->_L39[17], &outC->_L15);
  kcg_copy_P005_TM_TrainToTrack(&outC->_L10, P005);
  /* 1 */ C_P005_train_compr_TM_TrainToTrack(&outC->_L10, &outC->_2_Context_1);
  kcg_copy_P005_TrainTrack_int_TM_TrainToTrack(
    &outC->_L17,
    &outC->_2_Context_1.P005_int);
  kcg_copy_array_int_20(&outC->_L40[0], &outC->_L39);
  kcg_copy_P005_TrainTrack_int_TM_TrainToTrack(&outC->_L40[20], &outC->_L17);
  kcg_copy_P044_TM_TrainToTrack(&outC->_L11, P044);
  /* 1 */ C_P044_train_compr_TM_TrainToTrack(&outC->_L11, &outC->_3_Context_1);
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(
    &outC->_L19,
    &outC->_3_Context_1.P044_int);
  kcg_copy_array_int_23(&outC->_L44[0], &outC->_L40);
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(&outC->_L44[23], &outC->_L19);
  outC->_L41 = 0;
  for (i = 0; i < 2; i++) {
    outC->_L35[i] = outC->_L41;
  }
  kcg_copy_array_int_48(&outC->_L45[0], &outC->_L44);
  kcg_copy_array_int_2(&outC->_L45[48], &outC->_L35);
  kcg_copy_M_157_T_TM_radio_messages(&outC->_L26, Message_157_in);
  /* 2 */ C_M157_to_header_TM_RBC_conversions(&outC->_L26, &outC->_4_Context_2);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L24,
    &outC->_4_Context_2.Message_Header_Out);
  /* 1 */
  Merge_PacketsToMessage_TM_TrainToTrack(
    &outC->_L45,
    &outC->_L24,
    &outC->_5_Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L46,
    &outC->_5_Context_1.RadioMessage);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L48, MessageBus);
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(&outC->_L48, &outC->_6_Context_1);
  outC->_L52 = outC->_6_Context_1.Busy;
  outC->_L53 = outC->_6_Context_1.SlotsUsed;
  outC->_L55 = !outC->_L52;
  /* 1 */
  BufferMsg_TM_lib_internal(&outC->_L46, outC->_L55, &outC->_7_Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L49,
    &outC->_7_Context_1.Out);
  outC->_L54 = t_train_global;
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->_L49,
    outC->_L53,
    &outC->_L48,
    outC->_L54,
    &outC->_8_Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L51,
    &outC->_8_Context_1.MessageBus_out);
  outC->_L56 = outC->_8_Context_1.t_train_assigned;
  _2_noname = outC->_L56;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &outC->_L51);
  outC->_L38 = _3_m_version;
  outC->_L34 = outC->_L27.valid;
  outC->_L36 = outC->_L34 & outC->_L33;
  _1_noname = outC->_L36;
  noname = outC->_L38;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M157_TM_radio_messages.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

