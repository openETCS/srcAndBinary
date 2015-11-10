/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_DIRTRAIN_TM_conve.h"

/* TM_conversions::CAST_Int_to_Q_DIRTRAIN */
Q_DIRTRAIN CAST_Int_to_Q_DIRTRAIN_TM_conve(
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::q_dirltrain_int */ kcg_int q_dirltrain_int)
{
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::q_dirtrain */
  static Q_DIRTRAIN q_dirtrain;
  
  IfBlock1_clock = q_dirltrain_int == INT_Q_DIRTRAIN_nominal_TM_conve;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_dirtrain = ENUM_Q_DIRTRAIN_nominal_TM_conv;
  }
  else {
    _1_else_clock_IfBlock1 = q_dirltrain_int == INT_Q_DIRTRAIN_reverse_TM_conve;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      q_dirtrain = ENUM_Q_DIRTRAIN_reverse_TM_conv;
    }
    else {
      else_clock_IfBlock1 = q_dirltrain_int == INT_Q_DIRTRAIN_unknown_TM_conve;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        q_dirtrain = ENUM_Q_DIRTRAIN_unknown_TM_conv;
      }
      else {
        q_dirtrain = ENUM_Q_DIRTRAIN_unknown_TM_conv;
      }
    }
  }
  return q_dirtrain;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_DIRTRAIN_TM_conve.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

