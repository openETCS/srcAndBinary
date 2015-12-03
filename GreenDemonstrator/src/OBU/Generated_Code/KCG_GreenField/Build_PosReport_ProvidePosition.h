/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _Build_PosReport_ProvidePositio
#define _Build_PosReport_ProvidePositio

#include "kcg_types.h"
#include "Build_SinglePosReport_ProvidePo.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::Build_PosReport */
extern void Build_PosReport_ProvidePosition(
  /* ProvidePositionReport_Pkg::Build_PosReport::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet0 */ PT0_PositionReport_T_Packet_Tra *in_packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet1 */ PT1_PositionReport_2BG_T_Packet *in_packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::errorVector */ array_102250 *errorVector,
  /* ProvidePositionReport_Pkg::Build_PosReport::t_train */ T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_PosReport::posRepHeader */ _10_Radio_TrainTrack_Header_T_R *posRepHeader,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet0 */ PT0_PositionReport_T_Packet_Tra *packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet4 */ PT4_ErrorReporting_T_Packet_Tra *packet4,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet5 */ PT5_TrainRunningNumber_Packet_T *packet5);

#endif /* _Build_PosReport_ProvidePositio */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_PosReport_ProvidePosition.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

