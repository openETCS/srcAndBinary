/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_DUP_TM_conversion.h"

/* TM_conversions::CAST_Int_to_M_DUP */
M_DUP CAST_Int_to_M_DUP_TM_conversion(
  /* TM_conversions::CAST_Int_to_M_DUP::int_in */ kcg_int int_in)
{
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */
  static M_DUP m_dup;
  
  IfBlock1_clock = int_in == INT_M_DUP_duplicate_of_next_TM_;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_dup = ENUM_M_DUP_duplicate_of_next_TM;
  }
  else {
    _1_else_clock_IfBlock1 = int_in == INT_M_DUP_duplicate_of_previous;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      m_dup = ENUM_M_DUP_duplicate_of_previou;
    }
    else {
      else_clock_IfBlock1 = int_in == INT_M_DUP_no_duplicates_TM_conv;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        m_dup = ENUM_M_DUP_no_duplicates_TM_con;
      }
      else {
        m_dup = ENUM_M_DUP_duplicate_of_next_TM;
      }
    }
  }
  return m_dup;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_DUP_TM_conversion.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

