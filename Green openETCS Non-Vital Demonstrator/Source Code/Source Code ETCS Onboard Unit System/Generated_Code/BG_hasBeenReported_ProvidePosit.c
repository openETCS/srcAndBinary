/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BG_hasBeenReported_ProvidePosit.h"

/* ProvidePositionReport_Pkg::BG_hasBeenReported */
void BG_hasBeenReported_ProvidePosit(
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::reportedBGs */ ReportedBGList_T_ProvidePositio *reportedBGs,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::nidBg */ NID_BG nidBg,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::location */ OdometryLocations_T_Obu_BasicTy *location,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::updatedBGs */ ReportedBGList_T_ProvidePositio *updatedBGs)
{
  /* ProvidePositionReport_Pkg::BG_hasBeenReported */
  static kcg_bool acc;
  static kcg_int i;
  
  *found = kcg_false;
  for (i = 0; i < 8; i++) {
    acc = *found;
    /* 3 */
    UpdateReportedBG_ProvidePositio(
      acc,
      &(*reportedBGs)[i],
      nidBg,
      location,
      found,
      &(*updatedBGs)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BG_hasBeenReported_ProvidePosit.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

