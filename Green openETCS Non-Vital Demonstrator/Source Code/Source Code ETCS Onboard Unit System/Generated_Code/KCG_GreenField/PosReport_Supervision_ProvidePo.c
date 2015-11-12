/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosReport_Supervision_ProvidePo.h"

#ifndef KCG_USER_DEFINED_INIT
void PosReport_Supervision_init_Prov(outC_PosReport_Supervision_Prov *outC)
{
  outC->trigger = kcg_true;
  outC->_L52 = kcg_true;
  outC->init = kcg_true;
  /* 1 */ Supervise_Events_init_ProvidePo(&outC->Context_1);
  /* Supervise_PosRepParam */
  Supervise_PosRepParam_init_Prov(&outC->Context_Supervise_PosRepParam);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PosReport_Supervision_reset_Pro(outC_PosReport_Supervision_Prov *outC)
{
  outC->init = kcg_true;
  /* 1 */ Supervise_Events_reset_ProvideP(&outC->Context_1);
  /* Supervise_PosRepParam */
  Supervise_PosRepParam_reset_Pro(&outC->Context_Supervise_PosRepParam);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::PosReport_Supervision */
void PosReport_Supervision_ProvidePo(
  /* ProvidePositionReport_Pkg::PosReport_Supervision::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::posRepParam */ P58_PositionReportParameters_T_ *posRepParam,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::systemTime */ SystemTime_T_ProvidePositionRep systemTime,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::rbcComm */ RBC_Communication_T_ProvidePosi *rbcComm,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::trackInfo */ LocationBasedEvents_T_ProvidePo *trackInfo,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  outC_PosReport_Supervision_Prov *outC)
{
  /* ck__L81 */ if ((*posRepParam).valid) {
    /* Supervise_PosRepParam */
    Supervise_PosRepParam_ProvidePo(
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
  Supervise_Events_ProvidePositio(
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

/* $**************** KCG Version 6.4 (build i21) ****************
** PosReport_Supervision_ProvidePo.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

