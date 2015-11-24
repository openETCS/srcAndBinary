/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */
#ifndef _CheckValidityPacket58_ProvidePositionReport_Pkg_H_
#define _CheckValidityPacket58_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "BG_hasBeenReported_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::CheckValidityPacket58 */
extern void CheckValidityPacket58_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::bgCommonHeader */ BG_Header_T_BG_Types_Pkg *bgCommonHeader,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::updatedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *updatedBGs);

#endif /* _CheckValidityPacket58_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckValidityPacket58_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

