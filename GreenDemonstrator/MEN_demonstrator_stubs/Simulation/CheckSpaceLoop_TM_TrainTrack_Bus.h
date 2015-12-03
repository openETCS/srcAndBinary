/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _CheckSpaceLoop_TM_TrainTrack_Bus_H_
#define _CheckSpaceLoop_TM_TrainTrack_Bus_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_TrainTrack_Bus::CheckSpaceLoop::cont */ cont;
  kcg_int /* TM_TrainTrack_Bus::CheckSpaceLoop::Count */ Count;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_TrainTrack_Bus::CheckSpaceLoop::_L1 */ _L1;
  kcg_int /* TM_TrainTrack_Bus::CheckSpaceLoop::_L2 */ _L2;
  kcg_int /* TM_TrainTrack_Bus::CheckSpaceLoop::_L3 */ _L3;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_TrainTrack_Bus::CheckSpaceLoop::_L8 */ _L8;
  kcg_bool /* TM_TrainTrack_Bus::CheckSpaceLoop::_L9 */ _L9;
  kcg_int /* TM_TrainTrack_Bus::CheckSpaceLoop::_L16 */ _L16;
  kcg_int /* TM_TrainTrack_Bus::CheckSpaceLoop::_L17 */ _L17;
  kcg_int /* TM_TrainTrack_Bus::CheckSpaceLoop::_L18 */ _L18;
  kcg_int /* TM_TrainTrack_Bus::CheckSpaceLoop::_L19 */ _L19;
  kcg_bool /* TM_TrainTrack_Bus::CheckSpaceLoop::_L20 */ _L20;
} outC_CheckSpaceLoop_TM_TrainTrack_Bus;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainTrack_Bus::CheckSpaceLoop */
extern void CheckSpaceLoop_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::CheckSpaceLoop::i */kcg_int i,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Acc */kcg_int Acc,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Message */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message,
  outC_CheckSpaceLoop_TM_TrainTrack_Bus *outC);

extern void CheckSpaceLoop_reset_TM_TrainTrack_Bus(
  outC_CheckSpaceLoop_TM_TrainTrack_Bus *outC);

#endif /* _CheckSpaceLoop_TM_TrainTrack_Bus_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckSpaceLoop_TM_TrainTrack_Bus.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

