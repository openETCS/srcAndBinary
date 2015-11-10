/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_87_RadioTrainTrackMessageConsi.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets */
kcg_bool _87_RadioTrainTrackMessageConsi(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets */
  static Radio_TrainTrack_Header_T_Radio tmp;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::radioTrainTrackmessageId */
  static NID_MESSAGE radioTrainTrackmessageId;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::radioTrainTrackPackets */
  static outPackets_T_Common_Types_Pkg radioTrainTrackPackets;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  /* 1 */ RadioTrainTrackMessage__GetHead(inRadioTrainTrackMessage, &tmp);
  radioTrainTrackmessageId = /* 1 */ _148_RadioTrainTrackHeader__Get(&tmp);
  IfBlock1_clock = radioTrainTrackmessageId == 129;
  /* 1 */
  RadioTrainTrackMessage__GetPack(
    inRadioTrainTrackMessage,
    &radioTrainTrackPackets);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    outIsConsistent = /* 1 */
      _78_Msg129ConsistencyChecker__H(&radioTrainTrackPackets);
  }
  else {
    _7_else_clock_IfBlock1 = radioTrainTrackmessageId == 132;
    /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
      outIsConsistent = /* 1 */
        _79_Msg132ConsistencyChecker__H(&radioTrainTrackPackets);
    }
    else {
      _6_else_clock_IfBlock1 = radioTrainTrackmessageId == 136;
      /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
        outIsConsistent = /* 1 */
          _80_Msg136ConsistencyChecker__H(&radioTrainTrackPackets);
      }
      else {
        _5_else_clock_IfBlock1 = radioTrainTrackmessageId == 146;
        /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
          outIsConsistent = /* 1 */
            _81_Msg146ConsistencyChecker__H(&radioTrainTrackPackets);
        }
        else {
          _4_else_clock_IfBlock1 = radioTrainTrackmessageId == 154;
          /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
            outIsConsistent = /* 1 */
              _82_Msg154ConsistencyChecker__H(&radioTrainTrackPackets);
          }
          else {
            _3_else_clock_IfBlock1 = radioTrainTrackmessageId == 155;
            /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
              outIsConsistent = /* 1 */
                _83_Msg155ConsistencyChecker__H(&radioTrainTrackPackets);
            }
            else {
              _2_else_clock_IfBlock1 = radioTrainTrackmessageId == 159;
              /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                outIsConsistent = /* 1 */
                  _84_Msg159ConsistencyChecker__H(&radioTrainTrackPackets);
              }
              else {
                _1_else_clock_IfBlock1 = radioTrainTrackmessageId == 156;
                /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                  outIsConsistent = /* 1 */
                    _85_Msg156ConsistencyChecker__H(&radioTrainTrackPackets);
                }
                else {
                  else_clock_IfBlock1 = radioTrainTrackmessageId == 147;
                  /* ck_anon_activ */ if (else_clock_IfBlock1) {
                    outIsConsistent = /* 1 */
                      _86_Msg147ConsistencyChecker__H(&radioTrainTrackPackets);
                  }
                  else {
                    outIsConsistent = kcg_false;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _87_RadioTrainTrackMessageConsi.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

