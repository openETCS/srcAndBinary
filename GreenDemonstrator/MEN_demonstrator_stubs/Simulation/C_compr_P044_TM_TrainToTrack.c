/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P044_TM_TrainToTrack.h"

void C_compr_P044_reset_TM_TrainToTrack(outC_C_compr_P044_TM_TrainToTrack *outC)
{
}

/* TM_TrainToTrack::C_compr_P044 */
void C_compr_P044_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P044::P044_int */P044_TrainTrack_int_TM_TrainToTrack *P044_int,
  outC_C_compr_P044_TM_TrainToTrack *outC)
{
  P044_TrainTrack_int_TM_TrainToTrack noname;
  
  kcg_copy_P044_TM_TrainToTrack(
    &outC->_L168,
    (P044_TM_TrainToTrack *) &DEFAULT_P044_TM_TrainToTrack);
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(&outC->_L167, P044_int);
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(&noname, &outC->_L167);
  kcg_copy_P044_TM_TrainToTrack(&outC->P044_out, &outC->_L168);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_compr_P044_TM_TrainToTrack.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

