/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P044_train_compr_TM_TrainToTr.h"

/* TM_TrainToTrack::C_P044_train_compr */
void C_P044_train_compr_TM_TrainToTr(
  /* TM_TrainToTrack::C_P044_train_compr::P044_in */ P044_TM_TrainToTrack *P044_in,
  /* TM_TrainToTrack::C_P044_train_compr::P044_int */ P044_TrainTrack_int_TM_TrainToT *P044_int)
{
  kcg_copy_P044_TrainTrack_int_TM(
    P044_int,
    (P044_TrainTrack_int_TM_TrainToT *) &DEFAULT_P044_int_TM_TrainToTrac);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P044_train_compr_TM_TrainToTr.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

