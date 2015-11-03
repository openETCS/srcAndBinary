/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_StaticSpeedProfile_TA_SSP.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_StaticSpeedProfile_init_T(outC_Build_StaticSpeedProfile_T *outC)
{
  static kcg_int i;
  
  outC->updated = kcg_true;
  outC->available = kcg_true;
  outC->init = kcg_true;
  outC->rem__L111 = 0;
  for (i = 0; i < 50; i++) {
    outC->_L237[i].valid = kcg_true;
    outC->_L237[i].d_static_abs = 0;
    outC->_L237[i].d_static_LRBG = 0;
    outC->_L237[i].q_train_length_corr = kcg_true;
    outC->_L237[i].v_static = 0;
    outC->SSP[i].valid = kcg_true;
    outC->SSP[i].d_static_abs = 0;
    outC->SSP[i].d_static_LRBG = 0;
    outC->SSP[i].q_train_length_corr = kcg_true;
    outC->SSP[i].v_static = 0;
  }
  /* 1 */ SSP_Postprocessing_init_TA_SSP(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_StaticSpeedProfile_reset_(outC_Build_StaticSpeedProfile_T *outC)
{
  outC->init = kcg_true;
  /* 1 */ SSP_Postprocessing_reset_TA_SSP(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_SSP::Build_StaticSpeedProfile */
void Build_StaticSpeedProfile_TA_SSP(
  /* TA_SSP::Build_StaticSpeedProfile::reset */ kcg_bool reset,
  /* TA_SSP::Build_StaticSpeedProfile::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_SSP::Build_StaticSpeedProfile::train_position */ trainPosition_T_TrainPosition_T *train_position,
  /* TA_SSP::Build_StaticSpeedProfile::train_length */ L_internal_Type_Obu_BasicTypes_ train_length,
  outC_Build_StaticSpeedProfile_T *outC)
{
  /* TA_SSP::Build_StaticSpeedProfile::_L60 */
  static P027V1_OBU_T_TM_baseline2 _L60;
  /* TA_SSP::Build_StaticSpeedProfile::_L108 */
  static kcg_int _L108;
  /* TA_SSP::Build_StaticSpeedProfile::_L240 */
  static kcg_bool _L240;
  /* TA_SSP::Build_StaticSpeedProfile::_L244 */
  static kcg_int _L244;
  /* TA_SSP::Build_StaticSpeedProfile::_L245 */
  static kcg_bool _L245;
  
  /* 1 */
  Read_P027V1_TM_baseline2(&(*MessageIn).packets, &outC->updated, &_L60);
  /* fby_1_init_1 */ if (outC->init) {
    _L244 = 0;
  }
  else {
    _L244 = outC->rem__L111;
  }
  _L240 = outC->updated | (_L244 != (*train_position).LRBG.nid_bg);
  /* 1 */ Eval_LRBG_TA_Lib_internal(MessageIn, &_L245, &_L244, &_L108);
  /* ck_updated */ if (outC->updated) {
    /* 1 */
    SSP_Preprocessing_TA_SSP(
      &_L60,
      reset,
      (kcg_bool) (_L108 == (*train_position).LRBG.nid_bg),
      (kcg_bool) (_L108 == (*train_position).prvLRBG.nid_bg),
      (*train_position).LRBG.location.nominal,
      (*train_position).prvLRBG.location.nominal,
      &outC->_L237);
  }
  else if (outC->init) {
    kcg_copy_StaticSpeedProfile_t_T(
      &outC->_L237,
      (StaticSpeedProfile_t_TrackAtlas *) &DEFAULT_StaticSpeedProfile_Trac);
  }
  /* ck__L240 */ if (_L240) {
    /* 1 */
    SSP_Postprocessing_TA_SSP(
      &outC->_L237,
      (*train_position).LRBG.location.nominal,
      (*train_position).prvLRBG.location.nominal,
      (*train_position).prvLRBG.valid,
      train_length,
      &outC->Context_1);
    kcg_copy_StaticSpeedProfile_t_T(&outC->SSP, &outC->Context_1.SSP);
    outC->available = outC->Context_1.available;
  }
  else if (outC->init) {
    outC->available = kcg_false;
    kcg_copy_StaticSpeedProfile_t_T(
      &outC->SSP,
      (StaticSpeedProfile_t_TrackAtlas *) &DEFAULT_StaticSpeedProfile_Trac);
  }
  outC->init = kcg_false;
  outC->rem__L111 = (*train_position).LRBG.nid_bg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_StaticSpeedProfile_TA_SSP.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

