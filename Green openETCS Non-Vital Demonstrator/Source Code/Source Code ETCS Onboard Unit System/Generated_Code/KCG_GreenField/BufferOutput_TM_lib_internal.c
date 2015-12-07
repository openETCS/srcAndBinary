/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void BufferOutput_init_TM_lib_intern(outC_BufferOutput_TM_lib_intern *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->stacksize = 0;
  for (i1 = 0; i1 < 100; i1++) {
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
void BufferOutput_reset_TM_lib_inter(outC_BufferOutput_TM_lib_intern *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::BufferOutput */
void BufferOutput_TM_lib_internal(
  /* TM_lib_internal::BufferOutput::In */ M_TrainTrackMessageBus_t_TM_Tra *In,
  /* TM_lib_internal::BufferOutput::Write */ kcg_bool Write,
  outC_BufferOutput_TM_lib_intern *outC)
{
  /* TM_lib_internal::BufferOutput::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput::stacksize */
  static kcg_int last_stacksize;
  /* TM_lib_internal::BufferOutput::buffer */
  static M_TrainTrackRadioOutputBuffer_t last_buffer;
  /* TM_lib_internal::BufferOutput::c_r */
  static kcg_bool c_r;
  /* TM_lib_internal::BufferOutput::bussize */
  static kcg_int bussize;
  /* TM_lib_internal::BufferOutput::_L19 */
  static kcg_bool _L19;
  
  /* 2 */ CheckSpace_TM_TrainTrack_Bus(In, &_L19, &bussize);
  _L19 = bussize > 0;
  c_r = !_L19 & Write;
  /* last_init_ck_stacksize */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_M_TrainTrackRadioOutpu(
      &last_buffer,
      (M_TrainTrackRadioOutputBuffer_t *) &DEFAULT_output_buffer_TM_lib_in);
    last_stacksize = 0;
  }
  else {
    kcg_copy_M_TrainTrackRadioOutpu(&last_buffer, &outC->buffer);
    last_stacksize = outC->stacksize;
  }
  /* ck_c_r */ if (c_r) {
    /* 1 */
    BufferOutput_read_only_TM_lib_i(
      &last_buffer,
      last_stacksize,
      In,
      &outC->buffer,
      &outC->stacksize,
      &outC->Out);
  }
  else {
    _1_else_clock_IfBlock1 = Write & _L19;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      /* 1 */
      BufferOutput_read_write_TM_lib_(
        &last_buffer,
        last_stacksize,
        In,
        bussize,
        &outC->buffer,
        &outC->stacksize,
        &outC->Out);
    }
    else {
      else_clock_IfBlock1 = !Write & _L19;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        /* 1 */
        BufferOutput_write_only_TM_lib_(
          &last_buffer,
          last_stacksize,
          In,
          bussize,
          &outC->buffer,
          &outC->stacksize,
          &outC->Out);
      }
      else {
        kcg_copy_M_TrainTrack_Message_T(
          &outC->Out,
          (M_TrainTrack_Message_T_TM_radio *) &EMPTY_TrainTrackMessage_TM_lib_);
        kcg_copy_M_TrainTrackRadioOutpu(&outC->buffer, &last_buffer);
        outC->stacksize = last_stacksize;
      }
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_TM_lib_internal.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */
