/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _BufferOutput_read_write_TM_lib
#define _BufferOutput_read_write_TM_lib

#include "kcg_types.h"
#include "BufferOutput_read_write5_TM_lib.h"
#include "BufferOutput_read_write4_TM_lib.h"
#include "BufferOutput_read_write3_TM_lib.h"
#include "BufferOutput_read_write2_TM_lib.h"
#include "BufferOutput_read_write1_TM_lib.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_lib_internal::BufferOutput_read_write */
extern void BufferOutput_read_write_TM_lib_(
  /* TM_lib_internal::BufferOutput_read_write::Buffer_In */ M_TrainTrackRadioOutputBuffer_t *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write::Message_In */ M_TrainTrackMessageBus_t_TM_Tra *Message_In,
  /* TM_lib_internal::BufferOutput_read_write::Bus_Size */ kcg_int Bus_Size,
  /* TM_lib_internal::BufferOutput_read_write::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write::Message_out */ M_TrainTrack_Message_T_TM_radio *Message_out);

#endif /* _BufferOutput_read_write_TM_lib */
/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write_TM_lib_.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

