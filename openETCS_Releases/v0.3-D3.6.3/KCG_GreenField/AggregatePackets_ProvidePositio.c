/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AggregatePackets_ProvidePositio.h"

/* ProvidePositionReport_Pkg::AggregatePackets */
void AggregatePackets_ProvidePositio(
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket0 */ PT0_PositionReport_T_Packet_Tra *inPacket0,
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket1 */ PT1_PositionReport_2BG_T_Packet *inPacket1,
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket4 */ PT4_ErrorReporting_T_Packet_Tra *inPacket4,
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket5 */ PT5_TrainRunningNumber_Packet_T *inPacket5,
  /* ProvidePositionReport_Pkg::AggregatePackets::outPackets */ outPackets_T_Common_Types_Pkg *outPackets)
{
  kcg_copy_PT0_PositionReport_T_P(&(*outPackets).p0, inPacket0);
  kcg_copy_PT1_PositionReport_2BG(&(*outPackets).p1, inPacket1);
  kcg_copy_PT3_OnboardTelephoneNu(
    &(*outPackets).p3,
    (PT3_OnboardTelephoneNumbers_T_P *) &cInitPT3_ProvidePositionReport_);
  kcg_copy_PT4_ErrorReporting_T_P(&(*outPackets).p4, inPacket4);
  kcg_copy_PT5_TrainRunningNumber(&(*outPackets).p5, inPacket5);
  kcg_copy_PT9_Level23_Transition(
    &(*outPackets).p9,
    (PT9_Level23_TransitionInformati *) &cInitPT9_ProvidePositionReport_);
  kcg_copy_PT11_ValidatedTrainDat(
    &(*outPackets).p11,
    (PT11_ValidatedTrainData_T_Packe *) &cInitPT11_ProvidePositionReport);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AggregatePackets_ProvidePositio.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

