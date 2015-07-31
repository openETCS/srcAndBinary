/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AddBGToFIFO_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AddBGToFIFO */
void AddBGToFIFO_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AddBGToFIFO::reportedBGs */ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::AddBGToFIFO::reportIsSent */kcg_bool reportIsSent,
  /* ProvidePositionReport_Pkg::AddBGToFIFO::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::AddBGToFIFO::out_reportedBGs */array__78221 *out_reportedBGs)
{
  if (reportIsSent) {
    (*out_reportedBGs)[0].valid = reportIsSent;
    (*out_reportedBGs)[0].nidBG = (*posBGs)[7].nid_bg;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &(*out_reportedBGs)[0].location,
      &(*posBGs)[7].location);
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(
      &(*out_reportedBGs)[1],
      &(*reportedBGs)[0]);
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(
      &(*out_reportedBGs)[2],
      &(*reportedBGs)[1]);
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(
      &(*out_reportedBGs)[3],
      &(*reportedBGs)[2]);
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(
      &(*out_reportedBGs)[4],
      &(*reportedBGs)[3]);
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(
      &(*out_reportedBGs)[5],
      &(*reportedBGs)[4]);
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(
      &(*out_reportedBGs)[6],
      &(*reportedBGs)[5]);
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(
      &(*out_reportedBGs)[7],
      &(*reportedBGs)[6]);
  }
  else {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
      out_reportedBGs,
      reportedBGs);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** AddBGToFIFO_ProvidePositionReport_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

