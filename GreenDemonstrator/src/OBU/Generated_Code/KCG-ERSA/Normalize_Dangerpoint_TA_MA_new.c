/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Dangerpoint_TA_MA_new.h"

/* TA_MA_new::Normalize_Dangerpoint */
void Normalize_Dangerpoint_TA_MA_new(
  /* TA_MA_new::Normalize_Dangerpoint::d_endsection */ L_internal_Type_Obu_BasicTypes_Pkg d_endsection,
  /* TA_MA_new::Normalize_Dangerpoint::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA_new::Normalize_Dangerpoint::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA_new::Normalize_Dangerpoint::q_dangerpoint */ kcg_bool *q_dangerpoint,
  /* TA_MA_new::Normalize_Dangerpoint::dangerpoint */ DP_or_OL_t_TrackAtlasTypes *dangerpoint)
{
  /* TA_MA_new::Normalize_Dangerpoint::_L3 */ V_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* TA_MA_new::Normalize_Dangerpoint::_L4 */ kcg_bool _L4;
  
  *q_dangerpoint = /* 1 */
    EVAL_Q_DANGERPOINT_TA_Lib_internal((*Packet15_in).q_dangerpoint);
  /* 1 */
  EVAL_V_Release_TA_Lib_internal(
    (*Packet15_in).v_releasedp,
    (*NV_in).v_nvrel,
    &_L3,
    &_L4);
  /* 1 */ if (*q_dangerpoint) {
    (*dangerpoint).v_release = _L3;
    (*dangerpoint).calc_v_release_onboard = _L4;
    (*dangerpoint).d_DP_or_OL = /* 1 */
      Eval_Q_SCALE_TA_MRSP((*Packet15_in).q_scale, (*Packet15_in).d_dp) +
      d_endsection;
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      dangerpoint,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_DP_TrackAtlasTypes);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_Dangerpoint_TA_MA_new.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

