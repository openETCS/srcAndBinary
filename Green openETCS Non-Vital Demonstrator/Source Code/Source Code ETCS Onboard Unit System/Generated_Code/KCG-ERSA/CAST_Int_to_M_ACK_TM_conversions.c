/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_ACK */
M_ACK CAST_Int_to_M_ACK_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack_int */ kcg_int m_ack_int)
{
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack */ M_ACK m_ack;
  
  IfBlock1_clock = m_ack_int == INT_M_ACK_acknowledgement_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = m_ack_int ==
      INT_M_ACK_no_acknowledgement_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
    }
    else {
      m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
    }
  }
  return m_ack;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_ACK_TM_conversions.c
** Generation date: 2015-11-25T14:46:15
*************************************************************$ */

