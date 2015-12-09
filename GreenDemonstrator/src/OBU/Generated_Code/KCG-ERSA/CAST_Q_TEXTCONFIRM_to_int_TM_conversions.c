/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_TEXTCONFIRM_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_TEXTCONFIRM_to_int */
kcg_int CAST_Q_TEXTCONFIRM_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm */ Q_TEXTCONFIRM q_textconfirm)
{
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else */ kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_int */ kcg_int q_textconfirm_int;
  
  IfBlock1_clock = q_textconfirm ==
    ENUM_Q_TEXTCONFIRM_confirmation_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_textconfirm_int = INT_Q_TEXTCONFIRM_confirmation_TM_conversions;
  }
  else {
    _2_else_clock_IfBlock1 = q_textconfirm ==
      ENUM_Q_TEXTCONFIRM_confirmation_EB_TM_conversions;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      q_textconfirm_int = INT_Q_TEXTCONFIRM_confirmation_EB_TM_conversions;
    }
    else {
      _1_else_clock_IfBlock1 = q_textconfirm ==
        ENUM_Q_TEXTCONFIRM_confirmation_SB_TM_conversions;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        q_textconfirm_int = INT_Q_TEXTCONFIRM_confirmation_SB_TM_conversions;
      }
      else {
        else_clock_IfBlock1 = q_textconfirm ==
          ENUM_Q_TEXTCONFIRM_no_confirmation_TM_conversions;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          q_textconfirm_int = INT_Q_TEXTCONFIRM_no_confirmation_TM_conversions;
        }
        else {
          q_textconfirm_int = INT_Q_TEXTCONFIRM_confirmation_TM_conversions;
        }
      }
    }
  }
  return q_textconfirm_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_TEXTCONFIRM_to_int_TM_conversions.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

