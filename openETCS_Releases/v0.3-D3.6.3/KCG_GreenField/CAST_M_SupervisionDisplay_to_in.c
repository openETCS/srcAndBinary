/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_SupervisionDisplay_to_in.h"

/* DATA::Variables::CAST_M_SupervisionDisplay_to_int */
M_SupervisionDisplay_INT_T_DATA CAST_M_SupervisionDisplay_to_in(
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::m_supervisiondisplay_ct */ M_SupervisionDisplay_T_DMI_Type m_supervisiondisplay_ct)
{
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::m_supervisiondisplay_int */
  static M_SupervisionDisplay_INT_T_DATA m_supervisiondisplay_int;
  
  IfBlock1_clock = m_supervisiondisplay_ct == _110_ENUM_M_SupervisionDisplay_;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_supervisiondisplay_int = _106_INT_M_SupervisionDisplay_T;
  }
  else {
    _3_else_clock_IfBlock1 = m_supervisiondisplay_ct ==
      _109_ENUM_M_SupervisionDisplay_;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      m_supervisiondisplay_int = INT_M_SupervisionDisplay_T_supD;
    }
    else {
      _2_else_clock_IfBlock1 = m_supervisiondisplay_ct ==
        _108_ENUM_M_SupervisionDisplay_;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        m_supervisiondisplay_int = _103_INT_M_SupervisionDisplay_T;
      }
      else {
        _1_else_clock_IfBlock1 = m_supervisiondisplay_ct ==
          _107_ENUM_M_SupervisionDisplay_;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          m_supervisiondisplay_int = _104_INT_M_SupervisionDisplay_T;
        }
        else {
          else_clock_IfBlock1 = m_supervisiondisplay_ct ==
            ENUM_M_SupervisionDisplay_T_sup;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            m_supervisiondisplay_int = _105_INT_M_SupervisionDisplay_T;
          }
          else {
            m_supervisiondisplay_int = _106_INT_M_SupervisionDisplay_T;
          }
        }
      }
    }
  }
  return m_supervisiondisplay_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_SupervisionDisplay_to_in.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

