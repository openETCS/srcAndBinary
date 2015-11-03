/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void BufferMsg_init_TM_lib_internal(outC_BufferMsg_TM_lib_internal *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->stacksize = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->buffer[i1].Message.valid = kcg_true;
    outC->buffer[i1].Message.nid_message = 0;
    outC->buffer[i1].Message.l_message = 0;
    outC->buffer[i1].Message.t_train = 0;
    outC->buffer[i1].Message.nid_engine = 0;
    outC->buffer[i1].Message.field1 = 0;
    outC->buffer[i1].Message.field2 = 0;
    outC->buffer[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->buffer[i1].OptionalPackets[i] = 0;
    }
  }
  outC->Out.Message.valid = kcg_true;
  outC->Out.Message.nid_message = 0;
  outC->Out.Message.l_message = 0;
  outC->Out.Message.t_train = 0;
  outC->Out.Message.nid_engine = 0;
  outC->Out.Message.field1 = 0;
  outC->Out.Message.field2 = 0;
  outC->Out.Message.field3 = 0;
  for (i1 = 0; i1 < 50; i1++) {
    outC->Out.OptionalPackets[i1] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BufferMsg_reset_TM_lib_internal(outC_BufferMsg_TM_lib_internal *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::BufferMsg */
void BufferMsg_TM_lib_internal(
  /* TM_lib_internal::BufferMsg::In */ M_TrainTrack_Message_T_TM_radio_messages *In,
  /* TM_lib_internal::BufferMsg::Write */ kcg_bool Write,
  outC_BufferMsg_TM_lib_internal *outC)
{
  /* TM_lib_internal::BufferMsg::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_lib_internal::BufferMsg::stacksize */
  static kcg_int last_stacksize;
  /* TM_lib_internal::BufferMsg::buffer */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal last_buffer;
  /* TM_lib_internal::BufferMsg::c_r */
  static kcg_bool c_r;
  
  c_r = !(*In).Message.valid & Write;
  /* last_init_ck_stacksize */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &last_buffer,
      (M_TrainTrackMessage_buffer_t_TM_lib_internal *)
        &DEFAULT_M_TrainTrackMessage_buffer_TM_lib_internal);
    last_stacksize = 0;
  }
  else {
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &last_buffer,
      &outC->buffer);
    last_stacksize = outC->stacksize;
  }
  /* ck_c_r */ if (c_r) {
    /* 1 */
    BufferMsg_read_only_TM_lib_internal(
      &last_buffer,
      last_stacksize,
      In,
      &outC->buffer,
      &outC->stacksize,
      &outC->Out);
  }
  else {
    _1_else_clock_IfBlock1 = (*In).Message.valid & Write;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      /* 1 */
      BufferMsg_read_write_TM_lib_internal(
        &last_buffer,
        last_stacksize,
        In,
        &outC->buffer,
        &outC->stacksize,
        &outC->Out);
    }
    else {
      else_clock_IfBlock1 = !Write & (*In).Message.valid;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        /* 1 */
        BufferMsg_write_only_TM_lib_internal(
          &last_buffer,
          last_stacksize,
          In,
          &outC->buffer,
          &outC->stacksize,
          &outC->Out);
      }
      else {
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->Out, In);
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &outC->buffer,
          &last_buffer);
        outC->stacksize = last_stacksize;
      }
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferMsg_TM_lib_internal.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

