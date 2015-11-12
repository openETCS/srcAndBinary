/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_StatusSet_DATA_.h"

/* DATA::Variables::CAST_int_to_DMI_StatusSet */
DMI_StatusSet_T_DMI_Types_Pkg CAST_int_to_DMI_StatusSet_DATA_(
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::dmi_statusSet_int */ kcg_int dmi_statusSet_int)
{
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else */
  static kcg_bool _14_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else */
  static kcg_bool _10_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else::else::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1::else::else */
  static kcg_bool _13_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_DMI_StatusSet::dmi_statusSet_ct */
  static DMI_StatusSet_T_DMI_Types_Pkg dmi_statusSet_ct;
  
  IfBlock1_clock = dmi_statusSet_int == INT_DMI_StatusSet_T_Running_sta;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Running_st;
  }
  else {
    _14_else_clock_IfBlock1 = dmi_statusSet_int ==
      INT_DMI_StatusSet_T_Starting_st;
    /* ck_anon_activ */ if (_14_else_clock_IfBlock1) {
      dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Starting_s;
    }
    else {
      _13_else_clock_IfBlock1 = dmi_statusSet_int ==
        INT_DMI_StatusSet_T_Failure_sta;
      /* ck_anon_activ */ if (_13_else_clock_IfBlock1) {
        dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Failure_st;
      }
      else {
        _12_else_clock_IfBlock1 = dmi_statusSet_int ==
          INT_DMI_StatusSet_T_Running_not;
        /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
          dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Running_no;
        }
        else {
          _11_else_clock_IfBlock1 = dmi_statusSet_int ==
            INT_DMI_StatusSet_T_Train_Speed;
          /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
            dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Train_Spee;
          }
          else {
            _10_else_clock_IfBlock1 = dmi_statusSet_int ==
              INT_DMI_StatusSet_T_Invalid_tra;
            /* ck_anon_activ */ if (_10_else_clock_IfBlock1) {
              dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Invalid_tr;
            }
            else {
              _9_else_clock_IfBlock1 = dmi_statusSet_int ==
                INT_DMI_StatusSet_T_Invalid_pre;
              /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
                dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Invalid_pr;
              }
              else {
                _8_else_clock_IfBlock1 = dmi_statusSet_int ==
                  INT_DMI_StatusSet_T_Invalid_tex;
                /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
                  dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Invalid_te;
                }
                else {
                  _7_else_clock_IfBlock1 = dmi_statusSet_int ==
                    INT_DMI_StatusSet_T_HW_warning_;
                  /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
                    dmi_statusSet_ct = ENUM_DMI_StatusSet_T_HW_warning;
                  }
                  else {
                    _6_else_clock_IfBlock1 = dmi_statusSet_int ==
                      INT_DMI_StatusSet_T_TFT_OFF_tem;
                    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
                      dmi_statusSet_ct = ENUM_DMI_StatusSet_T_TFT_OFF_te;
                    }
                    else {
                      _5_else_clock_IfBlock1 = dmi_statusSet_int ==
                        INT_DMI_StatusSet_T_Device_OFF_;
                      /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
                        dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Device_OFF;
                      }
                      else {
                        _4_else_clock_IfBlock1 = dmi_statusSet_int ==
                          INT_DMI_StatusSet_T_Over_temper;
                        /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                          dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Over_tempe;
                        }
                        else {
                          _3_else_clock_IfBlock1 = dmi_statusSet_int ==
                            INT_DMI_StatusSet_T_Backlight_o;
                          /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                            dmi_statusSet_ct = ENUM_DMI_StatusSet_T_Backlight_;
                          }
                          else {
                            _2_else_clock_IfBlock1 = dmi_statusSet_int ==
                              INT_DMI_StatusSet_T_FAN_blocked;
                            /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                              dmi_statusSet_ct =
                                ENUM_DMI_StatusSet_T_FAN_blocke;
                            }
                            else {
                              _1_else_clock_IfBlock1 = dmi_statusSet_int ==
                                INT_DMI_StatusSet_T_Power_suppl;
                              /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                                dmi_statusSet_ct =
                                  ENUM_DMI_StatusSet_T_Power_supp;
                              }
                              else {
                                else_clock_IfBlock1 = dmi_statusSet_int ==
                                  INT_DMI_StatusSet_T_Watchdog_no;
                                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                  dmi_statusSet_ct =
                                    ENUM_DMI_StatusSet_T_Watchdog_n;
                                }
                                else {
                                  dmi_statusSet_ct =
                                    ENUM_DMI_StatusSet_T_Running_st;
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
** CAST_int_to_DMI_StatusSet_DATA_.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

