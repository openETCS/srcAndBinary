/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINK_TM_conversio.h"

/* TM_conversions::CAST_Int_to_Q_LINK */
Q_LINK CAST_Int_to_Q_LINK_TM_conversio(
  /* TM_conversions::CAST_Int_to_Q_LINK::q_link_int */ kcg_int q_link_int)
{
  /* TM_conversions::CAST_Int_to_Q_LINK::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINK::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_LINK::q_link */
  static Q_LINK q_link;
  
  IfBlock1_clock = q_link_int == INT_Q_LINK_linked_TM_conversion;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_link = ENUM_Q_LINK_linked_TM_conversio;
  }
  else {
    else_clock_IfBlock1 = q_link_int == INT_Q_LINK_unlinked_TM_conversi;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_link = ENUM_Q_LINK_unlinked_TM_convers;
    }
    else {
      q_link = ENUM_Q_LINK_linked_TM_conversio;
    }
  }
  return q_link;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LINK_TM_conversio.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

