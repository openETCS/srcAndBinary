/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write3_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write3 */
void BufferOutput_read_write3_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_read_write3::Buffer_In */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write3::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write3::Message_In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_read_write3::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write3::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write3::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferOutput_read_write3::_L34 */
  static kcg_bool _L34;
  
  _L34 = Stacksize_old == 0;
  /* 2 */ if (_L34) {
    kcg_copy_array_96877(&(*Buffer_Out)[0], (array_96877 *) &(*Message_In)[1]);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &(&(&(*Buffer_Out)[0])[2])[0],
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      Message_out,
      &(*Message_In)[0]);
  }
  else {
    kcg_copy_array_97166(&(*Buffer_Out)[0], (array_97166 *) &(*Message_In)[0]);
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
  kcg_copy_array_99850(&(*Buffer_Out)[3], (array_99850 *) &(*Buffer_In)[0]);
  *Stacksize_new = Stacksize_old + 2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write3_TM_lib_internal.c
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

