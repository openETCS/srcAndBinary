/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_M003_TM_radio_messages.h"

void Read_M003_reset_TM_radio_messages(outC_Read_M003_TM_radio_messages *outC)
{
  /* 1 */
  Radio_Track_Train_Hd_to_M003_reset_TM_RBC_conversions_legacy(
    &outC->_1_Context_1);
  /* 1 */ CAST_NID_MESSAGE_to_int_reset_TM_conversions(&outC->Context_1);
}

/* TM_radio_messages::Read_M003 */
void Read_M003_TM_radio_messages(
  /* TM_radio_messages::Read_M003::RadioHeaderUniversalIn */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioHeaderUniversalIn,
  outC_Read_M003_TM_radio_messages *outC)
{
  M_003_T_TM_radio_messages tmp;
  
  outC->_L35 = nid_message_TrackTrain_003_TM_radio_messages;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L2,
    RadioHeaderUniversalIn);
  outC->_L3 = outC->_L2.nid_message;
  /* 1 */ CAST_NID_MESSAGE_to_int_TM_conversions(outC->_L3, &outC->Context_1);
  outC->_L34 = outC->Context_1.nid_message_int;
  outC->_L36 = outC->_L35 == outC->_L34;
  outC->received = outC->_L36;
  outC->tmp = outC->_L36;
  if (outC->tmp) {
    /* 1 */
    Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy(
      &outC->_L2,
      &outC->_1_Context_1);
    kcg_copy_M_003_T_TM_radio_messages(&tmp, &outC->_1_Context_1.M003_out);
    kcg_copy_M_003_T_TM_radio_messages(&outC->_L1, &tmp);
  }
  else {
    kcg_copy_M_003_T_TM_radio_messages(
      &outC->_L1,
      (M_003_T_TM_radio_messages *) &DEFAULT_M003_TM_radio_messages);
  }
  kcg_copy_M_003_T_TM_radio_messages(&outC->M003_out, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_M003_TM_radio_messages.c
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

