/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_TRACKCOND_to_int_TM_conv.h"

/* TM_conversions::CAST_M_TRACKCOND_to_int */
kcg_int CAST_M_TRACKCOND_to_int_TM_conv(
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond */ M_TRACKCOND m_trackcond)
{
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int m_trackcond_int;
  
  IfBlock1_clock = m_trackcond == ENUM_M_TRACKCOND_Air_tightness_;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_trackcond_int = INT_M_TRACKCOND_Air_tightness_T;
  }
  else {
    _9_else_clock_IfBlock1 = m_trackcond == ENUM_M_TRACKCOND_Non_stopping_a;
    /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
      m_trackcond_int = INT_M_TRACKCOND_Non_stopping_ar;
    }
    else {
      _8_else_clock_IfBlock1 = m_trackcond == _15_ENUM_M_TRACKCOND_Powerless_;
      /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
        m_trackcond_int = INT_M_TRACKCOND_Powerless_secti;
      }
      else {
        _7_else_clock_IfBlock1 = m_trackcond == ENUM_M_TRACKCOND_Powerless_sect;
        /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
          m_trackcond_int = _12_INT_M_TRACKCOND_Powerless_s;
        }
        else {
          _6_else_clock_IfBlock1 = m_trackcond ==
            ENUM_M_TRACKCOND_Radio_hole_sto;
          /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
            m_trackcond_int = INT_M_TRACKCOND_Radio_hole_stop;
          }
          else {
            _5_else_clock_IfBlock1 = m_trackcond ==
              ENUM_M_TRACKCOND_Sound_horn_TM_;
            /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
              m_trackcond_int = INT_M_TRACKCOND_Sound_horn_TM_c;
            }
            else {
              _4_else_clock_IfBlock1 = m_trackcond ==
                _14_ENUM_M_TRACKCOND_Switch_off;
              /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                m_trackcond_int = INT_M_TRACKCOND_Switch_off_eddy;
              }
              else {
                _3_else_clock_IfBlock1 = m_trackcond ==
                  ENUM_M_TRACKCOND_Switch_off_edd;
                /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                  m_trackcond_int = _13_INT_M_TRACKCOND_Switch_off_;
                }
                else {
                  _2_else_clock_IfBlock1 = m_trackcond ==
                    ENUM_M_TRACKCOND_Switch_off_mag;
                  /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                    m_trackcond_int = INT_M_TRACKCOND_Switch_off_magn;
                  }
                  else {
                    _1_else_clock_IfBlock1 = m_trackcond ==
                      ENUM_M_TRACKCOND_Switch_off_reg;
                    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                      m_trackcond_int = INT_M_TRACKCOND_Switch_off_rege;
                    }
                    else {
                      else_clock_IfBlock1 = m_trackcond ==
                        ENUM_M_TRACKCOND_Tunnel_stoppin;
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        m_trackcond_int = INT_M_TRACKCOND_Tunnel_stopping;
                      }
                      else {
                        m_trackcond_int = INT_M_TRACKCOND_Non_stopping_ar;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return m_trackcond_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_TRACKCOND_to_int_TM_conv.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

