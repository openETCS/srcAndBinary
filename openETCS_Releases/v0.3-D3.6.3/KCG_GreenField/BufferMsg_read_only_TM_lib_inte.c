/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_read_only_TM_lib_inte.h"

/* TM_lib_internal::BufferMsg_read_only */
void BufferMsg_read_only_TM_lib_inte(
  /* TM_lib_internal::BufferMsg_read_only::Buffer_In */ M_TrainTrackMessage_buffer_t_TM *Buffer_In,
  /* TM_lib_internal::BufferMsg_read_only::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_read_only::Message_In */ M_TrainTrack_Message_T_TM_radio *Message_In,
  /* TM_lib_internal::BufferMsg_read_only::Buffer_Out */ M_TrainTrackMessage_buffer_t_TM *Buffer_Out,
  /* TM_lib_internal::BufferMsg_read_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferMsg_read_only::Message_out */ M_TrainTrack_Message_T_TM_radio *Message_out)
{
  /* TM_lib_internal::BufferMsg_read_only::_L9 */
  static kcg_int _L9;
  
  _L9 = Stacksize_old - 1;
  /* 1 */ if (_L9 < 0) {
    *Stacksize_new = 0;
  }
  else {
    *Stacksize_new = _L9;
  }
  kcg_copy_M_TrainTrackMessage_bu(Buffer_Out, Buffer_In);
  if ((0 <= *Stacksize_new) & (*Stacksize_new < 5)) {
    kcg_copy_M_TrainTrack_Message_T(Message_out, &(*Buffer_In)[*Stacksize_new]);
    kcg_copy_M_TrainTrack_Message_T(
      &(*Buffer_Out)[*Stacksize_new],
      (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T(
      Message_out,
      (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferMsg_read_only_TM_lib_inte.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

