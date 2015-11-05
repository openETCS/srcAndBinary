/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AddBGToFIFO_ProvidePositionRepo.h"

/* ProvidePositionReport_Pkg::AddBGToFIFO */
void AddBGToFIFO_ProvidePositionRepo(
  /* ProvidePositionReport_Pkg::AddBGToFIFO::reportedBGs */ ReportedBGList_T_ProvidePositio *reportedBGs,
  /* ProvidePositionReport_Pkg::AddBGToFIFO::reportIsSent */ kcg_bool reportIsSent,
  /* ProvidePositionReport_Pkg::AddBGToFIFO::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::AddBGToFIFO::out_reportedBGs */ ReportedBGList_T_ProvidePositio *out_reportedBGs)
{
  /* 1 */ if (reportIsSent) {
    (*out_reportedBGs)[0].valid = reportIsSent;
    (*out_reportedBGs)[0].nidBG = (*trainPos).LRBG.nid_bg;
    kcg_copy_LocWithInAcc_T_Obu_Bas(
      &(*out_reportedBGs)[0].location,
      &(*trainPos).LRBG.location);
    kcg_copy_ReportedBG_T_ProvidePo(&(*out_reportedBGs)[1], &(*reportedBGs)[0]);
    kcg_copy_ReportedBG_T_ProvidePo(&(*out_reportedBGs)[2], &(*reportedBGs)[1]);
    kcg_copy_ReportedBG_T_ProvidePo(&(*out_reportedBGs)[3], &(*reportedBGs)[2]);
    kcg_copy_ReportedBG_T_ProvidePo(&(*out_reportedBGs)[4], &(*reportedBGs)[3]);
    kcg_copy_ReportedBG_T_ProvidePo(&(*out_reportedBGs)[5], &(*reportedBGs)[4]);
    kcg_copy_ReportedBG_T_ProvidePo(&(*out_reportedBGs)[6], &(*reportedBGs)[5]);
    kcg_copy_ReportedBG_T_ProvidePo(&(*out_reportedBGs)[7], &(*reportedBGs)[6]);
  }
  else {
    kcg_copy_ReportedBGList_T_Provi(out_reportedBGs, reportedBGs);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AddBGToFIFO_ProvidePositionRepo.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

