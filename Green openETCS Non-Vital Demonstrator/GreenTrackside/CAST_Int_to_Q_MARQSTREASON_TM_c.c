/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_MARQSTREASON_TM_c.h"

/* TM_conversions::CAST_Int_to_Q_MARQSTREASON */
Q_MARQSTREASON CAST_Int_to_Q_MARQSTREASON_TM_c(
  /* TM_conversions::CAST_Int_to_Q_MARQSTREASON::q_marqstreason_int */ kcg_int q_marqstreason_int)
{
  /* TM_conversions::CAST_Int_to_Q_MARQSTREASON::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_MARQSTREASON::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_MARQSTREASON::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_MARQSTREASON::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_MARQSTREASON::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_MARQSTREASON::q_marqstreason */
  static Q_MARQSTREASON q_marqstreason;
  
  IfBlock1_clock = q_marqstreason_int == INT_Q_MARQSTREASON_driver_TM_co;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_marqstreason = ENUM_Q_MARQSTREASON_driver_TM_c;
  }
  else {
    _3_else_clock_IfBlock1 = q_marqstreason_int ==
      INT_Q_MARQSTREASON_timer_preind;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      q_marqstreason = ENUM_Q_MARQSTREASON_timer_prein;
    }
    else {
      _2_else_clock_IfBlock1 = q_marqstreason_int ==
        INT_Q_MARQSTREASON_section_time;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        q_marqstreason = ENUM_Q_MARQSTREASON_section_tim;
      }
      else {
        _1_else_clock_IfBlock1 = q_marqstreason_int ==
          INT_Q_MARQSTREASON_track_descri;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          q_marqstreason = ENUM_Q_MARQSTREASON_track_descr;
        }
        else {
          else_clock_IfBlock1 = q_marqstreason_int ==
            INT_Q_MARQSTREASON_TAF_TM_conve;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            q_marqstreason = ENUM_Q_MARQSTREASON_TAF_TM_conv;
          }
          else {
            q_marqstreason = ENUM_Q_MARQSTREASON_driver_TM_c;
          }
        }
      }
    }
  }
  return q_marqstreason;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_MARQSTREASON_TM_c.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

