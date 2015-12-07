/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveMAAbsolute_Loop_new_TA_Lib_.h"

/* TA_Lib_internal::MoveMAAbsolute_Loop_new */
void MoveMAAbsolute_Loop_new_TA_Lib_(
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new::i */ kcg_int i,
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new::ProfileIn */ MovementAuthoritySectionlist_t_ *ProfileIn,
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new::ProfileOut */ MovementAuthoritySectionlist_t_ *ProfileOut)
{
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new */
  static _21_MovementAuthoritySection_t_ tmp1;
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new */
  static L_internal_Type_Obu_BasicTypes_ tmp;
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new::_L6 */
  static _21_MovementAuthoritySection_t_ _L6;
  
  if ((0 <= i) & (i < 10)) {
    kcg_copy__21_MovementAuthorityS(&_L6, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy__21_MovementAuthorityS(
      &_L6,
      (_21_MovementAuthoritySection_t_ *) &DEFAULT_MA_section_TrackAtlasTy);
  }
  kcg_copy_MovementAuthoritySecti(ProfileOut, ProfileIn);
  kcg_copy__21_MovementAuthorityS(&tmp1, &_L6);
  /* 1 */ if (_L6.valid) {
    tmp = pos_LRBG;
  }
  else {
    tmp = 0;
  }
  tmp1.l_section = _L6.l_section + tmp;
  if ((0 <= i) & (i < 10)) {
    kcg_copy__21_MovementAuthorityS(&(*ProfileOut)[i], &tmp1);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveMAAbsolute_Loop_new_TA_Lib_.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

