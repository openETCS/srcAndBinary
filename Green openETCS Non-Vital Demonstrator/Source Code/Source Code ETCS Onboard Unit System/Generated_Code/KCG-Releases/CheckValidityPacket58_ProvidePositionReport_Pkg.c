/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckValidityPacket58_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::CheckValidityPacket58 */
void CheckValidityPacket58_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::bgCommonHeader */ BG_Header_T_BG_Types_Pkg *bgCommonHeader,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::updatedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *updatedBGs)
{
  /* 1 */
  BG_hasBeenReported_ProvidePositionReport_Pkg(
    reportedBGs,
    (*bgCommonHeader).nid_bg,
    &(*bgCommonHeader).bgPosition.odo,
    found,
    updatedBGs);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckValidityPacket58_ProvidePositionReport_Pkg.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

