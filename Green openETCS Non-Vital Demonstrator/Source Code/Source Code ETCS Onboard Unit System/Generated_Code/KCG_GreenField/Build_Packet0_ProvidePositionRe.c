/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet0_ProvidePositionRe.h"

/* ProvidePositionReport_Pkg::Build_Packet0 */
void Build_Packet0_ProvidePositionRe(
  /* ProvidePositionReport_Pkg::Build_Packet0::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::Build_Packet0::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Build_Packet0::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packet0::packet0 */ Position_Report_TrainToTrack *packet0)
{
  /* ProvidePositionReport_Pkg::Build_Packet0::_L14 */
  static L_TRAININT _L14;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L15 */
  static kcg_int _L15;
  
  (*packet0).NID_PACKET = 0;
  (*packet0).L_PACKET = 0;
  (*packet0).qscale = cQ_SCALE_ProvidePositionReport_;
  (*packet0).NID_LRBG = (*trainPos).LRBG.nid_bg;
  (*packet0).dirlrbg = (*trainPos).trainOrientationToLRBG;
  (*packet0).dlrbg = (*trainPos).nominalOrReverseToLRBG;
  (*packet0).length = (*train2trackStatus).q_length;
  (*packet0).V_TRAIN = (*odometry).speed.v_upper;
  (*packet0).dirtrain = (*trainPos).trainRunningDirectionToLRBG;
  (*packet0).mode = (*modeLevelStatus).currMode;
  (*packet0).level = (*modeLevelStatus).currLevel;
  (*packet0).NID_NTC = (*train2trackStatus).nid_ntc;
  /* 1 */ CalculateSafeTrainLength_Provid(trainProps, trainPos, &_L14, &_L15);
  (*packet0).D_LRBG = /* scaleInternalType */
    scaleInternalType_ProvidePositi(
      cQ_SCALE_ProvidePositionReport_,
      /* 1 */ op_LRBG_ProvidePositionReport_P(posBGs, trainPos));
  (*packet0).L_DOUBTOVER = /* 3 */
    scaleInternalType_ProvidePositi(
      cQ_SCALE_ProvidePositionReport_,
      /* 1 */ op_DOUBTOVER_ProvidePositionRep(trainPos));
  (*packet0).L_DOUBTUNDER = /* 1 */
    scaleInternalType_ProvidePositi(
      cQ_SCALE_ProvidePositionReport_,
      /* 1 */ op_DOUBTUNDER_ProvidePositionRe(trainPos));
  (*packet0).L_TRAININT = /* 2 */
    scaleInternalType_ProvidePositi(cQ_SCALE_ProvidePositionReport_, _L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet0_ProvidePositionRe.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

