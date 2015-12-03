/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_GradientProfile_TA_Gradie.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_GradientProfile_init_TA_G(outC_Build_GradientProfile_TA_G *outC)
{
  static kcg_int i;
  
  outC->updated = kcg_true;
  outC->available = kcg_true;
  outC->init = kcg_true;
  outC->rem__L247 = 0;
  for (i = 0; i < 50; i++) {
    outC->_L237[i].valid = kcg_true;
    outC->_L237[i].Loc_Absolute = 0;
    outC->_L237[i].Loc_LRBG = 0;
    outC->_L237[i].Gradient = 0;
    outC->_L237[i].L_Gradient = 0;
    outC->GP[i].valid = kcg_true;
    outC->GP[i].Loc_Absolute = 0;
    outC->GP[i].Loc_LRBG = 0;
    outC->GP[i].Gradient = 0;
    outC->GP[i].L_Gradient = 0;
  }
  /* 1 */ GP_Postprocessing_init_TA_Gradi(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_GradientProfile_reset_TA_(outC_Build_GradientProfile_TA_G *outC)
{
  outC->init = kcg_true;
  /* 1 */ GP_Postprocessing_reset_TA_Grad(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_Gradient_new::Build_GradientProfile */
void Build_GradientProfile_TA_Gradie(
  /* TA_Gradient_new::Build_GradientProfile::reset */ kcg_bool reset,
  /* TA_Gradient_new::Build_GradientProfile::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_Gradient_new::Build_GradientProfile::train_position */ trainPosition_T_TrainPosition_T *train_position,
  /* TA_Gradient_new::Build_GradientProfile::balisegroups */ positionedBGs_T_TrainPosition_T *balisegroups,
  outC_Build_GradientProfile_TA_G *outC)
{
  /* TA_Gradient_new::Build_GradientProfile */
  static kcg_int tmp1;
  /* TA_Gradient_new::Build_GradientProfile */
  static L_internal_Type_Obu_BasicTypes_ tmp;
  /* TA_Gradient_new::Build_GradientProfile::_L60 */
  static P021_OBU_T_TM _L60;
  /* TA_Gradient_new::Build_GradientProfile::_L240 */
  static kcg_bool _L240;
  
  /* 1 */ Read_P021_TM(&(*MessageIn).packets, &outC->updated, &_L60);
  /* fby_1_init_1 */ if (outC->init) {
    tmp1 = 0;
  }
  else {
    tmp1 = outC->rem__L247;
  }
  _L240 = outC->updated | (tmp1 != (*train_position).LRBG.nid_bg);
  /* ck_updated */ if (outC->updated) {
    tmp = /* 1 */ Get_Position_of_LRBG_TA_Lib_int(MessageIn, balisegroups);
    /* 1 */ GP_Preprocessing_TA_Gradient_ne(&_L60, reset, tmp, &outC->_L237);
  }
  else if (outC->init) {
    kcg_copy_GradientProfile_t_Trac(
      &outC->_L237,
      (GradientProfile_t_TrackAtlasTyp *) &DEFAULT_GradientProfile_TrackAt);
  }
  /* ck__L240 */ if (_L240) {
    /* 1 */
    GP_Postprocessing_TA_Gradient_n(
      &outC->_L237,
      (*train_position).LRBG.location.nominal,
      (*train_position).prvLRBG.location.nominal,
      (*train_position).prvLRBG.valid,
      &outC->Context_1);
    kcg_copy_GradientProfile_t_Trac(&outC->GP, &outC->Context_1.GP);
    outC->available = outC->Context_1.available;
  }
  else if (outC->init) {
    outC->available = kcg_false;
    kcg_copy_GradientProfile_t_Trac(
      &outC->GP,
      (GradientProfile_t_TrackAtlasTyp *) &DEFAULT_GradientProfile_TrackAt);
  }
  outC->init = kcg_false;
  outC->rem__L247 = (*train_position).LRBG.nid_bg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_GradientProfile_TA_Gradie.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

