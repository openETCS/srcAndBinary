/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveMAAbsolute_Loop_new_TA_Lib_internal.h"

/* TA_Lib_internal::MoveMAAbsolute_Loop_new */
void MoveMAAbsolute_Loop_new_TA_Lib_internal(
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new::i */ kcg_int i,
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new::ProfileIn */ MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new::ProfileOut */ MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileOut)
{
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new */ MovementAuthoritySection_t_TrackAtlasTypes tmp1;
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new */ L_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* TA_Lib_internal::MoveMAAbsolute_Loop_new::_L6 */ MovementAuthoritySection_t_TrackAtlasTypes _L6;
  
  if ((0 <= i) & (i < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L6, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &_L6,
      (MovementAuthoritySection_t_TrackAtlasTypes *)
        &DEFAULT_MA_section_TrackAtlasTypes);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    ProfileOut,
    ProfileIn);
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&tmp1, &_L6);
  /* 1 */ if (_L6.valid) {
    tmp = pos_LRBG;
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
** MoveMAAbsolute_Loop_new_TA_Lib_internal.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

