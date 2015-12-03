/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "frontendToLRBG_CalculateTrainPo.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG */
Q_DLRBG frontendToLRBG_CalculateTrainPo(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::LRBG */ positionedBG_T_TrainPosition_Ty *LRBG,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainPositionInfo */ trainPositionInfo_T_TrainPositi *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainProperties */ trainProperties_T_TrainPosition *trainProperties)
{
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainOrientationToLRBG */
  static Q_DIRLRBG trainOrientationToLRBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L10 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L10;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */
  static Q_DLRBG nominalOrReverseToLRBG;
  
  /* 1 */
  add_2_Distances_BasicLocationFu(
    &(*trainPositionInfo).trainPosition,
    &(*trainProperties).d_baliseAntenna_2_frontend,
    &tmp);
  /* 1 */ sub_2_distances_BasicLocationFu(&tmp, &(*LRBG).location, &_L10);
  /* 1 */ if ((*trainPositionInfo).valid & (*LRBG).valid &
    (*LRBG).infoFromPassing.valid) {
    trainOrientationToLRBG =
      (*LRBG).infoFromPassing.BG_Header.trainOrientationToBG;
  }
  else {
    trainOrientationToLRBG = Q_DIRLRBG_Unknown;
  }
  IfBlock1_clock = trainOrientationToLRBG == Q_DIRLRBG_Nominal;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 2 */ if (_L10.nominal > 0) {
      nominalOrReverseToLRBG = Q_DLRBG_Nominal;
    }
    else {
      nominalOrReverseToLRBG = Q_DLRBG_Reverse;
    }
  }
  else {
    else_clock_IfBlock1 = trainOrientationToLRBG == Q_DIRLRBG_Reverse;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      /* 4 */ if (_L10.nominal > 0) {
        nominalOrReverseToLRBG = Q_DLRBG_Reverse;
      }
      else {
        nominalOrReverseToLRBG = Q_DLRBG_Nominal;
      }
    }
    else {
      nominalOrReverseToLRBG = Q_DLRBG_Unknown;
    }
  }
  return nominalOrReverseToLRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** frontendToLRBG_CalculateTrainPo.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

