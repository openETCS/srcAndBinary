/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_read_write_TM_lib_internal.h"

/* TM_lib_internal::BufferMsg_read_write */
void BufferMsg_read_write_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_read_write::Buffer_In */ M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_read_write::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_read_write::Message_In */ M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  /* TM_lib_internal::BufferMsg_read_write::Buffer_Out */ M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferMsg_read_write::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferMsg_read_write::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  *Stacksize_new = Stacksize_old;
  if ((0 <= Stacksize_old - 1) & (Stacksize_old - 1 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      Message_out,
      &(*Buffer_In)[Stacksize_old - 1]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      Message_out,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &(&(*Buffer_Out)[0])[0],
    Message_In);
  kcg_copy_array_83092(&(*Buffer_Out)[1], (array_83092 *) &(*Buffer_In)[0]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferMsg_read_write_TM_lib_internal.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

