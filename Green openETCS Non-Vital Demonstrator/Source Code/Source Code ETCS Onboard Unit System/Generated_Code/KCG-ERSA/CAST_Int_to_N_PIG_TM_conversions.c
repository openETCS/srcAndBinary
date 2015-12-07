/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_N_PIG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_N_PIG */
N_PIG CAST_Int_to_N_PIG_TM_conversions(
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig_int */ kcg_int n_pig_int)
{
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else */ kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else */ kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else */ kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else */ kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig;
  
  IfBlock1_clock = n_pig_int == INT_N_PIG_1st_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    n_pig = ENUM_N_PIG_1st_TM_conversions;
  }
  else {
    _6_else_clock_IfBlock1 = n_pig_int == INT_N_PIG_2nd_TM_conversions;
    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
      n_pig = ENUM_N_PIG_2nd_TM_conversions;
    }
    else {
      _5_else_clock_IfBlock1 = n_pig_int == INT_N_PIG_3rd_TM_conversions;
      /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
        n_pig = ENUM_N_PIG_3rd_TM_conversions;
      }
      else {
        _4_else_clock_IfBlock1 = n_pig_int == INT_N_PIG_4th_TM_conversions;
        /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
          n_pig = ENUM_N_PIG_4th_TM_conversions;
        }
        else {
          _3_else_clock_IfBlock1 = n_pig_int == INT_N_PIG_5th_TM_conversions;
          /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
            n_pig = ENUM_N_PIG_5th_TM_conversions;
          }
          else {
            _2_else_clock_IfBlock1 = n_pig_int == INT_N_PIG_6th_TM_conversions;
            /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
              n_pig = ENUM_N_PIG_6th_TM_conversions;
            }
            else {
              _1_else_clock_IfBlock1 = n_pig_int ==
                INT_N_PIG_7th_TM_conversions;
              /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                n_pig = ENUM_N_PIG_7th_TM_conversions;
              }
              else {
                else_clock_IfBlock1 = n_pig_int == INT_N_PIG_8th_TM_conversions;
                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                  n_pig = ENUM_N_PIG_8th_TM_conversions;
                }
                else {
                  n_pig = ENUM_N_PIG_8th_TM_conversions;
                }
              }
            }
          }
        }
      }
    }
  }
  return n_pig;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_N_PIG_TM_conversions.c
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */

