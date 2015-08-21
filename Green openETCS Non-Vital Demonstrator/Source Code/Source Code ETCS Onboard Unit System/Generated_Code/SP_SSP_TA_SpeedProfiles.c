/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_SSP_TA_SpeedProfiles.h"

void SP_SSP_reset_TA_SpeedProfiles(outC_SP_SSP_TA_SpeedProfiles *outC)
{
  outC->init = kcg_true;
}

/* TA_SpeedProfiles::SP_SSP */
void SP_SSP_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_SSP::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_SSP::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SpeedProfiles::SP_SSP::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_SP_SSP_TA_SpeedProfiles *outC)
{
  /* TA_SpeedProfiles::SP_SSP::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TA_SpeedProfiles::SP_SSP::SSP */
  static SSP_cat_t_TA_MRSP last_SSP;
  /* TA_SpeedProfiles::SP_SSP::newLRBG_only */
  static kcg_bool newLRBG_only;
  /* TA_SpeedProfiles::SP_SSP::P27V1_local */
  static P027V1_OBU_T_TM_baseline2 P27V1_local;
  /* TA_SpeedProfiles::SP_SSP::_L108 */
  static kcg_int _L108;
  /* TA_SpeedProfiles::SP_SSP::_L134 */
  static kcg_bool _L134;
  
  /* 1 */
  Read_P027V1_TM_baseline2(
    &(*MessageIn).packets,
    &_1_else_clock_IfBlock1,
    &P27V1_local);
  if (outC->init) {
    kcg_copy_SSP_cat_t_TA_MRSP(
      &last_SSP,
      (SSP_cat_t_TA_MRSP *) &DEFAULT_SSP_cat_TA_MRSP);
    outC->init = kcg_false;
    _L108 = 0;
  }
  else {
    kcg_copy_SSP_cat_t_TA_MRSP(&last_SSP, &outC->SSP);
    _L108 = outC->rem__L111;
  }
  else_clock_IfBlock1 = (*train_position).LRBG.nid_bg != _L108;
  _L134 = _1_else_clock_IfBlock1 & else_clock_IfBlock1;
  newLRBG_only = !_1_else_clock_IfBlock1 & else_clock_IfBlock1;
  _L108 = /* 1 */ Eval_LRBG_TA_Lib_internal(MessageIn);
  if (newLRBG_only) {
    outC->updated = kcg_true;
    /* 1 */ Update_LRBG_only_TA_SSP(&last_SSP, train_position, &outC->SSP);
  }
  else {
    _2_else_clock_IfBlock1 = _1_else_clock_IfBlock1 & !else_clock_IfBlock1;
    if (_2_else_clock_IfBlock1) {
      outC->updated = kcg_true;
      /* 1 */
      Update_SSP_only_TA_SSP(&last_SSP, &P27V1_local, train_length, &outC->SSP);
    }
    else {
      _1_else_clock_IfBlock1 = (_L108 == (*train_position).prvLRBG.nid_bg) &
        _L134;
      if (_1_else_clock_IfBlock1) {
        outC->updated = kcg_true;
        /* 1 */
        Update_SSP_then_LRBG_TA_SSP(
          &last_SSP,
          &P27V1_local,
          train_length,
          train_position,
          &outC->SSP);
      }
      else {
        else_clock_IfBlock1 = _L134 & (_L108 == (*train_position).LRBG.nid_bg);
        if (else_clock_IfBlock1) {
          outC->updated = kcg_true;
          /* 1 */
          Update_LRBG_then_SSP_TA_SSP(
            &last_SSP,
            &P27V1_local,
            train_length,
            train_position,
            &outC->SSP);
        }
        else {
          outC->updated = kcg_false;
          kcg_copy_SSP_cat_t_TA_MRSP(&outC->SSP, &last_SSP);
        }
      }
    }
  }
  outC->rem__L111 = (*train_position).LRBG.nid_bg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_SSP_TA_SpeedProfiles.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

