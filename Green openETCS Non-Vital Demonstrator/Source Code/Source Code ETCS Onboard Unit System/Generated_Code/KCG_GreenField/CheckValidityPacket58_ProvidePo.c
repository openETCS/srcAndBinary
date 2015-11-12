/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckValidityPacket58_ProvidePo.h"

/* ProvidePositionReport_Pkg::CheckValidityPacket58 */
void CheckValidityPacket58_ProvidePo(
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::bgCommonHeader */ BG_Header_T_BG_Types_Pkg *bgCommonHeader,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::reportedBGs */ ReportedBGList_T_ProvidePositio *reportedBGs,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::updatedBGs */ ReportedBGList_T_ProvidePositio *updatedBGs)
{
  /* 1 */
  BG_hasBeenReported_ProvidePosit(
    reportedBGs,
    (*bgCommonHeader).nid_bg,
    &(*bgCommonHeader).bgPosition.odo,
    found,
    updatedBGs);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckValidityPacket58_ProvidePo.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

