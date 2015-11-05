/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_AXLELOADCAT_to_int_TM_co.h"

/* TM_conversions::CAST_M_AXLELOADCAT_to_int */
kcg_int CAST_M_AXLELOADCAT_to_int_TM_co(
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat */ M_AXLELOADCAT m_axleloadcat)
{
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else */
  static kcg_bool _10_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int m_axleloadcat_int;
  
  IfBlock1_clock = m_axleloadcat == ENUM_M_AXLELOADCAT_A_TM_convers;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_axleloadcat_int = INT_M_AXLELOADCAT_A_TM_conversi;
  }
  else {
    _11_else_clock_IfBlock1 = m_axleloadcat == ENUM_M_AXLELOADCAT_B1_TM_conver;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      m_axleloadcat_int = INT_M_AXLELOADCAT_B1_TM_convers;
    }
    else {
      _10_else_clock_IfBlock1 = m_axleloadcat ==
        ENUM_M_AXLELOADCAT_B2_TM_conver;
      /* ck_anon_activ */ if (_10_else_clock_IfBlock1) {
        m_axleloadcat_int = INT_M_AXLELOADCAT_B2_TM_convers;
      }
      else {
        _9_else_clock_IfBlock1 = m_axleloadcat ==
          ENUM_M_AXLELOADCAT_C2_TM_conver;
        /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
          m_axleloadcat_int = INT_M_AXLELOADCAT_C2_TM_convers;
        }
        else {
          _8_else_clock_IfBlock1 = m_axleloadcat ==
            ENUM_M_AXLELOADCAT_C3_TM_conver;
          /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
            m_axleloadcat_int = INT_M_AXLELOADCAT_C3_TM_convers;
          }
          else {
            _7_else_clock_IfBlock1 = m_axleloadcat ==
              ENUM_M_AXLELOADCAT_C3_TM_conver;
            /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
              m_axleloadcat_int = INT_M_AXLELOADCAT_C4_TM_convers;
            }
            else {
              _6_else_clock_IfBlock1 = m_axleloadcat ==
                ENUM_M_AXLELOADCAT_D2_TM_conver;
              /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
                m_axleloadcat_int = INT_M_AXLELOADCAT_D2_TM_convers;
              }
              else {
                _5_else_clock_IfBlock1 = m_axleloadcat ==
                  ENUM_M_AXLELOADCAT_D3_TM_conver;
                /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
                  m_axleloadcat_int = INT_M_AXLELOADCAT_D3_TM_convers;
                }
                else {
                  _4_else_clock_IfBlock1 = m_axleloadcat ==
                    ENUM_M_AXLELOADCAT_D4_TM_conver;
                  /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                    m_axleloadcat_int = INT_M_AXLELOADCAT_D4_TM_convers;
                  }
                  else {
                    _3_else_clock_IfBlock1 = m_axleloadcat ==
                      ENUM_M_AXLELOADCAT_D4XL_TM_conv;
                    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                      m_axleloadcat_int = INT_M_AXLELOADCAT_D4XL_TM_conve;
                    }
                    else {
                      _2_else_clock_IfBlock1 = m_axleloadcat ==
                        ENUM_M_AXLELOADCAT_E4_TM_conver;
                      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                        m_axleloadcat_int = INT_M_AXLELOADCAT_E4_TM_convers;
                      }
                      else {
                        _1_else_clock_IfBlock1 = m_axleloadcat ==
                          ENUM_M_AXLELOADCAT_E5_TM_conver;
                        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                          m_axleloadcat_int = INT_M_AXLELOADCAT_E5_TM_convers;
                        }
                        else {
                          else_clock_IfBlock1 = m_axleloadcat ==
                            ENUM_M_AXLELOADCAT_HS17_TM_conv;
                          /* ck_anon_activ */ if (else_clock_IfBlock1) {
                            m_axleloadcat_int = INT_M_AXLELOADCAT_HS17_TM_conve;
                          }
                          else {
                            m_axleloadcat_int = INT_M_AXLELOADCAT_E5_TM_convers;
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
    }
  }
  return m_axleloadcat_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_AXLELOADCAT_to_int_TM_co.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

