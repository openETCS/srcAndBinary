/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */
#ifndef _BufferOutput_write_only_TM_lib_internal_H_
#define _BufferOutput_write_only_TM_lib_internal_H_

#include "kcg_types.h"
#include "BufferOutput_write_only5_TM_lib_internal.h"
#include "BufferOutput_write_only4_TM_lib_internal.h"
#include "BufferOutput_write_only3_TM_lib_internal.h"
#include "BufferOutput_write_only2_TM_lib_internal.h"
#include "BufferOutput_write_only1_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_lib_internal::BufferOutput_write_only */
extern void BufferOutput_write_only_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_write_only::Buffer_In */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_write_only::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_write_only::Message_In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_write_only::Bus_Size */ kcg_int Bus_Size,
  /* TM_lib_internal::BufferOutput_write_only::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_write_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_write_only::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out);

#endif /* _BufferOutput_write_only_TM_lib_internal_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_write_only_TM_lib_internal.h
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

