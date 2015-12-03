/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _BufferMsg_read_write_TM_lib_internal_H_
#define _BufferMsg_read_write_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg_read_write::Buffer_Out */ Buffer_Out;
  kcg_int /* TM_lib_internal::BufferMsg_read_write::Stacksize_new */ Stacksize_new;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_read_write::Message_out */ Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::BufferMsg_read_write::index */ index;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_read_write::_L23 */ _L23;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_read_write::_L21 */ _L21;
  kcg_int /* TM_lib_internal::BufferMsg_read_write::_L15 */ _L15;
  kcg_int /* TM_lib_internal::BufferMsg_read_write::_L14 */ _L14;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg_read_write::_L12 */ _L12;
  array__19662 /* TM_lib_internal::BufferMsg_read_write::_L24 */ _L24;
  array__19493 /* TM_lib_internal::BufferMsg_read_write::_L25 */ _L25;
  array__19665 /* TM_lib_internal::BufferMsg_read_write::_L26 */ _L26;
  kcg_bool /* TM_lib_internal::BufferMsg_read_write::_L33 */ _L33;
  kcg_int /* TM_lib_internal::BufferMsg_read_write::_L32 */ _L32;
  kcg_int /* TM_lib_internal::BufferMsg_read_write::_L31 */ _L31;
  kcg_int /* TM_lib_internal::BufferMsg_read_write::_L30 */ _L30;
  kcg_int /* TM_lib_internal::BufferMsg_read_write::_L29 */ _L29;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_read_write::_L37 */ _L37;
  kcg_int /* TM_lib_internal::BufferMsg_read_write::_L38 */ _L38;
  kcg_bool /* TM_lib_internal::BufferMsg_read_write::_L40 */ _L40;
  kcg_int /* TM_lib_internal::BufferMsg_read_write::_L39 */ _L39;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_read_write::_L41 */ _L41;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_read_write::_L42 */ _L42;
} outC_BufferMsg_read_write_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferMsg_read_write */
extern void BufferMsg_read_write_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_read_write::Buffer_In */M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_read_write::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_read_write::Message_In */M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  outC_BufferMsg_read_write_TM_lib_internal *outC);

extern void BufferMsg_read_write_reset_TM_lib_internal(
  outC_BufferMsg_read_write_TM_lib_internal *outC);

#endif /* _BufferMsg_read_write_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_read_write_TM_lib_internal.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

