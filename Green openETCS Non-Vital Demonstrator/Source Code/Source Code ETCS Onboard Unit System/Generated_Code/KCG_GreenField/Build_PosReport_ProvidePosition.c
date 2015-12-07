/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_PosReport_ProvidePosition.h"

/* ProvidePositionReport_Pkg::Build_PosReport */
void Build_PosReport_ProvidePosition(
  /* ProvidePositionReport_Pkg::Build_PosReport::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet0 */ PT0_PositionReport_T_Packet_Tra *in_packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet1 */ PT1_PositionReport_2BG_T_Packet *in_packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::errorVector */ array_100337 *errorVector,
  /* ProvidePositionReport_Pkg::Build_PosReport::t_train */ T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_PosReport::posRepHeader */ _10_Radio_TrainTrack_Header_T_R *posRepHeader,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet0 */ PT0_PositionReport_T_Packet_Tra *packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet4 */ PT4_ErrorReporting_T_Packet_Tra *packet4,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet5 */ PT5_TrainRunningNumber_Packet_T *packet5)
{
  /* Build_SinglePosReport */
  Build_SinglePosReport_ProvidePo(
    trainProps,
    &(*errorVector)[0],
    in_packet0,
    in_packet1,
    t_train,
    posRepHeader,
    packet0,
    packet1,
    packet4,
    packet5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_PosReport_ProvidePosition.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

