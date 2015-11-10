/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_ERROR_TM_conversi.h"

/* TM_conversions::CAST_Int_to_M_ERROR */
M_ERROR CAST_Int_to_M_ERROR_TM_conversi(
  /* TM_conversions::CAST_Int_to_M_ERROR::m_error_int */ kcg_int m_error_int)
{
  /* TM_conversions::CAST_Int_to_M_ERROR::IfBlock1::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ERROR::IfBlock1::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ERROR::IfBlock1::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ERROR::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ERROR::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ERROR::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ERROR::IfBlock1::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ERROR::IfBlock1::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ERROR::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_ERROR::m_error */
  static M_ERROR m_error;
  
  IfBlock1_clock = m_error_int == INT_M_ERROR_balise_group_linkin;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_error = ENUM_M_ERROR_balise_group_linki;
  }
  else {
    _7_else_clock_IfBlock1 = m_error_int == INT_M_ERROR_Double_linking_erro;
    /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
      m_error = ENUM_M_ERROR_Double_linking_err;
    }
    else {
      _6_else_clock_IfBlock1 = m_error_int == INT_M_ERROR_Double_repositionin;
      /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
        m_error = ENUM_M_ERROR_Double_repositioni;
      }
      else {
        _5_else_clock_IfBlock1 = m_error_int == INT_M_ERROR_Linked_balise_group;
        /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
          m_error = ENUM_M_ERROR_Linked_balise_grou;
        }
        else {
          _4_else_clock_IfBlock1 = m_error_int ==
            INT_M_ERROR_Radio_message_consi;
          /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
            m_error = ENUM_M_ERROR_Radio_message_cons;
          }
          else {
            _3_else_clock_IfBlock1 = m_error_int ==
              INT_M_ERROR_Radio_safe_radio_co;
            /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
              m_error = ENUM_M_ERROR_Radio_safe_radio_c;
            }
            else {
              _2_else_clock_IfBlock1 = m_error_int ==
                INT_M_ERROR_Radio_sequence_erro;
              /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                m_error = ENUM_M_ERROR_Radio_sequence_err;
              }
              else {
                _1_else_clock_IfBlock1 = m_error_int ==
                  INT_M_ERROR_Safety_critical_fai;
                /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                  m_error = ENUM_M_ERROR_Safety_critical_fa;
                }
                else {
                  else_clock_IfBlock1 = m_error_int ==
                    INT_M_ERROR_Unlinked_balise_gro;
                  /* ck_anon_activ */ if (else_clock_IfBlock1) {
                    m_error = ENUM_M_ERROR_Unlinked_balise_gr;
                  }
                  else {
                    m_error = ENUM_M_ERROR_Safety_critical_fa;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return m_error;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_ERROR_TM_conversi.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

