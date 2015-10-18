/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write3_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write3 */
void BufferOutput_read_write3_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_read_write3::Buffer_In */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write3::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write3::Message_In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_read_write3::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write3::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write3::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  if ((0 <= Stacksize_old - 1) & (Stacksize_old - 1 < 100)) {
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
  kcg_copy_array_83321(&(*Buffer_Out)[0], (array_83321 *) &(*Message_In)[0]);
  kcg_copy_array_85872(&(*Buffer_Out)[3], (array_85872 *) &(*Buffer_In)[0]);
  *Stacksize_new = Stacksize_old + 2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write3_TM_lib_internal.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

