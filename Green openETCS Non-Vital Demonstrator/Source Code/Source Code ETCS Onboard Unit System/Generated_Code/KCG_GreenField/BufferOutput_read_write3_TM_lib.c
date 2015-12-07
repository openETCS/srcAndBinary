/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write3_TM_lib.h"

/* TM_lib_internal::BufferOutput_read_write3 */
void BufferOutput_read_write3_TM_lib(
  /* TM_lib_internal::BufferOutput_read_write3::Buffer_In */ M_TrainTrackRadioOutputBuffer_t *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write3::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write3::Message_In */ M_TrainTrackMessageBus_t_TM_Tra *Message_In,
  /* TM_lib_internal::BufferOutput_read_write3::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write3::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write3::Message_out */ M_TrainTrack_Message_T_TM_radio *Message_out)
{
  /* TM_lib_internal::BufferOutput_read_write3::_L34 */
  static kcg_bool _L34;
  
  _L34 = Stacksize_old == 0;
  /* 2 */ if (_L34) {
    kcg_copy_array_99109(&(*Buffer_Out)[0], (array_99109 *) &(*Message_In)[1]);
    kcg_copy_M_TrainTrack_Message_T(
      &(&(&(*Buffer_Out)[0])[2])[0],
      (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
    kcg_copy_M_TrainTrack_Message_T(Message_out, &(*Message_In)[0]);
  }
  else {
    kcg_copy_array_99380(&(*Buffer_Out)[0], (array_99380 *) &(*Message_In)[0]);
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
  kcg_copy_array_102121(&(*Buffer_Out)[3], (array_102121 *) &(*Buffer_In)[0]);
  *Stacksize_new = Stacksize_old + 2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write3_TM_lib.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

