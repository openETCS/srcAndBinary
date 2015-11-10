/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_OVERLAP_TM_conver.h"

/* TM_conversions::CAST_Int_to_Q_OVERLAP */
Q_OVERLAP CAST_Int_to_Q_OVERLAP_TM_conver(
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::q_overlap_int */ kcg_int q_overlap_int)
{
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::q_overlap */
  static Q_OVERLAP q_overlap;
  
  IfBlock1_clock = q_overlap_int == INT_Q_OVERLAP_overlap_info_TM_c;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_overlap = ENUM_Q_OVERLAP_overlap_info_TM_;
  }
  else {
    else_clock_IfBlock1 = q_overlap_int == INT_Q_OVERLAP_no_overlap_info_T;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_overlap = ENUM_Q_OVERLAP_no_overlap_info_;
    }
    else {
      q_overlap = ENUM_Q_OVERLAP_overlap_info_TM_;
    }
  }
  return q_overlap;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_OVERLAP_TM_conver.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

