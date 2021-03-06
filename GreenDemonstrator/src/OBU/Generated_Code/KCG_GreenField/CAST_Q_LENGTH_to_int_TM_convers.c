/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_LENGTH_to_int_TM_convers.h"

/* TM_conversions::CAST_Q_LENGTH_to_int */
kcg_int CAST_Q_LENGTH_to_int_TM_convers(
  /* TM_conversions::CAST_Q_LENGTH_to_int::q_length */ Q_LENGTH q_length)
{
  /* TM_conversions::CAST_Q_LENGTH_to_int::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_LENGTH_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_LENGTH_to_int::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_LENGTH_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_LENGTH_to_int::q_length_int */
  static kcg_int q_length_int;
  
  IfBlock1_clock = q_length == ENUM_Q_LENGTH_no_info_available;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_length_int = INT_Q_LENGTH_no_info_available_;
  }
  else {
    _2_else_clock_IfBlock1 = q_length == ENUM_Q_LENGTH_confimed_by_devic;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      q_length_int = INT_Q_LENGTH_confimed_by_device;
    }
    else {
      _1_else_clock_IfBlock1 = q_length == ENUM_Q_LENGTH_confimed_by_drive;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        q_length_int = INT_Q_LENGTH_confimed_by_driver;
      }
      else {
        else_clock_IfBlock1 = q_length == ENUM_Q_LENGTH_integrity_lost_TM;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          q_length_int = INT_Q_LENGTH_integrity_lost_TM_;
        }
        else {
          q_length_int = INT_Q_LENGTH_integrity_lost_TM_;
        }
      }
    }
  }
  return q_length_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_LENGTH_to_int_TM_convers.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

