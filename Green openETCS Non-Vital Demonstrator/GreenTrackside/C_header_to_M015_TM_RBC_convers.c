/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M015_TM_RBC_convers.h"

/* TM_RBC_conversions::C_header_to_M015 */
void C_header_to_M015_TM_RBC_convers(
  /* TM_RBC_conversions::C_header_to_M015::header_in */ M_TrackTrain_Radio_T_TM_radio_m *header_in,
  /* TM_RBC_conversions::C_header_to_M015::message_out */ M_015_T_TM_radio_messages *message_out)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  
  (*message_out).valid = (*header_in).valid;
  else_clock_1_IfBlock1 = (*header_in).field4 ==
    INT_Q_SCALE_10cm_TM_conversions;
  IfBlock1_clock_1 = (*header_in).field6 == INT_Q_DIR_nomiinal_TM_conversio;
  (*message_out).nid_message = /* 1 */
    CAST_Int_to_NID_MESSAGE_TM_conv((*header_in).nid_message);
  (*message_out).l_message = /* 1 */
    CAST_Int_to_L_MESSAGE_TM_conver((*header_in).l_message);
  (*message_out).t_train = /* 1 */
    CAST_Int_to_T_TRAIN_TM_conversi((*header_in).t_train);
  (*message_out).m_ack = /* 1 */
    CAST_Int_to_M_ACK_TM_conversion((*header_in).field1);
  (*message_out).nid_lrbg = /* 1 */
    CAST_Int_to_NID_LRBG_TM_convers((*header_in).field2);
  (*message_out).nid_em = /* 1 */
    CAST_Int_to_NID_EM_TM_conversio((*header_in).field3);
  /* 1_ck_IfBlock1 */ if (else_clock_1_IfBlock1) {
    (*message_out).q_scale = ENUM_Q_SCALE_10cm_TM_conversion;
  }
  else {
    _2_else_clock_1_IfBlock1 = (*header_in).field4 ==
      INT_Q_SCALE_1m_TM_conversions;
    /* 1_ck_anon_activ */ if (_2_else_clock_1_IfBlock1) {
      (*message_out).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      _1_else_clock_1_IfBlock1 = (*header_in).field4 ==
        INT_Q_SCALE_10m_TM_conversions;
      /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
        (*message_out).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*message_out).q_scale = ENUM_Q_SCALE_10cm_TM_conversion;
      }
    }
  }
  (*message_out).d_ref = /* 1 */
    CAST_Int_to_D_REF_TM_conversion((*header_in).field5);
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*message_out).q_dir = ENUM_Q_DIR_nominal_TM_conversio;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*header_in).field6 ==
      INT_Q_DIR_reverse_TM_conversion;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*message_out).q_dir = ENUM_Q_DIR_reverse_TM_conversio;
    }
    else {
      else_clock_1_IfBlock1 = (*header_in).field6 ==
        INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        (*message_out).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*message_out).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  (*message_out).d_emergencystop = /* 1 */
    CAST_Int_to_D_EMERGENCYSTOP_TM_((*header_in).field7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_header_to_M015_TM_RBC_convers.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

