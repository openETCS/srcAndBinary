/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_TEXTCONFIRM_to_int_TM_co.h"

/* TM_conversions::CAST_Q_TEXTCONFIRM_to_int */
kcg_int CAST_Q_TEXTCONFIRM_to_int_TM_co(
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm */ Q_TEXTCONFIRM q_textconfirm)
{
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_int */
  static kcg_int q_textconfirm_int;
  
  IfBlock1_clock = q_textconfirm == _20_ENUM_Q_TEXTCONFIRM_confirma;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_textconfirm_int = _18_INT_Q_TEXTCONFIRM_confirmat;
  }
  else {
    _2_else_clock_IfBlock1 = q_textconfirm == _19_ENUM_Q_TEXTCONFIRM_confirma;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      q_textconfirm_int = INT_Q_TEXTCONFIRM_confirmation_;
    }
    else {
      _1_else_clock_IfBlock1 = q_textconfirm == ENUM_Q_TEXTCONFIRM_confirmation;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        q_textconfirm_int = _17_INT_Q_TEXTCONFIRM_confirmat;
      }
      else {
        else_clock_IfBlock1 = q_textconfirm == ENUM_Q_TEXTCONFIRM_no_confirmat;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          q_textconfirm_int = INT_Q_TEXTCONFIRM_no_confirmati;
        }
        else {
          q_textconfirm_int = _18_INT_Q_TEXTCONFIRM_confirmat;
        }
      }
    }
  }
  return q_textconfirm_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_TEXTCONFIRM_to_int_TM_co.c
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

