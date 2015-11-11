/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet1_ProvidePositionRe.h"

/* ProvidePositionReport_Pkg::Build_Packet1 */
void Build_Packet1_ProvidePositionRe(
  /* ProvidePositionReport_Pkg::Build_Packet1::packet0 */ Position_Report_TrainToTrack *packet0,
  /* ProvidePositionReport_Pkg::Build_Packet1::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::Build_Packet1::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packet1::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1)
{
  /* ProvidePositionReport_Pkg::Build_Packet1 */
  static Q_DLRBG tmp1;
  /* ProvidePositionReport_Pkg::Build_Packet1 */
  static Q_DIRTRAIN tmp;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* ProvidePositionReport_Pkg::Build_Packet1::cond_3_4_2_3_3_4 */
  static kcg_bool cond_3_4_2_3_3_4;
  /* ProvidePositionReport_Pkg::Build_Packet1::cond_3_4_2_3_3_3 */
  static kcg_bool cond_3_4_2_3_3_3;
  /* ProvidePositionReport_Pkg::Build_Packet1::cond_3_4_2_3_3_2 */
  static kcg_bool cond_3_4_2_3_3_2;
  
  (*packet1).valid = kcg_true;
  (*packet1).packet1.NID_PACKET = (*packet0).NID_PACKET;
  (*packet1).packet1.L_PACKET = (*packet0).L_PACKET;
  (*packet1).packet1.qscale = (*packet0).qscale;
  (*packet1).packet1.NID_LRBG = (*packet0).NID_LRBG;
  (*packet1).packet1.D_LRBG = (*packet0).D_LRBG;
  (*packet1).packet1.L_DOUBTOVER = (*packet0).L_DOUBTOVER;
  (*packet1).packet1.L_DOUBTUNDER = (*packet0).L_DOUBTUNDER;
  (*packet1).packet1.length = (*packet0).length;
  (*packet1).packet1.L_TRAININT = (*packet0).L_TRAININT;
  (*packet1).packet1.V_TRAIN = (*packet0).V_TRAIN;
  (*packet1).packet1.mode = (*packet0).mode;
  (*packet1).packet1.level = (*packet0).level;
  (*packet1).packet1.NID_NTC = (*packet0).NID_NTC;
  /* 1 */
  op_cond_3_4_2_3_3_ProvidePositi(
    packet0,
    trainPos,
    prvDirTrain,
    &(*packet1).packet1.NID_PRVLRBG,
    &cond_3_4_2_3_3_2,
    &cond_3_4_2_3_3_3,
    &cond_3_4_2_3_3_4);
  IfBlock1_clock = cond_3_4_2_3_3_2 & ((*trainPos).trainOrientationToLRBG ==
      Q_DIRLRBG_Reverse);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    (*packet1).packet1.dirlrbg = Q_DIRLRBG_Reverse;
    tmp1 = Q_DLRBG_Reverse;
    tmp = Q_DIRTRAIN_Reverse;
  }
  else {
    _2_else_clock_IfBlock1 = cond_3_4_2_3_3_2 &
      ((*trainPos).trainOrientationToLRBG == Q_DIRLRBG_Nominal);
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      (*packet1).packet1.dirlrbg = Q_DIRLRBG_Nominal;
      tmp1 = Q_DLRBG_Nominal;
      tmp = Q_DIRTRAIN_Nominal;
    }
    else {
      else_clock_IfBlock1 = (cond_3_4_2_3_3_2 &
          ((*trainPos).trainOrientationToLRBG == Q_DIRLRBG_Unknown)) |
        cond_3_4_2_3_3_3 | cond_3_4_2_3_3_4;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        (*packet1).packet1.dirlrbg = Q_DIRLRBG_Unknown;
        tmp1 = Q_DLRBG_Unknown;
        tmp = Q_DIRTRAIN_Unknown;
      }
      else {
        (*packet1).packet1.dirlrbg = Q_DIRLRBG_Unknown;
        tmp1 = Q_DLRBG_Unknown;
        tmp = Q_DIRTRAIN_Unknown;
      }
    }
  }
  (*packet1).packet1.dlrbg = tmp1;
  (*packet1).packet1.dirtrain = tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet1_ProvidePositionRe.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

