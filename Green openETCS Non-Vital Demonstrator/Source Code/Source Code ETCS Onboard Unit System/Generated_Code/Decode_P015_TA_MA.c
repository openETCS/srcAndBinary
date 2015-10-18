/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_P015_TA_MA.h"

/* TA_MA::Decode_P015 */
void Decode_P015_TA_MA(
  /* TA_MA::Decode_P015::MA_onboard_in */ P015_OBU_T_TM *MA_onboard_in,
  /* TA_MA::Decode_P015::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::Decode_P015::MA_decoded_out */ MovementAuthority_t_TrackAtlasTypes *MA_decoded_out)
{
  /* TA_MA::Decode_P015 */
  static MovementAuthoritySection_t_TrackAtlasTypes tmp;
  /* TA_MA::Decode_P015::_L48 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L48;
  /* TA_MA::Decode_P015::_L56 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L56;
  /* TA_MA::Decode_P015::_L59 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L59;
  /* TA_MA::Decode_P015::_L179 */
  static kcg_bool _L179;
  /* TA_MA::Decode_P015::_L180 */
  static kcg_bool _L180;
  
  (*MA_decoded_out).valid = (*MA_onboard_in).valid;
  (*MA_decoded_out).Level = DEFAULT_MA_level_23_TrackAtlasTypes;
  (*MA_decoded_out).q_dir = (*MA_onboard_in).q_dir;
  (*MA_decoded_out).v_main = 0;
  (*MA_decoded_out).v_loa = (*MA_onboard_in).v_loa;
  (*MA_decoded_out).n_iter = (*MA_onboard_in).n_iter + 1;
  (*MA_decoded_out).q_endtimer = kcg_false;
  kcg_copy_Endtimer_t_TrackAtlasTypes(
    &(*MA_decoded_out).endtimer_t,
    (Endtimer_t_TrackAtlasTypes *) &DEFAULT_Endtimer_TrackAtlasTypes);
  /* 1 */
  EVAL_T_LOA_TA_Lib_internal(
    (*MA_onboard_in).t_loa,
    &(*MA_decoded_out).t_loa_unlimited,
    &_L48);
  (*MA_decoded_out).t_loa = _L48;
  /* 1 */
  EVAL_V_Release_TA_Lib_internal(
    (*NV_in).v_nvrel,
    (*MA_onboard_in).v_releasedp,
    &_L56,
    &_L179);
  /* 2 */
  EVAL_V_Release_TA_Lib_internal(
    (*NV_in).v_nvrel,
    (*MA_onboard_in).v_releaseol,
    &_L59,
    &_L180);
  /* 1 */
  DecodeEndsection_TA_MA(
    (*MA_onboard_in).l_endsection,
    (*MA_onboard_in).q_scale,
    (*MA_onboard_in).q_sectiontimer,
    (*MA_onboard_in).t_sectiontimer,
    (*MA_onboard_in).d_sectiontimerstoploc,
    &tmp);
  /* 1 */
  CombineSections_TA_MA(
    &tmp,
    (MovementAuthoritySectionlist_t_TrackAtlasTypes *)
      &DEFAULT_MA_sectionlist_TrackAtlasTypes,
    &(*MA_decoded_out).sections);
  (*MA_decoded_out).q_dangerpoint = /* 1 */
    EVAL_Q_DANGERPOINT_TA_Lib_internal((*MA_onboard_in).q_dangerpoint);
  (*MA_decoded_out).dangerpoint.v_release = _L56;
  (*MA_decoded_out).dangerpoint.calc_v_release_onboard = _L179;
  (*MA_decoded_out).dangerpoint.d_DP_or_OL = /* 2 */
    Eval_Q_SCALE_TA_MRSP((*MA_onboard_in).q_scale, (*MA_onboard_in).d_dp);
  (*MA_decoded_out).q_overlap = /* 1 */
    EVAL_Q_OVERLAP_TA_Lib_internal((*MA_onboard_in).q_overlap);
  (*MA_decoded_out).overlap.v_release = _L59;
  (*MA_decoded_out).overlap.calc_v_release_onboard = _L180;
  (*MA_decoded_out).overlap.d_DP_or_OL = /* 3 */
    Eval_Q_SCALE_TA_MRSP((*MA_onboard_in).q_scale, (*MA_onboard_in).d_ol);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Decode_P015_TA_MA.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

