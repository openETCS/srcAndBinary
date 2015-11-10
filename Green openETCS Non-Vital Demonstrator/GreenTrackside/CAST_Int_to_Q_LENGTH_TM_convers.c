/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LENGTH_TM_convers.h"

/* TM_conversions::CAST_Int_to_Q_LENGTH */
Q_LENGTH CAST_Int_to_Q_LENGTH_TM_convers(
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length_int */ kcg_int q_length_int)
{
  /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length */
  static Q_LENGTH q_length;
  
  IfBlock1_clock = q_length_int == INT_Q_LENGTH_no_info_available_;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_length = ENUM_Q_LENGTH_no_info_available;
  }
  else {
    _2_else_clock_IfBlock1 = q_length_int == INT_Q_LENGTH_confimed_by_device;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      q_length = ENUM_Q_LENGTH_confimed_by_devic;
    }
    else {
      _1_else_clock_IfBlock1 = q_length_int == INT_Q_LENGTH_confimed_by_driver;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        q_length = ENUM_Q_LENGTH_confimed_by_drive;
      }
      else {
        else_clock_IfBlock1 = q_length_int == INT_Q_LENGTH_integrity_lost_TM_;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          q_length = ENUM_Q_LENGTH_integrity_lost_TM;
        }
        else {
          q_length = ENUM_Q_LENGTH_integrity_lost_TM;
        }
      }
    }
  }
  return q_length;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LENGTH_TM_convers.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

