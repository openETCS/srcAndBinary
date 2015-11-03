/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _BG_hasBeenReported_ProvidePosi
#define _BG_hasBeenReported_ProvidePosi

#include "kcg_types.h"
#include "UpdateReportedBG_ProvidePositio.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::BG_hasBeenReported */
extern void BG_hasBeenReported_ProvidePosit(
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::reportedBGs */ ReportedBGList_T_ProvidePositio *reportedBGs,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::nidBg */ NID_BG nidBg,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::location */ OdometryLocations_T_Obu_BasicTy *location,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::updatedBGs */ ReportedBGList_T_ProvidePositio *updatedBGs);

#endif /* _BG_hasBeenReported_ProvidePosi */
/* $**************** KCG Version 6.4 (build i21) ****************
** BG_hasBeenReported_ProvidePosit.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */

