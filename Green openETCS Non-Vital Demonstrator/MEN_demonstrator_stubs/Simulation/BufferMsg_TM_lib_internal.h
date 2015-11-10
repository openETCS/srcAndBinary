/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _BufferMsg_TM_lib_internal_H_
#define _BufferMsg_TM_lib_internal_H_

#include "kcg_types.h"
#include "BufferMsg_write_only_TM_lib_internal.h"
#include "BufferMsg_read_write_TM_lib_internal.h"
#include "BufferMsg_read_only_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg::Out */ Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg::buffer */ buffer;
  kcg_int /* TM_lib_internal::BufferMsg::stacksize */ stacksize;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BufferMsg_write_only_TM_lib_internal /* 1 */ _2_Context_1;
  outC_BufferMsg_read_write_TM_lib_internal /* 1 */ _1_Context_1;
  outC_BufferMsg_read_only_TM_lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_lib_internal::BufferMsg::IfBlock1::else */ _3_else_clock_IfBlock1;
  kcg_bool /* TM_lib_internal::BufferMsg::IfBlock1::else::else */ else_clock_IfBlock1;
  kcg_bool /* TM_lib_internal::BufferMsg::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg::IfBlock1::then::_L8 */ _L8_IfBlock1;
  kcg_int /* TM_lib_internal::BufferMsg::IfBlock1::then::_L7 */ _L7_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg::IfBlock1::then::_L6 */ _L6_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg::IfBlock1::then::_L5 */ _L5_IfBlock1;
  kcg_int /* TM_lib_internal::BufferMsg::IfBlock1::then::_L4 */ _L4_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg::IfBlock1::then::_L2 */ _L2_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L7 */ _L78_IfBlock1;
  kcg_int /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L6 */ _L69_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L5 */ _L510_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L4 */ _L411_IfBlock1;
  kcg_int /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L3 */ _L312_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L1 */ _L113_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg::IfBlock1::else::else::else::_L5 */ _L514_IfBlock1;
  kcg_int /* TM_lib_internal::BufferMsg::IfBlock1::else::else::else::_L4 */ _L415_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg::IfBlock1::else::else::else::_L1 */ _L116_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L1 */ _L1_IfBlock1;
  kcg_int /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L3 */ _L3_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L4 */ _L47_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L5 */ _L56_IfBlock1;
  kcg_int /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L6 */ _L65_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L7 */ _L74_IfBlock1;
  kcg_bool /* TM_lib_internal::BufferMsg::c_r */ c_r;
  kcg_bool /* TM_lib_internal::BufferMsg::c_w */ c_w;
  kcg_bool /* TM_lib_internal::BufferMsg::c_rw */ c_rw;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg::_L1 */ _L1;
  kcg_bool /* TM_lib_internal::BufferMsg::_L2 */ _L2;
  kcg_bool /* TM_lib_internal::BufferMsg::_L7 */ _L7;
  kcg_bool /* TM_lib_internal::BufferMsg::_L8 */ _L8;
  kcg_bool /* TM_lib_internal::BufferMsg::_L10 */ _L10;
  kcg_bool /* TM_lib_internal::BufferMsg::_L11 */ _L11;
  kcg_bool /* TM_lib_internal::BufferMsg::_L13 */ _L13;
  kcg_bool /* TM_lib_internal::BufferMsg::_L14 */ _L14;
} outC_BufferMsg_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferMsg */
extern void BufferMsg_TM_lib_internal(
  /* TM_lib_internal::BufferMsg::In */M_TrainTrack_Message_T_TM_radio_messages *In,
  /* TM_lib_internal::BufferMsg::Write */kcg_bool Write,
  outC_BufferMsg_TM_lib_internal *outC);

extern void BufferMsg_reset_TM_lib_internal(
  outC_BufferMsg_TM_lib_internal *outC);

#endif /* _BufferMsg_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_TM_lib_internal.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

