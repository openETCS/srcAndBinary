/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packets0_1_ProvidePositio.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_Packets0_1_init_ProvidePo(outC_Build_Packets0_1_ProvidePo *outC)
{
  outC->init = kcg_true;
  outC->packet1.valid = kcg_true;
  outC->packet1.packet1.NID_PACKET = 0;
  outC->packet1.packet1.L_PACKET = 0;
  outC->packet1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->packet1.packet1.NID_LRBG = 0;
  outC->packet1.packet1.NID_PRVLRBG = 0;
  outC->packet1.packet1.D_LRBG = 0;
  outC->packet1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->packet1.packet1.L_DOUBTOVER = 0;
  outC->packet1.packet1.L_DOUBTUNDER = 0;
  outC->packet1.packet1.length = Q_LENGTH_No_train_integrity_inf;
  outC->packet1.packet1.L_TRAININT = 0;
  outC->packet1.packet1.V_TRAIN = 0;
  outC->packet1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet1.packet1.mode = M_MODE_Full_Supervision;
  outC->packet1.packet1.level = M_LEVEL_Level_0;
  outC->packet1.packet1.NID_NTC = 0;
  outC->packet0.valid = kcg_true;
  outC->packet0.packet0.NID_PACKET = 0;
  outC->packet0.packet0.L_PACKET = 0;
  outC->packet0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->packet0.packet0.NID_LRBG = 0;
  outC->packet0.packet0.D_LRBG = 0;
  outC->packet0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->packet0.packet0.L_DOUBTOVER = 0;
  outC->packet0.packet0.L_DOUBTUNDER = 0;
  outC->packet0.packet0.length = Q_LENGTH_No_train_integrity_inf;
  outC->packet0.packet0.L_TRAININT = 0;
  outC->packet0.packet0.V_TRAIN = 0;
  outC->packet0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet0.packet0.mode = M_MODE_Full_Supervision;
  outC->packet0.packet0.level = M_LEVEL_Level_0;
  outC->packet0.packet0.NID_NTC = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_Packets0_1_reset_ProvideP(outC_Build_Packets0_1_ProvidePo *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Build_Packets0_1 */
void Build_Packets0_1_ProvidePositio(
  /* ProvidePositionReport_Pkg::Build_Packets0_1::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  outC_Build_Packets0_1_ProvidePo *outC)
{
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L19 */
  static kcg_bool _L19;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L20 */
  static Position_Report_TrainToTrack _L20;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L23 */
  static kcg_bool _L23;
  
  /* 2 */ DeterminePacketValidity_Provide(&(*trainPos).LRBG, &_L19, &_L23);
  /* 2 */
  Build_Packet0_ProvidePositionRe(
    posBGs,
    modeLevelStatus,
    odometry,
    train2trackStatus,
    trainProps,
    trainPos,
    &_L20);
  /* ck__L23 */ if (_L23) {
    /* 2 */
    Build_Packet1_ProvidePositionRe(
      &_L20,
      prvDirTrain,
      trainPos,
      &outC->packet1);
  }
  else if (outC->init) {
    kcg_copy_PT1_PositionReport_2BG(
      &outC->packet1,
      (PT1_PositionReport_2BG_T_Packet *) &emptyPacket1_ProvidePositionRep);
  }
  /* ck__L19 */ if (_L19) {
    /* 3 */ Activate_Packet0_ProvidePositio(&_L20, &outC->packet0);
  }
  else if (outC->init) {
    kcg_copy_PT0_PositionReport_T_P(
      &outC->packet0,
      (PT0_PositionReport_T_Packet_Tra *) &emptyPacket0_ProvidePositionRep);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packets0_1_ProvidePositio.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

