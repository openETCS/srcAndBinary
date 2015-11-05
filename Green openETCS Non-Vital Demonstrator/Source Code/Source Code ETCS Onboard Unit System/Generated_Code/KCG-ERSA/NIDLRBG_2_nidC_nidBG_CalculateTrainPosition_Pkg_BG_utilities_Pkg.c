/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG */
void NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::valid */ kcg_bool valid,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidLRBG */ NID_LRBG nidLRBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidC */ NID_C *nidC,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidBG */ NID_BG *nidBG)
{
  *nidC = nidLRBG / cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg;
  /* 1 */ if (valid & (cNID_LRBG_unknown_BG_Types_Pkg != nidLRBG)) {
    *nidBG = nidLRBG - *nidC * cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg;
  }
  else {
    *nidBG = cNID_BG_unknown_BG_Types_Pkg;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

