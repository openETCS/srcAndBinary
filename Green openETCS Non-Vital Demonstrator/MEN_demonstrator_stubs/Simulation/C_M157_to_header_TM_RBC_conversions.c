/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_M157_to_header_TM_RBC_conversions.h"

void C_M157_to_header_reset_TM_RBC_conversions(
  outC_C_M157_to_header_TM_RBC_conversions *outC)
{
  /* 1 */ CAST_Q_STATUS_to_int_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */ CAST_NID_MESSAGE_to_int_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_L_MESSAGE_to_int_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_NID_ENGINE_to_int_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_T_TRAIN_to_int_reset_TM_conversions(&outC->Context_1);
}

/* TM_RBC_conversions::C_M157_to_header */
void C_M157_to_header_TM_RBC_conversions(
  /* TM_RBC_conversions::C_M157_to_header::Message_Data_in */M_157_T_TM_radio_messages *Message_Data_in,
  outC_C_M157_to_header_TM_RBC_conversions *outC)
{
  kcg_copy_M_157_T_TM_radio_messages(&outC->_L1, Message_Data_in);
  outC->_L20 = outC->_L1.q_status;
  outC->_L7 = outC->_L1.nid_engine;
  outC->_L6 = outC->_L1.t_train;
  outC->_L5 = outC->_L1.l_message;
  outC->_L4 = outC->_L1.nid_message;
  /* 1 */ CAST_T_TRAIN_to_int_TM_conversions(outC->_L6, &outC->Context_1);
  outC->_L25 = outC->Context_1.t_train_int;
  /* 1 */ CAST_NID_ENGINE_to_int_TM_conversions(outC->_L7, &outC->_1_Context_1);
  outC->_L24 = outC->_1_Context_1.nid_ctraction_int;
  /* 1 */ CAST_L_MESSAGE_to_int_TM_conversions(outC->_L5, &outC->_2_Context_1);
  outC->_L23 = outC->_2_Context_1.l_message_int;
  /* 1 */
  CAST_NID_MESSAGE_to_int_TM_conversions(outC->_L4, &outC->_3_Context_1);
  outC->_L22 = outC->_3_Context_1.nid_message_int;
  /* 1 */ CAST_Q_STATUS_to_int_TM_conversions(outC->_L20, &outC->_4_Context_1);
  outC->_L21 = outC->_4_Context_1.q_status_int;
  outC->_L19 = 0;
  outC->_L3 = outC->_L1.valid;
  outC->_L2.valid = outC->_L3;
  outC->_L2.nid_message = outC->_L22;
  outC->_L2.l_message = outC->_L23;
  outC->_L2.t_train = outC->_L25;
  outC->_L2.nid_engine = outC->_L24;
  outC->_L2.field1 = outC->_L21;
  outC->_L2.field2 = outC->_L19;
  outC->_L2.field3 = outC->_L19;
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->Message_Header_Out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_M157_to_header_TM_RBC_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

