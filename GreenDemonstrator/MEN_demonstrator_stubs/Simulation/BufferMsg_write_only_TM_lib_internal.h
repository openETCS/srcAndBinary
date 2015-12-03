/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _BufferMsg_write_only_TM_lib_internal_H_
#define _BufferMsg_write_only_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg_write_only::Buffer_Out */ Buffer_Out;
  kcg_int /* TM_lib_internal::BufferMsg_write_only::Stacksize_new */ Stacksize_new;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_write_only::Message_out */ Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg_write_only::_L1 */ _L1;
  kcg_int /* TM_lib_internal::BufferMsg_write_only::_L2 */ _L2;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_write_only::_L3 */ _L3;
  array__19662 /* TM_lib_internal::BufferMsg_write_only::_L4 */ _L4;
  array__19493 /* TM_lib_internal::BufferMsg_write_only::_L5 */ _L5;
  array__19665 /* TM_lib_internal::BufferMsg_write_only::_L6 */ _L6;
  kcg_int /* TM_lib_internal::BufferMsg_write_only::_L7 */ _L7;
  kcg_int /* TM_lib_internal::BufferMsg_write_only::_L8 */ _L8;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_write_only::_L9 */ _L9;
  kcg_int /* TM_lib_internal::BufferMsg_write_only::_L10 */ _L10;
  kcg_bool /* TM_lib_internal::BufferMsg_write_only::_L11 */ _L11;
  kcg_int /* TM_lib_internal::BufferMsg_write_only::_L12 */ _L12;
} outC_BufferMsg_write_only_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferMsg_write_only */
extern void BufferMsg_write_only_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_write_only::Buffer_In */M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_write_only::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_write_only::Message_In */M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  outC_BufferMsg_write_only_TM_lib_internal *outC);

extern void BufferMsg_write_only_reset_TM_lib_internal(
  outC_BufferMsg_write_only_TM_lib_internal *outC);

#endif /* _BufferMsg_write_only_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_write_only_TM_lib_internal.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

