/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _Build_SinglePosReport_ProvideP
#define _Build_SinglePosReport_ProvideP

#include "kcg_types.h"
#include "Build_Header_ProvidePositionRep.h"
#include "Build_Packet4_ProvidePositionRe.h"
#include "Build_Packet5_ProvidePositionRe.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::Build_SinglePosReport */
extern void Build_SinglePosReport_ProvidePo(
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::errorMsg */ ErrorMessage_T_ProvidePositionR *errorMsg,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::in_packet0 */ PT0_PositionReport_T_Packet_Tra *in_packet0,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::in_packet1 */ PT1_PositionReport_2BG_T_Packet *in_packet1,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::t_train */ T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::posRepHeader */ _9_Radio_TrainTrack_Header_T_Ra *posRepHeader,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet0 */ PT0_PositionReport_T_Packet_Tra *packet0,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet4 */ PT4_ErrorReporting_T_Packet_Tra *packet4,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet5 */ PT5_TrainRunningNumber_Packet_T *packet5);

#endif /* _Build_SinglePosReport_ProvideP */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_SinglePosReport_ProvidePo.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

