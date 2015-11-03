/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINKREACTION_TM_c.h"

/* TM_conversions::CAST_Int_to_Q_LINKREACTION */
Q_LINKREACTION CAST_Int_to_Q_LINKREACTION_TM_c(
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction_int */ kcg_int q_linkreaction_int)
{
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */
  static Q_LINKREACTION q_linkreaction;
  
  IfBlock1_clock = q_linkreaction_int == INT_Q_LINKREACTION_Train_trip_T;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_linkreaction = ENUM_Q_LINKREACTION_Train_trip_;
  }
  else {
    _1_else_clock_IfBlock1 = q_linkreaction_int ==
      INT_Q_LINKREACTION_Apply_servic;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      q_linkreaction = ENUM_Q_LINKREACTION_Apply_servi;
    }
    else {
      else_clock_IfBlock1 = q_linkreaction_int ==
        INT_Q_LINKREACTION_No_Reaction_;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        q_linkreaction = ENUM_Q_LINKREACTION_No_Reaction;
      }
      else {
        q_linkreaction = ENUM_Q_LINKREACTION_Train_trip_;
      }
    }
  }
  return q_linkreaction;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LINKREACTION_TM_c.c
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

