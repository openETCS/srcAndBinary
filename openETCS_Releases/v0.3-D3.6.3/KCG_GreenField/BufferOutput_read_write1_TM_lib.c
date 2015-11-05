/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write1_TM_lib.h"

/* TM_lib_internal::BufferOutput_read_write1 */
void BufferOutput_read_write1_TM_lib(
  /* TM_lib_internal::BufferOutput_read_write1::Buffer_In */ M_TrainTrackRadioOutputBuffer_t *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write1::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write1::Message_In */ M_TrainTrackMessageBus_t_TM_Tra *Message_In,
  /* TM_lib_internal::BufferOutput_read_write1::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write1::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write1::Message_out */ M_TrainTrack_Message_T_TM_radio *Message_out)
{
  /* TM_lib_internal::BufferOutput_read_write1::_L35 */
  static kcg_bool _L35;
  
  *Stacksize_new = Stacksize_old;
  _L35 = Stacksize_old == 0;
  /* 2 */ if (_L35) {
    kcg_copy_M_TrainTrack_Message_T(
      &(&(*Buffer_Out)[0])[0],
      (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
    kcg_copy_M_TrainTrack_Message_T(Message_out, &(*Message_In)[0]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T(&(&(*Buffer_Out)[0])[0], &(*Message_In)[0]);
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
  kcg_copy_array_97163(&(*Buffer_Out)[1], (array_97163 *) &(*Buffer_In)[0]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write1_TM_lib.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

