/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_train_compr_TM_TrainToTr.h"

/* TM_TrainToTrack::C_P003_train_compr */
void C_P003_train_compr_TM_TrainToTr(
  /* TM_TrainToTrack::C_P003_train_compr::P003_in */ P003_TM_TrainToTrack *P003_in,
  /* TM_TrainToTrack::C_P003_train_compr::P003_int */ P003_TrainTrack_int_TM_TrainToT *P003_int)
{
  (&(*P003_int)[0])[0] = /* 1 */
    Encode_NID_PACKET_TM_TrainToTra(
      (*P003_in).valid,
      /* 1 */ CAST_NID_PACKET_to_int_TM_conve((*P003_in).nid_packet));
  (&(*P003_int)[0])[1] = /* 1 */
    CAST_L_PACKET_to_int_TM_convers((*P003_in).l_packet);
  (&(*P003_int)[0])[2] = /* 1 */
    CAST_N_ITER_to_int_TM_conversio((*P003_in).n_iter);
  /* 1 */
  C_P003_flatten_sections_TM_Trai(
    &(*P003_in).nid_radio,
    (P003_nid_radio_list_int_t_TM_Tr *) &(*P003_int)[3]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003_train_compr_TM_TrainToTr.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

