/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_write_only_TM_lib_int.h"

/* TM_lib_internal::BufferMsg_write_only */
void BufferMsg_write_only_TM_lib_int(
  /* TM_lib_internal::BufferMsg_write_only::Buffer_In */ M_TrainTrackMessage_buffer_t_TM *Buffer_In,
  /* TM_lib_internal::BufferMsg_write_only::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_write_only::Message_In */ M_TrainTrack_Message_T_TM_radio *Message_In,
  /* TM_lib_internal::BufferMsg_write_only::Buffer_Out */ M_TrainTrackMessage_buffer_t_TM *Buffer_Out,
  /* TM_lib_internal::BufferMsg_write_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferMsg_write_only::Message_out */ M_TrainTrack_Message_T_TM_radio *Message_out)
{
  /* TM_lib_internal::BufferMsg_write_only::_L7 */
  static kcg_int _L7;
  
  kcg_copy_M_TrainTrack_Message_T(
    Message_out,
    (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
  kcg_copy_M_TrainTrack_Message_T(&(&(*Buffer_Out)[0])[0], Message_In);
  kcg_copy_array_99615(&(*Buffer_Out)[1], (array_99615 *) &(*Buffer_In)[0]);
  _L7 = Stacksize_old + 1;
  /* 1 */ if (_L7 > DIM_FIFO_TrainTrackMessage_TM_l) {
    *Stacksize_new = DIM_FIFO_TrainTrackMessage_TM_l;
  }
  else {
    *Stacksize_new = _L7;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferMsg_write_only_TM_lib_int.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

