/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_write_only_TM_lib_internal.h"

void BufferMsg_write_only_reset_TM_lib_internal(
  outC_BufferMsg_write_only_TM_lib_internal *outC)
{
}

/* TM_lib_internal::BufferMsg_write_only */
void BufferMsg_write_only_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_write_only::Buffer_In */M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_write_only::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_write_only::Message_In */M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  outC_BufferMsg_write_only_TM_lib_internal *outC)
{
  kcg_int i;
  kcg_bool noname;
  
  outC->_L2 = Stacksize_old;
  outC->_L8 = 1;
  outC->_L7 = outC->_L2 + outC->_L8;
  outC->_L10 = DIM_FIFO_demo_TM_lib_internal;
  outC->_L11 = outC->_L7 > outC->_L10;
  noname = outC->_L11;
  if (outC->_L11) {
    outC->_L12 = outC->_L10;
  }
  else {
    outC->_L12 = outC->_L7;
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L9,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L3, Message_In);
  for (i = 0; i < 1; i++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L6[i],
      &outC->_L3);
  }
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(&outC->_L1, Buffer_In);
  kcg_copy_array__19662(&outC->_L4, (array__19662 *) &outC->_L1[0]);
  kcg_copy_array__19665(&outC->_L5[0], &outC->_L6);
  kcg_copy_array__19662(&outC->_L5[1], &outC->_L4);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L9);
  outC->Stacksize_new = outC->_L12;
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
    &outC->Buffer_Out,
    &outC->_L5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_write_only_TM_lib_internal.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

