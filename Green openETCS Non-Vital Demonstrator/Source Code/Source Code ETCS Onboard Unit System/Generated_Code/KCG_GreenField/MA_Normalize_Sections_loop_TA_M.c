/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Normalize_Sections_loop_TA_M.h"

/* TA_MA::MA_Normalize_Sections_loop */
void MA_Normalize_Sections_loop_TA_M(
  /* TA_MA::MA_Normalize_Sections_loop::i */ kcg_int i,
  /* TA_MA::MA_Normalize_Sections_loop::ProfileIn */ MovementAuthoritySectionlist_t_ *ProfileIn,
  /* TA_MA::MA_Normalize_Sections_loop::pos_BG */ L_internal_Type_Obu_BasicTypes_ pos_BG,
  /* TA_MA::MA_Normalize_Sections_loop::ProfileNormalized_LRBG */ MovementAuthoritySectionlist_t_ *ProfileNormalized_LRBG)
{
  /* TA_MA::MA_Normalize_Sections_loop */
  static _22_MovementAuthoritySection_t_ tmp;
  /* TA_MA::MA_Normalize_Sections_loop::_L4 */
  static _22_MovementAuthoritySection_t_ _L4;
  
  if ((0 <= i) & (i < 10)) {
    kcg_copy__22_MovementAuthorityS(&_L4, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy__22_MovementAuthorityS(
      &_L4,
      (_22_MovementAuthoritySection_t_ *) &DefaultMA_section_TA_MA);
  }
  kcg_copy_MovementAuthoritySecti(ProfileNormalized_LRBG, ProfileIn);
  kcg_copy__22_MovementAuthorityS(&tmp, &_L4);
  /* 3 */ if (_L4.valid) {
    tmp.l_section = _L4.l_section - pos_BG;
    tmp.d_sectiontimerstoploc = _L4.d_sectiontimerstoploc - pos_BG;
  }
  else {
    tmp.l_section = 0;
    tmp.d_sectiontimerstoploc = 0;
  }
  if ((0 <= i) & (i < 10)) {
    kcg_copy__22_MovementAuthorityS(&(*ProfileNormalized_LRBG)[i], &tmp);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Normalize_Sections_loop_TA_M.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

