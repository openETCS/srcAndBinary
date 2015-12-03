/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_read_write_TM_lib_internal.h"

/* TM_lib_internal::BufferMsg_read_write */
void BufferMsg_read_write_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_read_write::Buffer_In */M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_read_write::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_read_write::Message_In */M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  /* TM_lib_internal::BufferMsg_read_write::Buffer_Out */M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferMsg_read_write::Stacksize_new */kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferMsg_read_write::Message_out */M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  kcg_int tmp;
  /* TM_lib_internal::BufferMsg_read_write::_L31 */ kcg_int _L31;
  /* TM_lib_internal::BufferMsg_read_write::_L40 */ kcg_bool _L40;
  
  *Stacksize_new = Stacksize_old;
  _L40 = 0 == *Stacksize_new;
  _L31 = *Stacksize_new - 1;
  if (_L40) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &(&(*Buffer_Out)[0])[0],
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(Message_out, Message_In);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &(&(*Buffer_Out)[0])[0],
      Message_In);
    if (_L31 < 0) {
      tmp = 0;
    }
    else {
      tmp = _L31;
    }
    if ((0 <= tmp) & (tmp < 5)) {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        Message_out,
        &(*Buffer_In)[tmp]);
    }
    else {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        Message_out,
        (M_TrainTrack_Message_T_TM_radio_messages *)
          &EMPTY_TrainTrackMessage_TM_lib_internal);
    }
  }
  kcg_copy_array__14917(&(*Buffer_Out)[1], (array__14917 *) &(*Buffer_In)[0]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_read_write_TM_lib_internal.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

