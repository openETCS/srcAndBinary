/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_write_only3_TM_lib.h"

/* TM_lib_internal::BufferOutput_write_only3 */
void BufferOutput_write_only3_TM_lib(
  /* TM_lib_internal::BufferOutput_write_only3::Buffer_In */ M_TrainTrackRadioOutputBuffer_t *Buffer_In,
  /* TM_lib_internal::BufferOutput_write_only3::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_write_only3::Message_In */ M_TrainTrackMessageBus_t_TM_Tra *Message_In,
  /* TM_lib_internal::BufferOutput_write_only3::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t *Buffer_Out,
  /* TM_lib_internal::BufferOutput_write_only3::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_write_only3::Message_out */ M_TrainTrack_Message_T_TM_radio *Message_out)
{
  /* TM_lib_internal::BufferOutput_write_only3::_L7 */
  static kcg_int _L7;
  
  kcg_copy_M_TrainTrack_Message_T(
    Message_out,
    (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
  kcg_copy_array_101372(&(*Buffer_Out)[0], (array_101372 *) &(*Message_In)[0]);
  kcg_copy_array_104156(&(*Buffer_Out)[3], (array_104156 *) &(*Buffer_In)[0]);
  _L7 = Stacksize_old + 3;
  /* 1 */ if (_L7 > DIM_FIFO_TrainTrackOutput_TM_li) {
    *Stacksize_new = DIM_FIFO_TrainTrackOutput_TM_li;
  }
  else {
    *Stacksize_new = _L7;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_write_only3_TM_lib.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

