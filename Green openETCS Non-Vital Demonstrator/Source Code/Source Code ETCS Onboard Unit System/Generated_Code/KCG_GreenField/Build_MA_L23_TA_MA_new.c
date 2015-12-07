/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_L23_TA_MA_new.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_MA_L23_init_TA_MA_new(outC_Build_MA_L23_TA_MA_new *outC)
{
  static kcg_int i;
  
  outC->updated = kcg_true;
  outC->available = kcg_true;
  outC->init = kcg_true;
  outC->rem__L111 = 0;
  outC->_L237.valid = kcg_true;
  outC->_L237.Level = MA_L1_TrackAtlasTypes;
  outC->_L237.q_dir = Q_DIR_Reverse;
  outC->_L237.v_main = 0;
  outC->_L237.v_loa = 0;
  outC->_L237.t_loa_unlimited = kcg_true;
  outC->_L237.t_loa = 0;
  outC->_L237.n_iter = 0;
  for (i = 0; i < 10; i++) {
    outC->_L237.sections[i].valid = kcg_true;
    outC->_L237.sections[i].q_endsection = kcg_true;
    outC->_L237.sections[i].l_section = 0;
    outC->_L237.sections[i].q_sectiontimer = kcg_true;
    outC->_L237.sections[i].t_sectiontimer = 0;
    outC->_L237.sections[i].d_sectiontimerstoploc = 0;
  }
  outC->_L237.q_dangerpoint = kcg_true;
  outC->_L237.dangerpoint.d_DP_or_OL = 0;
  outC->_L237.dangerpoint.v_release = 0;
  outC->_L237.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L237.q_overlap = kcg_true;
  outC->_L237.overlap.d_DP_or_OL = 0;
  outC->_L237.overlap.v_release = 0;
  outC->_L237.overlap.calc_v_release_onboard = kcg_true;
  outC->_L237.q_endtimer = kcg_true;
  outC->_L237.endtimer_t.t_endtimer = 0;
  outC->_L237.endtimer_t.d_endtimerstoploc = 0;
  outC->currentEOA = 0;
  outC->MA_absolute.valid = kcg_true;
  outC->MA_absolute.Level = MA_L1_TrackAtlasTypes;
  outC->MA_absolute.q_dir = Q_DIR_Reverse;
  outC->MA_absolute.v_main = 0;
  outC->MA_absolute.v_loa = 0;
  outC->MA_absolute.t_loa_unlimited = kcg_true;
  outC->MA_absolute.t_loa = 0;
  outC->MA_absolute.n_iter = 0;
  for (i = 0; i < 10; i++) {
    outC->MA_absolute.sections[i].valid = kcg_true;
    outC->MA_absolute.sections[i].q_endsection = kcg_true;
    outC->MA_absolute.sections[i].l_section = 0;
    outC->MA_absolute.sections[i].q_sectiontimer = kcg_true;
    outC->MA_absolute.sections[i].t_sectiontimer = 0;
    outC->MA_absolute.sections[i].d_sectiontimerstoploc = 0;
  }
  outC->MA_absolute.q_dangerpoint = kcg_true;
  outC->MA_absolute.dangerpoint.d_DP_or_OL = 0;
  outC->MA_absolute.dangerpoint.v_release = 0;
  outC->MA_absolute.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_absolute.q_overlap = kcg_true;
  outC->MA_absolute.overlap.d_DP_or_OL = 0;
  outC->MA_absolute.overlap.v_release = 0;
  outC->MA_absolute.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_absolute.q_endtimer = kcg_true;
  outC->MA_absolute.endtimer_t.t_endtimer = 0;
  outC->MA_absolute.endtimer_t.d_endtimerstoploc = 0;
  /* 1 */ MA_L23_Postprocessing_init_TA_M(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_MA_L23_reset_TA_MA_new(outC_Build_MA_L23_TA_MA_new *outC)
{
  outC->init = kcg_true;
  /* 1 */ MA_L23_Postprocessing_reset_TA_(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_new::Build_MA_L23 */
void Build_MA_L23_TA_MA_new(
  /* TA_MA_new::Build_MA_L23::reset */ kcg_bool reset,
  /* TA_MA_new::Build_MA_L23::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_MA_new::Build_MA_L23::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA_new::Build_MA_L23::train_position */ trainPosition_T_TrainPosition_T *train_position,
  /* TA_MA_new::Build_MA_L23::reject_new_MA */ kcg_bool reject_new_MA,
  /* TA_MA_new::Build_MA_L23::updatedEOA_from_EM */ kcg_bool updatedEOA_from_EM,
  /* TA_MA_new::Build_MA_L23::newEOA_from_EM */ L_internal_Type_Obu_BasicTypes_ newEOA_from_EM,
  /* TA_MA_new::Build_MA_L23::balisegroups */ positionedBGs_T_TrainPosition_T *balisegroups,
  outC_Build_MA_L23_TA_MA_new *outC)
{
  /* TA_MA_new::Build_MA_L23 */
  static kcg_int tmp1;
  /* TA_MA_new::Build_MA_L23 */
  static L_internal_Type_Obu_BasicTypes_ tmp;
  /* TA_MA_new::Build_MA_L23::_L60 */
  static P015_OBU_T_TM _L60;
  /* TA_MA_new::Build_MA_L23::_L240 */
  static kcg_bool _L240;
  
  /* 1 */ Read_P015_TM(&(*MessageIn).packets, &outC->updated, &_L60);
  /* fby_1_init_1 */ if (outC->init) {
    tmp1 = 0;
  }
  else {
    tmp1 = outC->rem__L111;
  }
  _L240 = outC->updated | (tmp1 != (*train_position).LRBG.nid_bg);
  /* ck_updated */ if (outC->updated) {
    tmp = /* 1 */ Get_Position_of_LRBG_TA_Lib_int(MessageIn, balisegroups);
    /* 1 */
    MA_L23_Preprocessing_TA_MA_new(&_L60, reset, tmp, NV_in, &outC->_L237);
  }
  else if (outC->init) {
    kcg_copy_MovementAuthority_t_Tr(
      &outC->_L237,
      (MovementAuthority_t_TrackAtlasT *) &DEFAULT_MovementAuthority_Track);
  }
  /* ck__L240 */ if (_L240) {
    /* 1 */
    MA_L23_Postprocessing_TA_MA_new(
      &outC->_L237,
      (*train_position).LRBG.location.nominal,
      &outC->Context_1);
    outC->available = outC->Context_1.MA_available;
    kcg_copy_MovementAuthority_t_Tr(
      &outC->MA_absolute,
      &outC->Context_1.MA_absolute);
  }
  else if (outC->init) {
    outC->available = kcg_false;
    kcg_copy_MovementAuthority_t_Tr(
      &outC->MA_absolute,
      (MovementAuthority_t_TrackAtlasT *) &DEFAULT_MovementAuthority_Track);
  }
  outC->init = kcg_false;
  outC->currentEOA = /* 1 */ Get_EOA_TA_MA_new(&outC->MA_absolute);
  outC->rem__L111 = (*train_position).LRBG.nid_bg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MA_L23_TA_MA_new.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

