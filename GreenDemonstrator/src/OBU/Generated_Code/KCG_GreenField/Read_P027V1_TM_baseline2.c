/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_TM_baseline2.h"

/* TM_baseline2::Read_P027V1 */
void Read_P027V1_TM_baseline2(
  /* TM_baseline2::Read_P027V1::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_baseline2::Read_P027V1::received */ kcg_bool *received,
  /* TM_baseline2::Read_P027V1::P027V1_out */ P027V1_OBU_T_TM_baseline2 *P027V1_out)
{
  static kcg_int i;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L6 */
  static array_int_5 _L6_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool _1_else_clock_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool _2_IfBlock1_clock_1_1;
  /* TM_baseline2::Read_P027V1::_L5 */
  static CompressedPacketData_T_Common_T _L5;
  /* TM_baseline2::Read_P027V1::_L30 */
  static MetadataElement_T_Common_Types_ _L30;
  /* TM_baseline2::Read_P027V1::_L166 */
  static P027V1_OBU_body_enum_T_TM_basel _L166;
  /* TM_baseline2::Read_P027V1::_L182 */
  static P027V1_OBU_sectionlist_enum_T_T _L182;
  /* TM_baseline2::Read_P027V1::_L184 */
  static kcg_int _L184;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_interna(
    Message_IN,
    NID_META_P027V1_body_TM_baselin,
    kcg_true,
    kcg_true,
    &_L5,
    &_L30,
    received);
  _L166.valid = _L5[0] == 27;
  kcg_copy_array_int_5(&_L6_1, (array_int_5 *) &_L5[1]);
  for (i = 0; i < 33; i++) {
    /* 1 */
    Read_P027V1_sections_TM_baselin(
      i,
      Message_IN,
      _L6_1[3],
      _L6_1[4],
      &IfBlock1_clock_1_1,
      &_L182[i]);
    _L184 = i + 1;
    if (!IfBlock1_clock_1_1) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L184; i < 33; i++) {
    kcg_copy_P027V1_section_enum_T_(
      &_L182[i],
      (P027V1_section_enum_T_TM_baseli *) &DEFAULT_P027V1_section_enum_TM_);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_P027V1_OBU_sectionlist(&(*P027V1_out).sections, &_L182);
  IfBlock1_clock_1_1 = _L6_1[0] == INT_Q_DIR_nomiinal_TM_conversio;
  _2_IfBlock1_clock_1_1 = _L6_1[2] == INT_Q_SCALE_10cm_TM_conversions;
  /* 1_1_ck_IfBlock1 */ if (IfBlock1_clock_1_1) {
    _L166.q_dir = ENUM_Q_DIR_nominal_TM_conversio;
  }
  else {
    _1_else_clock_1_1_IfBlock1 = _L6_1[0] == INT_Q_DIR_reverse_TM_conversion;
    /* 1_1_ck_anon_activ */ if (_1_else_clock_1_1_IfBlock1) {
      _L166.q_dir = ENUM_Q_DIR_reverse_TM_conversio;
    }
    else {
      else_clock_1_1_IfBlock1 = _L6_1[0] == INT_Q_DIR_both_TM_conversions;
      /* 1_1_ck_anon_activ */ if (else_clock_1_1_IfBlock1) {
        _L166.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        _L166.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  /* 1_1_ck_IfBlock1 */ if (_2_IfBlock1_clock_1_1) {
    _L166.q_scale = ENUM_Q_SCALE_10cm_TM_conversion;
  }
  else {
    IfBlock1_clock_1_1 = _L6_1[2] == INT_Q_SCALE_1m_TM_conversions;
    /* 1_1_ck_anon_activ */ if (IfBlock1_clock_1_1) {
      _L166.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      _1_else_clock_1_1_IfBlock1 = _L6_1[2] == INT_Q_SCALE_10m_TM_conversions;
      /* 1_1_ck_anon_activ */ if (_1_else_clock_1_1_IfBlock1) {
        _L166.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        _L166.q_scale = ENUM_Q_SCALE_10cm_TM_conversion;
      }
    }
  }
  (*P027V1_out).valid = _L166.valid;
  (*P027V1_out).q_dir = _L166.q_dir;
  (*P027V1_out).q_scale = _L166.q_scale;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P027V1_TM_baseline2.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

