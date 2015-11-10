/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_EMERGENCYSTOP_TM_.h"

/* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP */
Q_EMERGENCYSTOP CAST_Int_to_Q_EMERGENCYSTOP_TM_(
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop_int */ kcg_int q_emergencystop_int)
{
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop */
  static Q_EMERGENCYSTOP q_emergencystop;
  
  IfBlock1_clock = q_emergencystop_int == _5_INT_Q_EMERGENCYSTOP_cond_acc;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_emergencystop = ENUM_Q_EMERGENCYSTOP_cond_accep;
  }
  else {
    _2_else_clock_IfBlock1 = q_emergencystop_int ==
      INT_Q_EMERGENCYSTOP_cond_accept;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      q_emergencystop = _4_ENUM_Q_EMERGENCYSTOP_cond_ac;
    }
    else {
      _1_else_clock_IfBlock1 = q_emergencystop_int ==
        INT_Q_EMERGENCYSTOP_uncond_acce;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        q_emergencystop = ENUM_Q_EMERGENCYSTOP_uncond_acc;
      }
      else {
        else_clock_IfBlock1 = q_emergencystop_int ==
          INT_Q_EMERGENCYSTOP_rejected_TM;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          q_emergencystop = ENUM_Q_EMERGENCYSTOP_rejected_T;
        }
        else {
          q_emergencystop = ENUM_Q_EMERGENCYSTOP_rejected_T;
        }
      }
    }
  }
  return q_emergencystop;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_EMERGENCYSTOP_TM_.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

