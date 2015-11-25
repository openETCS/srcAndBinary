/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */
#ifndef _TRAIN_TrackSideInputFifo_Toolbox_Functions_5_H_
#define _TRAIN_TrackSideInputFifo_Toolbox_Functions_5_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* Toolbox::Functions::TRAIN_TrackSideInputFifo::outData */ outData;
  kcg_bool /* Toolbox::Functions::TRAIN_TrackSideInputFifo::outValid */ outValid;
  kcg_int /* Toolbox::Functions::TRAIN_TrackSideInputFifo::size */ size;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L20 */ _L20_IfBlock1;
  array_120932 /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L4 */ _L4_IfBlock1;
  array_120932 /* Toolbox::Functions::TRAIN_TrackSideInputFifo::buffer */ buffer;
  kcg_int /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L32 */ _L32;
  kcg_int /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L50 */ _L50;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::TRAIN_TrackSideInputFifo */
extern void TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inData */ API_TrackSideInput_T_API_Msg_Pkg *inData,
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inValid */ kcg_bool inValid,
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inReady */ kcg_bool inReady,
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TRAIN_TrackSideInputFifo_init_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TRAIN_TrackSideInputFifo_Toolbox_Functions_5_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TRAIN_TrackSideInputFifo_Toolbox_Functions_5.h
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

