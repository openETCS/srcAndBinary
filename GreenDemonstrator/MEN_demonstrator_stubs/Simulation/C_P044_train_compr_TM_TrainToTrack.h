/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _C_P044_train_compr_TM_TrainToTrack_H_
#define _C_P044_train_compr_TM_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P044_TrainTrack_int_TM_TrainToTrack /* TM_TrainToTrack::C_P044_train_compr::P044_int */ P044_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P044_TM_TrainToTrack /* TM_TrainToTrack::C_P044_train_compr::_L1 */ _L1;
  P044_TrainTrack_int_TM_TrainToTrack /* TM_TrainToTrack::C_P044_train_compr::_L116 */ _L116;
} outC_C_P044_train_compr_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_P044_train_compr */
extern void C_P044_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P044_train_compr::P044_in */P044_TM_TrainToTrack *P044_in,
  outC_C_P044_train_compr_TM_TrainToTrack *outC);

extern void C_P044_train_compr_reset_TM_TrainToTrack(
  outC_C_P044_train_compr_TM_TrainToTrack *outC);

#endif /* _C_P044_train_compr_TM_TrainToTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P044_train_compr_TM_TrainToTrack.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

