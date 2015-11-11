/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader */
kcg_bool RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else */ kcg_bool _7_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else */ kcg_bool _5_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else */ kcg_bool _3_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else */ kcg_bool _4_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else */ kcg_bool _6_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::radioTrainTrackMessageId */ NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::radioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg radioTrainTrackHeader;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */ kcg_bool outIsConsistent;
  
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackMessage,
    &radioTrainTrackHeader);
  radioTrainTrackMessageId = /* 1 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &radioTrainTrackHeader);
  IfBlock1_clock = radioTrainTrackMessageId == 129;
  if (IfBlock1_clock) {
    outIsConsistent = /* 1 */
      Msg129ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
        &radioTrainTrackHeader);
  }
  else {
    _7_else_clock_IfBlock1 = radioTrainTrackMessageId == 132;
    if (_7_else_clock_IfBlock1) {
      outIsConsistent = /* 1 */
        Msg132ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
          &radioTrainTrackHeader);
    }
    else {
      _6_else_clock_IfBlock1 = radioTrainTrackMessageId == 136;
      if (_6_else_clock_IfBlock1) {
        outIsConsistent = /* 1 */
          Msg136ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
            &radioTrainTrackHeader);
      }
      else {
        _5_else_clock_IfBlock1 = radioTrainTrackMessageId == 146;
        if (_5_else_clock_IfBlock1) {
          outIsConsistent = /* 1 */
            Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
              &radioTrainTrackHeader);
        }
        else {
          _4_else_clock_IfBlock1 = radioTrainTrackMessageId == 154;
          if (_4_else_clock_IfBlock1) {
            outIsConsistent = /* 1 */
              Msg154ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                &radioTrainTrackHeader);
          }
          else {
            _3_else_clock_IfBlock1 = radioTrainTrackMessageId == 155;
            if (_3_else_clock_IfBlock1) {
              outIsConsistent = /* 1 */
                Msg155ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                  &radioTrainTrackHeader);
            }
            else {
              _2_else_clock_IfBlock1 = radioTrainTrackMessageId == 159;
              if (_2_else_clock_IfBlock1) {
                outIsConsistent = /* 1 */
                  Msg159ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                    &radioTrainTrackHeader);
              }
              else {
                _1_else_clock_IfBlock1 = radioTrainTrackMessageId == 156;
                if (_1_else_clock_IfBlock1) {
                  outIsConsistent = /* 1 */
                    Msg156ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                      &radioTrainTrackHeader);
                }
                else {
                  else_clock_IfBlock1 = radioTrainTrackMessageId == 147;
                  if (else_clock_IfBlock1) {
                    outIsConsistent = /* 1 */
                      Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                        &radioTrainTrackHeader);
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

