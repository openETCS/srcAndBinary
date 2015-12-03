/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_ERROR_to_int_TM_conversions.h"

void CAST_M_ERROR_to_int_reset_TM_conversions(
  outC_CAST_M_ERROR_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_M_ERROR_to_int */
void CAST_M_ERROR_to_int_TM_conversions(
  /* TM_conversions::CAST_M_ERROR_to_int::m_error */M_ERROR m_error,
  outC_CAST_M_ERROR_to_int_TM_conversions *outC)
{
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _2_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error1;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error10;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _9_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error8;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _7_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error18;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _17_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error16;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _15_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error26;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _25_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error24;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _23_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error34;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _33_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error32;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _31_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _27_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error28;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _29_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error30;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _19_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error20;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _21_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error22;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _11_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error12;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _13_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error14;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _3_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error4;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */ kcg_int _5_m_error_int;
  /* TM_conversions::CAST_M_ERROR_to_int::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L4 = m_error;
  outC->m_error_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_error_in ==
    ENUM_M_ERROR_balise_group_linking_conistency_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L8_IfBlock1 =
      INT_M_ERROR_balise_group_linking_conistency_TM_conversions;
    outC->_L7_IfBlock1 = kcg_false;
    error1 = outC->_L7_IfBlock1;
    _2_m_error_int = outC->_L8_IfBlock1;
    outC->m_error_int = _2_m_error_int;
    outC->error = error1;
  }
  else {
    outC->_7_else_clock_IfBlock1 = outC->m_error_in ==
      ENUM_M_ERROR_Double_linking_error_TM_conversions;
    if (outC->_7_else_clock_IfBlock1) {
      outC->_L78_IfBlock1 = INT_M_ERROR_Double_linking_error_TM_conversions;
      outC->_L6_IfBlock1 = kcg_false;
      error6 = outC->_L6_IfBlock1;
      _5_m_error_int = outC->_L78_IfBlock1;
      error = error6;
      m_error_int = _5_m_error_int;
    }
    else {
      outC->_6_else_clock_IfBlock1 = outC->m_error_in ==
        ENUM_M_ERROR_Double_repositioning_error_TM_conversions;
      if (outC->_6_else_clock_IfBlock1) {
        outC->_L2_IfBlock1 = kcg_false;
        error10 = outC->_L2_IfBlock1;
        outC->_L1_IfBlock1 =
          INT_M_ERROR_Double_repositioning_error_TM_conversions;
        _9_m_error_int = outC->_L1_IfBlock1;
        error4 = error10;
        _3_m_error_int = _9_m_error_int;
      }
      else {
        outC->_5_else_clock_IfBlock1 = outC->m_error_in ==
          ENUM_M_ERROR_Linked_balise_group_message_consistency_erro_TM_conversions;
        if (outC->_5_else_clock_IfBlock1) {
          outC->_L19_IfBlock1 = kcg_false;
          error14 = outC->_L19_IfBlock1;
          outC->_L210_IfBlock1 =
            INT_M_ERROR_Linked_balise_group_message_consistency_error_TM_conversions;
          _13_m_error_int = outC->_L210_IfBlock1;
          error8 = error14;
          _7_m_error_int = _13_m_error_int;
        }
        else {
          outC->_4_else_clock_IfBlock1 = outC->m_error_in ==
            ENUM_M_ERROR_Radio_message_consistency_error_TM_conversions;
          if (outC->_4_else_clock_IfBlock1) {
            outC->_L212_IfBlock1 = kcg_false;
            outC->_L111_IfBlock1 =
              INT_M_ERROR_Radio_message_consistency_error_TM_conversions;
            _17_m_error_int = outC->_L111_IfBlock1;
            error18 = outC->_L212_IfBlock1;
            error12 = error18;
            _11_m_error_int = _17_m_error_int;
          }
          else {
            outC->_3_else_clock_IfBlock1 = outC->m_error_in ==
              ENUM_M_ERROR_Radio_safe_radio_connection_error_TM_conversions;
            if (outC->_3_else_clock_IfBlock1) {
              outC->_L213_IfBlock1 =
                INT_M_ERROR_Radio_safe_radio_connection_error_TM_conversions;
              _21_m_error_int = outC->_L213_IfBlock1;
              outC->_L114_IfBlock1 = kcg_false;
              error22 = outC->_L114_IfBlock1;
              error16 = error22;
              _15_m_error_int = _21_m_error_int;
            }
            else {
              outC->_2_else_clock_IfBlock1 = outC->m_error_in ==
                ENUM_M_ERROR_Radio_sequence_error_TM_conversions;
              if (outC->_2_else_clock_IfBlock1) {
                outC->_L115_IfBlock1 =
                  INT_M_ERROR_Radio_sequence_error_TM_conversions;
                _25_m_error_int = outC->_L115_IfBlock1;
                outC->_L216_IfBlock1 = kcg_false;
                error26 = outC->_L216_IfBlock1;
                error20 = error26;
                _19_m_error_int = _25_m_error_int;
              }
              else {
                outC->_1_else_clock_IfBlock1 = outC->m_error_in ==
                  ENUM_M_ERROR_Safety_critical_failure_TM_conversions;
                if (outC->_1_else_clock_IfBlock1) {
                  outC->_L218_IfBlock1 = kcg_false;
                  outC->_L117_IfBlock1 =
                    INT_M_ERROR_Safety_critical_failure_TM_conversions;
                  _29_m_error_int = outC->_L117_IfBlock1;
                  error30 = outC->_L218_IfBlock1;
                  error24 = error30;
                  _23_m_error_int = _29_m_error_int;
                }
                else {
                  outC->else_clock_IfBlock1 = outC->m_error_in ==
                    ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions;
                  if (outC->else_clock_IfBlock1) {
                    outC->_L220_IfBlock1 = kcg_false;
                    error34 = outC->_L220_IfBlock1;
                    outC->_L119_IfBlock1 =
                      INT_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions;
                    _33_m_error_int = outC->_L119_IfBlock1;
                    error28 = error34;
                    _27_m_error_int = _33_m_error_int;
                  }
                  else {
                    outC->_L222_IfBlock1 = kcg_true;
                    outC->_L121_IfBlock1 =
                      INT_M_ERROR_Safety_critical_failure_TM_conversions;
                    error32 = outC->_L222_IfBlock1;
                    _31_m_error_int = outC->_L121_IfBlock1;
                    error28 = error32;
                    _27_m_error_int = _31_m_error_int;
                  }
                  error24 = error28;
                  _23_m_error_int = _27_m_error_int;
                }
                error20 = error24;
                _19_m_error_int = _23_m_error_int;
              }
              error16 = error20;
              _15_m_error_int = _19_m_error_int;
            }
            error12 = error16;
            _11_m_error_int = _15_m_error_int;
          }
          error8 = error12;
          _7_m_error_int = _11_m_error_int;
        }
        error4 = error8;
        _3_m_error_int = _7_m_error_int;
      }
      error = error4;
      m_error_int = _3_m_error_int;
    }
    outC->m_error_int = m_error_int;
    outC->error = error;
  }
  outC->_L7 = outC->error;
  noname = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_M_ERROR_to_int_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

