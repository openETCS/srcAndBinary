/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessageConsisten.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader */
kcg_bool RadioTrainTrackMessageConsisten(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::radioTrainTrackHeader */
  static Radio_TrainTrack_Header_T_Radio radioTrainTrackHeader;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  /* 1 */
  RadioTrainTrackMessage__GetHead(
    inRadioTrainTrackMessage,
    &radioTrainTrackHeader);
  radioTrainTrackMessageId = /* 1 */
    _148_RadioTrainTrackHeader__Get(&radioTrainTrackHeader);
  IfBlock1_clock = radioTrainTrackMessageId == 129;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    outIsConsistent = /* 1 */
      Msg129ConsistencyChecker__HasCo(&radioTrainTrackHeader);
  }
  else {
    _7_else_clock_IfBlock1 = radioTrainTrackMessageId == 132;
    /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
      outIsConsistent = /* 1 */
        Msg132ConsistencyChecker__HasCo(&radioTrainTrackHeader);
    }
    else {
      _6_else_clock_IfBlock1 = radioTrainTrackMessageId == 136;
      /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
        outIsConsistent = /* 1 */
          Msg136ConsistencyChecker__HasCo(&radioTrainTrackHeader);
      }
      else {
        _5_else_clock_IfBlock1 = radioTrainTrackMessageId == 146;
        /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
          outIsConsistent = /* 1 */
            Msg146ConsistencyChecker__HasCo(&radioTrainTrackHeader);
        }
        else {
          _4_else_clock_IfBlock1 = radioTrainTrackMessageId == 154;
          /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
            outIsConsistent = /* 1 */
              Msg154ConsistencyChecker__HasCo(&radioTrainTrackHeader);
          }
          else {
            _3_else_clock_IfBlock1 = radioTrainTrackMessageId == 155;
            /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
              outIsConsistent = /* 1 */
                Msg155ConsistencyChecker__HasCo(&radioTrainTrackHeader);
            }
            else {
              _2_else_clock_IfBlock1 = radioTrainTrackMessageId == 159;
              /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                outIsConsistent = /* 1 */
                  Msg159ConsistencyChecker__HasCo(&radioTrainTrackHeader);
              }
              else {
                _1_else_clock_IfBlock1 = radioTrainTrackMessageId == 156;
                /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                  outIsConsistent = /* 1 */
                    Msg156ConsistencyChecker__HasCo(&radioTrainTrackHeader);
                }
                else {
                  else_clock_IfBlock1 = radioTrainTrackMessageId == 147;
                  /* ck_anon_activ */ if (else_clock_IfBlock1) {
                    outIsConsistent = /* 1 */
                      Msg147ConsistencyChecker__HasCo(&radioTrainTrackHeader);
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
** RadioTrainTrackMessageConsisten.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

