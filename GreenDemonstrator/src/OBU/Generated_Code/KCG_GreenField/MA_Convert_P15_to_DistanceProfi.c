/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Convert_P15_to_DistanceProfi.h"

/* TA_MA::MA_Convert_P15_to_DistanceProfile_loop */
void MA_Convert_P15_to_DistanceProfi(
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::i */ kcg_int i,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::ProfileAccu */ AccuDistanceProfileMA_TA_MA *ProfileAccu,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::SectionsIn */ P015_OBU_sectionlist_enum_T_TM *SectionsIn,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::n_iter */ N_ITER n_iter,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::q_scale */ Q_SCALE q_scale,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::SpeedtProfile */ AccuDistanceProfileMA_TA_MA *SpeedtProfile)
{
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop */
  static kcg_bool tmp2;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop */
  static T_SECTIONTIMER tmp1;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop */
  static kcg_int tmp;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::section_d */
  static kcg_int section_d;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L227 */
  static P015_section_enum_T_TM _L227;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L252 */
  static _22_MovementAuthoritySection_t_ _L252;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L281 */
  static kcg_bool _L281;
  
  if ((0 <= i) & (i < 32)) {
    kcg_copy_P015_section_enum_T_TM(&_L227, &(*SectionsIn)[i]);
  }
  else {
    kcg_copy_P015_section_enum_T_TM(
      &_L227,
      (P015_section_enum_T_TM *) &DEFAULT_P015_OBU_section_TM);
  }
  if ((0 <= i - 1) & (i - 1 < 10)) {
    kcg_copy__22_MovementAuthorityS(&_L252, &(*ProfileAccu).sections[i - 1]);
  }
  else {
    kcg_copy__22_MovementAuthorityS(
      &_L252,
      (_22_MovementAuthoritySection_t_ *) &DefaultMA_section_TA_MA);
  }
  _L281 = n_iter == i;
  kcg_copy_MovementAuthoritySecti(
    &(*SpeedtProfile).sections,
    &(*ProfileAccu).sections);
  tmp2 = /* 1 */ CAST_Q_SECTIONTIMER_to_bool_TM_(_L227.q_sectiontimer);
  /* 2 */ if (_L227.valid) {
    section_d = /* 1 */
      Normalize_Distance_d_internal_t(q_scale, _L227.l_section) +
      _L252.l_section;
    tmp1 = _L227.t_sectiontimer;
    tmp = /* 2 */
      Normalize_Distance_d_internal_t(q_scale, _L227.d_sectiontimerstoploc) +
      _L252.d_sectiontimerstoploc;
  }
  else {
    section_d = 0;
    tmp1 = 0;
    tmp = 0;
  }
  if ((0 <= i) & (i < 10)) {
    (*SpeedtProfile).sections[i].valid = _L227.valid;
    (*SpeedtProfile).sections[i].q_endsection = _L281;
    (*SpeedtProfile).sections[i].l_section = section_d;
    (*SpeedtProfile).sections[i].q_sectiontimer = _L227.valid & tmp2;
    (*SpeedtProfile).sections[i].t_sectiontimer = tmp1;
    (*SpeedtProfile).sections[i].d_sectiontimerstoploc = tmp;
  }
  /* 4 */ if (_L281) {
    (*SpeedtProfile).d_endsection = section_d;
  }
  else {
    (*SpeedtProfile).d_endsection = (*ProfileAccu).d_endsection;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Convert_P15_to_DistanceProfi.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

