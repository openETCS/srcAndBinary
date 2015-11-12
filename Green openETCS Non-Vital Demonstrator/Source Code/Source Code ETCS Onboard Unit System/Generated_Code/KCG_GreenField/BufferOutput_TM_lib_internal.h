/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _BufferOutput_TM_lib_internal_H
#define _BufferOutput_TM_lib_internal_H

#include "kcg_types.h"
#include "BufferOutput_write_only_TM_lib_.h"
#include "BufferOutput_read_write_TM_lib_.h"
#include "BufferOutput_read_only_TM_lib_i.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio /* TM_lib_internal::BufferOutput::Out */ Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_TrainTrackRadioOutputBuffer_t /* TM_lib_internal::BufferOutput::buffer */ buffer;
  kcg_int /* TM_lib_internal::BufferOutput::stacksize */ stacksize;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_BufferOutput_TM_lib_intern;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferOutput */
extern void BufferOutput_TM_lib_internal(
  /* TM_lib_internal::BufferOutput::In */ M_TrainTrackMessageBus_t_TM_Tra *In,
  /* TM_lib_internal::BufferOutput::Write */ kcg_bool Write,
  outC_BufferOutput_TM_lib_intern *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BufferOutput_reset_TM_lib_inter(
  outC_BufferOutput_TM_lib_intern *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BufferOutput_init_TM_lib_intern(
  outC_BufferOutput_TM_lib_intern *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _BufferOutput_TM_lib_internal_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_TM_lib_internal.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

