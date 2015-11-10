/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P009_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P009 */
void C_compr_P009_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P009::P009_in */ P009_TrainTrack_int_TM_TrainToT *P009_in,
  /* TM_TrainToTrack::C_compr_P009::P009_out */ P009_TM_TrainToTrack *P009_out)
{
  /* TM_TrainToTrack::C_compr_P009::_L73 */
  static kcg_bool _L73;
  
  _L73 = /* 1 */ Decode_NID_PACKET_TM_TrainToTra((*P009_in)[0], 5);
  (*P009_out).valid = _L73;
  (*P009_out).nid_packet = /* 1 */
    Filter_Variable_TM_TrainToTrack(_L73, (*P009_in)[0]);
  (*P009_out).l_packet = /* 2 */
    Filter_Variable_TM_TrainToTrack(_L73, (*P009_in)[1]);
  (*P009_out).nid_ltrbg = /* 1 */
    CAST_Int_to_NID_LTRBG_TM_conver(
      /* 3 */ Filter_Variable_TM_TrainToTrack(_L73, (*P009_in)[2]));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_compr_P009_TM_TrainToTrack.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

