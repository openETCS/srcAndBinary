/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_write_only4_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_write_only4 */
void BufferOutput_write_only4_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_write_only4::Buffer_In */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_write_only4::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_write_only4::Message_In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_write_only4::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_write_only4::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_write_only4::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferOutput_write_only4::_L7 */ kcg_int _L7;
  
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    Message_out,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  kcg_copy_array_121788(&(*Buffer_Out)[0], (array_121788 *) &(*Message_In)[0]);
  kcg_copy_array_122932(&(*Buffer_Out)[4], (array_122932 *) &(*Buffer_In)[0]);
  _L7 = Stacksize_old + 4;
  /* 1 */ if (_L7 > DIM_FIFO_TrainTrackOutput_TM_lib_internal) {
    *Stacksize_new = DIM_FIFO_TrainTrackOutput_TM_lib_internal;
  }
  else {
    *Stacksize_new = _L7;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_write_only4_TM_lib_internal.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

