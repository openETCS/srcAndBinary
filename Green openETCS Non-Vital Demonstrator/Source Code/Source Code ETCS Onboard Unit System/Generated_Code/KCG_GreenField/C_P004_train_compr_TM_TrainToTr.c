/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P004_train_compr_TM_TrainToTr.h"

/* TM_TrainToTrack::C_P004_train_compr */
void C_P004_train_compr_TM_TrainToTr(
  /* TM_TrainToTrack::C_P004_train_compr::P004_in */ P004_TM_TrainToTrack *P004_in,
  /* TM_TrainToTrack::C_P004_train_compr::P004_int */ P004_TrainTrack_int_TM_TrainToT *P004_int)
{
  (*P004_int)[0] = /* 1 */
    Encode_NID_PACKET_TM_TrainToTra(
      (*P004_in).valid,
      /* 1 */ CAST_NID_PACKET_to_int_TM_conve((*P004_in).nid_packet));
  (*P004_int)[1] = /* 1 */ CAST_L_PACKET_to_int_TM_convers((*P004_in).l_packet);
  (*P004_int)[2] = /* 1 */ CAST_M_ERROR_to_int_TM_conversi((*P004_in).m_error);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P004_train_compr_TM_TrainToTr.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

