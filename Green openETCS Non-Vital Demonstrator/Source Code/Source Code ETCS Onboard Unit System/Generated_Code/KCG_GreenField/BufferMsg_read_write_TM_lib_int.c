/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_read_write_TM_lib_int.h"

/* TM_lib_internal::BufferMsg_read_write */
void BufferMsg_read_write_TM_lib_int(
  /* TM_lib_internal::BufferMsg_read_write::Buffer_In */ M_TrainTrackMessage_buffer_t_TM *Buffer_In,
  /* TM_lib_internal::BufferMsg_read_write::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_read_write::Message_In */ M_TrainTrack_Message_T_TM_radio *Message_In,
  /* TM_lib_internal::BufferMsg_read_write::Buffer_Out */ M_TrainTrackMessage_buffer_t_TM *Buffer_Out,
  /* TM_lib_internal::BufferMsg_read_write::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferMsg_read_write::Message_out */ M_TrainTrack_Message_T_TM_radio *Message_out)
{
  /* TM_lib_internal::BufferMsg_read_write */
  static kcg_int tmp;
  /* TM_lib_internal::BufferMsg_read_write::_L31 */
  static kcg_int _L31;
  /* TM_lib_internal::BufferMsg_read_write::_L40 */
  static kcg_bool _L40;
  
  *Stacksize_new = Stacksize_old;
  _L40 = 0 == Stacksize_old;
  /* 3 */ if (_L40) {
    kcg_copy_M_TrainTrack_Message_T(
      &(&(*Buffer_Out)[0])[0],
      (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T(&(&(*Buffer_Out)[0])[0], Message_In);
  }
  kcg_copy_array_101707(&(*Buffer_Out)[1], (array_101707 *) &(*Buffer_In)[0]);
  _L31 = Stacksize_old - 1;
  /* 2 */ if (_L40) {
    kcg_copy_M_TrainTrack_Message_T(Message_out, Message_In);
  }
  else {
    /* 1 */ if (_L31 < 0) {
      tmp = 0;
    }
    else {
      tmp = _L31;
    }
    if ((0 <= tmp) & (tmp < 5)) {
      kcg_copy_M_TrainTrack_Message_T(Message_out, &(*Buffer_In)[tmp]);
    }
    else {
      kcg_copy_M_TrainTrack_Message_T(
        Message_out,
        (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferMsg_read_write_TM_lib_int.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

