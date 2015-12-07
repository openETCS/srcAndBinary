/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_StaticSpeedProfile_TA_SSP_new.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_StaticSpeedProfile_init_TA_SSP_new(
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC)
{
  kcg_int i;
  
  outC->updated = kcg_true;
  outC->available = kcg_true;
  outC->init = kcg_true;
  outC->rem__L248 = 0;
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
  /* 1 */ SSP_Postprocessing_init_TA_SSP_new(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_StaticSpeedProfile_reset_TA_SSP_new(
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC)
{
  outC->init = kcg_true;
  /* 1 */ SSP_Postprocessing_reset_TA_SSP_new(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_SSP_new::Build_StaticSpeedProfile */
void Build_StaticSpeedProfile_TA_SSP_new(
  /* TA_SSP_new::Build_StaticSpeedProfile::reset */ kcg_bool reset,
  /* TA_SSP_new::Build_StaticSpeedProfile::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SSP_new::Build_StaticSpeedProfile::train_position */ trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_SSP_new::Build_StaticSpeedProfile::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SSP_new::Build_StaticSpeedProfile::balisegroups */ positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC)
{
  /* TA_SSP_new::Build_StaticSpeedProfile */ kcg_int tmp1;
  /* TA_SSP_new::Build_StaticSpeedProfile */ L_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* TA_SSP_new::Build_StaticSpeedProfile::_L60 */ P027V1_OBU_T_TM_baseline2 _L60;
  /* TA_SSP_new::Build_StaticSpeedProfile::_L240 */ kcg_bool _L240;
  
  /* 1 */
  Read_P027V1_TM_baseline2(&(*MessageIn).packets, &outC->updated, &_L60);
  /* fby_1_init_1 */ if (outC->init) {
    tmp1 = 0;
  }
  else {
    tmp1 = outC->rem__L248;
  }
  _L240 = outC->updated | (tmp1 != (*train_position).LRBG.nid_bg);
  /* ck_updated */ if (outC->updated) {
    tmp = /* 1 */ Get_Position_of_LRBG_TA_Lib_internal(MessageIn, balisegroups);
    /* 1 */ SSP_Preprocessing_TA_SSP_new(&_L60, reset, tmp, &outC->_L237);
  }
  else if (outC->init) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L237,
      (StaticSpeedProfile_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  }
  /* ck__L240 */ if (_L240) {
    /* 1 */
    SSP_Postprocessing_TA_SSP_new(
      &outC->_L237,
      (*train_position).LRBG.location.nominal,
      (*train_position).prvLRBG.location.nominal,
      (*train_position).prvLRBG.valid,
      train_length,
      &outC->Context_1);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->SSP,
      &outC->Context_1.SSP);
    outC->available = outC->Context_1.available;
  }
  else if (outC->init) {
    outC->available = kcg_false;
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->SSP,
      (StaticSpeedProfile_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  }
  outC->init = kcg_false;
  outC->rem__L248 = (*train_position).LRBG.nid_bg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_StaticSpeedProfile_TA_SSP_new.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

