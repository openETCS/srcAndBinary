/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveMAAbsolute_TA_Lib_internal.h"

/* TA_Lib_internal::MoveMAAbsolute */
void MoveMAAbsolute_TA_Lib_internal(
  /* TA_Lib_internal::MoveMAAbsolute::ProfileIn */ MovementAuthority_t_TrackAtlasT *ProfileIn,
  /* TA_Lib_internal::MoveMAAbsolute::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute::ProfileOut */ MovementAuthority_t_TrackAtlasT *ProfileOut)
{
  /* TA_Lib_internal::MoveMAAbsolute */
  static MovementAuthoritySectionlist_t_ acc;
  static kcg_int i;
  
  kcg_copy_MovementAuthority_t_Tr(ProfileOut, ProfileIn);
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
    kcg_copy_DP_or_OL_t_TrackAtlasT(
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
    kcg_copy_DP_or_OL_t_TrackAtlasT(
      &(*ProfileOut).overlap,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_OL_TrackAtlasTypes);
  }
  kcg_copy_MovementAuthoritySecti(
    &(*ProfileOut).sections,
    &(*ProfileIn).sections);
  /* 1 */ for (i = 0; i < 10; i++) {
    kcg_copy_MovementAuthoritySecti(&acc, &(*ProfileOut).sections);
    /* 1 */
    MoveMAAbsolute_Loop_TA_Lib_inte(
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
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

