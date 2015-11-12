/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINKORIENTATION_T.h"

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION */
Q_LINKORIENTATION CAST_Int_to_Q_LINKORIENTATION_T(
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::q_linkorientation_int */ kcg_int q_linkorientation_int)
{
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::q_linkorientation */
  static Q_LINKORIENTATION q_linkorientation;
  
  IfBlock1_clock = q_linkorientation_int == INT_Q_LINKORIENTATION_nominal_T;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_linkorientation = ENUM_Q_LINKORIENTATION_nominal_;
  }
  else {
    else_clock_IfBlock1 = q_linkorientation_int ==
      INT_Q_LINKORIENTATION_reverse_T;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_linkorientation = ENUM_Q_LINKORIENTATION_reverse_;
    }
    else {
      q_linkorientation = ENUM_Q_LINKORIENTATION_reverse_;
    }
  }
  return q_linkorientation;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LINKORIENTATION_T.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

