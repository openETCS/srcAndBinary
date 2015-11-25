/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_GDIR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_GDIR */
Q_GDIR CAST_Int_to_Q_GDIR_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_GDIR::q_gdir_int */ kcg_int q_gdir_int)
{
  /* TM_conversions::CAST_Int_to_Q_GDIR::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_GDIR::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_GDIR::q_gdir */ Q_GDIR q_gdir;
  
  IfBlock1_clock = q_gdir_int == INT_Q_GDIR_downhill_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_gdir = ENUM_Q_GDIR_downhill_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_gdir_int == INT_Q_GDIR_uphill_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_gdir = ENUM_Q_GDIR_uphill_TM_conversions;
    }
    else {
      q_gdir = ENUM_Q_GDIR_downhill_TM_conversions;
    }
  }
  return q_gdir;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_GDIR_TM_conversions.c
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

