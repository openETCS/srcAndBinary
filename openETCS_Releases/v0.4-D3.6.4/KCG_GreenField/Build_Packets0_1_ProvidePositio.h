/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _Build_Packets0_1_ProvidePositi
#define _Build_Packets0_1_ProvidePositi

#include "kcg_types.h"
#include "DeterminePacketValidity_Provide.h"
#include "Build_Packet0_ProvidePositionRe.h"
#include "Build_Packet1_ProvidePositionRe.h"
#include "Activate_Packet0_ProvidePositio.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PT0_PositionReport_T_Packet_Tra /* ProvidePositionReport_Pkg::Build_Packets0_1::packet0 */ packet0;
  PT1_PositionReport_2BG_T_Packet /* ProvidePositionReport_Pkg::Build_Packets0_1::packet1 */ packet1;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_Packets0_1_ProvidePo;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Build_Packets0_1 */
extern void Build_Packets0_1_ProvidePositio(
  /* ProvidePositionReport_Pkg::Build_Packets0_1::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  outC_Build_Packets0_1_ProvidePo *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_Packets0_1_reset_ProvideP(
  outC_Build_Packets0_1_ProvidePo *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_Packets0_1_init_ProvidePo(
  outC_Build_Packets0_1_ProvidePo *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_Packets0_1_ProvidePositi */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packets0_1_ProvidePositio.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */

