/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_78_Msg129ConsistencyChecker__H.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets */
kcg_bool _78_Msg129ConsistencyChecker__H(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets */
  static PT0_PositionReport_T_Packet_Tra tmp5;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets */
  static PT1_PositionReport_2BG_T_Packet tmp4;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets */
  static PT3_OnboardTelephoneNumbers_T_P tmp3;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets */
  static PT4_ErrorReporting_T_Packet_Tra tmp2;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets */
  static PT5_TrainRunningNumber_Packet_T tmp1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets */
  static PT9_Level23_TransitionInformati tmp;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  /* 2 */ _149_RadioTrainTrackPackets__Ge(inRadioTrainTrackPackets, &tmp5);
  /* 2 */ _150_RadioTrainTrackPackets__Ge(inRadioTrainTrackPackets, &tmp4);
  /* 2 */ _152_RadioTrainTrackPackets__Ge(inRadioTrainTrackPackets, &tmp3);
  /* 1 */ _146_RadioTrainTrackPackets__Ge(inRadioTrainTrackPackets, &tmp2);
  /* 1 */ _147_RadioTrainTrackPackets__Ge(inRadioTrainTrackPackets, &tmp1);
  /* 1 */ RadioTrainTrackPackets__GetP009(inRadioTrainTrackPackets, &tmp);
  outIsConsistent = (/* 2 */ RadioTrainTrackPacket000__IsVal(&tmp5) ^ /* 2 */
      RadioTrainTrackPacket001__IsVal(&tmp4)) & !/* 2 */
    RadioTrainTrackPacket003__IsVal(&tmp3) & !/* 1 */
    RadioTrainTrackPacket004__IsVal(&tmp2) & !/* 1 */
    RadioTrainTrackPacket005__IsVal(&tmp1) & !/* 1 */
    RadioTrainTrackPacket009__IsVal(&tmp);
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _78_Msg129ConsistencyChecker__H.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

