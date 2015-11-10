/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P009_train_compr_TM_TrainToTr.h"

/* TM_TrainToTrack::C_P009_train_compr */
void C_P009_train_compr_TM_TrainToTr(
  /* TM_TrainToTrack::C_P009_train_compr::P009_in */ P009_TM_TrainToTrack *P009_in,
  /* TM_TrainToTrack::C_P009_train_compr::P009_int */ P009_TrainTrack_int_TM_TrainToT *P009_int)
{
  (*P009_int)[0] = /* 1 */
    Encode_NID_PACKET_TM_TrainToTra(
      (*P009_in).valid,
      /* 1 */ CAST_NID_PACKET_to_int_TM_conve((*P009_in).nid_packet));
  (*P009_int)[1] = /* 1 */ CAST_L_PACKET_to_int_TM_convers((*P009_in).l_packet);
  (*P009_int)[2] = /* 1 */
    CAST_NID_LTRBG_to_int_TM_conver((*P009_in).nid_ltrbg);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P009_train_compr_TM_TrainToTr.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

