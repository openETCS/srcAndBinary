/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P044_train_compr_TM_TrainToTrack.h"

void C_P044_train_compr_reset_TM_TrainToTrack(
  outC_C_P044_train_compr_TM_TrainToTrack *outC)
{
}

/* TM_TrainToTrack::C_P044_train_compr */
void C_P044_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P044_train_compr::P044_in */P044_TM_TrainToTrack *P044_in,
  outC_C_P044_train_compr_TM_TrainToTrack *outC)
{
  P044_TM_TrainToTrack noname;
  
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(
    &outC->_L116,
    (P044_TrainTrack_int_TM_TrainToTrack *) &DEFAULT_P044_int_TM_TrainToTrack);
  kcg_copy_P044_TM_TrainToTrack(&outC->_L1, P044_in);
  kcg_copy_P044_TM_TrainToTrack(&noname, &outC->_L1);
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(&outC->P044_int, &outC->_L116);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P044_train_compr_TM_TrainToTrack.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

