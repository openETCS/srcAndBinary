/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateT.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG */
void NIDLRBG_2_nidC_nidBG_CalculateT(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::valid */ kcg_bool valid,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidLRBG */ NID_LRBG nidLRBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidC */ NID_C *nidC,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidBG */ NID_BG *nidBG)
{
  *nidC = nidLRBG / cNID_LRBG_14Bits_Multiplicator_;
  /* 1 */ if (valid & (cNID_LRBG_unknown_BG_Types_Pkg != nidLRBG)) {
    *nidBG = nidLRBG - *nidC * cNID_LRBG_14Bits_Multiplicator_;
  }
  else {
    *nidBG = cNID_BG_unknown_BG_Types_Pkg;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NIDLRBG_2_nidC_nidBG_CalculateT.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

