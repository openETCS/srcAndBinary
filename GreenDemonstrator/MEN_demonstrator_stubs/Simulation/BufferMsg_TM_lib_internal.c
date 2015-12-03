/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_TM_lib_internal.h"

void BufferMsg_reset_TM_lib_internal(outC_BufferMsg_TM_lib_internal *outC)
{
  outC->init = kcg_true;
  /* 1 */ BufferMsg_write_only_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */ BufferMsg_read_write_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ BufferMsg_read_only_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_lib_internal::BufferMsg */
void BufferMsg_TM_lib_internal(
  /* TM_lib_internal::BufferMsg::In */M_TrainTrack_Message_T_TM_radio_messages *In,
  /* TM_lib_internal::BufferMsg::Write */kcg_bool Write,
  outC_BufferMsg_TM_lib_internal *outC)
{
  /* TM_lib_internal::BufferMsg::Out */ M_TrainTrack_Message_T_TM_radio_messages Out3;
  /* TM_lib_internal::BufferMsg::buffer */ M_TrainTrackMessage_buffer_t_TM_lib_internal _2_buffer;
  /* TM_lib_internal::BufferMsg::stacksize */ kcg_int _1_stacksize;
  /* TM_lib_internal::BufferMsg::Out */ M_TrainTrack_Message_T_TM_radio_messages Out;
  /* TM_lib_internal::BufferMsg::buffer */ M_TrainTrackMessage_buffer_t_TM_lib_internal buffer;
  /* TM_lib_internal::BufferMsg::stacksize */ kcg_int stacksize;
  /* TM_lib_internal::BufferMsg::stacksize */ kcg_int _15_stacksize;
  /* TM_lib_internal::BufferMsg::buffer */ M_TrainTrackMessage_buffer_t_TM_lib_internal _14_buffer;
  /* TM_lib_internal::BufferMsg::Out */ M_TrainTrack_Message_T_TM_radio_messages Out13;
  /* TM_lib_internal::BufferMsg::stacksize */ kcg_int _12_stacksize;
  /* TM_lib_internal::BufferMsg::buffer */ M_TrainTrackMessage_buffer_t_TM_lib_internal _11_buffer;
  /* TM_lib_internal::BufferMsg::Out */ M_TrainTrack_Message_T_TM_radio_messages Out10;
  /* TM_lib_internal::BufferMsg::Out */ M_TrainTrack_Message_T_TM_radio_messages Out4;
  /* TM_lib_internal::BufferMsg::buffer */ M_TrainTrackMessage_buffer_t_TM_lib_internal _5_buffer;
  /* TM_lib_internal::BufferMsg::stacksize */ kcg_int _6_stacksize;
  /* TM_lib_internal::BufferMsg::Out */ M_TrainTrack_Message_T_TM_radio_messages Out7;
  /* TM_lib_internal::BufferMsg::buffer */ M_TrainTrackMessage_buffer_t_TM_lib_internal _8_buffer;
  /* TM_lib_internal::BufferMsg::stacksize */ kcg_int _9_stacksize;
  /* TM_lib_internal::BufferMsg::stacksize */ kcg_int last_stacksize;
  /* TM_lib_internal::BufferMsg::buffer */ M_TrainTrackMessage_buffer_t_TM_lib_internal last_buffer;
  
  if (outC->init) {
    last_stacksize = 0;
  }
  else {
    last_stacksize = outC->stacksize;
  }
  if (outC->init) {
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &last_buffer,
      (M_TrainTrackMessage_buffer_t_TM_lib_internal *)
        &DEFAULT_M_TrainTrackMessage_buffer_TM_lib_internal);
  }
  else {
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &last_buffer,
      &outC->buffer);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L1, In);
  outC->_L7 = outC->_L1.Message.valid;
  outC->_L10 = !outC->_L7;
  outC->_L2 = Write;
  outC->_L11 = outC->_L10 & outC->_L2;
  outC->c_r = outC->_L11;
  outC->_L13 = !outC->_L2;
  outC->_L14 = outC->_L13 & outC->_L7;
  outC->c_w = outC->_L14;
  outC->_L8 = outC->_L7 & outC->_L2;
  outC->c_rw = outC->_L8;
  outC->IfBlock1_clock = outC->c_r == kcg_true;
  if (outC->IfBlock1_clock) {
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &outC->_L2_IfBlock1,
      &last_buffer);
    outC->_L4_IfBlock1 = last_stacksize;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L5_IfBlock1, In);
    /* 1 */
    BufferMsg_read_only_TM_lib_internal(
      &outC->_L2_IfBlock1,
      outC->_L4_IfBlock1,
      &outC->_L5_IfBlock1,
      &outC->Context_1);
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &outC->_L8_IfBlock1,
      &outC->Context_1.Buffer_Out);
    outC->_L7_IfBlock1 = outC->Context_1.Stacksize_new;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L6_IfBlock1,
      &outC->Context_1.Message_out);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &Out3,
      &outC->_L6_IfBlock1);
    _1_stacksize = outC->_L7_IfBlock1;
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &_2_buffer,
      &outC->_L8_IfBlock1);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->Out, &Out3);
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &outC->buffer,
      &_2_buffer);
    outC->stacksize = _1_stacksize;
  }
  else {
    outC->_3_else_clock_IfBlock1 = outC->c_rw == kcg_true;
    if (outC->_3_else_clock_IfBlock1) {
      kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
        &outC->_L1_IfBlock1,
        &last_buffer);
      outC->_L3_IfBlock1 = last_stacksize;
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &outC->_L47_IfBlock1,
        In);
      /* 1 */
      BufferMsg_read_write_TM_lib_internal(
        &outC->_L1_IfBlock1,
        outC->_L3_IfBlock1,
        &outC->_L47_IfBlock1,
        &outC->_1_Context_1);
      kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
        &outC->_L74_IfBlock1,
        &outC->_1_Context_1.Buffer_Out);
      outC->_L65_IfBlock1 = outC->_1_Context_1.Stacksize_new;
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &outC->_L56_IfBlock1,
        &outC->_1_Context_1.Message_out);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &Out7,
        &outC->_L56_IfBlock1);
      _9_stacksize = outC->_L65_IfBlock1;
      kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
        &_8_buffer,
        &outC->_L74_IfBlock1);
      stacksize = _9_stacksize;
      kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
        &buffer,
        &_8_buffer);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out, &Out7);
    }
    else {
      outC->else_clock_IfBlock1 = outC->c_w == kcg_true;
      if (outC->else_clock_IfBlock1) {
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &outC->_L113_IfBlock1,
          &last_buffer);
        outC->_L312_IfBlock1 = last_stacksize;
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &outC->_L411_IfBlock1,
          In);
        /* 1 */
        BufferMsg_write_only_TM_lib_internal(
          &outC->_L113_IfBlock1,
          outC->_L312_IfBlock1,
          &outC->_L411_IfBlock1,
          &outC->_2_Context_1);
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &outC->_L78_IfBlock1,
          &outC->_2_Context_1.Buffer_Out);
        outC->_L69_IfBlock1 = outC->_2_Context_1.Stacksize_new;
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &outC->_L510_IfBlock1,
          &outC->_2_Context_1.Message_out);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &Out13,
          &outC->_L510_IfBlock1);
        _15_stacksize = outC->_L69_IfBlock1;
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &_14_buffer,
          &outC->_L78_IfBlock1);
        _6_stacksize = _15_stacksize;
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &_5_buffer,
          &_14_buffer);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out4, &Out13);
      }
      else {
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &outC->_L514_IfBlock1,
          In);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &Out10,
          &outC->_L514_IfBlock1);
        outC->_L415_IfBlock1 = last_stacksize;
        _12_stacksize = outC->_L415_IfBlock1;
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &outC->_L116_IfBlock1,
          &last_buffer);
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &_11_buffer,
          &outC->_L116_IfBlock1);
        _6_stacksize = _12_stacksize;
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &_5_buffer,
          &_11_buffer);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out4, &Out10);
      }
      stacksize = _6_stacksize;
      kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
        &buffer,
        &_5_buffer);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out, &Out4);
    }
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->Out, &Out);
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &outC->buffer,
      &buffer);
    outC->stacksize = stacksize;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_TM_lib_internal.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

