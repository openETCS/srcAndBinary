/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveMAAbsolute_new_TA_Lib_inter.h"

/* TA_Lib_internal::MoveMAAbsolute_new */
void MoveMAAbsolute_new_TA_Lib_inter(
  /* TA_Lib_internal::MoveMAAbsolute_new::ProfileIn */ MovementAuthority_t_TrackAtlasT *ProfileIn,
  /* TA_Lib_internal::MoveMAAbsolute_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute_new::ProfileOut */ MovementAuthority_t_TrackAtlasT *ProfileOut)
{
  /* TA_Lib_internal::MoveMAAbsolute_new */
  static MovementAuthoritySectionlist_t_ acc;
  static kcg_int i;
  
  kcg_copy_MovementAuthority_t_Tr(ProfileOut, ProfileIn);
  /* ck__L124 */ if ((*ProfileIn).q_dangerpoint) {
    /* 1 */
    Move_DP_or_OL_new_TA_Lib_intern(
      &(*ProfileIn).dangerpoint,
      pos_LRBG,
      &(*ProfileOut).dangerpoint);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasT(
      &(*ProfileOut).dangerpoint,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_DP_TrackAtlasTypes);
  }
  /* ck__L123 */ if ((*ProfileIn).q_overlap) {
    /* 2 */
    Move_DP_or_OL_new_TA_Lib_intern(
      &(*ProfileIn).overlap,
      pos_LRBG,
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
    MoveMAAbsolute_Loop_new_TA_Lib_(i, &acc, pos_LRBG, &(*ProfileOut).sections);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveMAAbsolute_new_TA_Lib_inter.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

