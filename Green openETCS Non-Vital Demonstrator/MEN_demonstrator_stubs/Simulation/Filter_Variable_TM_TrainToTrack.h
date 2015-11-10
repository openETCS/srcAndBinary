/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Filter_Variable_TM_TrainToTrack_H_
#define _Filter_Variable_TM_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_TrainToTrack::Filter_Variable::int_out */ int_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_TrainToTrack::Filter_Variable::_L1 */ _L1;
  kcg_int /* TM_TrainToTrack::Filter_Variable::_L2 */ _L2;
  kcg_int /* TM_TrainToTrack::Filter_Variable::_L3 */ _L3;
  kcg_int /* TM_TrainToTrack::Filter_Variable::_L4 */ _L4;
} outC_Filter_Variable_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::Filter_Variable */
extern void Filter_Variable_TM_TrainToTrack(
  /* TM_TrainToTrack::Filter_Variable::valid */kcg_bool valid,
  /* TM_TrainToTrack::Filter_Variable::int_in */kcg_int int_in,
  outC_Filter_Variable_TM_TrainToTrack *outC);

extern void Filter_Variable_reset_TM_TrainToTrack(
  outC_Filter_Variable_TM_TrainToTrack *outC);

#endif /* _Filter_Variable_TM_TrainToTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Filter_Variable_TM_TrainToTrack.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

