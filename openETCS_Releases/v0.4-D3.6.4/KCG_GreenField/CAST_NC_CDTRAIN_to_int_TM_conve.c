/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NC_CDTRAIN_to_int_TM_conve.h"

/* TM_conversions::CAST_NC_CDTRAIN_to_int */
kcg_int CAST_NC_CDTRAIN_to_int_TM_conve(
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::nc_cdtrain */ NC_CDTRAIN nc_cdtrain)
{
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::nc_cdtrain_int */
  static kcg_int nc_cdtrain_int;
  
  IfBlock1_clock = nc_cdtrain == ENUM_NC_CDTRAIN_080mm_TM_conver;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    nc_cdtrain_int = INT_NC_CDTRAIN_080mm_TM_convers;
  }
  else {
    _9_else_clock_IfBlock1 = nc_cdtrain == ENUM_NC_CDTRAIN_100mm_TM_conver;
    /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
      nc_cdtrain_int = INT_NC_CDTRAIN_100mm_TM_convers;
    }
    else {
      _8_else_clock_IfBlock1 = nc_cdtrain == ENUM_NC_CDTRAIN_130mm_TM_conver;
      /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
        nc_cdtrain_int = INT_NC_CDTRAIN_130mm_TM_convers;
      }
      else {
        _7_else_clock_IfBlock1 = nc_cdtrain == ENUM_NC_CDTRAIN_150mm_TM_conver;
        /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
          nc_cdtrain_int = INT_NC_CDTRAIN_150mm_TM_convers;
        }
        else {
          _6_else_clock_IfBlock1 = nc_cdtrain ==
            ENUM_NC_CDTRAIN_165mm_TM_conver;
          /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
            nc_cdtrain_int = INT_NC_CDTRAIN_165mm_TM_convers;
          }
          else {
            _5_else_clock_IfBlock1 = nc_cdtrain ==
              ENUM_NC_CDTRAIN_180mm_TM_conver;
            /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
              nc_cdtrain_int = INT_NC_CDTRAIN_180mm_TM_convers;
            }
            else {
              _4_else_clock_IfBlock1 = nc_cdtrain ==
                ENUM_NC_CDTRAIN_210mm_TM_conver;
              /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                nc_cdtrain_int = INT_NC_CDTRAIN_210mm_TM_convers;
              }
              else {
                _3_else_clock_IfBlock1 = nc_cdtrain ==
                  ENUM_NC_CDTRAIN_225mm_TM_conver;
                /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                  nc_cdtrain_int = INT_NC_CDTRAIN_225mm_TM_convers;
                }
                else {
                  _2_else_clock_IfBlock1 = nc_cdtrain ==
                    ENUM_NC_CDTRAIN_245mm_TM_conver;
                  /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                    nc_cdtrain_int = INT_NC_CDTRAIN_245mm_TM_convers;
                  }
                  else {
                    _1_else_clock_IfBlock1 = nc_cdtrain ==
                      ENUM_NC_CDTRAIN_275mm_TM_conver;
                    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                      nc_cdtrain_int = INT_NC_CDTRAIN_275mm_TM_convers;
                    }
                    else {
                      else_clock_IfBlock1 = nc_cdtrain ==
                        ENUM_NC_CDTRAIN_300mm_TM_conver;
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        nc_cdtrain_int = INT_NC_CDTRAIN_300mm_TM_convers;
                      }
                      else {
                        nc_cdtrain_int = INT_NC_CDTRAIN_300mm_TM_convers;
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
  return nc_cdtrain_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NC_CDTRAIN_to_int_TM_conve.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

