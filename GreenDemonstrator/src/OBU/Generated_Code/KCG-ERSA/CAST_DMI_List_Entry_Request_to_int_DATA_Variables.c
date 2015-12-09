/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_List_Entry_Request_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_List_Entry_Request_to_int */
DMI_List_Entry_Request_INT_T_DATA CAST_DMI_List_Entry_Request_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_ct */ DMI_List_Entry_Request_T_DMI_Types_Pkg dmi_list_entry_request_ct)
{
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else */ kcg_bool _13_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else */ kcg_bool _11_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else */ kcg_bool _9_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else */ kcg_bool _7_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */ kcg_bool _5_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */ kcg_bool _4_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else */ kcg_bool _6_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else */ kcg_bool _8_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else */ kcg_bool _10_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else */ kcg_bool _12_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */ DMI_List_Entry_Request_INT_T_DATA dmi_list_entry_request_int;
  
  IfBlock1_clock = dmi_list_entry_request_ct ==
    ENUM_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    dmi_list_entry_request_int =
      INT_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier;
  }
  else {
    _13_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
      ENUM_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number;
    /* ck_anon_activ */ if (_13_else_clock_IfBlock1) {
      dmi_list_entry_request_int =
        INT_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number;
    }
    else {
      _12_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
        ENUM_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level;
      /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
        dmi_list_entry_request_int =
          INT_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level;
      }
      else {
        _11_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
          ENUM_DMI_List_Entry_Request_T_Enter_RBC_contact_menu;
        /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
          dmi_list_entry_request_int =
            INT_DMI_List_Entry_Request_T_Enter_RBC_contact_menu;
        }
        else {
          _10_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
            ENUM_DMI_List_Entry_Request_T_Validate_train_data;
          /* ck_anon_activ */ if (_10_else_clock_IfBlock1) {
            dmi_list_entry_request_int =
              INT_DMI_List_Entry_Request_T_Validate_train_data;
          }
          else {
            _9_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
              ENUM_DMI_List_Entry_Request_T_Enter_NTC_data;
            /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
              dmi_list_entry_request_int =
                INT_DMI_List_Entry_Request_T_Enter_NTC_data;
            }
            else {
              _8_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                ENUM_DMI_List_Entry_Request_T_Spare;
              /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
                dmi_list_entry_request_int = INT_DMI_List_Entry_Request_T_Spare;
              }
              else {
                _7_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                  ENUM_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver;
                /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
                  dmi_list_entry_request_int =
                    INT_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver;
                }
                else {
                  _6_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                    ENUM_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page;
                  /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
                    dmi_list_entry_request_int =
                      INT_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page;
                  }
                  else {
                    _5_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                      ENUM_DMI_List_Entry_Request_T_Show_main_window;
                    /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
                      dmi_list_entry_request_int =
                        INT_DMI_List_Entry_Request_T_Show_main_window;
                    }
                    else {
                      _4_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                        ENUM_DMI_List_Entry_Request_T_Hide_main_window;
                      /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                        dmi_list_entry_request_int =
                          INT_DMI_List_Entry_Request_T_Hide_main_window;
                      }
                      else {
                        _3_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                          ENUM_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window;
                        /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                          dmi_list_entry_request_int =
                            INT_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window;
                        }
                        else {
                          _2_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                            ENUM_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window;
                          /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                            dmi_list_entry_request_int =
                              INT_DMI_List_Entry_Request_T_Hide_staff_responsible_entry_window;
                          }
                          else {
                            _1_else_clock_IfBlock1 =
                              dmi_list_entry_request_ct ==
                              ENUM_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window;
                            /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                              dmi_list_entry_request_int =
                                INT_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window;
                            }
                            else {
                              else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                                ENUM_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window;
                              /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                dmi_list_entry_request_int =
                                  INT_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window;
                              }
                              else {
                                dmi_list_entry_request_int =
                                  INT_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window;
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
  return dmi_list_entry_request_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_List_Entry_Request_to_int_DATA_Variables.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

