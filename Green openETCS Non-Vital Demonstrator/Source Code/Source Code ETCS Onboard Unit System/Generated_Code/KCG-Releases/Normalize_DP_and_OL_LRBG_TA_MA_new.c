/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_DP_and_OL_LRBG_TA_MA_new.h"

/* TA_MA_new::Normalize_DP_and_OL_LRBG */
void Normalize_DP_and_OL_LRBG_TA_MA_new(
  /* TA_MA_new::Normalize_DP_and_OL_LRBG::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_MA_new::Normalize_DP_and_OL_LRBG::MA_in */ MovementAuthority_t_TrackAtlasTypes *MA_in,
  /* TA_MA_new::Normalize_DP_and_OL_LRBG::dangerpoint */ DP_or_OL_t_TrackAtlasTypes *dangerpoint,
  /* TA_MA_new::Normalize_DP_and_OL_LRBG::overlap */ DP_or_OL_t_TrackAtlasTypes *overlap)
{
  (*overlap).d_DP_or_OL = (*MA_in).overlap.d_DP_or_OL - pos_LRBG;
  (*overlap).v_release = (*MA_in).overlap.v_release;
  (*overlap).calc_v_release_onboard = (*MA_in).overlap.calc_v_release_onboard;
  (*dangerpoint).d_DP_or_OL = (*MA_in).dangerpoint.d_DP_or_OL - pos_LRBG;
  (*dangerpoint).v_release = (*MA_in).dangerpoint.v_release;
  (*dangerpoint).calc_v_release_onboard =
    (*MA_in).dangerpoint.calc_v_release_onboard;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_DP_and_OL_LRBG_TA_MA_new.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

