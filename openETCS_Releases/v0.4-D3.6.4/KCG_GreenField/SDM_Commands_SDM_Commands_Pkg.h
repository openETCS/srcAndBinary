/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _SDM_Commands_SDM_Commands_Pkg_
#define _SDM_Commands_SDM_Commands_Pkg_

#include "kcg_types.h"
#include "CalcDriverOutput_SDM_Commands_P.h"
#include "CalcModeTransOutput_SDM_Command.h"
#include "CmdTrainSupervisionStatus_SDM_C.h"
#include "MergeMLRequests_SDM_Commands_Pk.h"
#include "CalcDMI_output_SDM_Commands_Pkg.h"
#include "CalcBrakeCmd_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  speedSupervisionForDMI_T_DMI_Ty /* SDM_Commands_Pkg::SDM_Commands::sdmToDMI */ sdmToDMI;
  SDM_Commands_T_SDM_Types_Pkg /* SDM_Commands_Pkg::SDM_Commands::sdmCmd */ sdmCmd;
  kcg_bool /* SDM_Commands_Pkg::SDM_Commands::targetSpeedReached */ targetSpeedReached;
  kcg_bool /* SDM_Commands_Pkg::SDM_Commands::eoaOverpassed */ eoaOverpassed;
  Brake_command_T_TIU_Types_Pkg /* SDM_Commands_Pkg::SDM_Commands::brakeCmd */ brakeCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalcBrakeCmd_SDM_Commands_ /* 1 */ _2_Context_1;
  outC_CalcDMI_output_SDM_Command /* 1 */ _1_Context_1;
  outC_MergeMLRequests_SDM_Comman /* 4 */ Context_4;
  outC_MergeMLRequests_SDM_Comman /* 2 */ Context_2;
  outC_CmdTrainSupervisionStatus_ /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_SDM_Commands_SDM_Commands_;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::SDM_Commands */
extern void SDM_Commands_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::SDM_Commands::allTargets */ TargetCollection_T_TargetManage *allTargets,
  /* SDM_Commands_Pkg::SDM_Commands::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::SDM_Commands::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::SDM_Commands::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::SDM_Commands::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::SDM_Commands::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::SDM_Commands::MLrequestSB */ kcg_bool MLrequestSB,
  /* SDM_Commands_Pkg::SDM_Commands::MLrequestEB */ kcg_bool MLrequestEB,
  /* SDM_Commands_Pkg::SDM_Commands::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SDM_Commands_Pkg::SDM_Commands::TrainData_int */ trainData_internal_t_SDM_Types_ *TrainData_int,
  outC_SDM_Commands_SDM_Commands_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SDM_Commands_reset_SDM_Commands(
  outC_SDM_Commands_SDM_Commands_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SDM_Commands_init_SDM_Commands_(
  outC_SDM_Commands_SDM_Commands_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SDM_Commands_SDM_Commands_Pkg_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SDM_Commands_SDM_Commands_Pkg.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */

