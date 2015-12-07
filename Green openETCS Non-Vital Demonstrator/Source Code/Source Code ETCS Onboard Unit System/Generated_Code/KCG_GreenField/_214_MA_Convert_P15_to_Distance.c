/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_214_MA_Convert_P15_to_Distance.h"

/* TA_MA_new::MA_Convert_P15_to_DistanceProfile */
void _214_MA_Convert_P15_to_Distance(
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::MovementAuthority */ MovementAuthority_t_TrackAtlasT *MovementAuthority)
{
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile */
  static P015_section_enum_T_TM tmp;
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile */
  static AccuDistanceProfileMA_TA_MA_new acc;
  static kcg_int i;
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::_L77 */
  static AccuDistanceProfileMA_TA_MA_new _L77;
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::_L130 */
  static kcg_bool _L130;
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::_L131 */
  static DP_or_OL_t_TrackAtlasTypes _L131;
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::_L132 */
  static kcg_bool _L132;
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::_L133 */
  static DP_or_OL_t_TrackAtlasTypes _L133;
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::_L145 */
  static kcg_bool _L145;
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::_L146 */
  static T_internal_Type_Obu_BasicTypes_ _L146;
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::_L166 */
  static P015_OBU_sectionlist_enum_T_TM _L166;
  
  kcg_copy_P015_OBU_sectionlist_e(&_L166, &(*Packet15_in).sections);
  /* 1 */ Pack_Endsection_TA_MA_new(Packet15_in, &tmp);
  if ((0 <= (*Packet15_in).n_iter) & ((*Packet15_in).n_iter < 32)) {
    kcg_copy_P015_section_enum_T_TM(&_L166[(*Packet15_in).n_iter], &tmp);
  }
  kcg_copy_AccuDistanceProfileMA_(
    &_L77,
    (AccuDistanceProfileMA_TA_MA_new *) &DEFAULT_AccuDistanceProfileMA_T);
  /* 1 */ for (i = 0; i < 10; i++) {
    kcg_copy_AccuDistanceProfileMA_(&acc, &_L77);
    /* 1 */
    MA_Convert_P15_to_DistanceProfi(
      i,
      &acc,
      &_L166,
      (*Packet15_in).n_iter,
      (*Packet15_in).q_scale,
      &_L77);
  }
  /* 1 */
  Normalize_Overlap_TA_MA_new(
    _L77.d_endsection,
    Packet15_in,
    NV_in,
    &_L132,
    &_L133);
  /* 1 */
  Normalize_Dangerpoint_TA_MA_new(
    _L77.d_endsection,
    Packet15_in,
    NV_in,
    &_L130,
    &_L131);
  /* 2 */ EVAL_T_LOA_TA_Lib_internal(Packet15_in, &_L145, &_L146);
  /* 1 */ if ((*Packet15_in).valid) {
    (*MovementAuthority).valid = (*Packet15_in).valid;
    (*MovementAuthority).Level = MA_level23_TA_MA_new;
    (*MovementAuthority).q_dir = (*Packet15_in).q_dir;
    (*MovementAuthority).v_main = DEFAULT_v_main_TA_MA_new;
    (*MovementAuthority).v_loa = (*Packet15_in).v_loa;
    (*MovementAuthority).t_loa_unlimited = _L145;
    (*MovementAuthority).t_loa = _L146;
    (*MovementAuthority).n_iter = (*Packet15_in).n_iter;
    kcg_copy_MovementAuthoritySecti(
      &(*MovementAuthority).sections,
      &_L77.sections);
    (*MovementAuthority).q_dangerpoint = _L130;
    kcg_copy_DP_or_OL_t_TrackAtlasT(&(*MovementAuthority).dangerpoint, &_L131);
    (*MovementAuthority).q_overlap = _L132;
    kcg_copy_DP_or_OL_t_TrackAtlasT(&(*MovementAuthority).overlap, &_L133);
    (*MovementAuthority).q_endtimer = kcg_false;
    kcg_copy_Endtimer_t_TrackAtlasT(
      &(*MovementAuthority).endtimer_t,
      (Endtimer_t_TrackAtlasTypes *) &DEFAULT_Endtimer_TrackAtlasType);
  }
  else {
    kcg_copy_MovementAuthority_t_Tr(
      MovementAuthority,
      (MovementAuthority_t_TrackAtlasT *) &DEFAULT_MovementAuthority_Track);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _214_MA_Convert_P15_to_Distance.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

