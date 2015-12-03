/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write_TM_lib_.h"

/* TM_lib_internal::BufferOutput_read_write */
void BufferOutput_read_write_TM_lib_(
  /* TM_lib_internal::BufferOutput_read_write::Buffer_In */ M_TrainTrackRadioOutputBuffer_t *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write::Message_In */ M_TrainTrackMessageBus_t_TM_Tra *Message_In,
  /* TM_lib_internal::BufferOutput_read_write::Bus_Size */ kcg_int Bus_Size,
  /* TM_lib_internal::BufferOutput_read_write::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write::Message_out */ M_TrainTrack_Message_T_TM_radio *Message_out)
{
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = Bus_Size == 1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 6 */
    BufferOutput_read_write1_TM_lib(
      Buffer_In,
      Stacksize_old,
      Message_In,
      Buffer_Out,
      Stacksize_new,
      Message_out);
  }
  else {
    _2_else_clock_IfBlock1 = Bus_Size == 2;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      /* 4 */
      BufferOutput_read_write2_TM_lib(
        Buffer_In,
        Stacksize_old,
        Message_In,
        Buffer_Out,
        Stacksize_new,
        Message_out);
    }
    else {
      _1_else_clock_IfBlock1 = Bus_Size == 3;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        /* 3 */
        BufferOutput_read_write3_TM_lib(
          Buffer_In,
          Stacksize_old,
          Message_In,
          Buffer_Out,
          Stacksize_new,
          Message_out);
      }
      else {
        else_clock_IfBlock1 = Bus_Size == 4;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          /* 3 */
          BufferOutput_read_write4_TM_lib(
            Buffer_In,
            Stacksize_old,
            Message_In,
            Buffer_Out,
            Stacksize_new,
            Message_out);
        }
        else {
          /* 3 */
          BufferOutput_read_write5_TM_lib(
            Buffer_In,
            Stacksize_old,
            Message_In,
            Buffer_Out,
            Stacksize_new,
            Message_out);
        }
      }
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write_TM_lib_.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

