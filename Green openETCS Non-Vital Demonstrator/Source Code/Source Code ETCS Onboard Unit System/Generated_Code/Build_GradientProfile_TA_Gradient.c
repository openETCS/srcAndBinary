/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_GradientProfile_TA_Gradient.h"

void Build_GradientProfile_reset_TA_Gradient(
  outC_Build_GradientProfile_TA_Gradient *outC)
{
  outC->init = kcg_true;
}

/* TA_Gradient::Build_GradientProfile */
void Build_GradientProfile_TA_Gradient(
  /* TA_Gradient::Build_GradientProfile::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Gradient::Build_GradientProfile::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_GradientProfile_TA_Gradient *outC)
{
  /* TA_Gradient::Build_GradientProfile::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TA_Gradient::Build_GradientProfile::GP */
  static GradientProfile_t_TrackAtlasTypes last_GP;
  /* TA_Gradient::Build_GradientProfile::newLRBG_only */
  static kcg_bool newLRBG_only;
  /* TA_Gradient::Build_GradientProfile::P21_local */
  static P021_OBU_T_TM P21_local;
  /* TA_Gradient::Build_GradientProfile::_L108 */
  static kcg_int _L108;
  /* TA_Gradient::Build_GradientProfile::_L134 */
  static kcg_bool _L134;
  
  /* 1 */
  Read_P021_TM(&(*MessageIn).packets, &_1_else_clock_IfBlock1, &P21_local);
  if (outC->init) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &last_GP,
      (GradientProfile_t_TrackAtlasTypes *)
        &DEFAULT_GradientProfile_TrackAtlasTypes);
    outC->init = kcg_false;
    _L108 = 0;
  }
  else {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&last_GP, &outC->GP);
    _L108 = outC->rem__L111;
  }
  else_clock_IfBlock1 = (*train_position).LRBG.nid_bg != _L108;
  _L134 = _1_else_clock_IfBlock1 & else_clock_IfBlock1;
  newLRBG_only = !_1_else_clock_IfBlock1 & else_clock_IfBlock1;
  _L108 = /* 1 */ Eval_LRBG_TA_Lib_internal(MessageIn);
  if (newLRBG_only) {
    outC->updated = kcg_true;
    /* 1 */ Update_LRBG_only_TA_Gradient(&last_GP, train_position, &outC->GP);
  }
  else {
    _2_else_clock_IfBlock1 = _1_else_clock_IfBlock1 & !else_clock_IfBlock1;
    if (_2_else_clock_IfBlock1) {
      outC->updated = kcg_true;
      /* 1 */ Update_GP_only_TA_Gradient(&last_GP, &P21_local, &outC->GP);
    }
    else {
      _1_else_clock_IfBlock1 = (_L108 == (*train_position).prvLRBG.nid_bg) &
        _L134;
      if (_1_else_clock_IfBlock1) {
        outC->updated = kcg_true;
        /* 1 */
        Update_GP_then_LRBG_TA_Gradient(
          &last_GP,
          &P21_local,
          train_position,
          &outC->GP);
      }
      else {
        else_clock_IfBlock1 = _L134 & (_L108 == (*train_position).LRBG.nid_bg);
        if (else_clock_IfBlock1) {
          outC->updated = kcg_true;
          /* 1 */
          Update_LRBG_then_GP_TA_Gradient(
            &last_GP,
            &P21_local,
            train_position,
            &outC->GP);
        }
        else {
          outC->updated = kcg_false;
          kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &last_GP);
        }
      }
    }
  }
  outC->rem__L111 = (*train_position).LRBG.nid_bg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_GradientProfile_TA_Gradient.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

