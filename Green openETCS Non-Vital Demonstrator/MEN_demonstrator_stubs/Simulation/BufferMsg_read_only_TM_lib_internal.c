/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_read_only_TM_lib_internal.h"

void BufferMsg_read_only_reset_TM_lib_internal(
  outC_BufferMsg_read_only_TM_lib_internal *outC)
{
}

/* TM_lib_internal::BufferMsg_read_only */
void BufferMsg_read_only_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_read_only::Buffer_In */M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_read_only::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_read_only::Message_In */M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  outC_BufferMsg_read_only_TM_lib_internal *outC)
{
  M_TrainTrack_Message_T_TM_radio_messages noname;
  
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L22,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(&outC->_L1, Buffer_In);
  outC->_L2 = Stacksize_old;
  outC->_L8 = 1;
  outC->_L9 = outC->_L2 - outC->_L8;
  outC->_L14 = 0;
  outC->_L13 = outC->_L9 < outC->_L14;
  if (outC->_L13) {
    outC->_L15 = outC->_L14;
  }
  else {
    outC->_L15 = outC->_L9;
  }
  outC->index = outC->_L15;
  outC->_L19 = outC->index;
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
    &outC->_L21,
    &outC->_L1);
  if ((0 <= outC->_L19) & (outC->_L19 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L21[outC->_L19],
      &outC->_L22);
  }
  outC->_L18 = outC->index;
  if ((0 <= outC->_L18) & (outC->_L18 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L12,
      &outC->_L1[outC->_L18]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L12,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L12);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L3, Message_In);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&noname, &outC->_L3);
  outC->Stacksize_new = outC->_L15;
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
    &outC->Buffer_Out,
    &outC->_L21);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_read_only_TM_lib_internal.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

