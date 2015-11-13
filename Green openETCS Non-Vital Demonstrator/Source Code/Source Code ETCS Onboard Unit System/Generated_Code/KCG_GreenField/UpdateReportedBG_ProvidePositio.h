/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _UpdateReportedBG_ProvidePositi
#define _UpdateReportedBG_ProvidePositi

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::UpdateReportedBG */
extern void UpdateReportedBG_ProvidePositio(
  /* ProvidePositionReport_Pkg::UpdateReportedBG::foldedFound */ kcg_bool foldedFound,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::reportedBG */ ReportedBG_T_ProvidePositionRep *reportedBG,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::BG_IDToCheck */ NID_BG BG_IDToCheck,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::location */ OdometryLocations_T_Obu_BasicTy *location,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::out_reportedBG */ ReportedBG_T_ProvidePositionRep *out_reportedBG);

#endif /* _UpdateReportedBG_ProvidePositi */
/* $**************** KCG Version 6.4 (build i21) ****************
** UpdateReportedBG_ProvidePositio.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

