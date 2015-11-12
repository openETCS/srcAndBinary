/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_List_Entry_Request_to_.h"

/* DATA::Variables::CAST_DMI_List_Entry_Request_to_int */
DMI_List_Entry_Request_INT_T_DA CAST_DMI_List_Entry_Request_to_(
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_ct */ DMI_List_Entry_Request_T_DMI_Ty dmi_list_entry_request_ct)
{
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else */
  static kcg_bool _13_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _10_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DA dmi_list_entry_request_int;
  
  IfBlock1_clock = dmi_list_entry_request_ct == _97_ENUM_DMI_List_Entry_Request;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    dmi_list_entry_request_int = INT_DMI_List_Entry_Request_T_En;
  }
  else {
    _13_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
      _96_ENUM_DMI_List_Entry_Request;
    /* ck_anon_activ */ if (_13_else_clock_IfBlock1) {
      dmi_list_entry_request_int = _80_INT_DMI_List_Entry_Request_;
    }
    else {
      _12_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
        _95_ENUM_DMI_List_Entry_Request;
      /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
        dmi_list_entry_request_int = _81_INT_DMI_List_Entry_Request_;
      }
      else {
        _11_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
          _94_ENUM_DMI_List_Entry_Request;
        /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
          dmi_list_entry_request_int = _82_INT_DMI_List_Entry_Request_;
        }
        else {
          _10_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
            ENUM_DMI_List_Entry_Request_T_V;
          /* ck_anon_activ */ if (_10_else_clock_IfBlock1) {
            dmi_list_entry_request_int = INT_DMI_List_Entry_Request_T_Va;
          }
          else {
            _9_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
              _93_ENUM_DMI_List_Entry_Request;
            /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
              dmi_list_entry_request_int = _83_INT_DMI_List_Entry_Request_;
            }
            else {
              _8_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                _92_ENUM_DMI_List_Entry_Request;
              /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
                dmi_list_entry_request_int = INT_DMI_List_Entry_Request_T_Sp;
              }
              else {
                _7_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                  ENUM_DMI_List_Entry_Request_T_E;
                /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
                  dmi_list_entry_request_int = _84_INT_DMI_List_Entry_Request_;
                }
                else {
                  _6_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                    ENUM_DMI_List_Entry_Request_T_D;
                  /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
                    dmi_list_entry_request_int =
                      INT_DMI_List_Entry_Request_T_Di;
                  }
                  else {
                    _5_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                      _91_ENUM_DMI_List_Entry_Request;
                    /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
                      dmi_list_entry_request_int =
                        INT_DMI_List_Entry_Request_T_Sh;
                    }
                    else {
                      _4_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                        _90_ENUM_DMI_List_Entry_Request;
                      /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                        dmi_list_entry_request_int =
                          INT_DMI_List_Entry_Request_T_Hi;
                      }
                      else {
                        _3_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                          ENUM_DMI_List_Entry_Request_T_H;
                        /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                          dmi_list_entry_request_int =
                            _85_INT_DMI_List_Entry_Request_;
                        }
                        else {
                          _2_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                            ENUM_DMI_List_Entry_Request_T_H;
                          /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                            dmi_list_entry_request_int =
                              _86_INT_DMI_List_Entry_Request_;
                          }
                          else {
                            _1_else_clock_IfBlock1 =
                              dmi_list_entry_request_ct ==
                              _89_ENUM_DMI_List_Entry_Request;
                            /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                              dmi_list_entry_request_int =
                                _87_INT_DMI_List_Entry_Request_;
                            }
                            else {
                              else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                                ENUM_DMI_List_Entry_Request_T_S;
                              /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                dmi_list_entry_request_int =
                                  _88_INT_DMI_List_Entry_Request_;
                              }
                              else {
                                dmi_list_entry_request_int =
                                  _88_INT_DMI_List_Entry_Request_;
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
** CAST_DMI_List_Entry_Request_to_.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

