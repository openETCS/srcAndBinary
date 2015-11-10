/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_ACK_to_int_TM_conversion.h"

/* TM_conversions::CAST_M_ACK_to_int */
kcg_int CAST_M_ACK_to_int_TM_conversion(
  /* TM_conversions::CAST_M_ACK_to_int::m_ack */ M_ACK m_ack)
{
  /* TM_conversions::CAST_M_ACK_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ACK_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_ACK_to_int::m_ack_int */
  static kcg_int m_ack_int;
  
  IfBlock1_clock = m_ack == ENUM_M_ACK_acknowledgement_TM_c;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_ack_int = INT_M_ACK_acknowledgement_TM_co;
  }
  else {
    else_clock_IfBlock1 = m_ack == ENUM_M_ACK_no_acknowledgement_T;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      m_ack_int = INT_M_ACK_no_acknowledgement_TM;
    }
    else {
      m_ack_int = INT_M_ACK_acknowledgement_TM_co;
    }
  }
  return m_ack_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_ACK_to_int_TM_conversion.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

