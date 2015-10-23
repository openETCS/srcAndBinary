/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P009_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P009_train_compr */
void C_P009_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P009_train_compr::P009_in */ P009_TM_TrainToTrack *P009_in,
  /* TM_TrainToTrack::C_P009_train_compr::P009_int */ P009_TrainTrack_int_TM_TrainToTrack *P009_int)
{
  (*P009_int)[0] = /* 1 */
    Encode_NID_PACKET_TM_TrainToTrack(
      (*P009_in).valid,
      /* 1 */ CAST_NID_PACKET_to_int_TM_conversions((*P009_in).nid_packet));
  (*P009_int)[1] = /* 1 */
    CAST_L_PACKET_to_int_TM_conversions((*P009_in).l_packet);
  (*P009_int)[2] = /* 1 */
    CAST_NID_LTRBG_to_int_TM_conversions((*P009_in).nid_ltrbg);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P009_train_compr_TM_TrainToTrack.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

