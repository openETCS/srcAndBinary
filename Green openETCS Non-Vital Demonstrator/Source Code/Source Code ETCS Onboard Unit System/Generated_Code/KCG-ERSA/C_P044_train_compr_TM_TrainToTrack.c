/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P044_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P044_train_compr */
void C_P044_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P044_train_compr::P044_in */P044_TM_TrainToTrack *P044_in,
  /* TM_TrainToTrack::C_P044_train_compr::P044_int */P044_TrainTrack_int_TM_TrainToTrack *P044_int)
{
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(
    P044_int,
    (P044_TrainTrack_int_TM_TrainToTrack *) &DEFAULT_P044_int_TM_TrainToTrack);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P044_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

