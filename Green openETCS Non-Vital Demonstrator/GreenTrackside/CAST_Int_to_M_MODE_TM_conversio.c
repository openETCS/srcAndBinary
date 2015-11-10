/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_MODE_TM_conversio.h"

/* TM_conversions::CAST_Int_to_M_MODE */
M_MODE CAST_Int_to_M_MODE_TM_conversio(
  /* TM_conversions::CAST_Int_to_M_MODE::m_mode_int */ kcg_int m_mode_int)
{
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else */
  static kcg_bool _14_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else */
  static kcg_bool _10_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else */
  static kcg_bool _13_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_MODE::m_mode */
  static M_MODE m_mode;
  
  IfBlock1_clock = m_mode_int == INT_M_MODE_Full_Supervision_TM_;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_mode = ENUM_M_MODE_Full_Supervision_TM;
  }
  else {
    _14_else_clock_IfBlock1 = m_mode_int == INT_M_MODE_Isolation_TM_convers;
    /* ck_anon_activ */ if (_14_else_clock_IfBlock1) {
      m_mode = ENUM_M_MODE_Isolation_TM_conver;
    }
    else {
      _13_else_clock_IfBlock1 = m_mode_int == INT_M_MODE_Limited_Supervision_;
      /* ck_anon_activ */ if (_13_else_clock_IfBlock1) {
        m_mode = ENUM_M_MODE_Limited_Supervision;
      }
      else {
        _12_else_clock_IfBlock1 = m_mode_int == INT_M_MODE_National_System_TM_c;
        /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
          m_mode = ENUM_M_MODE_National_System_TM_;
        }
        else {
          _11_else_clock_IfBlock1 = m_mode_int ==
            INT_M_MODE_Non_Leading_TM_conve;
          /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
            m_mode = ENUM_M_MODE_Non_Leading_TM_conv;
          }
          else {
            _10_else_clock_IfBlock1 = m_mode_int ==
              INT_M_MODE_On_Sight_TM_conversi;
            /* ck_anon_activ */ if (_10_else_clock_IfBlock1) {
              m_mode = ENUM_M_MODE_On_Sight_TM_convers;
            }
            else {
              _9_else_clock_IfBlock1 = m_mode_int ==
                INT_M_MODE_Passive_Shunting_TM_;
              /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
                m_mode = ENUM_M_MODE_Passive_Shunting_TM;
              }
              else {
                _8_else_clock_IfBlock1 = m_mode_int ==
                  INT_M_MODE_Post_Trip_TM_convers;
                /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
                  m_mode = ENUM_M_MODE_Post_Trip_TM_conver;
                }
                else {
                  _7_else_clock_IfBlock1 = m_mode_int ==
                    INT_M_MODE_Reversing_TM_convers;
                  /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
                    m_mode = ENUM_M_MODE_Reversing_TM_conver;
                  }
                  else {
                    _6_else_clock_IfBlock1 = m_mode_int ==
                      INT_M_MODE_Shunting_TM_conversi;
                    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
                      m_mode = ENUM_M_MODE_Shunting_TM_convers;
                    }
                    else {
                      _5_else_clock_IfBlock1 = m_mode_int ==
                        INT_M_MODE_Sleeping_TM_conversi;
                      /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
                        m_mode = ENUM_M_MODE_Sleeping_TM_convers;
                      }
                      else {
                        _4_else_clock_IfBlock1 = m_mode_int ==
                          INT_M_MODE_Staff_Responsible_TM;
                        /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                          m_mode = ENUM_M_MODE_Staff_Responsible_T;
                        }
                        else {
                          _3_else_clock_IfBlock1 = m_mode_int ==
                            INT_M_MODE_Stand_By_TM_conversi;
                          /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                            m_mode = ENUM_M_MODE_Stand_By_TM_convers;
                          }
                          else {
                            _2_else_clock_IfBlock1 = m_mode_int ==
                              INT_M_MODE_System_Failure_TM_co;
                            /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                              m_mode = ENUM_M_MODE_System_Failure_TM_c;
                            }
                            else {
                              _1_else_clock_IfBlock1 = m_mode_int ==
                                INT_M_MODE_Trip_TM_conversions;
                              /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                                m_mode = ENUM_M_MODE_Trip_TM_conversions;
                              }
                              else {
                                else_clock_IfBlock1 = m_mode_int ==
                                  INT_M_MODE_Unfitted_TM_conversi;
                                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                  m_mode = ENUM_M_MODE_Unfitted_TM_convers;
                                }
                                else {
                                  m_mode = ENUM_M_MODE_System_Failure_TM_c;
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
  return m_mode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_MODE_TM_conversio.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

