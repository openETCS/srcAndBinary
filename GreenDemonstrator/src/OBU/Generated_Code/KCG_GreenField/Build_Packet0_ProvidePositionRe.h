/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _Build_Packet0_ProvidePositionR
#define _Build_Packet0_ProvidePositionR

#include "kcg_types.h"
#include "op_DOUBTOVER_ProvidePositionRep.h"
#include "CalculateSafeTrainLength_Provid.h"
#include "op_LRBG_ProvidePositionReport_P.h"
#include "op_DOUBTUNDER_ProvidePositionRe.h"
#include "scaleInternalType_ProvidePositi.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::Build_Packet0 */
extern void Build_Packet0_ProvidePositionRe(
  /* ProvidePositionReport_Pkg::Build_Packet0::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::Build_Packet0::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Build_Packet0::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packet0::packet0 */ Position_Report_TrainToTrack *packet0);

#endif /* _Build_Packet0_ProvidePositionR */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet0_ProvidePositionRe.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

