/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P005_train_compr */
void C_P005_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P005_train_compr::P005_in */ P005_TM_TrainToTrack *P005_in,
  /* TM_TrainToTrack::C_P005_train_compr::P005_int */ P005_TrainTrack_int_TM_TrainToTrack *P005_int)
{
  (*P005_int)[0] = /* 1 */
    Encode_NID_PACKET_TM_TrainToTrack(
      (*P005_in).valid,
      /* 1 */ CAST_NID_PACKET_to_int_TM_conversions((*P005_in).nid_packet));
  (*P005_int)[1] = /* 1 */
    CAST_L_PACKET_to_int_TM_conversions((*P005_in).l_packet);
  (*P005_int)[2] = /* 1 */
    CAST_NID_OPERATIONAL_to_int_TM_conversions((*P005_in).nid_opeartional);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P005_train_compr_TM_TrainToTrack.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

