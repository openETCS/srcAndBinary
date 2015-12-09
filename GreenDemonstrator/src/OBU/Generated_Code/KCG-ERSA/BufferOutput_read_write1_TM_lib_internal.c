/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write1_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write1 */
void BufferOutput_read_write1_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_read_write1::Buffer_In */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write1::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write1::Message_In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_read_write1::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write1::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write1::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferOutput_read_write1::_L35 */ kcg_bool _L35;
  
  *Stacksize_new = Stacksize_old;
  _L35 = Stacksize_old == 0;
  /* 2 */ if (_L35) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &(&(*Buffer_Out)[0])[0],
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      Message_out,
      &(*Message_In)[0]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &(&(*Buffer_Out)[0])[0],
      &(*Message_In)[0]);
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
  }
  kcg_copy_array_121485(&(*Buffer_Out)[1], (array_121485 *) &(*Buffer_In)[0]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write1_TM_lib_internal.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

