/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_write_only4_TM_lib.h"

/* TM_lib_internal::BufferOutput_write_only4 */
void BufferOutput_write_only4_TM_lib(
  /* TM_lib_internal::BufferOutput_write_only4::Buffer_In */ M_TrainTrackRadioOutputBuffer_t *Buffer_In,
  /* TM_lib_internal::BufferOutput_write_only4::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_write_only4::Message_In */ M_TrainTrackMessageBus_t_TM_Tra *Message_In,
  /* TM_lib_internal::BufferOutput_write_only4::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t *Buffer_Out,
  /* TM_lib_internal::BufferOutput_write_only4::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_write_only4::Message_out */ M_TrainTrack_Message_T_TM_radio *Message_out)
{
  /* TM_lib_internal::BufferOutput_write_only4::_L7 */
  static kcg_int _L7;
  
  kcg_copy_M_TrainTrack_Message_T(
    Message_out,
    (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
  kcg_copy_array_99615(&(*Buffer_Out)[0], (array_99615 *) &(*Message_In)[0]);
  kcg_copy_array_100516(&(*Buffer_Out)[4], (array_100516 *) &(*Buffer_In)[0]);
  _L7 = Stacksize_old + 4;
  /* 1 */ if (_L7 > DIM_FIFO_TrainTrackOutput_TM_li) {
    *Stacksize_new = DIM_FIFO_TrainTrackOutput_TM_li;
  }
  else {
    *Stacksize_new = _L7;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_write_only4_TM_lib.c
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

