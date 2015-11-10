/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _CheckSpace_TM_TrainTrack_Bus_H_
#define _CheckSpace_TM_TrainTrack_Bus_H_

#include "kcg_types.h"
#include "CheckSpaceLoop_TM_TrainTrack_Bus.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_TrainTrack_Bus::CheckSpace::Busy */ Busy;
  kcg_int /* TM_TrainTrack_Bus::CheckSpace::SlotsUsed */ SlotsUsed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckSpaceLoop_TM_TrainTrack_Bus /* 1 */ Context_1[5];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_TrainTrack_Bus::CheckSpace::_L1 */ _L1;
  kcg_int /* TM_TrainTrack_Bus::CheckSpace::_L2 */ _L2;
  kcg_bool /* TM_TrainTrack_Bus::CheckSpace::_L3 */ _L3;
  kcg_int /* TM_TrainTrack_Bus::CheckSpace::_L4 */ _L4;
  kcg_int /* TM_TrainTrack_Bus::CheckSpace::_L5 */ _L5;
  array__19668 /* TM_TrainTrack_Bus::CheckSpace::_L6 */ _L6;
  kcg_int /* TM_TrainTrack_Bus::CheckSpace::_L8 */ _L8;
  kcg_bool /* TM_TrainTrack_Bus::CheckSpace::_L9 */ _L9;
} outC_CheckSpace_TM_TrainTrack_Bus;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainTrack_Bus::CheckSpace */
extern void CheckSpace_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::CheckSpace::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  outC_CheckSpace_TM_TrainTrack_Bus *outC);

extern void CheckSpace_reset_TM_TrainTrack_Bus(
  outC_CheckSpace_TM_TrainTrack_Bus *outC);

#endif /* _CheckSpace_TM_TrainTrack_Bus_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckSpace_TM_TrainTrack_Bus.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

