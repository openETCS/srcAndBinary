/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P011_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P011 */
void C_compr_P011_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P011::P011_int */ P011_TrainTrack_int_TM_TrainToT *P011_int,
  /* TM_TrainToTrack::C_compr_P011::P011_out */ P011_TM_TrainToTrack *P011_out)
{
  /* TM_TrainToTrack::C_compr_P011::_L127 */
  static Array11_TM_TrainToTrack _L127;
  /* TM_TrainToTrack::C_compr_P011::_L150 */
  static kcg_bool _L150;
  
  kcg_copy_Array11_TM_TrainToTrac(
    &_L127,
    (Array11_TM_TrainToTrack *) &(*P011_int)[0]);
  _L150 = /* 1 */ Decode_NID_PACKET_TM_TrainToTra(_L127[0], 11);
  (*P011_out).valid = _L150;
  (*P011_out).nid_packet = /* 1 */
    Filter_Variable_TM_TrainToTrack(_L150, _L127[0]);
  (*P011_out).l_packet = /* 2 */
    Filter_Variable_TM_TrainToTrack(_L150, _L127[1]);
  (*P011_out).nc_cdtrain = /* 1 */
    CAST_Int_to_NC_CDTRAIN_TM_conve(
      /* 3 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[2]));
  (*P011_out).nc_train = /* 1 */
    CAST_Int_to_NC_TRAIN_TM_convers(
      /* 4 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[3]));
  (*P011_out).l_train = /* 1 */
    CAST_Int_to_L_TRAIN_TM_conversi(
      /* 6 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[4]));
  (*P011_out).v_maxtrain = /* 1 */
    CAST_Int_to_V_MAXTRAIN_TM_conve(
      /* 7 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[5]));
  (*P011_out).m_loadinggauge = /* 1 */
    CAST_Int_to_M_LOADINGGAUGE_TM_c(
      /* 8 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[6]));
  (*P011_out).m_axleloadcat = /* 1 */
    CAST_Int_to_M_AXLELOADCAT_TM_co(
      /* 10 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[7]));
  (*P011_out).m_airtight = /* 1 */
    CAST_Int_to_M_AIRTIGHT_TM_conve(
      /* 9 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[8]));
  (*P011_out).n_axle = /* 1 */
    CAST_Int_to_N_AXLE_TM_conversio(
      /* 11 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[9]));
  (*P011_out).n_iter_voltage = /* 12 */
    Filter_Variable_TM_TrainToTrack(_L150, _L127[10]);
  /* ck__L150 */ if (_L150) {
    /* 1 */
    C_P011_unflatten_sections_volta(
      (P011_voltage_sections_array_fla *) &(*P011_int)[11],
      &(*P011_out).voltage_list);
  }
  else {
    kcg_copy_P011_voltage_list_TM_T(
      &(*P011_out).voltage_list,
      (P011_voltage_list_TM_TrainToTra *) &DEFAULT_P011_voltage_list_TM_Tr);
  }
  (*P011_out).n_iter_nid_ntc = /* 13 */
    Filter_Variable_TM_TrainToTrack(_L150, (*P011_int)[19]);
  /* ck__L150 */ if (_L150) {
    /* 1 */
    C_P011_unflatten_sections_ntc_T(
      (P011_ntc_list_array_T_TM_TrainT *) &(*P011_int)[20],
      &(*P011_out).nid_ntc_list);
  }
  else {
    kcg_copy_P011_ntc_list_TM_Train(
      &(*P011_out).nid_ntc_list,
      (P011_ntc_list_TM_TrainToTrack *) &DEFAULT_P011_ntc_list_TM_TrainT);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_compr_P011_TM_TrainToTrack.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

