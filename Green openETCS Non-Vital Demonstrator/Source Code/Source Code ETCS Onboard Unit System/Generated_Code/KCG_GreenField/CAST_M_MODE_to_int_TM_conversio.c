/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_MODE_to_int_TM_conversio.h"

/* TM_conversions::CAST_M_MODE_to_int */
kcg_int CAST_M_MODE_to_int_TM_conversio(
  /* TM_conversions::CAST_M_MODE_to_int::m_mode */ M_MODE m_mode)
{
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else */
  static kcg_bool _14_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _10_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else */
  static kcg_bool _13_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int m_mode_int;
  
  IfBlock1_clock = m_mode == ENUM_M_MODE_Full_Supervision_TM;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_mode_int = INT_M_MODE_Full_Supervision_TM_;
  }
  else {
    _14_else_clock_IfBlock1 = m_mode == ENUM_M_MODE_Isolation_TM_conver;
    /* ck_anon_activ */ if (_14_else_clock_IfBlock1) {
      m_mode_int = INT_M_MODE_Isolation_TM_convers;
    }
    else {
      _13_else_clock_IfBlock1 = m_mode == ENUM_M_MODE_Limited_Supervision;
      /* ck_anon_activ */ if (_13_else_clock_IfBlock1) {
        m_mode_int = INT_M_MODE_Limited_Supervision_;
      }
      else {
        _12_else_clock_IfBlock1 = m_mode == ENUM_M_MODE_National_System_TM_;
        /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
          m_mode_int = INT_M_MODE_National_System_TM_c;
        }
        else {
          _11_else_clock_IfBlock1 = m_mode == ENUM_M_MODE_Non_Leading_TM_conv;
          /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
            m_mode_int = INT_M_MODE_Non_Leading_TM_conve;
          }
          else {
            _10_else_clock_IfBlock1 = m_mode == ENUM_M_MODE_On_Sight_TM_convers;
            /* ck_anon_activ */ if (_10_else_clock_IfBlock1) {
              m_mode_int = INT_M_MODE_On_Sight_TM_conversi;
            }
            else {
              _9_else_clock_IfBlock1 = m_mode ==
                ENUM_M_MODE_Passive_Shunting_TM;
              /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
                m_mode_int = INT_M_MODE_Passive_Shunting_TM_;
              }
              else {
                _8_else_clock_IfBlock1 = m_mode ==
                  ENUM_M_MODE_Post_Trip_TM_conver;
                /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
                  m_mode_int = INT_M_MODE_Post_Trip_TM_convers;
                }
                else {
                  _7_else_clock_IfBlock1 = m_mode ==
                    ENUM_M_MODE_Reversing_TM_conver;
                  /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
                    m_mode_int = INT_M_MODE_Reversing_TM_convers;
                  }
                  else {
                    _6_else_clock_IfBlock1 = m_mode ==
                      ENUM_M_MODE_Shunting_TM_convers;
                    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
                      m_mode_int = INT_M_MODE_Shunting_TM_conversi;
                    }
                    else {
                      _5_else_clock_IfBlock1 = m_mode ==
                        ENUM_M_MODE_Sleeping_TM_convers;
                      /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
                        m_mode_int = INT_M_MODE_Sleeping_TM_conversi;
                      }
                      else {
                        _4_else_clock_IfBlock1 = m_mode ==
                          ENUM_M_MODE_Staff_Responsible_T;
                        /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                          m_mode_int = INT_M_MODE_Staff_Responsible_TM;
                        }
                        else {
                          _3_else_clock_IfBlock1 = m_mode ==
                            ENUM_M_MODE_Stand_By_TM_convers;
                          /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                            m_mode_int = INT_M_MODE_Stand_By_TM_conversi;
                          }
                          else {
                            _2_else_clock_IfBlock1 = m_mode ==
                              ENUM_M_MODE_System_Failure_TM_c;
                            /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                              m_mode_int = INT_M_MODE_System_Failure_TM_co;
                            }
                            else {
                              _1_else_clock_IfBlock1 = m_mode ==
                                ENUM_M_MODE_Trip_TM_conversions;
                              /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                                m_mode_int = INT_M_MODE_Trip_TM_conversions;
                              }
                              else {
                                else_clock_IfBlock1 = m_mode ==
                                  ENUM_M_MODE_Unfitted_TM_convers;
                                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                  m_mode_int = INT_M_MODE_Unfitted_TM_conversi;
                                }
                                else {
                                  m_mode_int = INT_M_MODE_System_Failure_TM_co;
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
      }
    }
  }
  return m_mode_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_MODE_to_int_TM_conversio.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

