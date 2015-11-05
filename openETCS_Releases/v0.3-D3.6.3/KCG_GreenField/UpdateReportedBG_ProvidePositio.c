/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UpdateReportedBG_ProvidePositio.h"

/* ProvidePositionReport_Pkg::UpdateReportedBG */
void UpdateReportedBG_ProvidePositio(
  /* ProvidePositionReport_Pkg::UpdateReportedBG::foldedFound */ kcg_bool foldedFound,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::reportedBG */ ReportedBG_T_ProvidePositionRep *reportedBG,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::BG_IDToCheck */ NID_BG BG_IDToCheck,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::location */ OdometryLocations_T_Obu_BasicTy *location,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::out_reportedBG */ ReportedBG_T_ProvidePositionRep *out_reportedBG)
{
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L10 */
  static kcg_bool _L10;
  
  _L10 = (*reportedBG).nidBG == BG_IDToCheck;
  /* 1 */ if (_L10) {
    (*out_reportedBG).valid = kcg_true;
    (*out_reportedBG).nidBG = BG_IDToCheck;
    (*out_reportedBG).location.nominal = (*location).o_nominal;
    (*out_reportedBG).location.d_min = (*location).o_min;
    (*out_reportedBG).location.d_max = (*location).o_max;
  }
  else {
    kcg_copy_ReportedBG_T_ProvidePo(out_reportedBG, reportedBG);
  }
  *found = foldedFound | _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** UpdateReportedBG_ProvidePositio.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

