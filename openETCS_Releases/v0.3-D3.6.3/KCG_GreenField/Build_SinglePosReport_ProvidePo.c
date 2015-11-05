/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_SinglePosReport_ProvidePo.h"

/* ProvidePositionReport_Pkg::Build_SinglePosReport */
void Build_SinglePosReport_ProvidePo(
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::errorMsg */ ErrorMessage_T_ProvidePositionR *errorMsg,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::in_packet0 */ PT0_PositionReport_T_Packet_Tra *in_packet0,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::in_packet1 */ PT1_PositionReport_2BG_T_Packet *in_packet1,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::t_train */ T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::posRepHeader */ _9_Radio_TrainTrack_Header_T_Ra *posRepHeader,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet0 */ PT0_PositionReport_T_Packet_Tra *packet0,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet4 */ PT4_ErrorReporting_T_Packet_Tra *packet4,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet5 */ PT5_TrainRunningNumber_Packet_T *packet5)
{
  kcg_copy_PT1_PositionReport_2BG(packet1, in_packet1);
  kcg_copy_PT0_PositionReport_T_P(packet0, in_packet0);
  /* 1 */ Build_Header_ProvidePositionRep(trainProps, t_train, posRepHeader);
  /* ck__L16 */ if ((*errorMsg).present) {
    /* 1 */ Build_Packet4_ProvidePositionRe(errorMsg, packet4);
  }
  else {
    kcg_copy_PT4_ErrorReporting_T_P(
      packet4,
      (PT4_ErrorReporting_T_Packet_Tra *) &emptyPacket4_ProvidePositionRep);
  }
  /* 1 */ Build_Packet5_ProvidePositionRe(trainProps, packet5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_SinglePosReport_ProvidePo.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

