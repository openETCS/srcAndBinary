/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosReport_Supervision_ProvidePositionReport_Pkg.h"

void PosReport_Supervision_reset_ProvidePositionReport_Pkg(
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ Supervise_Events_reset_ProvidePositionReport_Pkg(&outC->Context_1);
  /* Supervise_PosRepParam */
  Supervise_PosRepParam_reset_ProvidePositionReport_Pkg(
    &outC->Context_Supervise_PosRepParam);
}

/* ProvidePositionReport_Pkg::PosReport_Supervision */
void PosReport_Supervision_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::PosReport_Supervision::present */kcg_bool present,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::posRepParam */P58_PositionReportParameters_T_Packet_Types_Pkg *posRepParam,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::systemTime */SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::rbcComm */RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::trackInfo */LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::train2trackStatus */TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::modeLevelStatus */ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC)
{
  if ((*posRepParam).valid) {
    /* Supervise_PosRepParam */
    Supervise_PosRepParam_ProvidePositionReport_Pkg(
      posRepParam,
      present,
      systemTime,
      trainPos,
      posBGs,
      &outC->Context_Supervise_PosRepParam);
    outC->_L52 = outC->Context_Supervise_PosRepParam.trigger;
  }
  else if (outC->init) {
    outC->_L52 = kcg_false;
  }
  outC->init = kcg_false;
  /* 1 */
  Supervise_Events_ProvidePositionReport_Pkg(
    posBGs,
    trainPos,
    modeLevelStatus,
    odometry,
    train2trackStatus,
    rbcComm,
    trackInfo,
    &outC->Context_1);
  outC->trigger = outC->_L52 | outC->Context_1.result;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosReport_Supervision_ProvidePositionReport_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

