/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_DRLRBG_TM_convers.h"

/* TM_conversions::CAST_Int_to_Q_DRLRBG */
Q_DLRBG CAST_Int_to_Q_DRLRBG_TM_convers(
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::q_drlrbg_int */ kcg_int q_drlrbg_int)
{
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::q_dlrbg */
  static Q_DLRBG q_dlrbg;
  
  IfBlock1_clock = q_drlrbg_int == INT_Q_DLRBG_nominal_TM_conversi;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_dlrbg = ENUM_Q_DLRBG_nominal_TM_convers;
  }
  else {
    _1_else_clock_IfBlock1 = q_drlrbg_int == INT_Q_DLRBG_reverse_TM_conversi;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      q_dlrbg = ENUM_Q_DLRBG_reverse_TM_convers;
    }
    else {
      else_clock_IfBlock1 = q_drlrbg_int == INT_Q_DLRBG_unknown_TM_conversi;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        q_dlrbg = ENUM_Q_DLRBG_unknown_TM_convers;
      }
      else {
        q_dlrbg = ENUM_Q_DLRBG_unknown_TM_convers;
      }
    }
  }
  return q_dlrbg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_DRLRBG_TM_convers.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

