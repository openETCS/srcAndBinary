/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_compr_onboard_TM_convers.h"

/* TM_conversions::C_P005_compr_onboard */
void C_P005_compr_onboard_TM_convers(
  /* TM_conversions::C_P005_compr_onboard::PacketData */ CompressedPacketData_T_Common_T *PacketData,
  /* TM_conversions::C_P005_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_ *Metadata_Element,
  /* TM_conversions::C_P005_compr_onboard::P005_onboard */ P005_OBU_T_TM *P005_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::C_P005_compr_onboard::_L6 */
  static array_int_3 _L6;
  /* TM_conversions::C_P005_compr_onboard::_L2 */
  static P044_other_data_TM_TrainToTrack _L2;
  /* TM_conversions::C_P005_compr_onboard::_L22 */
  static kcg_bool _L22;
  
  kcg_copy_P044_other_data_TM_Tra(
    &_L2,
    (P044_other_data_TM_TrainToTrack *) &(*PacketData)[4]);
  (*P005_onboard).n_iter = _L2[0];
  kcg_copy_array_int_3(&_L6, (array_int_3 *) &(*PacketData)[1]);
  (*P005_onboard).l_packet = _L6[1];
  _L22 = (*PacketData)[0] == 5;
  (*P005_onboard).valid = _L22;
  _1_else_clock_1_IfBlock1 = _L6[0] == INT_Q_DIR_nomiinal_TM_conversio;
  IfBlock1_clock_1 = _L6[2] == INT_Q_SCALE_10cm_TM_conversions;
  /* 1_ck_IfBlock1 */ if (_1_else_clock_1_IfBlock1) {
    (*P005_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversio;
  }
  else {
    else_clock_1_IfBlock1 = _L6[0] == INT_Q_DIR_reverse_TM_conversion;
    /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
      (*P005_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversio;
    }
    else {
      _2_else_clock_1_IfBlock1 = _L6[0] == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (_2_else_clock_1_IfBlock1) {
        (*P005_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P005_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*P005_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversion;
  }
  else {
    _2_else_clock_1_IfBlock1 = _L6[2] == INT_Q_SCALE_1m_TM_conversions;
    /* 1_ck_anon_activ */ if (_2_else_clock_1_IfBlock1) {
      (*P005_onboard).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      _1_else_clock_1_IfBlock1 = _L6[2] == INT_Q_SCALE_10m_TM_conversions;
      /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
        (*P005_onboard).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*P005_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversion;
      }
    }
  }
  /* 1 */
  C_P005_unflatten_sections_TM_li(
    _L22,
    _L2[0],
    (P005_sections_array_flat_T_TM *) &(*PacketData)[5],
    &(*P005_onboard).sections);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P005_compr_onboard_TM_convers.c
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

