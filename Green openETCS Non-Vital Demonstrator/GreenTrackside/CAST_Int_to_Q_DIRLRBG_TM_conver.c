/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_DIRLRBG_TM_conver.h"

/* TM_conversions::CAST_Int_to_Q_DIRLRBG */
Q_DIRLRBG CAST_Int_to_Q_DIRLRBG_TM_conver(
  /* TM_conversions::CAST_Int_to_Q_DIRLRBG::q_dirlrbg_int */ kcg_int q_dirlrbg_int)
{
  /* TM_conversions::CAST_Int_to_Q_DIRLRBG::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIRLRBG::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIRLRBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_DIRLRBG::q_dirlrbg */
  static Q_DIRLRBG q_dirlrbg;
  
  IfBlock1_clock = q_dirlrbg_int == INT_Q_DIRLRBG_nominal_TM_conver;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_dirlrbg = ENUM_Q_DIRLRBG_nominal_TM_conve;
  }
  else {
    _1_else_clock_IfBlock1 = q_dirlrbg_int == INT_Q_DIRLRBG_reverse_TM_conver;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      q_dirlrbg = ENUM_Q_DIRLRBG_reverse_TM_conve;
    }
    else {
      else_clock_IfBlock1 = q_dirlrbg_int == INT_Q_DIRLRBG_unknown_TM_conver;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        q_dirlrbg = ENUM_Q_DIRLRBG_unknown_TM_conve;
      }
      else {
        q_dirlrbg = ENUM_Q_DIRLRBG_unknown_TM_conve;
      }
    }
  }
  return q_dirlrbg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_DIRLRBG_TM_conver.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

