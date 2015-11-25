/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_StatusSet_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_StatusSet */
DMI_StatusSet_T_DMI_Types_Pkg CAST_int_to_DMI_StatusSet_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::dmi_statusSet_int */ kcg_int dmi_statusSet_int)
{
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else */ kcg_bool _14_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else */ kcg_bool _12_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else */ kcg_bool _10_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else */ kcg_bool _8_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else */ kcg_bool _6_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _4_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else */ kcg_bool _5_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else */ kcg_bool _7_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else */ kcg_bool _9_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else */ kcg_bool _11_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else */ kcg_bool _13_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::dmi_statusSet_ct */ DMI_StatusSet_T_DMI_Types_Pkg dmi_statusSet_ct;
  
  IfBlock1_clock = dmi_statusSet_int == INT_DMI_StatusSet_T_Running_state;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Running_state;
  }
  else {
    _14_else_clock_IfBlock1 = dmi_statusSet_int ==
      INT_DMI_StatusSet_T_Starting_state;
    /* ck_anon_activ */ if (_14_else_clock_IfBlock1) {
      dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Starting_state;
    }
    else {
      _13_else_clock_IfBlock1 = dmi_statusSet_int ==
        INT_DMI_StatusSet_T_Failure_state;
      /* ck_anon_activ */ if (_13_else_clock_IfBlock1) {
        dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Failure_state;
      }
      else {
        _12_else_clock_IfBlock1 = dmi_statusSet_int ==
          INT_DMI_StatusSet_T_Running_not_active_state;
        /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
          dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Running_not_active_state;
        }
        else {
          _11_else_clock_IfBlock1 = dmi_statusSet_int ==
            INT_DMI_StatusSet_T_Train_Speed_Overflow;
          /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
            dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Train_Speed_Overflow;
          }
          else {
            _10_else_clock_IfBlock1 = dmi_statusSet_int ==
              INT_DMI_StatusSet_T_Invalid_track_condition;
            /* ck_anon_activ */ if (_10_else_clock_IfBlock1) {
              dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Invalid_track_condition;
            }
            else {
              _9_else_clock_IfBlock1 = dmi_statusSet_int ==
                INT_DMI_StatusSet_T_Invalid_predefined_text_message;
              /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
                dmi_statusSet_ct =
                  ENUM_DMI_StatusSet_T_Invalid_predefined_text_message;
              }
              else {
                _8_else_clock_IfBlock1 = dmi_statusSet_int ==
                  INT_DMI_StatusSet_T_Invalid_text_message;
                /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
                  dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Invalid_text_message;
                }
                else {
                  _7_else_clock_IfBlock1 = dmi_statusSet_int ==
                    INT_DMI_StatusSet_T_HW_warning_temp_reached;
                  /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
                    dmi_statusSet_ct =
                      ENUM_DMI_StatusSet_T_HW_warning_temp_reached;
                  }
                  else {
                    _6_else_clock_IfBlock1 = dmi_statusSet_int ==
                      INT_DMI_StatusSet_T_TFT_OFF_temp_reached;
                    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
                      dmi_statusSet_ct =
                        ENUM_DMI_StatusSet_T_TFT_OFF_temp_reached;
                    }
                    else {
                      _5_else_clock_IfBlock1 = dmi_statusSet_int ==
                        INT_DMI_StatusSet_T_Device_OFF_temp_reached;
                      /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
                        dmi_statusSet_ct =
                          ENUM_DMI_StatusSet_T_Device_OFF_temp_reached;
                      }
                      else {
                        _4_else_clock_IfBlock1 = dmi_statusSet_int ==
                          INT_DMI_StatusSet_T_Over_temperature;
                        /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                          dmi_statusSet_ct =
                            ENUM_DMI_StatusSet_T_Over_temperature;
                        }
                        else {
                          _3_else_clock_IfBlock1 = dmi_statusSet_int ==
                            INT_DMI_StatusSet_T_Backlight_on_off;
                          /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                            dmi_statusSet_ct =
                              ENUM_DMI_StatusSet_T_Backlight_on_off;
                          }
                          else {
                            _2_else_clock_IfBlock1 = dmi_statusSet_int ==
                              INT_DMI_StatusSet_T_FAN_blocked;
                            /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                              dmi_statusSet_ct =
                                ENUM_DMI_StatusSet_T_FAN_blocked;
                            }
                            else {
                              _1_else_clock_IfBlock1 = dmi_statusSet_int ==
                                INT_DMI_StatusSet_T_Power_supply_key_switch_off;
                              /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                                dmi_statusSet_ct =
                                  ENUM_DMI_StatusSet_T_Power_supply_key_switch_off;
                              }
                              else {
                                else_clock_IfBlock1 = dmi_statusSet_int ==
                                  INT_DMI_StatusSet_T_Watchdog_not_running;
                                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                  dmi_statusSet_ct =
                                    ENUM_DMI_StatusSet_T_Watchdog_not_running;
                                }
                                else {
                                  dmi_statusSet_ct =
                                    ENUM_DMI_StatusSet_T_Running_state;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return dmi_statusSet_ct;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_StatusSet_DATA_Variables.c
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

