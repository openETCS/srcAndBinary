/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Move_DP_or_OL_new_TA_Lib_internal.h"

/* TA_Lib_internal::Move_DP_or_OL_new */
void Move_DP_or_OL_new_TA_Lib_internal(
  /* TA_Lib_internal::Move_DP_or_OL_new::DP_or_OL_in */ DP_or_OL_t_TrackAtlasTypes *DP_or_OL_in,
  /* TA_Lib_internal::Move_DP_or_OL_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::Move_DP_or_OL_new::DP_or_OL_out */ DP_or_OL_t_TrackAtlasTypes *DP_or_OL_out)
{
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(DP_or_OL_out, DP_or_OL_in);
  (*DP_or_OL_out).d_DP_or_OL = (*DP_or_OL_in).d_DP_or_OL + pos_LRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Move_DP_or_OL_new_TA_Lib_internal.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

