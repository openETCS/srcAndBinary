/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveMAAbsolute_Loop_TA_Lib_internal.h"

/* TA_Lib_internal::MoveMAAbsolute_Loop */
void MoveMAAbsolute_Loop_TA_Lib_internal(
  /* TA_Lib_internal::MoveMAAbsolute_Loop::i */ kcg_int i,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::ProfileIn */ MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::ProfileOut */ MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileOut)
{
  /* TA_Lib_internal::MoveMAAbsolute_Loop */
  static MovementAuthoritySection_t_TrackAtlasTypes tmp1;
  /* TA_Lib_internal::MoveMAAbsolute_Loop */
  static kcg_int tmp;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L6 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L6;
  
  if ((0 <= i) & (i < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L6, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &_L6,
      (MovementAuthoritySection_t_TrackAtlasTypes *)
        &DEFAULT_MA_section_TrackAtlasTypes);
  }
  IfBlock1_clock = msg_LRBG & !msg_prvLRBG;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    else_clock_IfBlock1 = !msg_LRBG & msg_prvLRBG;
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    ProfileOut,
    ProfileIn);
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&tmp1, &_L6);
  /* 1 */ if (_L6.valid) {
    /* ck_IfBlock1 */ if (IfBlock1_clock) {
      tmp = pos_LRBG;
    }
    else /* ck_anon_activ */ if (else_clock_IfBlock1) {
      tmp = pos_prvLRBG;
    }
    else {
      tmp = 0;
    }
  }
  else {
    tmp = 0;
  }
  tmp1.l_section = _L6.l_section + tmp;
  if ((0 <= i) & (i < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &(*ProfileOut)[i],
      &tmp1);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveMAAbsolute_Loop_TA_Lib_internal.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

