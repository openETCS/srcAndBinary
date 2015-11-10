/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_read_write_TM_lib_internal.h"

void BufferMsg_read_write_reset_TM_lib_internal(
  outC_BufferMsg_read_write_TM_lib_internal *outC)
{
}

/* TM_lib_internal::BufferMsg_read_write */
void BufferMsg_read_write_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_read_write::Buffer_In */M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_read_write::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_read_write::Message_In */M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  outC_BufferMsg_read_write_TM_lib_internal *outC)
{
  kcg_int i;
  
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L42,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  outC->_L39 = 0;
  outC->_L38 = Stacksize_old;
  outC->_L40 = outC->_L39 == outC->_L38;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L23, Message_In);
  if (outC->_L40) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L41, &outC->_L42);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L41, &outC->_L23);
  }
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(&outC->_L12, Buffer_In);
  outC->_L15 = Stacksize_old;
  outC->_L30 = 1;
  outC->_L31 = outC->_L15 - outC->_L30;
  outC->_L32 = 0;
  outC->_L33 = outC->_L31 < outC->_L32;
  if (outC->_L33) {
    outC->_L29 = outC->_L32;
  }
  else {
    outC->_L29 = outC->_L31;
  }
  outC->index = outC->_L29;
  outC->_L14 = outC->index;
  if ((0 <= outC->_L14) & (outC->_L14 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L21,
      &outC->_L12[outC->_L14]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L21,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
  }
  if (outC->_L40) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L37, &outC->_L23);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L37, &outC->_L21);
  }
  for (i = 0; i < 1; i++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L26[i],
      &outC->_L41);
  }
  kcg_copy_array__19662(&outC->_L24, (array__19662 *) &outC->_L12[0]);
  kcg_copy_array__19665(&outC->_L25[0], &outC->_L26);
  kcg_copy_array__19662(&outC->_L25[1], &outC->_L24);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L37);
  outC->Stacksize_new = outC->_L15;
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
    &outC->Buffer_Out,
    &outC->_L25);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_read_write_TM_lib_internal.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

