/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _BufferMsg_read_only_TM_lib_internal_H_
#define _BufferMsg_read_only_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg_read_only::Buffer_Out */ Buffer_Out;
  kcg_int /* TM_lib_internal::BufferMsg_read_only::Stacksize_new */ Stacksize_new;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_read_only::Message_out */ Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::BufferMsg_read_only::index */ index;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg_read_only::_L1 */ _L1;
  kcg_int /* TM_lib_internal::BufferMsg_read_only::_L2 */ _L2;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_read_only::_L3 */ _L3;
  kcg_int /* TM_lib_internal::BufferMsg_read_only::_L8 */ _L8;
  kcg_int /* TM_lib_internal::BufferMsg_read_only::_L9 */ _L9;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_read_only::_L12 */ _L12;
  kcg_bool /* TM_lib_internal::BufferMsg_read_only::_L13 */ _L13;
  kcg_int /* TM_lib_internal::BufferMsg_read_only::_L14 */ _L14;
  kcg_int /* TM_lib_internal::BufferMsg_read_only::_L15 */ _L15;
  kcg_int /* TM_lib_internal::BufferMsg_read_only::_L18 */ _L18;
  kcg_int /* TM_lib_internal::BufferMsg_read_only::_L19 */ _L19;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg_read_only::_L21 */ _L21;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg_read_only::_L22 */ _L22;
} outC_BufferMsg_read_only_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferMsg_read_only */
extern void BufferMsg_read_only_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_read_only::Buffer_In */M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_read_only::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_read_only::Message_In */M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  outC_BufferMsg_read_only_TM_lib_internal *outC);

extern void BufferMsg_read_only_reset_TM_lib_internal(
  outC_BufferMsg_read_only_TM_lib_internal *outC);

#endif /* _BufferMsg_read_only_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_read_only_TM_lib_internal.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

