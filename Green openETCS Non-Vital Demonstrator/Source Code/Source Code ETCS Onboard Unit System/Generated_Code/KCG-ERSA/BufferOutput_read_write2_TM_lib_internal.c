/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write2_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write2 */
void BufferOutput_read_write2_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_read_write2::Buffer_In */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write2::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write2::Message_In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_read_write2::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write2::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write2::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferOutput_read_write2::_L34 */ kcg_bool _L34;
  
  _L34 = Stacksize_old == 0;
  /* 2 */ if (_L34) {
    kcg_copy_array_124807(
      &(*Buffer_Out)[0],
      (array_124807 *) &(*Message_In)[1]);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &(&(&(*Buffer_Out)[0])[1])[0],
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      Message_out,
      &(*Message_In)[0]);
  }
  else {
    kcg_copy_array_120878(
      &(*Buffer_Out)[0],
      (array_120878 *) &(*Message_In)[0]);
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
  kcg_copy_array_120946(&(*Buffer_Out)[2], (array_120946 *) &(*Buffer_In)[0]);
  *Stacksize_new = Stacksize_old + 1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write2_TM_lib_internal.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

