/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P003_TM_TrainToTrack.h"

#ifndef KCG_USER_DEFINED_INIT
void C_compr_P003_init_TM_TrainToTra(outC_C_compr_P003_TM_TrainToTra *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->P003_out.valid = kcg_true;
  outC->P003_out.nid_packet = 0;
  outC->P003_out.l_packet = 0;
  outC->P003_out.n_iter = 0;
  for (i = 0; i < 5; i++) {
    outC->_L89[i] = 0;
    outC->P003_out.nid_radio[i] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_compr_P003_reset_TM_TrainToTr(outC_C_compr_P003_TM_TrainToTra *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_TrainToTrack::C_compr_P003 */
void C_compr_P003_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P003::P003_int */ P003_TrainTrack_int_TM_TrainToT *P003_int,
  outC_C_compr_P003_TM_TrainToTra *outC)
{
  /* TM_TrainToTrack::C_compr_P003::_L94 */
  static array_int_3 _L94;
  /* TM_TrainToTrack::C_compr_P003::_L105 */
  static kcg_bool _L105;
  
  kcg_copy_array_int_3(&_L94, (array_int_3 *) &(*P003_int)[0]);
  _L105 = /* 1 */ Decode_NID_PACKET_TM_TrainToTra(_L94[0], 3);
  outC->P003_out.valid = _L105;
  /* ck__L105 */ if (_L105) {
    /* 1 */
    C_P003_flatten_sections_TM_Trai(
      (P003_nid_radio_list_t_TM_TrainT *) &(*P003_int)[3],
      &outC->_L89);
  }
  else if (outC->init) {
    kcg_copy_P003_nid_radio_list_in(
      &outC->_L89,
      (P003_nid_radio_list_int_t_TM_Tr *) &DEFAULT_P003_nid_radio_list_TM_);
  }
  outC->init = kcg_false;
  kcg_copy_P003_nid_radio_list_t_(&outC->P003_out.nid_radio, &outC->_L89);
  outC->P003_out.nid_packet = /* 1 */
    CAST_NID_PACKET_to_int_TM_conve(
      /* 1 */ Filter_Variable_TM_TrainToTrack(_L105, _L94[0]));
  outC->P003_out.l_packet = /* 1 */
    CAST_L_PACKET_to_int_TM_convers(
      /* 2 */ Filter_Variable_TM_TrainToTrack(_L105, _L94[1]));
  outC->P003_out.n_iter = /* 1 */
    CAST_N_ITER_to_int_TM_conversio(
      /* 3 */ Filter_Variable_TM_TrainToTrack(_L105, _L94[2]));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_compr_P003_TM_TrainToTrack.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

