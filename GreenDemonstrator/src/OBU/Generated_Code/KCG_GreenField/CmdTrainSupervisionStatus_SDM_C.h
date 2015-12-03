/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */
#ifndef _CmdTrainSupervisionStatus_SDM_
#define _CmdTrainSupervisionStatus_SDM_

#include "kcg_types.h"
#include "CalcRevokationCondForTSM_SDM_Co.h"
#include "CalcTriggerCondForTSM_SDM_Comma.h"
#include "CalcRSMandPreindicationLocation.h"
#include "CommandTripBraking_SDM_Commands.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SupervisionStatus_T_SDM_Types_P /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::supVisStatus */ supVisStatus;
  SDM_Types_T_SDM_Types_Pkg /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */ sdmType;
  SupervisionStatus_T_SDM_Types_P /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */ revokedSupervisionStatus;
  SupervisionStatus_T_SDM_Types_P /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */ triggeredSupervisionStatus;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */ revokedSB;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */ triggeredSB;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */ revokedEB;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */ triggeredEB;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */ revokedTCO;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */ triggeredTCO;
  EB_command_T_SDM_Commands_Pkg /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::ebCmd */ ebCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_CSM_modeInterplay_CSM /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */ CSM_state_nxt_modeInterplay_CSM;
  SSM_ST_SM4_modeInterplay_TSM /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */ SM4_state_nxt_modeInterplay_TSM;
  SSM_ST_RSM_modeInterplay_RSM /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */ RSM_state_nxt_modeInterplay_RSM;
  SSM_ST_modeInterplay /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */ modeInterplay_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CmdTrainSupervisionStatus_;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus */
extern void CmdTrainSupervisionStatus_SDM_C(
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::SupervisedTargetsListUpdated */ kcg_bool SupervisedTargetsListUpdated,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::TrainData_int */ trainData_internal_t_SDM_Types_ *TrainData_int,
  outC_CmdTrainSupervisionStatus_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CmdTrainSupervisionStatus_reset(
  outC_CmdTrainSupervisionStatus_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CmdTrainSupervisionStatus_init_(
  outC_CmdTrainSupervisionStatus_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CmdTrainSupervisionStatus_SDM_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CmdTrainSupervisionStatus_SDM_C.h
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */

