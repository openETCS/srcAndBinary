/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write2_TM_lib.h"

/* TM_lib_internal::BufferOutput_read_write2 */
void BufferOutput_read_write2_TM_lib(
  /* TM_lib_internal::BufferOutput_read_write2::Buffer_In */ M_TrainTrackRadioOutputBuffer_t *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write2::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write2::Message_In */ M_TrainTrackMessageBus_t_TM_Tra *Message_In,
  /* TM_lib_internal::BufferOutput_read_write2::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write2::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write2::Message_out */ M_TrainTrack_Message_T_TM_radio *Message_out)
{
  /* TM_lib_internal::BufferOutput_read_write2::_L34 */
  static kcg_bool _L34;
  
  _L34 = Stacksize_old == 0;
  /* 2 */ if (_L34) {
    kcg_copy_array_101701(
      &(*Buffer_Out)[0],
      (array_101701 *) &(*Message_In)[1]);
    kcg_copy_M_TrainTrack_Message_T(
      &(&(&(*Buffer_Out)[0])[1])[0],
      (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
    kcg_copy_M_TrainTrack_Message_T(Message_out, &(*Message_In)[0]);
  }
  else {
    kcg_copy_array_98720(&(*Buffer_Out)[0], (array_98720 *) &(*Message_In)[0]);
    if ((0 <= Stacksize_old - 1) & (Stacksize_old - 1 < 100)) {
      kcg_copy_M_TrainTrack_Message_T(
        Message_out,
        &(*Buffer_In)[Stacksize_old - 1]);
    }
    else {
      kcg_copy_M_TrainTrack_Message_T(
        Message_out,
        (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
    }
  }
  kcg_copy_array_98773(&(*Buffer_Out)[2], (array_98773 *) &(*Buffer_In)[0]);
  *Stacksize_new = Stacksize_old + 1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write2_TM_lib.c
** Generation date: 2015-11-10T23:01:13
*************************************************************$ */

