/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateT.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG */
NID_LRBG nidC_nidBG_2_NIDLRBG_CalculateT(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::valid */ kcg_bool valid,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::nidC */ NID_C nidC,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::nidBG */ NID_BG nidBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::nidLRBG */
  static NID_LRBG nidLRBG;
  
  /* 1 */ if (valid & (cNID_BG_unknown_BG_Types_Pkg != nidBG)) {
    nidLRBG = nidBG + nidC * cNID_LRBG_14Bits_Multiplicator_;
  }
  else {
    nidLRBG = cNID_LRBG_unknown_BG_Types_Pkg;
  }
  return nidLRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nidC_nidBG_2_NIDLRBG_CalculateT.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

