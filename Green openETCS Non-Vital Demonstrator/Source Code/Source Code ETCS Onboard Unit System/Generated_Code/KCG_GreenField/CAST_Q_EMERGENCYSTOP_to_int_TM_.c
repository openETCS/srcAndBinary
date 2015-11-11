/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_EMERGENCYSTOP_to_int_TM_.h"

/* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int */
kcg_int CAST_Q_EMERGENCYSTOP_to_int_TM_(
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::q_emergencystop */ Q_EMERGENCYSTOP q_emergencystop)
{
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::q_emergencystop_int */
  static kcg_int q_emergencystop_int;
  
  IfBlock1_clock = q_emergencystop == _13_ENUM_Q_EMERGENCYSTOP_cond_a;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_emergencystop_int = INT_Q_EMERGENCYSTOP_cond_accept;
  }
  else {
    _2_else_clock_IfBlock1 = q_emergencystop == ENUM_Q_EMERGENCYSTOP_cond_accep;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      q_emergencystop_int = _12_INT_Q_EMERGENCYSTOP_cond_ac;
    }
    else {
      _1_else_clock_IfBlock1 = q_emergencystop ==
        ENUM_Q_EMERGENCYSTOP_uncond_acc;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        q_emergencystop_int = INT_Q_EMERGENCYSTOP_uncond_acce;
      }
      else {
        else_clock_IfBlock1 = q_emergencystop ==
          ENUM_Q_EMERGENCYSTOP_rejected_T;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          q_emergencystop_int = INT_Q_EMERGENCYSTOP_rejected_TM;
        }
        else {
          q_emergencystop_int = INT_Q_EMERGENCYSTOP_rejected_TM;
        }
      }
    }
  }
  return q_emergencystop_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_EMERGENCYSTOP_to_int_TM_.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

