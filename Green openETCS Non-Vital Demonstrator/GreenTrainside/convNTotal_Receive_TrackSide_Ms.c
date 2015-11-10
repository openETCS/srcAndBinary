/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "convNTotal_Receive_TrackSide_Ms.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal */
kcg_int convNTotal_Receive_TrackSide_Ms(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::inNTotal */ N_TOTAL inNTotal)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */
  static kcg_int outTotal;
  
  IfBlock1_clock = inNTotal == N_TOTAL_1_balise_in_the_group;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    outTotal = 1;
  }
  else {
    _6_else_clock_IfBlock1 = inNTotal == N_TOTAL_2_balises_in_the_group;
    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
      outTotal = 2;
    }
    else {
      _5_else_clock_IfBlock1 = inNTotal == N_TOTAL_3_balises_in_the_group;
      /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
        outTotal = 3;
      }
      else {
        _4_else_clock_IfBlock1 = inNTotal == N_TOTAL_4_balises_in_the_group;
        /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
          outTotal = 4;
        }
        else {
          _3_else_clock_IfBlock1 = inNTotal == N_TOTAL_5_balises_in_the_group;
          /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
            outTotal = 5;
          }
          else {
            _2_else_clock_IfBlock1 = inNTotal == N_TOTAL_6_balises_in_the_group;
            /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
              outTotal = 6;
            }
            else {
              _1_else_clock_IfBlock1 = inNTotal ==
                N_TOTAL_7_balises_in_the_group;
              /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                outTotal = 7;
              }
              else {
                else_clock_IfBlock1 = inNTotal ==
                  N_TOTAL_8_balises_in_the_group;
                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                  outTotal = 8;
                }
                else {
                  outTotal = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return outTotal;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** convNTotal_Receive_TrackSide_Ms.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

