/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINK_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LINK */
Q_LINK CAST_Int_to_Q_LINK_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LINK::q_link_int */ kcg_int q_link_int)
{
  /* TM_conversions::CAST_Int_to_Q_LINK::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINK::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_LINK::q_link */ Q_LINK q_link;
  
  IfBlock1_clock = q_link_int == INT_Q_LINK_linked_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_link = ENUM_Q_LINK_linked_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_link_int == INT_Q_LINK_unlinked_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_link = ENUM_Q_LINK_unlinked_TM_conversions;
    }
    else {
      q_link = ENUM_Q_LINK_linked_TM_conversions;
    }
  }
  return q_link;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LINK_TM_conversions.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

