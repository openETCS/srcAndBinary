/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M157_TM_RBC_conversions.h"

void C_header_to_M157_reset_TM_RBC_conversions(
  outC_C_header_to_M157_TM_RBC_conversions *outC)
{
  /* 1 */ CAST_Int_to_Q_STATUS_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */ CAST_Int_to_NID_MESSAGE_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_Int_to_L_MESSAGE_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_NID_ENGINE_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_T_TRAIN_reset_TM_conversions(&outC->Context_1);
}

/* TM_RBC_conversions::C_header_to_M157 */
void C_header_to_M157_TM_RBC_conversions(
  /* TM_RBC_conversions::C_header_to_M157::header_in */M_TrainTrack_MessageHd_T_TM_radio_messages *header_in,
  outC_C_header_to_M157_TM_RBC_conversions *outC)
{
  kcg_int noname;
  kcg_int _1_noname;
  
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&outC->_L1, header_in);
  outC->_L9 = outC->_L1.field3;
  outC->_L8 = outC->_L1.field2;
  outC->_L7 = outC->_L1.field1;
  outC->_L6 = outC->_L1.nid_engine;
  outC->_L5 = outC->_L1.t_train;
  outC->_L4 = outC->_L1.l_message;
  outC->_L3 = outC->_L1.nid_message;
  /* 1 */ CAST_Int_to_T_TRAIN_TM_conversions(outC->_L5, &outC->Context_1);
  outC->_L32 = outC->Context_1.t_train;
  /* 1 */ CAST_Int_to_NID_ENGINE_TM_conversions(outC->_L6, &outC->_1_Context_1);
  outC->_L31 = outC->_1_Context_1.nid_engine;
  /* 1 */ CAST_Int_to_L_MESSAGE_TM_conversions(outC->_L4, &outC->_2_Context_1);
  outC->_L30 = outC->_2_Context_1.l_message;
  /* 1 */
  CAST_Int_to_NID_MESSAGE_TM_conversions(outC->_L3, &outC->_3_Context_1);
  outC->_L29 = outC->_3_Context_1.nid_message;
  /* 1 */ CAST_Int_to_Q_STATUS_TM_conversions(outC->_L7, &outC->_4_Context_1);
  outC->_L28 = outC->_4_Context_1.q_status;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->_L2 = outC->_L1.valid;
  outC->_L26.valid = outC->_L2;
  outC->_L26.nid_message = outC->_L29;
  outC->_L26.l_message = outC->_L30;
  outC->_L26.t_train = outC->_L32;
  outC->_L26.nid_engine = outC->_L31;
  outC->_L26.q_status = outC->_L28;
  kcg_copy_M_157_T_TM_radio_messages(&outC->message_out, &outC->_L26);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_header_to_M157_TM_RBC_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

