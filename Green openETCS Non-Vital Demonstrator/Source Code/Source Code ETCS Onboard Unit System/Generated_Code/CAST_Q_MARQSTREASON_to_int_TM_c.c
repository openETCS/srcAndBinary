/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_MARQSTREASON_to_int_TM_c.h"

/* TM_conversions::CAST_Q_MARQSTREASON_to_int */
kcg_int CAST_Q_MARQSTREASON_to_int_TM_c(
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason */ Q_MARQSTREASON q_marqstreason)
{
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int q_marqstreason_int;
  
  IfBlock1_clock = q_marqstreason == ENUM_Q_MARQSTREASON_driver_TM_c;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_marqstreason_int = INT_Q_MARQSTREASON_driver_TM_co;
  }
  else {
    _3_else_clock_IfBlock1 = q_marqstreason == ENUM_Q_MARQSTREASON_timer_prein;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      q_marqstreason_int = INT_Q_MARQSTREASON_timer_preind;
    }
    else {
      _2_else_clock_IfBlock1 = q_marqstreason ==
        ENUM_Q_MARQSTREASON_section_tim;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        q_marqstreason_int = INT_Q_MARQSTREASON_section_time;
      }
      else {
        _1_else_clock_IfBlock1 = q_marqstreason ==
          ENUM_Q_MARQSTREASON_track_descr;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          q_marqstreason_int = INT_Q_LINKREACTION_Apply_servic;
        }
        else {
          else_clock_IfBlock1 = q_marqstreason ==
            ENUM_Q_MARQSTREASON_TAF_TM_conv;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            q_marqstreason_int = INT_Q_MARQSTREASON_track_descri;
          }
          else {
            q_marqstreason_int = INT_Q_MARQSTREASON_driver_TM_co;
          }
        }
      }
    }
  }
  return q_marqstreason_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_MARQSTREASON_to_int_TM_c.c
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

