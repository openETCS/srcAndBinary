/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveMAAbsolute_TA_Lib_internal.h"

/* TA_Lib_internal::MoveMAAbsolute */
void MoveMAAbsolute_TA_Lib_internal(
  /* TA_Lib_internal::MoveMAAbsolute::ProfileIn */ MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveMAAbsolute::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute::ProfileOut */ MovementAuthority_t_TrackAtlasTypes *ProfileOut)
{
  /* TA_Lib_internal::MoveMAAbsolute */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes acc;
  static kcg_int i;
  
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(ProfileOut, ProfileIn);
  /* ck__L124 */ if ((*ProfileIn).q_dangerpoint) {
    /* 2 */
    Move_DP_or_OL_TA_Lib_internal(
      &(*ProfileIn).dangerpoint,
      msg_prvLRBG,
      msg_LRBG,
      pos_LRBG,
      pos_prvLRBG,
      &(*ProfileOut).dangerpoint);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      &(*ProfileOut).dangerpoint,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_DP_TrackAtlasTypes);
  }
  /* ck__L123 */ if ((*ProfileIn).q_overlap) {
    /* 1 */
    Move_DP_or_OL_TA_Lib_internal(
      &(*ProfileIn).overlap,
      msg_prvLRBG,
      msg_LRBG,
      pos_LRBG,
      pos_prvLRBG,
      &(*ProfileOut).overlap);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      &(*ProfileOut).overlap,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_OL_TrackAtlasTypes);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &(*ProfileOut).sections,
    &(*ProfileIn).sections);
  /* 1 */ for (i = 0; i < 10; i++) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &acc,
      &(*ProfileOut).sections);
    /* 1 */
    MoveMAAbsolute_Loop_TA_Lib_internal(
      i,
      &acc,
      msg_prvLRBG,
      msg_LRBG,
      pos_LRBG,
      pos_prvLRBG,
      &(*ProfileOut).sections);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveMAAbsolute_TA_Lib_internal.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

