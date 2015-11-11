/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
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
  outC->rem__L111 = 0;
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

/* TA_Gradient::Build_GradientProfile */
void Build_GradientProfile_TA_Gradie(
  /* TA_Gradient::Build_GradientProfile::reset */ kcg_bool reset,
  /* TA_Gradient::Build_GradientProfile::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_Gradient::Build_GradientProfile::train_position */ trainPosition_T_TrainPosition_T *train_position,
  outC_Build_GradientProfile_TA_G *outC)
{
  /* TA_Gradient::Build_GradientProfile::_L60 */
  static P021_OBU_T_TM _L60;
  /* TA_Gradient::Build_GradientProfile::_L108 */
  static kcg_int _L108;
  /* TA_Gradient::Build_GradientProfile::_L240 */
  static kcg_bool _L240;
  /* TA_Gradient::Build_GradientProfile::_L243 */
  static kcg_int _L243;
  /* TA_Gradient::Build_GradientProfile::_L244 */
  static kcg_bool _L244;
  
  /* 1 */ Read_P021_TM(&(*MessageIn).packets, &outC->updated, &_L60);
  /* fby_1_init_1 */ if (outC->init) {
    _L243 = 0;
  }
  else {
    _L243 = outC->rem__L111;
  }
  _L240 = outC->updated | (_L243 != (*train_position).LRBG.nid_bg);
  /* 1 */ Eval_LRBG_TA_Lib_internal(MessageIn, &_L244, &_L243, &_L108);
  /* ck_updated */ if (outC->updated) {
    /* 1 */
    GP_Preprocessing_TA_Gradient(
      &_L60,
      reset,
      (kcg_bool) (_L108 == (*train_position).LRBG.nid_bg),
      (kcg_bool) (_L108 == (*train_position).prvLRBG.nid_bg),
      (*train_position).LRBG.location.nominal,
      (*train_position).prvLRBG.location.nominal,
      &outC->_L237);
  }
  else if (outC->init) {
    kcg_copy_GradientProfile_t_Trac(
      &outC->_L237,
      (GradientProfile_t_TrackAtlasTyp *) &DEFAULT_GradientProfile_TrackAt);
  }
  /* ck__L240 */ if (_L240) {
    /* 1 */
    GP_Postprocessing_TA_Gradient(
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
  outC->rem__L111 = (*train_position).LRBG.nid_bg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_GradientProfile_TA_Gradie.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

