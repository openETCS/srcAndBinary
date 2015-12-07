/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Icon_control_flag_to_int_D.h"

/* DATA::Variables::CAST_Icon_control_flag_to_int */
Icon_control_flag_INT_T_DATA CAST_Icon_control_flag_to_int_D(
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Input1 */ Icon_control_flag_T_DMI_Types_P Input1)
{
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */
  static Icon_control_flag_INT_T_DATA Output1;
  
  IfBlock1_clock = Input1 == _75_ENUM_Icon_control_flag_T_sh;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    Output1 = _73_INT_Icon_control_flag_T_sho;
  }
  else {
    _2_else_clock_IfBlock1 = Input1 == ENUM_Icon_control_flag_T_clear_;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      Output1 = INT_Icon_control_flag_T_clear_a;
    }
    else {
      _1_else_clock_IfBlock1 = Input1 == _74_ENUM_Icon_control_flag_T_sh;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        Output1 = INT_Icon_control_flag_T_show_ic;
      }
      else {
        else_clock_IfBlock1 = Input1 == ENUM_Icon_control_flag_T_show_i;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          Output1 = _72_INT_Icon_control_flag_T_sho;
        }
        else {
          Output1 = _73_INT_Icon_control_flag_T_sho;
        }
      }
    }
  }
  return Output1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Icon_control_flag_to_int_D.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

